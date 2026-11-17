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
#include "org/allbinary/logic/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

//ActualPlatform
typedef struct LogUtil LogUtil;
struct LogUtil {
    LogFormatUtil* logFormatUtil;
};

static LogUtil* LogUtil_instance;
static const char* LogUtil_LOG_SUCCESS = "org.allbinary: ";

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
    this->logFormatUtil = LogFormatUtil_getInstance();
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
        const char* specialMessage = Log_getSpecialMessage(log);
        Any* anyType = Log_getObject(log);
        const char* functionName = Log_getFunctionName(log);
        Any* exception = Log_getThrowable(log);
        LogUtil_put(this, specialMessage, anyType, functionName, exception);
}


void LogUtil_putF(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName) {
        const char* className = CommonStrings_getInstance()->EMPTY;
        if (java_class_of(anyType) != nullptr) {
            className = java_string_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_class_of(anyType)), append, CommonSeps_getInstance()->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), anyType))), toString));
        }
        const char* message = LogFormatUtil_getS(this->logFormatUtil, className, functionName, specialMessage);
        fputs(java_string_of(LogUtil_LOG_SUCCESS), stdout);
        puts(java_string_of(message));
}


void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName) {
        className = java_string_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), className), append, CommonSeps_getInstance()->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), this->base.anyType))), toString));
        const char* message = LogFormatUtil_getS(this->logFormatUtil, className, functionName, specialMessage);
        fputs(java_string_of(LogUtil_LOG_SUCCESS), stdout);
        puts(java_string_of(message));
}


void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        const char* className = CommonStrings_getInstance()->EMPTY;
        if (java_class_of(anyType) != nullptr) {
            className = java_string_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_class_of(anyType)), append, CommonSeps_getInstance()->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), anyType))), toString));
        }
        const char* message = LogFormatUtil_get(this->logFormatUtil, className, functionName, specialMessage, exception);
        fputs(java_string_of(LogUtil_LOG_SUCCESS), stdout);
        puts(java_string_of(message));
}

