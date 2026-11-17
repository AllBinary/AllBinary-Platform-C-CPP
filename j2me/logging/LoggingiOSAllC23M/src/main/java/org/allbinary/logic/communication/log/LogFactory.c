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
#include "org/allbinary/logic/string/StringUtil.h"

//ActualPlatform
typedef struct LogFactory LogFactory;
struct LogFactory {
    char unused;
};


LogFactory* LogFactory_new(void);
Log* LogFactory_getInstanceNoF(const char* specialMessage, Any* anyType, Any* exception);
Log* LogFactory_getInstance(const char* specialMessage, Any* anyType, const char* functionName, Any* exception);
Log* LogFactory_getInstanceF(const char* specialMessage, Any* anyType, const char* functionName);

void LogFactory_init(LogFactory* this) {
}

LogFactory* LogFactory_new(void) {
    LogFactory* this = calloc(1, sizeof(LogFactory));
    LogFactory_init(this);
    return this;
}


Log* LogFactory_getInstanceNoF(const char* specialMessage, Any* anyType, Any* exception) {
        return Log_new(specialMessage, anyType, StringUtil_getInstance()->EMPTY_STRING, exception);
}


Log* LogFactory_getInstance(const char* specialMessage, Any* anyType, const char* functionName, Any* exception) {
        return Log_new(specialMessage, anyType, functionName, exception);
}


Log* LogFactory_getInstanceF(const char* specialMessage, Any* anyType, const char* functionName) {
        return Log_new(specialMessage, anyType, functionName, NullUtil_getInstance()->NULL_OBJECT);
}

