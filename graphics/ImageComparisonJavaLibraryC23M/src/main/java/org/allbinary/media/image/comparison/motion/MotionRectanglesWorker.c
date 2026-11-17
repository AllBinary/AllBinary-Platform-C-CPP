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
// package org.allbinary.media.image.comparison.motion

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
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct MotionRectanglesWorker MotionRectanglesWorker;
struct MotionRectanglesWorker {
    BasicEventHandler base;
    ImageComparisonResultsListener ImageComparisonResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* imageComparisonInfoVector;
    MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface;
    int64_t index;
    bool running;
};


MotionRectanglesWorker* MotionRectanglesWorker_new(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

void MotionRectanglesWorker_init(MotionRectanglesWorker* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);
void MotionRectanglesWorker_onImageComparisonResultsEvent(MotionRectanglesWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent);
void MotionRectanglesWorker_onEvent(MotionRectanglesWorker* this, AllBinaryEventObject* allBinaryEventObject);
bool MotionRectanglesWorker_isRunning(MotionRectanglesWorker* this);
void MotionRectanglesWorker_setRunning(MotionRectanglesWorker* this, bool running);
void MotionRectanglesWorker_run(MotionRectanglesWorker* this);

static void MotionRectanglesWorker_initFields(MotionRectanglesWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->imageComparisonInfoVector = BasicArrayListD_new();
    
    this->index = 0;
    this->running = false;
}


void MotionRectanglesWorker_init(MotionRectanglesWorker* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
    BasicEventHandler_init(&this->base);
    MotionRectanglesWorker_initFields(this);
        this->motionRectangleConstraintsInterface = motionRectangleConstraintsInterface;
}

MotionRectanglesWorker* MotionRectanglesWorker_new(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
    MotionRectanglesWorker* this = calloc(1, sizeof(MotionRectanglesWorker));
    MotionRectanglesWorker_init(this, motionRectangleConstraintsInterface);
    return this;
}


void MotionRectanglesWorker_onImageComparisonResultsEvent(MotionRectanglesWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent) {
        BasicArrayList_add(this->imageComparisonInfoVector, imageComparisonResultsEvent);
        MotionRectanglesWorker_run(this);
}


void MotionRectanglesWorker_onEvent(MotionRectanglesWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        MotionRectanglesWorker_onImageComparisonResultsEvent(this, ((ImageComparisonResultsEvent*) allBinaryEventObject));
}


// synchronized
bool MotionRectanglesWorker_isRunning(MotionRectanglesWorker* this) {
        return this->running;
}


// synchronized
void MotionRectanglesWorker_setRunning(MotionRectanglesWorker* this, bool running) {
        this->running = running;
}


void MotionRectanglesWorker_run(MotionRectanglesWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            MotionRectanglesWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            ImageComparisonResultsEvent* imageComparisonResultsEvent = ((ImageComparisonResultsEvent*) BasicArrayList_get(this->imageComparisonInfoVector, 0));
            ImageComparisonResult* imageComparisonInfo = ((ImageComparisonResult*) ImageComparisonResultsEvent_getImageComparisonResult(imageComparisonResultsEvent));
            LogUtil_putF(this->logUtil, ImageComparisonResult_toString(imageComparisonInfo), this, this->commonStrings->RUN);
            AllMotionRectangles* allMotionRectangles = AllMotionRectangles_new(imageComparisonInfo);
            AllMotionRectanglesResultsCacheSingleton_add(AllMotionRectanglesResultsCacheSingleton_getInstance(), MotionRectanglesResultsFrameCacheable_new(allMotionRectangles, ImageComparisonResult_getFrameTwo(imageComparisonInfo)));
            ConsolidateMotionRectangles* consolidatedMotionRectangles = ConsolidateMotionRectangles_new(allMotionRectangles);
            ConsolidatedMotionRectanglesResultsCacheSingleton_add(ConsolidatedMotionRectanglesResultsCacheSingleton_getInstance(), MotionRectanglesResultsFrameCacheable_new(consolidatedMotionRectangles, ImageComparisonResult_getFrameTwo(imageComparisonInfo)));
            ConstrainedMotionRectangles* constrainedMotionRectangles = ConstrainedMotionRectangles_new(this->motionRectangleConstraintsInterface, consolidatedMotionRectangles);
            ConstrainedMotionRectangles_applyMotionRectangleConstraints(constrainedMotionRectangles, consolidatedMotionRectangles);
            ConstrainedMotionRectanglesResultsCacheSingleton_add(ConstrainedMotionRectanglesResultsCacheSingleton_getInstance(), MotionRectanglesResultsFrameCacheable_new(constrainedMotionRectangles, ImageComparisonResult_getFrameTwo(imageComparisonInfo)));
            MotionRectanglesWorker_fireEvent(this, MotionRectanglesResultsEvent_new(this, ImageComparisonResult_getFrameTwo(imageComparisonInfo), ((MotionRectangles*) constrainedMotionRectangles)));
            BasicArrayList_remove(this->imageComparisonInfoVector, imageComparisonResultsEvent);
            this->index++;
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            MotionRectanglesWorker_setRunning(this, false);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

