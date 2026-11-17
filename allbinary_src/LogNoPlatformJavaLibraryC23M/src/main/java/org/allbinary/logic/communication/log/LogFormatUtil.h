#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
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
// #include "org/allbinary/logic/NullUtil.h"
// #include "org/allbinary/logic/java/exception/ExceptionUtil.h"
// #include "org/allbinary/logic/string/StringMaker.h"
// #include "org/allbinary/logic/string/StringUtil.h"
// #include "org/allbinary/string/CommonLabels.h"
// #include "org/allbinary/string/CommonSeps.h"
// #include "org/allbinary/time/TimeStampUtil.h"

//NoPlatform
typedef struct LogFormatUtil LogFormatUtil;
struct LogFormatUtil {
    char unused;
};


LogFormatUtil* LogFormatUtil_new(void);

LogFormatUtil* LogFormatUtil_getInstance(void);

void LogFormatUtil_init(LogFormatUtil* this);

const char* LogFormatUtil_get(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage, void* exception);

const char* LogFormatUtil_getS(LogFormatUtil* this, const char* className, const char* functionName, const char* specialMessage);

const char* LogFormatUtil_getO(LogFormatUtil* this, void* exception);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LogFormatUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LogFormatUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_LOGFORMATUTIL_H
