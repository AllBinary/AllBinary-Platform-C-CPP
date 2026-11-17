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
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/thread/ThreadPool.h"

//This is mainly for network communications.
typedef struct ImageThreadPool ImageThreadPool;
struct ImageThreadPool {
    ThreadPool base;
    LogUtil* logUtil;
};

static ThreadPool* ImageThreadPool_instance;

ImageThreadPool* ImageThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority);
ThreadPool* ImageThreadPool_getInstance(void);

void ImageThreadPool_init(ImageThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority);
void ImageThreadPool_runTask(ImageThreadPool* this, Runnable* task);
void ImageThreadPool_startTask(ImageThreadPool* this, Runnable* task);
void ImageThreadPool_completedTask(ImageThreadPool* this, Runnable* task);

// Static fields with runtime initializers: call this once at startup
void ImageThreadPool_staticInit(void) {
    ImageThreadPool_instance = ImageThreadPool_new("ImageLoader", 1, ThreadPool_NORMAL_PRIORITY);
}

static void ImageThreadPool_initFields(ImageThreadPool* this) {
    this->logUtil = LogUtil_getInstance();
}


ThreadPool* ImageThreadPool_getInstance(void) {
        return ImageThreadPool_instance;
}


void ImageThreadPool_init(ImageThreadPool* this, const char* poolName, int32_t numThreads, int32_t priority) {
        ThreadPool_init(&this->base, poolName, numThreads, priority);
        ImageThreadPool_initFields(this);
}

ImageThreadPool* ImageThreadPool_new(const char* poolName, int32_t numThreads, int32_t priority) {
    ImageThreadPool* this = calloc(1, sizeof(ImageThreadPool));
    ImageThreadPool_init(this, poolName, numThreads, priority);
    return this;
}


// synchronized
void ImageThreadPool_runTask(ImageThreadPool* this, Runnable* task) {
        ThreadPool_runTask((&this->base), task);
}


void ImageThreadPool_startTask(ImageThreadPool* this, Runnable* task) {
}


void ImageThreadPool_completedTask(ImageThreadPool* this, Runnable* task) {
}

