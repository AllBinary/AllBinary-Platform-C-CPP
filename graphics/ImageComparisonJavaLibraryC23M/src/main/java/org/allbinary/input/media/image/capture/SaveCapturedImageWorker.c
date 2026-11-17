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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h"

typedef struct SaveCapturedImageWorker SaveCapturedImageWorker;
struct SaveCapturedImageWorker {
    BasicEventHandler base;
    CapturedImageWorkerResultsListener CapturedImageWorkerResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool running;
    BasicArrayList* capturedImageWorkerResultsEventVector;
};


SaveCapturedImageWorker* SaveCapturedImageWorker_new(void);

void SaveCapturedImageWorker_init(SaveCapturedImageWorker* this);
bool SaveCapturedImageWorker_isRunning(SaveCapturedImageWorker* this);
void SaveCapturedImageWorker_setRunning(SaveCapturedImageWorker* this, bool running);
void SaveCapturedImageWorker_onCaptureEvent(SaveCapturedImageWorker* this, CapturedImageWorkerResultsEvent* capturedImageEvent);
void SaveCapturedImageWorker_onEvent(SaveCapturedImageWorker* this, AllBinaryEventObject* allBinaryEventObject);
void SaveCapturedImageWorker_run(SaveCapturedImageWorker* this);

static void SaveCapturedImageWorker_initFields(SaveCapturedImageWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->running = false;
    this->capturedImageWorkerResultsEventVector = BasicArrayListD_new();
}


void SaveCapturedImageWorker_init(SaveCapturedImageWorker* this) {
    BasicEventHandler_init(&this->base);
    SaveCapturedImageWorker_initFields(this);
}

SaveCapturedImageWorker* SaveCapturedImageWorker_new(void) {
    SaveCapturedImageWorker* this = calloc(1, sizeof(SaveCapturedImageWorker));
    SaveCapturedImageWorker_init(this);
    return this;
}


// synchronized
bool SaveCapturedImageWorker_isRunning(SaveCapturedImageWorker* this) {
        return this->running;
}


// synchronized
void SaveCapturedImageWorker_setRunning(SaveCapturedImageWorker* this, bool running) {
        this->running = running;
}


void SaveCapturedImageWorker_onCaptureEvent(SaveCapturedImageWorker* this, CapturedImageWorkerResultsEvent* capturedImageEvent) {
        BasicArrayList_add(this->capturedImageWorkerResultsEventVector, capturedImageEvent);
        SaveCapturedImageWorker_run(this);
}


void SaveCapturedImageWorker_onEvent(SaveCapturedImageWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        SaveCapturedImageWorker_onCaptureEvent(this, ((CapturedImageWorkerResultsEvent*) allBinaryEventObject));
}


void SaveCapturedImageWorker_run(SaveCapturedImageWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            SaveCapturedImageWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent = (((CapturedImageWorkerResultsEvent*) BasicArrayList_get(this->capturedImageWorkerResultsEventVector, 0)));
            BufferedImage* screenBufferedImage = CapturedImageWorkerResultsEvent_getBufferedImage(capturedImageWorkerResultsEvent);
            CapturedImageInputOutput_save(CapturedImageInputOutput_new(), screenBufferedImage, CapturedImageWorkerResultsEvent_getFrame(capturedImageWorkerResultsEvent));
            BasicArrayList_remove(this->capturedImageWorkerResultsEventVector, capturedImageWorkerResultsEvent);
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            SaveCapturedImageWorker_setRunning(this, false);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

