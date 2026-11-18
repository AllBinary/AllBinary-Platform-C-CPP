#ifndef ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H
#define ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H
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
typedef struct ThreadPool ThreadPool;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "java/lang/System.h"
#include "java/lang/Runnable.h"
#include "org/allbinary/thread/ThreadPool.h"

typedef struct PrimaryThreadPool PrimaryThreadPool;
struct PrimaryThreadPool {
    ThreadPool base;
};


PrimaryThreadPool* PrimaryThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

ThreadPool* PrimaryThreadPool_getInstance(void);

void PrimaryThreadPool_init(PrimaryThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);

void PrimaryThreadPool_runTask(PrimaryThreadPool* this, Runnable* task);

void PrimaryThreadPool_startTask(PrimaryThreadPool* this, Runnable* task);

void PrimaryThreadPool_completedTask(PrimaryThreadPool* this, Runnable* task);
#define PrimaryThreadPool_new3 PrimaryThreadPool_new
#define PrimaryThreadPool_init3 PrimaryThreadPool_init
#ifndef PrimaryThreadPool_runAPriorityTask
#define PrimaryThreadPool_runAPriorityTask ThreadPool_runAPriorityTask
#endif
#ifndef PrimaryThreadPool_runTaskWithPriority
#define PrimaryThreadPool_runTaskWithPriority ThreadPool_runTaskWithPriority
#endif
#ifndef PrimaryThreadPool_getTask
#define PrimaryThreadPool_getTask ThreadPool_getTask
#endif
#ifndef PrimaryThreadPool_clear
#define PrimaryThreadPool_clear ThreadPool_clear
#endif
#ifndef PrimaryThreadPool_close
#define PrimaryThreadPool_close ThreadPool_close
#endif
#ifndef PrimaryThreadPool_join
#define PrimaryThreadPool_join ThreadPool_join
#endif
#ifndef PrimaryThreadPool_isBusy
#define PrimaryThreadPool_isBusy ThreadPool_isBusy
#endif
#ifndef PrimaryThreadPool_threadStarted
#define PrimaryThreadPool_threadStarted ThreadPool_threadStarted
#endif
#ifndef PrimaryThreadPool_threadStopped
#define PrimaryThreadPool_threadStopped ThreadPool_threadStopped
#endif
#ifndef PrimaryThreadPool_createName
#define PrimaryThreadPool_createName ThreadPool_createName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PrimaryThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PrimaryThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_PRIMARYTHREADPOOL_H
