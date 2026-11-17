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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

//ActualPlatform
typedef struct LogUtil LogUtil;
struct LogUtil {
    CommonSeps* commonSeps;
    LogFormatUtil* logFormatUtil;
    const char* LABEL;
};

static LogUtil* LogUtil_instance;

LogUtil* LogUtil_new(void);
LogUtil* LogUtil_getInstance(void);

void LogUtil_init(LogUtil* this);
void LogUtil_putL(LogUtil* this, Log* log);
void LogUtil_putF(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName);
void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* string, const char* functionName);
void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception);
void LogUtil_putS(LogUtil* this, const char* specialMessage, const char* string, const char* functionName, Any* exception);

// Static fields with runtime initializers: call this once at startup
void LogUtil_staticInit(void) {
    LogUtil_instance = LogUtil_new();
}

static void LogUtil_initFields(LogUtil* this) {
    this->commonSeps = CommonSeps_getInstance();
    this->logFormatUtil = LogFormatUtil_getInstance();
    this->LABEL = "org.allbinary";
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
        LogUtil_put(this, specialMessage, anyType, functionName, NullUtil_getInstance()->NULL_OBJECT);
}


void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* string, const char* functionName) {
        LogUtil_putS(this, specialMessage, string, functionName, NullUtil_getInstance()->NULL_OBJECT);
}


void LogUtil_put(LogUtil* this, const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        const char* className = this->LABEL;
        className = java_string_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_class_of(anyType)), append, this->commonSeps->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), anyType))), toString));
        const char* message = LogFormatUtil_get(this->logFormatUtil, className, functionName, specialMessage, exception);
        JAVA_CALL(android_util->Log, i, this->LABEL, message);
}


void LogUtil_putS(LogUtil* this, const char* specialMessage, const char* string, const char* functionName, Any* exception) {
        const char* className = this->LABEL;
        className = java_string_new(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), string), append, this->commonSeps->COLON), append, Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), string))), toString));
        const char* message = LogFormatUtil_get(this->logFormatUtil, className, functionName, specialMessage, exception);
        JAVA_CALL(android_util->Log, i, this->LABEL, message);
}

