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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct ThreadPool ThreadPool;
struct ThreadPool {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    NullRunnable* NULL_RUNNABLE;
    ThreadPoolStrings* threadPoolStrings;
    ThreadObjectUtil* threadObjectUtil;
    bool isAlive;
    BasicArrayList* taskQueue;
    int32_t numThreads;
    bool runningTask;
    PriorityRunnable* currentPriorityRunnable;
};

constexpr int32_t ThreadPool_NORMAL_PRIORITY = 5;

ThreadPool* ThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);

void ThreadPool_init(ThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);
void ThreadPool_runAPriorityTask(ThreadPool* this);
void ThreadPool_runATask(ThreadPool* this);
void ThreadPool_init(ThreadPool* this);
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

static void ThreadPool_initFields(ThreadPool* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->NULL_RUNNABLE = NullRunnable_getInstance();
    this->threadPoolStrings = ThreadPoolStrings_getInstance();
    this->threadObjectUtil = ThreadObjectUtil_getInstance();
    this->isAlive = false;
    this->taskQueue = BasicArrayListD_new();
    this->numThreads = 0;
    this->runningTask = false;
    this->currentPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
}


void ThreadPool_init(ThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
    ThreadPool_initFields(this);
}

ThreadPool* ThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    ThreadPool* this = calloc(1, sizeof(ThreadPool));
    ThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


// throws Exception
void ThreadPool_runAPriorityTask(ThreadPool* this) {
        if (!PriorityRunnable_isDone(this->currentPriorityRunnable)) {
            PriorityRunnable_run(this->currentPriorityRunnable);
        } else {
            Runnable* runnable = ThreadPool_getTask(this);
            if (runnable == this->NULL_RUNNABLE) {
                return;
            }
            this->currentPriorityRunnable = ((PriorityRunnable*) runnable);
            if (!(this->currentPriorityRunnable == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE)) {
                PriorityRunnable_reset(this->currentPriorityRunnable);
                PriorityRunnable_run(this->currentPriorityRunnable);
            }
        }
}


// throws Exception
void ThreadPool_runATask(ThreadPool* this) {
        Runnable* runnable = ThreadPool_getTask(this);
        if (runnable != nullptr) {
            Runnable_run(runnable);
        }
}


void ThreadPool_init(ThreadPool* this) {
        if (!this->isAlive) {
            this->isAlive = true;
            this->taskQueue = BasicArrayListD_new();
        }
}


// synchronized
void ThreadPool_runTaskWithPriority(ThreadPool* this, PriorityRunnable* task) {
        if (!this->isAlive) {
            ThreadPool_init(this);
        }
        if (task != nullptr) {
            int32_t size = BasicArrayList_size(this->taskQueue);
            PriorityRunnable* runnable = nullptr;
            PriorityRunnable* lowerPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
            for (int32_t index = 0; index < size; index++) {
                runnable = ((PriorityRunnable*) BasicArrayList_get(this->taskQueue, index));
                if (Runnable_getPriority(runnable) > PriorityRunnable_getPriority(task)) {
                    lowerPriorityRunnable = runnable;
                    break;
                }
            }
            if (lowerPriorityRunnable == this->threadObjectUtil->NULL_PRIORITY_RUNNABLE) {
                BasicArrayList_add(this->taskQueue, task);
            } else {
                int32_t index = BasicArrayList_indexOf(this->taskQueue, lowerPriorityRunnable);
                BasicArrayList_addAt(this->taskQueue, index, task);
            }
        }
}


// synchronized
void ThreadPool_runTask(ThreadPool* this, Runnable* task) {
        if (!this->isAlive) {
            ThreadPool_init(this);
        }
        if (task != nullptr) {
            BasicArrayList_add(this->taskQueue, task);
        }
}


// throws InterruptedException
// synchronized
Runnable* ThreadPool_getTask(ThreadPool* this) {
        if (BasicArrayList_isEmpty(this->taskQueue)) {
            return this->NULL_RUNNABLE;
        }
        return ((Runnable*) BasicArrayList_removeAt(this->taskQueue, 0));
}


// synchronized
void ThreadPool_clear(ThreadPool* this) {
        BasicArrayList_clear(this->taskQueue);
}


// synchronized
void ThreadPool_close(ThreadPool* this) {
        if (this->isAlive) {
            this->isAlive = false;
            BasicArrayList_clear(this->taskQueue);
            this->currentPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
        }
}


void ThreadPool_join(ThreadPool* this) {
        this->isAlive = false;
        BasicArrayList_clear(this->taskQueue);
        this->currentPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
}


bool ThreadPool_isBusy(ThreadPool* this) {
        if (!this->isAlive) {
            return false;
        }
        if (BasicArrayList_size(this->taskQueue) > 0) {
            return true;
        }
        if (this->runningTask) {
            return true;
        }
        return false;
}


void ThreadPool_threadStarted(ThreadPool* this) {
}


void ThreadPool_threadStopped(ThreadPool* this) {
        if (this->numThreads == 1) {
            this->isAlive = false;
            BasicArrayList_clear(this->taskQueue);
            this->currentPriorityRunnable = this->threadObjectUtil->NULL_PRIORITY_RUNNABLE;
        }
}


void ThreadPool_startTask(ThreadPool* this, Runnable* task) {
}


void ThreadPool_completedTask(ThreadPool* this, Runnable* task) {
}

