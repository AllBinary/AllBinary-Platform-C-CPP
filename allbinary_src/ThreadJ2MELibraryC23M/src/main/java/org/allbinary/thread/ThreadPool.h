#ifndef ORG_ALLBINARY_THREAD_THREADPOOL_H
#define ORG_ALLBINARY_THREAD_THREADPOOL_H
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
typedef struct NullRunnable NullRunnable;
typedef struct ThreadPoolStrings ThreadPoolStrings;
typedef struct ThreadObjectUtil ThreadObjectUtil;
typedef struct PooledThread PooledThread;
typedef struct PriorityRunnable PriorityRunnable;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/thread/NullRunnable.h")
#include "org/allbinary/thread/NullRunnable.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPoolStrings.h")
#include "org/allbinary/thread/ThreadPoolStrings.h"
#endif
#if __has_include("org/allbinary/thread/ThreadObjectUtil.h")
#include "org/allbinary/thread/ThreadObjectUtil.h"
#endif

typedef struct ThreadPool ThreadPool;
struct ThreadPool {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    NullRunnable* NULL_RUNNABLE;
    ThreadPoolStrings* threadPoolStrings;
    ThreadObjectUtil* threadObjectUtil;
    const char* poolName;
    int32_t priority;
    bool isAlive;
    BasicArrayList* taskQueue;
    int32_t threadID;
    int32_t numThreads;
    bool runningTask;
};

extern int32_t ThreadPool_NORMAL_PRIORITY;

ThreadPool* ThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

void ThreadPool_init(ThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);

void ThreadPool_initMethod(ThreadPool* this);

void ThreadPool_runAPriorityTask(ThreadPool* this);

void ThreadPool_runTaskWithPriority(ThreadPool* this, PriorityRunnable* task);

void ThreadPool_runTask(ThreadPool* this, Runnable* task);

Runnable* ThreadPool_getTask(ThreadPool* this);

void ThreadPool_clear(ThreadPool* this);

void ThreadPool_close(ThreadPool* this);

void ThreadPool_join(ThreadPool* this);

bool ThreadPool_isBusy(ThreadPool* this);

void ThreadPool_threadStarted(ThreadPool* this);

void ThreadPool_threadStopped(ThreadPool* this);

void ThreadPool_startTask(ThreadPool* this, Runnable* task);

void ThreadPool_completedTask(ThreadPool* this, Runnable* task);

const char* ThreadPool_createName(ThreadPool* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_THREADPOOL_H
