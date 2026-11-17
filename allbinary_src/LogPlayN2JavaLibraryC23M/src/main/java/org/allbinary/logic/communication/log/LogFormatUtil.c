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
#include "org/allbinary/time/TimeStampUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#include "org/allbinary/string/CommonLabels.h"

//ActualPlatform
typedef struct LogFormatUtil LogFormatUtil;
struct LogFormatUtil {
    TimeStampUtil* timeStampUtil;
    CommonSeps* commonSeps;
    const char* LOG_ERROR;
    const char* EMPTY;
    const char* STACK_TRACE;
    const char* TIME;
    const char* CLASS_NAME;
    const char* FUNCTION_CALL;
    const char* SPECIAL_MESSAGE;
    StringUtil* stringUtil;
    JavaException* exceptionUtil;
    NullUtil* nullUtil;
};

static LogFormatUtil* LogFormatUtil_instance;

LogFormatUtil* LogFormatUtil_new(void);
LogFormatUtil* LogFormatUtil_getInstance(void);

void LogFormatUtil_init(LogFormatUtil* this);
const char* LogFormatUtil_get(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage, Any* exception);
const char* LogFormatUtil_getS(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage);
static StringMaker* LogFormatUtil_getF(LogFormatUtil* this, const char* className, const char* functionName);
const char* LogFormatUtil_getO(LogFormatUtil* this, Any* exception);

// Static fields with runtime initializers: call this once at startup
void LogFormatUtil_staticInit(void) {
    LogFormatUtil_instance = LogFormatUtil_new();
}

static void LogFormatUtil_initFields(LogFormatUtil* this) {
    this->timeStampUtil = TimeStampUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->LOG_ERROR = "\nLog-Error: ";
    this->EMPTY = "Empty";
    this->STACK_TRACE = "\nStack Trace: ";
    this->TIME = "Time: ";
    this->CLASS_NAME = this->commonSeps->SPACE;
    this->FUNCTION_CALL = CommonLabels_getInstance()->COLON_SEP;
    this->SPECIAL_MESSAGE = "> ";
    this->stringUtil = StringUtil_getInstance();
    this->exceptionUtil = ExceptionUtil_getInstance();
    this->nullUtil = NullUtil_getInstance();
}


LogFormatUtil* LogFormatUtil_getInstance(void) {
        return LogFormatUtil_instance;
}


void LogFormatUtil_init(LogFormatUtil* this) {
    LogFormatUtil_initFields(this);
}

LogFormatUtil* LogFormatUtil_new(void) {
    LogFormatUtil* this = calloc(1, sizeof(LogFormatUtil));
    LogFormatUtil_init(this);
    return this;
}


const char* LogFormatUtil_get(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage, Any* exception) {
        StringMaker* stringBuffer = LogFormatUtil_getF(this, className, functionName);
        StringMaker_append(stringBuffer, LogFormatUtil_getO(this, exception));
        StringMaker_append(stringBuffer, this->SPECIAL_MESSAGE);
        StringMaker_append(stringBuffer, specialMessage);
        StringMaker_append(stringBuffer, this->commonSeps->NEW_LINE);
        return StringMaker_toString(stringBuffer);
}


const char* LogFormatUtil_getS(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage) {
        StringMaker* stringBuffer = LogFormatUtil_getF(this, className, functionName);
        StringMaker_append(stringBuffer, this->SPECIAL_MESSAGE);
        StringMaker_append(stringBuffer, specialMessage);
        StringMaker_append(stringBuffer, this->commonSeps->NEW_LINE);
        return StringMaker_toString(stringBuffer);
}


static StringMaker* LogFormatUtil_getF(LogFormatUtil* this, const char* className, const char* functionName) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->TIME);
        StringMaker_append(stringBuffer, TimeStampUtil_getAsString(this->timeStampUtil));
        StringMaker_append(stringBuffer, this->CLASS_NAME);
        StringMaker_append(stringBuffer, className);
        StringMaker_append(stringBuffer, this->FUNCTION_CALL);
        StringMaker_append(stringBuffer, functionName);
        return stringBuffer;
}


const char* LogFormatUtil_getO(LogFormatUtil* this, Any* exception) {
        if (exception != this->nullUtil->NULL_OBJECT) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->LOG_ERROR);
            const char* exceptionAsString = Any_toString(exception);
            if (exceptionAsString != nullptr) {
                StringMaker_append(stringBuffer, exceptionAsString);
            } else {
                StringMaker_append(stringBuffer, this->EMPTY);
            }
            StringMaker_append(stringBuffer, this->STACK_TRACE);
            if (exception != this->nullUtil->NULL_OBJECT) {
                StringMaker_append(stringBuffer, ExceptionUtil_getStackTrace(this->exceptionUtil, ((JavaException*) exception)));
            } else {
                StringMaker_append(stringBuffer, this->stringUtil->NULL_STRING);
            }
            return StringMaker_toString(stringBuffer);
        } else {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
}

