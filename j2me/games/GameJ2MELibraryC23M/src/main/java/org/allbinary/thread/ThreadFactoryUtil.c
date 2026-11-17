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
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/canvas/RunnableCanvas.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#include "org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ThreadFactoryUtil ThreadFactoryUtil;
struct ThreadFactoryUtil {
    LogUtil* logUtil;
};

static ThreadFactoryUtil* ThreadFactoryUtil_instance;

ThreadFactoryUtil* ThreadFactoryUtil_new(void);
ThreadFactoryUtil* ThreadFactoryUtil_getInstance(void);
Thread* ThreadFactoryUtil_getInstanceGameCanvasRunnable(ThreadFactoryUtil* this, GameCanvasRunnableInterface* runnable);
Thread* ThreadFactoryUtil_getInstanceForRunnable(ThreadFactoryUtil* this, ABRunnable* runnable);
static Thread* ThreadFactoryUtil_getInstanceType(ThreadFactoryUtil* this, Runnable* runnable, int32_t type);
void ThreadFactoryUtil_start(ThreadFactoryUtil* this, Thread* thread);

// Static fields with runtime initializers: call this once at startup
void ThreadFactoryUtil_staticInit(void) {
    ThreadFactoryUtil_instance = ThreadFactoryUtil_new();
}

static void ThreadFactoryUtil_initFields(ThreadFactoryUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void ThreadFactoryUtil_init(ThreadFactoryUtil* this) {
    ThreadFactoryUtil_initFields(this);
}

ThreadFactoryUtil* ThreadFactoryUtil_new(void) {
    ThreadFactoryUtil* this = calloc(1, sizeof(ThreadFactoryUtil));
    ThreadFactoryUtil_init(this);
    return this;
}


ThreadFactoryUtil* ThreadFactoryUtil_getInstance(void) {
        return ThreadFactoryUtil_instance;
}


Thread* ThreadFactoryUtil_getInstanceGameCanvasRunnable(ThreadFactoryUtil* this, GameCanvasRunnableInterface* runnable) {
        return ThreadFactoryUtil_getInstanceType(this, runnable, GameCanvasRunnableInterface_getType(runnable));
}


Thread* ThreadFactoryUtil_getInstanceForRunnable(ThreadFactoryUtil* this, ABRunnable* runnable) {
        return ThreadFactoryUtil_getInstanceType(this, runnable, GameCanvasRunnableInterface_getType(runnable));
}


static Thread* ThreadFactoryUtil_getInstanceType(ThreadFactoryUtil* this, Runnable* runnable, int32_t type) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        if (J2MEUtil_isHTML()) {
            if (type == DemoCanvas_TYPE || type == AllBinaryGameCanvas_TYPE) {
                RunnableCanvasSingleThreadStartRunnable* demoGameSingleThreadStartRunnable = RunnableCanvasSingleThreadStartRunnable_new(((RunnableCanvas*) runnable));
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Using Pseudo Thread for DemoCanvas/AllBinaryGameCanvas under PlayN/HTML5: "), append, StringUtil_toString(StringUtil_getInstance(), runnable)), toString), this, commonStrings->CONSTRUCTOR);
                ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
                ThreadPool_runTask(primaryThreadPool, demoGameSingleThreadStartRunnable);
            } else {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Using Pseudo Thread for Runnable under PlayN/HTML5: "), append, StringUtil_toString(StringUtil_getInstance(), runnable)), toString), this, commonStrings->CONSTRUCTOR);
                ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
                ThreadPool_runTask(primaryThreadPool, runnable);
            }
        }
        Thread* thread = Thread_new(runnable, GameCanvasRunnableInterface_toString(runnable));
        LogUtil_putF(this->logUtil, Thread_toString(thread), this, commonStrings->CONSTRUCTOR);
        return thread;
}


void ThreadFactoryUtil_start(ThreadFactoryUtil* this, Thread* thread) {
        Thread_start(thread);
}

