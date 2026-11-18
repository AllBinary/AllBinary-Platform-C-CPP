#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
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
typedef struct Log Log;
typedef struct TsUtil TsUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#include "java/lang/System.h"
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif

//ActualPlatform
typedef struct LogUtil LogUtil;
struct LogUtil {
    LogFormatUtil* logFormatUtil;
    const char* LOG_SUCCESS;
};


LogUtil* LogUtil_new(void);

LogUtil* LogUtil_getInstance(void);

void LogUtil_init(LogUtil* this);

void LogUtil_putL(LogUtil* this, Log* log);

void LogUtil_putF(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName);

void LogUtil_putFS(LogUtil* this, const char* specialMessage, const char* className, const char* functionName);

void LogUtil_put(LogUtil* this, const char* specialMessage, void* anyType, const char* functionName, void* exception);
#define LogUtil_new0 LogUtil_new
#define LogUtil_init0 LogUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LogUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LogUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGUTIL_H
