#ifndef ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H
#define ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H
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
typedef struct ABRunnable ABRunnable;
typedef struct PrimaryThreadPool PrimaryThreadPool;
typedef struct ThreadPool ThreadPool;
typedef struct J2MEUtil J2MEUtil;
typedef struct RunnableCanvas RunnableCanvas;
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct DemoCanvas DemoCanvas;
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct RunnableCanvasSingleThreadStartRunnable RunnableCanvasSingleThreadStartRunnable;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"

typedef struct ThreadFactoryUtil ThreadFactoryUtil;
struct ThreadFactoryUtil {
    LogUtil* logUtil;
};


ThreadFactoryUtil* ThreadFactoryUtil_new(void);
void ThreadFactoryUtil_init(ThreadFactoryUtil* this);

ThreadFactoryUtil* ThreadFactoryUtil_getInstance(void);

Thread* ThreadFactoryUtil_getInstanceGameCanvasRunnable(ThreadFactoryUtil* this, GameCanvasRunnableInterface* runnable);

Thread* ThreadFactoryUtil_getInstanceForRunnable(ThreadFactoryUtil* this, ABRunnable* runnable);


void ThreadFactoryUtil_start(ThreadFactoryUtil* this, Thread* thread);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThreadFactoryUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThreadFactoryUtil_register(void);


#endif // ORG_ALLBINARY_THREAD_THREADFACTORYUTIL_H
