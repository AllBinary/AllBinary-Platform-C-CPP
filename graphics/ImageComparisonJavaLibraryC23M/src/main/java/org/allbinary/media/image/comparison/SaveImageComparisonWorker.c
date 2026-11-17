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
// package org.allbinary.media.image.comparison

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"

typedef struct SaveImageComparisonWorker SaveImageComparisonWorker;
struct SaveImageComparisonWorker {
    ImageComparisonResultsListener ImageComparisonResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool running;
    BasicArrayList* imageComparisonInfoVector;
};


SaveImageComparisonWorker* SaveImageComparisonWorker_new(void);

void SaveImageComparisonWorker_init(SaveImageComparisonWorker* this);
void SaveImageComparisonWorker_onImageComparisonResultsEvent(SaveImageComparisonWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent);
void SaveImageComparisonWorker_onEvent(SaveImageComparisonWorker* this, AllBinaryEventObject* allBinaryEventObject);
bool SaveImageComparisonWorker_isRunning(SaveImageComparisonWorker* this);
void SaveImageComparisonWorker_setRunning(SaveImageComparisonWorker* this, bool running);
void SaveImageComparisonWorker_run(SaveImageComparisonWorker* this);

static void SaveImageComparisonWorker_initFields(SaveImageComparisonWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->running = false;
    this->imageComparisonInfoVector = BasicArrayListD_new();
}


void SaveImageComparisonWorker_init(SaveImageComparisonWorker* this) {
    SaveImageComparisonWorker_initFields(this);
}

SaveImageComparisonWorker* SaveImageComparisonWorker_new(void) {
    SaveImageComparisonWorker* this = calloc(1, sizeof(SaveImageComparisonWorker));
    SaveImageComparisonWorker_init(this);
    return this;
}


void SaveImageComparisonWorker_onImageComparisonResultsEvent(SaveImageComparisonWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent) {
        BasicArrayList_add(this->imageComparisonInfoVector, imageComparisonResultsEvent);
        SaveImageComparisonWorker_run(this);
}


void SaveImageComparisonWorker_onEvent(SaveImageComparisonWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        SaveImageComparisonWorker_onImageComparisonResultsEvent(this, ((ImageComparisonResultsEvent*) allBinaryEventObject));
}


// synchronized
bool SaveImageComparisonWorker_isRunning(SaveImageComparisonWorker* this) {
        return this->running;
}


// synchronized
void SaveImageComparisonWorker_setRunning(SaveImageComparisonWorker* this, bool running) {
        this->running = running;
}


void SaveImageComparisonWorker_run(SaveImageComparisonWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            SaveImageComparisonWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            ImageComparisonResultsEvent* imageComparisonResultsEvent = ((ImageComparisonResultsEvent*) BasicArrayList_get(this->imageComparisonInfoVector, 0));
            ImageComparisonResult* imageComparisonInfo = ImageComparisonResultsEvent_getImageComparisonResult(imageComparisonResultsEvent);
            LogUtil_putF(this->logUtil, ImageComparisonResult_toString(imageComparisonInfo), this, this->commonStrings->RUN);
            ComparisonImageInputOutput_save(ComparisonImageInputOutput_new(), imageComparisonInfo, ImageComparisonResult_getFrameTwo(imageComparisonInfo));
            BasicArrayList_remove(this->imageComparisonInfoVector, imageComparisonInfo);
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

