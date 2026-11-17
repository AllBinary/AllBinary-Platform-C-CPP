/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *   
 */
// Generated Code Do Not Modify
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
#include "org/apache/xmlrpc/XmlRpcException.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/canvas/SpecialMessageUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"

//ActualPlatform
typedef struct LogUtil LogUtil;
struct LogUtil {
    const char* MESSAGE;
    bool isFirstException;
    TimeDelayHelper* timeDelayHelper;
    AbeClientInformationInterface* abeClientInformation;
    StringMaker* stringBuffer;
};

static LogUtil* LogUtil_instance;

LogUtil* LogUtil_new(void);
LogUtil* LogUtil_getInstance(void);

void LogUtil_init(LogUtil* this);
void LogUtil_putL(LogUtil* this, Log* log);
void LogUtil_putF(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName);
void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName);
void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception);

// Static fields with runtime initializers: call this once at startup
void LogUtil_staticInit(void) {
    LogUtil_instance = LogUtil_new();
}

static void LogUtil_initFields(LogUtil* this) {
    this->MESSAGE = "message";
    this->isFirstException = true;
    this->timeDelayHelper = TimeDelayHelper_new(200000);
    this->abeClientInformation = nullptr;
    this->stringBuffer = StringMaker_new();
}


LogUtil* LogUtil_getInstance(void) {
        return LogUtil_instance;
}


void LogUtil_init(LogUtil* this) {
    LogUtil_initFields(this);
}

LogUtil* LogUtil_new(void) {
    LogUtil* this = calloc(1, sizeof(LogUtil));
    LogUtil_init(this);
    return this;
}


void LogUtil_putL(LogUtil* this, Log* log) {
        if (log == nullptr) {
            return;
        }
        const char* specialMessage = Log_getSpecialMessage(log);
        Any* anyType = Log_getObject(log);
        const char* functionName = Log_getFunctionName(log);
        Any* exception = Log_getThrowable(log);
        LogUtil_put(this, specialMessage, anyType, functionName, exception);
}


void LogUtil_putF(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName) {
}


void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName) {
}


void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        if (exception != nullptr) {
            if (JAVA_CALL(java_class_of(exception), compareTo, JAVA_CALL("XmlRpcException", getName)) == 0) {
                return;
            }
            if (JAVA_CALL(java_class_of(exception), compareTo, JAVA_CALL("IOException", getName)) == 0) {
                return;
            }
            if (this->isFirstException || TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
                const char* className = CommonStrings_getInstance()->EMPTY;
                this->isFirstException = false;
                if (anyType != nullptr && java_class_of(anyType) != nullptr) {
                    className = java_string_new(java_class_of(anyType));
                }
                const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
                JAVA_TRY {
                    puts(java_string_of("Eeeek"));
                    if (this->abeClientInformation == nullptr) {
                        java_throw(java_exception_new("RuntimeException", ""));
                    }
                    ABHashtable* hashtable = AbeClientInformationInterface_toHashtable(this->abeClientInformation);
                    StringMaker_delete(this->stringBuffer, 0, StringMaker_length(this->stringBuffer));
                    StringMaker_append(this->stringBuffer, message);
                    StringMaker_append(this->stringBuffer, CommonSeps_getInstance()->SPACE);
                    StringMaker_append(this->stringBuffer, SpecialMessageUtil_get(SpecialMessageUtil_getInstance()));
                    ABHashtable_put(hashtable, this->MESSAGE, StringMaker_toString(this->stringBuffer));
                    XmlRpcRemoteLogClient_get(XmlRpcRemoteLogClient_new(this->abeClientInformation), hashtable);
                } JAVA_CATCH(Throwable, e) {
                    puts(java_string_of("Exception"));
                    java_print_exception(e);
                } JAVA_END_TRY;
            }
        }
}

