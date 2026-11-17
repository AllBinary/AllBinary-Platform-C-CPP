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
// package org.allbinary.input.media.image.capture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/media/image/cache/BufferedImageFrameCacheable.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"

typedef struct ScreenCaptureImagesWorker ScreenCaptureImagesWorker;
struct ScreenCaptureImagesWorker {
    BasicEventHandler base;
    CaptureWorkerInterface CaptureWorkerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool running;
    ScreenScavangerRobot* screenScavangerRobot;
};

static int64_t ScreenCaptureImagesWorker_index;

ScreenCaptureImagesWorker* ScreenCaptureImagesWorker_new(void);

void ScreenCaptureImagesWorker_init(ScreenCaptureImagesWorker* this);
bool ScreenCaptureImagesWorker_isRunning(ScreenCaptureImagesWorker* this);
void ScreenCaptureImagesWorker_setRunning(ScreenCaptureImagesWorker* this, bool running);
void ScreenCaptureImagesWorker_setThread(ScreenCaptureImagesWorker* this, Thread* thread);
void ScreenCaptureImagesWorker_run(ScreenCaptureImagesWorker* this);

static void ScreenCaptureImagesWorker_initFields(ScreenCaptureImagesWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->running = false;
    
}


void ScreenCaptureImagesWorker_init(ScreenCaptureImagesWorker* this) {
    BasicEventHandler_init(&this->base);
    ScreenCaptureImagesWorker_initFields(this);
        this->screenScavangerRobot = ScreenScavangerRobot_new();
        ScreenCaptureImagesWorker_index = ProcessingFrameIndexFactory_next();
}

ScreenCaptureImagesWorker* ScreenCaptureImagesWorker_new(void) {
    ScreenCaptureImagesWorker* this = calloc(1, sizeof(ScreenCaptureImagesWorker));
    ScreenCaptureImagesWorker_init(this);
    return this;
}


// synchronized
bool ScreenCaptureImagesWorker_isRunning(ScreenCaptureImagesWorker* this) {
        return this->running;
}


// synchronized
void ScreenCaptureImagesWorker_setRunning(ScreenCaptureImagesWorker* this, bool running) {
        this->running = running;
}


// throws Exception
void ScreenCaptureImagesWorker_setThread(ScreenCaptureImagesWorker* this, Thread* thread) {
}


void ScreenCaptureImagesWorker_run(ScreenCaptureImagesWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            ScreenCaptureImagesWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            while (ScreenCaptureImagesWorker_isRunning(this)) {
                TimeDelayHelper_setStartTimeTNT(timeHelper);
                BufferedImage* bufferedImage = ScreenScavangerRobot_getScreenAsBufferedImages(this->screenScavangerRobot)[0];
                int64_t frame = ScreenCaptureImagesWorker_index;
                ScreenCaptureImagesWorker_index++;
                CapturedBufferedImagesCacheSingleton_add(CapturedBufferedImagesCacheSingleton_getInstance(), BufferedImageFrameCacheable_new(bufferedImage, frame));
                CapturedImageWorkerResultsEvent* capturedImageEvent = CapturedImageWorkerResultsEvent_new(this, frame, bufferedImage);
                ScreenCaptureImagesWorker_fireEvent(this, capturedImageEvent);
                LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
                ScreenCaptureImagesWorker_setRunning(this, false);
            }
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

