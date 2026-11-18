#ifndef ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H
#define ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H
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
typedef struct PriorityRunnable PriorityRunnable;
#include "java/lang/Runnable.h"
#include "org/allbinary/thread/ThreadPool.h"

//This is mainly for network communications.
typedef struct PathFindingThreadPool PathFindingThreadPool;
struct PathFindingThreadPool {
    ThreadPool base;
};


PathFindingThreadPool* PathFindingThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

ThreadPool* PathFindingThreadPool_getInstance(void);

void PathFindingThreadPool_init(PathFindingThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);

void PathFindingThreadPool_runTaskWithPriority(PathFindingThreadPool* this, PriorityRunnable* task);

void PathFindingThreadPool_runTask(PathFindingThreadPool* this, Runnable* task);

void PathFindingThreadPool_startTask(PathFindingThreadPool* this, Runnable* task);

void PathFindingThreadPool_completedTask(PathFindingThreadPool* this, Runnable* task);
#define PathFindingThreadPool_new3 PathFindingThreadPool_new
#define PathFindingThreadPool_init3 PathFindingThreadPool_init
#ifndef PathFindingThreadPool_runAPriorityTask
#define PathFindingThreadPool_runAPriorityTask ThreadPool_runAPriorityTask
#endif
#ifndef PathFindingThreadPool_getTask
#define PathFindingThreadPool_getTask ThreadPool_getTask
#endif
#ifndef PathFindingThreadPool_clear
#define PathFindingThreadPool_clear ThreadPool_clear
#endif
#ifndef PathFindingThreadPool_close
#define PathFindingThreadPool_close ThreadPool_close
#endif
#ifndef PathFindingThreadPool_join
#define PathFindingThreadPool_join ThreadPool_join
#endif
#ifndef PathFindingThreadPool_isBusy
#define PathFindingThreadPool_isBusy ThreadPool_isBusy
#endif
#ifndef PathFindingThreadPool_threadStarted
#define PathFindingThreadPool_threadStarted ThreadPool_threadStarted
#endif
#ifndef PathFindingThreadPool_threadStopped
#define PathFindingThreadPool_threadStopped ThreadPool_threadStopped
#endif
#ifndef PathFindingThreadPool_createName
#define PathFindingThreadPool_createName ThreadPool_createName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PathFindingThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PathFindingThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_PATHFINDINGTHREADPOOL_H
