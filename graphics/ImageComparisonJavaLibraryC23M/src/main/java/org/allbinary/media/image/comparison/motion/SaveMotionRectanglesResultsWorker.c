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
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"

typedef struct SaveMotionRectanglesResultsWorker SaveMotionRectanglesResultsWorker;
struct SaveMotionRectanglesResultsWorker {
    MotionRectanglesResultsListener MotionRectanglesResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool running;
    BasicArrayList* motionRectanglesVector;
};


SaveMotionRectanglesResultsWorker* SaveMotionRectanglesResultsWorker_new(void);

void SaveMotionRectanglesResultsWorker_init(SaveMotionRectanglesResultsWorker* this);
BasicArrayList* SaveMotionRectanglesResultsWorker_getMotionRectanglesVector(SaveMotionRectanglesResultsWorker* this);
void SaveMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(SaveMotionRectanglesResultsWorker* this, MotionRectanglesResultsEvent* motionRectanglesResultsEvent);
void SaveMotionRectanglesResultsWorker_onEvent(SaveMotionRectanglesResultsWorker* this, AllBinaryEventObject* allBinaryEventObject);
bool SaveMotionRectanglesResultsWorker_isRunning(SaveMotionRectanglesResultsWorker* this);
void SaveMotionRectanglesResultsWorker_setRunning(SaveMotionRectanglesResultsWorker* this, bool running);
void SaveMotionRectanglesResultsWorker_run(SaveMotionRectanglesResultsWorker* this);

static void SaveMotionRectanglesResultsWorker_initFields(SaveMotionRectanglesResultsWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->running = false;
    
}


void SaveMotionRectanglesResultsWorker_init(SaveMotionRectanglesResultsWorker* this) {
    SaveMotionRectanglesResultsWorker_initFields(this);
        this->motionRectanglesVector = BasicArrayListD_new();
}

SaveMotionRectanglesResultsWorker* SaveMotionRectanglesResultsWorker_new(void) {
    SaveMotionRectanglesResultsWorker* this = calloc(1, sizeof(SaveMotionRectanglesResultsWorker));
    SaveMotionRectanglesResultsWorker_init(this);
    return this;
}


BasicArrayList* SaveMotionRectanglesResultsWorker_getMotionRectanglesVector(SaveMotionRectanglesResultsWorker* this) {
        return this->motionRectanglesVector;
}


void SaveMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(SaveMotionRectanglesResultsWorker* this, MotionRectanglesResultsEvent* motionRectanglesResultsEvent) {
        JAVA_CALL(SaveMotionRectanglesResultsWorker_getMotionRectanglesVector(this), add, motionRectanglesResultsEvent);
        SaveMotionRectanglesResultsWorker_run(this);
}


void SaveMotionRectanglesResultsWorker_onEvent(SaveMotionRectanglesResultsWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        SaveMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(this, ((MotionRectanglesResultsEvent*) allBinaryEventObject));
}


// synchronized
bool SaveMotionRectanglesResultsWorker_isRunning(SaveMotionRectanglesResultsWorker* this) {
        return this->running;
}


// synchronized
void SaveMotionRectanglesResultsWorker_setRunning(SaveMotionRectanglesResultsWorker* this, bool running) {
        this->running = running;
}


void SaveMotionRectanglesResultsWorker_run(SaveMotionRectanglesResultsWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            SaveMotionRectanglesResultsWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            MotionRectanglesResultsEvent* motionRectanglesResultsEvent = ((MotionRectanglesResultsEvent*) JAVA_CALL(SaveMotionRectanglesResultsWorker_getMotionRectanglesVector(this), get, 0));
            MotionRectangles* motionRectangles = MotionRectanglesResultsEvent_getMotionRectangles(motionRectanglesResultsEvent);
            MotionRectanglesImageInputOutput_save(MotionRectanglesImageInputOutput_new(), motionRectangles, MotionRectanglesResultsEvent_getFrame(motionRectanglesResultsEvent));
            JAVA_CALL(SaveMotionRectanglesResultsWorker_getMotionRectanglesVector(this), remove, motionRectangles);
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

