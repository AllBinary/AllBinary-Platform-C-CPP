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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/comparison/ImageComparisonWorker.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/RunnableInterface.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct AbstractInputAutomationWorker AbstractInputAutomationWorker;
struct AbstractInputAutomationWorker {
    RunnableInterface RunnableInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int64_t index;
    bool running;
    InputAutomationActionInterface* inputAutomationActionInterface;
    CaptureWorkerInterface* captureWorkerInterface;
    ImageComparisonWorker* imageComparisonWorker;
    MotionRectanglesWorker* motionRectanglesWorker;
    Thread* captureThread;
};


AbstractInputAutomationWorker* AbstractInputAutomationWorker_new(InputAutomationActionInterface* inputAutomationActionInterface);

void AbstractInputAutomationWorker_init(AbstractInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface);
void AbstractInputAutomationWorker_setThread(AbstractInputAutomationWorker* this, Thread* thread);
bool AbstractInputAutomationWorker_isRunning(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_setRunning(AbstractInputAutomationWorker* this, bool running);
bool AbstractInputAutomationWorker_isAnyDataWorkerRunning(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_startDataWorkers(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_waitForDataWorkers(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_stopDataWorkers(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_process(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_run(AbstractInputAutomationWorker* this);
InputAutomationActionInterface* AbstractInputAutomationWorker_getInputAutomationActionInterface(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_setInputAutomationActionInterface(AbstractInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface);
CaptureWorkerInterface* AbstractInputAutomationWorker_getCaptureWorker(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_setCaptureWorker(AbstractInputAutomationWorker* this, CaptureWorkerInterface* captureWorkerInterface);
ImageComparisonWorker* AbstractInputAutomationWorker_getImageComparisonWorker(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_setImageComparisonWorker(AbstractInputAutomationWorker* this, ImageComparisonWorker* imageComparisonWorker);
MotionRectanglesWorker* AbstractInputAutomationWorker_getMotionRectanglesWorker(AbstractInputAutomationWorker* this);
void AbstractInputAutomationWorker_setMotionRectanglesWorker(AbstractInputAutomationWorker* this, MotionRectanglesWorker* motionRectanglesWorker);

static void AbstractInputAutomationWorker_initFields(AbstractInputAutomationWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->index = 0;
    this->running = false;
    this->inputAutomationActionInterface = nullptr;
    this->captureWorkerInterface = nullptr;
    this->imageComparisonWorker = nullptr;
    this->motionRectanglesWorker = nullptr;
    this->captureThread = nullptr;
}


void AbstractInputAutomationWorker_init(AbstractInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface) {
    AbstractInputAutomationWorker_initFields(this);
}

AbstractInputAutomationWorker* AbstractInputAutomationWorker_new(InputAutomationActionInterface* inputAutomationActionInterface) {
    AbstractInputAutomationWorker* this = calloc(1, sizeof(AbstractInputAutomationWorker));
    AbstractInputAutomationWorker_init(this, inputAutomationActionInterface);
    return this;
}


// throws Exception
void AbstractInputAutomationWorker_setThread(AbstractInputAutomationWorker* this, Thread* thread) {
}


// synchronized
bool AbstractInputAutomationWorker_isRunning(AbstractInputAutomationWorker* this) {
        return this->running;
}


// synchronized
void AbstractInputAutomationWorker_setRunning(AbstractInputAutomationWorker* this, bool running) {
        this->running = running;
}


// synchronized
bool AbstractInputAutomationWorker_isAnyDataWorkerRunning(AbstractInputAutomationWorker* this) {
        if (this->captureThread != nullptr && (Thread_isAlive(this->captureThread) || JAVA_CALL(AbstractInputAutomationWorker_getCaptureWorker(this), isRunning) || JAVA_CALL(AbstractInputAutomationWorker_getMotionRectanglesWorker(this), isRunning) || JAVA_CALL(AbstractInputAutomationWorker_getImageComparisonWorker(this), isRunning))) {
            return true;
        }
        return false;
}


// throws Exception
// synchronized
void AbstractInputAutomationWorker_startDataWorkers(AbstractInputAutomationWorker* this) {
        if (!AbstractInputAutomationWorker_isAnyDataWorkerRunning(this)) {
            this->captureThread = Thread_new(AbstractInputAutomationWorker_getCaptureWorker(this));
            LogUtil_putF(this->logUtil, java_concat("Starting CaptureWorkers - Need more images - Thread State: ", JAVA_CALL(Thread_getState(this->captureThread), toString)), this, "startCaptureWorkers");
            Thread_start(this->captureThread);
        }
}


// throws Exception
// synchronized
void AbstractInputAutomationWorker_waitForDataWorkers(AbstractInputAutomationWorker* this) {
        while (AbstractInputAutomationWorker_isAnyDataWorkerRunning(this)) {
            LogUtil_putF(this->logUtil, "Waiting", this, this->commonStrings->RUN);
            java_sleep(250);
        }
}


// throws Exception
void AbstractInputAutomationWorker_stopDataWorkers(AbstractInputAutomationWorker* this) {
        JAVA_CALL(AbstractInputAutomationWorker_getCaptureWorker(this), setRunning, false);
}


// throws Exception
void AbstractInputAutomationWorker_process(AbstractInputAutomationWorker* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void AbstractInputAutomationWorker_run(AbstractInputAutomationWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            AbstractInputAutomationWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            while (AbstractInputAutomationWorker_isRunning(this)) {
                TimeDelayHelper_setStartTimeTNT(timeHelper);
                AbstractInputAutomationWorker_process(this);
                this->index++;
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_string_of(CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper)), " Index: "), java_string_of(this->index)), this, this->commonStrings->RUN);
            }
            AbstractInputAutomationWorker_stopDataWorkers(this);
            AbstractInputAutomationWorker_waitForDataWorkers(this);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}


InputAutomationActionInterface* AbstractInputAutomationWorker_getInputAutomationActionInterface(AbstractInputAutomationWorker* this) {
        return this->inputAutomationActionInterface;
}


void AbstractInputAutomationWorker_setInputAutomationActionInterface(AbstractInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface) {
        this->inputAutomationActionInterface = inputAutomationActionInterface;
}


CaptureWorkerInterface* AbstractInputAutomationWorker_getCaptureWorker(AbstractInputAutomationWorker* this) {
        return this->captureWorkerInterface;
}


void AbstractInputAutomationWorker_setCaptureWorker(AbstractInputAutomationWorker* this, CaptureWorkerInterface* captureWorkerInterface) {
        this->captureWorkerInterface = captureWorkerInterface;
}


ImageComparisonWorker* AbstractInputAutomationWorker_getImageComparisonWorker(AbstractInputAutomationWorker* this) {
        return this->imageComparisonWorker;
}


void AbstractInputAutomationWorker_setImageComparisonWorker(AbstractInputAutomationWorker* this, ImageComparisonWorker* imageComparisonWorker) {
        this->imageComparisonWorker = imageComparisonWorker;
}


MotionRectanglesWorker* AbstractInputAutomationWorker_getMotionRectanglesWorker(AbstractInputAutomationWorker* this) {
        return this->motionRectanglesWorker;
}


void AbstractInputAutomationWorker_setMotionRectanglesWorker(AbstractInputAutomationWorker* this, MotionRectanglesWorker* motionRectanglesWorker) {
        this->motionRectanglesWorker = motionRectanglesWorker;
}

