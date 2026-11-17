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
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"

//ActualPlatform
typedef struct PreLogUtil PreLogUtil;
struct PreLogUtil {
    char unused;
};

static const char* PreLogUtil_LABEL = "org.allbinary";

PreLogUtil* PreLogUtil_new(void);

void PreLogUtil_init(PreLogUtil* this);
void PreLogUtil_put(const char* specialMessage, Any* anyType, const char* functionName);
void PreLogUtil_putOE(const char* specialMessage, Any* anyType, const char* functionName, Any* exception);
void PreLogUtil_putS(const char* specialMessage, const char* className, const char* functionName);
void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, Any* exception);


void PreLogUtil_init(PreLogUtil* this) {
}

PreLogUtil* PreLogUtil_new(void) {
    PreLogUtil* this = calloc(1, sizeof(PreLogUtil));
    PreLogUtil_init(this);
    return this;
}


void PreLogUtil_put(const char* specialMessage, Any* anyType, const char* functionName) {
        PreLogUtil_putOE(specialMessage, anyType, functionName, NullUtil_getInstance()->NULL_OBJECT);
}


void PreLogUtil_putOE(const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        const char* className = PreLogUtil_LABEL;
        const char* actualClassName = java_class_of(anyType);
        if (actualClassName != nullptr) {
            className = actualClassName;
        }
        const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
        JAVA_CALL(android_util->Log, i, PreLogUtil_LABEL, message);
}


void PreLogUtil_putS(const char* specialMessage, const char* className, const char* functionName) {
        PreLogUtil_putSE(specialMessage, className, functionName, NullUtil_getInstance()->NULL_OBJECT);
}


void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, Any* exception) {
        const char* message = LogFormatUtil_get(LogFormatUtil_getInstance(), className, functionName, specialMessage, exception);
        JAVA_CALL(android_util->Log, i, className, message);
}

