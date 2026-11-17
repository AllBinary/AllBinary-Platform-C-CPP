#ifndef ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
#define ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct ThreadObjectUtil ThreadObjectUtil;
typedef struct ThreadPool ThreadPool;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

typedef struct PooledThread PooledThread;
struct PooledThread {
    Thread base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ThreadObjectUtil* threadObjectUtil;
    ThreadPool* threadPool;
    const char* INTERRUPT_EXCEPTION;
};


PooledThread* PooledThread_new(ThreadPool* threadPool);

void PooledThread_init(PooledThread* this, ThreadPool* threadPool);

void PooledThread_run(PooledThread* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PooledThread_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PooledThread_register(void);


#endif // ORG_ALLBINARY_THREAD_POOLEDTHREAD_H
