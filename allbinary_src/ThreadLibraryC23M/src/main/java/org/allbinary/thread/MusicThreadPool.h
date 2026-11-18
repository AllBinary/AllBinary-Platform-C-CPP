#ifndef ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H
#define ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct MusicThreadPool MusicThreadPool;
struct MusicThreadPool {
    ThreadPool base;
};


MusicThreadPool* MusicThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

ThreadPool* MusicThreadPool_getInstance(void);

void MusicThreadPool_init(MusicThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);

void MusicThreadPool_runTask(MusicThreadPool* this, Runnable* task);

void MusicThreadPool_startTask(MusicThreadPool* this, Runnable* task);

void MusicThreadPool_completedTask(MusicThreadPool* this, Runnable* task);
#define MusicThreadPool_new3 MusicThreadPool_new
#define MusicThreadPool_init3 MusicThreadPool_init
#ifndef MusicThreadPool_runAPriorityTask
#define MusicThreadPool_runAPriorityTask ThreadPool_runAPriorityTask
#endif
#ifndef MusicThreadPool_runTaskWithPriority
#define MusicThreadPool_runTaskWithPriority ThreadPool_runTaskWithPriority
#endif
#ifndef MusicThreadPool_getTask
#define MusicThreadPool_getTask ThreadPool_getTask
#endif
#ifndef MusicThreadPool_clear
#define MusicThreadPool_clear ThreadPool_clear
#endif
#ifndef MusicThreadPool_close
#define MusicThreadPool_close ThreadPool_close
#endif
#ifndef MusicThreadPool_join
#define MusicThreadPool_join ThreadPool_join
#endif
#ifndef MusicThreadPool_isBusy
#define MusicThreadPool_isBusy ThreadPool_isBusy
#endif
#ifndef MusicThreadPool_threadStarted
#define MusicThreadPool_threadStarted ThreadPool_threadStarted
#endif
#ifndef MusicThreadPool_threadStopped
#define MusicThreadPool_threadStopped ThreadPool_threadStopped
#endif
#ifndef MusicThreadPool_createName
#define MusicThreadPool_createName ThreadPool_createName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MusicThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MusicThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_MUSICTHREADPOOL_H
