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
// #include "java/util/logging/Level.h"
#include "org/allbinary/logic/string/StringMaker.h"
// #include "java/util/logging/Logger.h"
#include "org/allbinary/string/CommonStrings.h"

//ActualPlatform
typedef struct LogUtil LogUtil;
struct LogUtil {
    Logger* logger;
    LogFormatUtil* logFormatUtil;
};

static LogUtil* LogUtil_instance;

LogUtil* LogUtil_new(void);
LogUtil* LogUtil_getInstance(void);

void LogUtil_init(LogUtil* this);
void LogUtil_init(LogUtil* this);
void LogUtil_putL(LogUtil* this, Log* log);
void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception);

// Static fields with runtime initializers: call this once at startup
void LogUtil_staticInit(void) {
    LogUtil_instance = LogUtil_new();
}

static void LogUtil_initFields(LogUtil* this) {
    this->logger = Logger_getLogger(JAVA_CALL("LogUtil", getName));
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


void LogUtil_init(LogUtil* this) {
        PreLogUtil_put("Loggin Initialized", this, "init()");
}


void LogUtil_putL(LogUtil* this, Log* log) {
        Any* exception = Log_getThrowable(log);
        JAVA_TRY {
            if (exception != nullptr) {
                const char* specialMessage = Log_getSpecialMessage(log);
                Any* anyType = Log_getObject(log);
                const char* functionName = Log_getFunctionName(log);
                const char* className = CommonStrings_getInstance()->EMPTY;
                const char* clazz = java_class_of(anyType);
                if (Class_getName(clazz) != nullptr) {
                    className = Class_getName(clazz);
                }
                const char* message = LogFormatUtil_get(this->logFormatUtil, className, functionName, specialMessage, exception);
                Logger_log(this->logger, Level_INFO, message);
            }
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}


void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        JAVA_TRY {
            const char* className = CommonStrings_getInstance()->EMPTY;
            const char* clazz = java_class_of(anyType);
            if (Class_getName(clazz) != nullptr) {
                className = Class_getName(clazz);
            }
            const char* message = LogFormatUtil_getS(this->logFormatUtil, className, functionName, specialMessage);
            if (exception != nullptr) {
                Logger_log(this->logger, Level_SEVERE, message, exception);
            } else {
                Logger_log(this->logger, Level_INFO, message);
            }
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

