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
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "playn/core/PlayN.h"

//ActualPlatform
typedef struct PreLogUtil PreLogUtil;
struct PreLogUtil {
    char unused;
};

static const char* PreLogUtil_LOG_SUCCESS = "org.allbinary: ";

PreLogUtil* PreLogUtil_new(void);

void PreLogUtil_init(PreLogUtil* this);
void PreLogUtil_put(const char* specialMessage, Any* anyType, const char* functionName);
void PreLogUtil_putOE(const char* specialMessage, Any* anyType, const char* functionName, Any* exception);
void PreLogUtil_putS(const char* specialMessage, const char* className, const char* functionName);
void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, Any* exception);
const char* PreLogUtil_getClassName(Any* anyType);


void PreLogUtil_init(PreLogUtil* this) {
}

PreLogUtil* PreLogUtil_new(void) {
    PreLogUtil* this = calloc(1, sizeof(PreLogUtil));
    PreLogUtil_init(this);
    return this;
}


void PreLogUtil_put(const char* specialMessage, Any* anyType, const char* functionName) {
        const char* className = PreLogUtil_getClassName(anyType);
        if (className == nullptr) {
            className = CommonStrings_getInstance()->EMPTY;
        }
        className = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), className), append, CommonSeps_getInstance()->FORWARD_SLASH), append, StringUtil_toString(StringUtil_getInstance(), anyType)), toString);
        const char* message = LogFormatUtil_getS(LogFormatUtil_getInstance(), className, functionName, specialMessage);
        JAVA_CALL(PlayN_log(), debug, java_concat(java_string_of(PreLogUtil_LOG_SUCCESS), message));
}


void PreLogUtil_putOE(const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        const char* className = PreLogUtil_getClassName(anyType);
        if (className == nullptr) {
            className = CommonStrings_getInstance()->EMPTY;
        }
        className = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), className), append, CommonSeps_getInstance()->FORWARD_SLASH), append, StringUtil_toString(StringUtil_getInstance(), anyType)), toString);
        const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
        JAVA_CALL(PlayN_log(), error, java_concat(java_string_of(PreLogUtil_LOG_SUCCESS), message), ((JavaException*) exception));
}


void PreLogUtil_putS(const char* specialMessage, const char* className, const char* functionName) {
        const char* message = LogFormatUtil_getS(LogFormatUtil_getInstance(), className, functionName, specialMessage);
        JAVA_CALL(PlayN_log(), debug, java_concat(java_string_of(PreLogUtil_LOG_SUCCESS), message));
}


void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, Any* exception) {
        const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
        JAVA_CALL(PlayN_log(), error, java_concat(java_string_of(PreLogUtil_LOG_SUCCESS), message), ((JavaException*) exception));
}


const char* PreLogUtil_getClassName(Any* anyType) {
    java_throw(java_exception_new("AbstractMethodError", "getClassName"));
}

