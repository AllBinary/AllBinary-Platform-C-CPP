#ifndef ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_H
#define ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_H
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
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#include "java/lang/System.h"
#include "java/lang/Runnable.h"
#include "org/allbinary/thread/ThreadPool.h"

//This is mainly for network communications.
typedef struct SecondaryThreadPool SecondaryThreadPool;
struct SecondaryThreadPool {
    ThreadPool base;
};


SecondaryThreadPool* SecondaryThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

ThreadPool* SecondaryThreadPool_getInstance(void);

void SecondaryThreadPool_init(SecondaryThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);

void SecondaryThreadPool_runTask(SecondaryThreadPool* this, Runnable* task);

void SecondaryThreadPool_startTask(SecondaryThreadPool* this, Runnable* task);

void SecondaryThreadPool_completedTask(SecondaryThreadPool* this, Runnable* task);
#define SecondaryThreadPool_new3 SecondaryThreadPool_new
#define SecondaryThreadPool_init3 SecondaryThreadPool_init
#ifndef SecondaryThreadPool_runAPriorityTask
#define SecondaryThreadPool_runAPriorityTask ThreadPool_runAPriorityTask
#endif
#ifndef SecondaryThreadPool_runTaskWithPriority
#define SecondaryThreadPool_runTaskWithPriority ThreadPool_runTaskWithPriority
#endif
#ifndef SecondaryThreadPool_getTask
#define SecondaryThreadPool_getTask ThreadPool_getTask
#endif
#ifndef SecondaryThreadPool_clear
#define SecondaryThreadPool_clear ThreadPool_clear
#endif
#ifndef SecondaryThreadPool_close
#define SecondaryThreadPool_close ThreadPool_close
#endif
#ifndef SecondaryThreadPool_join
#define SecondaryThreadPool_join ThreadPool_join
#endif
#ifndef SecondaryThreadPool_isBusy
#define SecondaryThreadPool_isBusy ThreadPool_isBusy
#endif
#ifndef SecondaryThreadPool_threadStarted
#define SecondaryThreadPool_threadStarted ThreadPool_threadStarted
#endif
#ifndef SecondaryThreadPool_threadStopped
#define SecondaryThreadPool_threadStopped ThreadPool_threadStopped
#endif
#ifndef SecondaryThreadPool_createName
#define SecondaryThreadPool_createName ThreadPool_createName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SecondaryThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SecondaryThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_SECONDARYTHREADPOOL_H
