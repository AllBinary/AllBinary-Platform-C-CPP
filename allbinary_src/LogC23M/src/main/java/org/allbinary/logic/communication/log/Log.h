#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
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
typedef struct CommonStrings CommonStrings;
typedef struct LogFormatUtil LogFormatUtil;
#if __has_include("org/allbinary/logic/communication/log/LogFormatUtil.h")
#include "org/allbinary/logic/communication/log/LogFormatUtil.h"
#endif

typedef struct Log Log;
struct Log {
    LogFormatUtil* logFormatUtil;
    const char* specialMessage;
    void* anyType;
    const char* functionName;
    void* exception;
};


Log* Log_new(const char* specialMessage, void* anyType, const char* functionName, void* exception);

void Log_init(Log* this, const char* specialMessage, void* anyType, const char* functionName, void* exception);

const char* Log_getSpecialMessage(Log* this);

void* Log_getObject(Log* this);

const char* Log_getFunctionName(Log* this);

void* Log_getThrowable(Log* this);

const char* Log_toString(Log* this);
#define Log_new4 Log_new
#define Log_init4 Log_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Log_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Log_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOG_H
