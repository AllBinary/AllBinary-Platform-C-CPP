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
// package org.allbinary.media.image.search

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
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsEvent.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResultsListener.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct ImageComparisonSearchWorker ImageComparisonSearchWorker;
struct ImageComparisonSearchWorker {
    BasicEventHandler base;
    ImageComparisonResultsListener ImageComparisonResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* imageComparisonInfoVector;
    int64_t index;
    bool running;
    ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface;
};


ImageComparisonSearchWorker* ImageComparisonSearchWorker_new(ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface);

void ImageComparisonSearchWorker_init(ImageComparisonSearchWorker* this, ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface);
void ImageComparisonSearchWorker_onImageComparisonResultsEvent(ImageComparisonSearchWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent);
void ImageComparisonSearchWorker_onEvent(ImageComparisonSearchWorker* this, AllBinaryEventObject* allBinaryEventObject);
bool ImageComparisonSearchWorker_isRunning(ImageComparisonSearchWorker* this);
void ImageComparisonSearchWorker_setRunning(ImageComparisonSearchWorker* this, bool running);
void ImageComparisonSearchWorker_run(ImageComparisonSearchWorker* this);

static void ImageComparisonSearchWorker_initFields(ImageComparisonSearchWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->index = 0;
    this->running = false;
    
}


void ImageComparisonSearchWorker_init(ImageComparisonSearchWorker* this, ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface) {
    BasicEventHandler_init(&this->base);
    ImageComparisonSearchWorker_initFields(this);
        this->imageComparisonInfoVector = BasicArrayListD_new();
        this->imageSearchConstraintsInterface = imageSearchConstraintsInterface;
}

ImageComparisonSearchWorker* ImageComparisonSearchWorker_new(ImageComparisonSearchConstraintsInterface* imageSearchConstraintsInterface) {
    ImageComparisonSearchWorker* this = calloc(1, sizeof(ImageComparisonSearchWorker));
    ImageComparisonSearchWorker_init(this, imageSearchConstraintsInterface);
    return this;
}


void ImageComparisonSearchWorker_onImageComparisonResultsEvent(ImageComparisonSearchWorker* this, ImageComparisonResultsEvent* imageComparisonResultsEvent) {
        BasicArrayList_add(this->imageComparisonInfoVector, ImageComparisonResultsEvent_getImageComparisonResult(imageComparisonResultsEvent));
        ImageComparisonSearchWorker_run(this);
}


void ImageComparisonSearchWorker_onEvent(ImageComparisonSearchWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        ImageComparisonSearchWorker_onImageComparisonResultsEvent(this, ((ImageComparisonResultsEvent*) allBinaryEventObject));
}


// synchronized
bool ImageComparisonSearchWorker_isRunning(ImageComparisonSearchWorker* this) {
        return this->running;
}


// synchronized
void ImageComparisonSearchWorker_setRunning(ImageComparisonSearchWorker* this, bool running) {
        this->running = running;
}


void ImageComparisonSearchWorker_run(ImageComparisonSearchWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            ImageComparisonSearchWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            ImageComparisonResult* imageComparisonInfo = ((ImageComparisonResult*) BasicArrayList_get(this->imageComparisonInfoVector, 0));
            LogUtil_putF(this->logUtil, ImageComparisonResult_toString(imageComparisonInfo), this, this->commonStrings->RUN);
            BufferedImage* latestBufferedImage = ImageComparisonResult_getBufferedImages(imageComparisonInfo)[1];
            BasicArrayList_remove(this->imageComparisonInfoVector, imageComparisonInfo);
            this->index++;
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            ImageComparisonSearchWorker_setRunning(this, false);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

