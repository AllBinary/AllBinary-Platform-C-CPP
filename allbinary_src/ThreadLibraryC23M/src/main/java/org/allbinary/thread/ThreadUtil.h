#ifndef ORG_ALLBINARY_THREAD_THREADUTIL_H
#define ORG_ALLBINARY_THREAD_THREADUTIL_H
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
// package org.allbinary.thread

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Thread.h"

typedef struct ThreadUtil ThreadUtil;
struct ThreadUtil {
    LogUtil* logUtil;
    const char* JOIN;
};


ThreadUtil* ThreadUtil_new(void);
void ThreadUtil_init(ThreadUtil* this);

ThreadUtil* ThreadUtil_getInstance(void);

bool ThreadUtil_isRunning(ThreadUtil* this, Thread* thread);

void ThreadUtil_join(ThreadUtil* this, Thread* thread);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThreadUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThreadUtil_register(void);


#endif // ORG_ALLBINARY_THREAD_THREADUTIL_H
