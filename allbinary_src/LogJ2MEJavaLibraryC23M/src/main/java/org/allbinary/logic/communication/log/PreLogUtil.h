#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
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
typedef struct LogFormatUtil LogFormatUtil;
typedef struct NullUtil NullUtil;
typedef struct CommonStrings CommonStrings;
// #include "org/allbinary/logic/string/StringUtil.h"
#include "java/lang/System.h"

//ActualPlatform
typedef struct PreLogUtil PreLogUtil;
struct PreLogUtil {
    char unused;
};


PreLogUtil* PreLogUtil_new(void);

void PreLogUtil_init(PreLogUtil* this);

void PreLogUtil_put(const char* specialMessage, void* anyType, const char* functionName);

void PreLogUtil_putOE(const char* specialMessage, void* anyType, const char* functionName, void* exception);

void PreLogUtil_putS(const char* specialMessage, const char* className, const char* functionName);

void PreLogUtil_putSE(const char* specialMessage, const char* className, const char* functionName, void* exception);

const char* PreLogUtil_getClassName(void* anyType);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PreLogUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PreLogUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_PRELOGUTIL_H
