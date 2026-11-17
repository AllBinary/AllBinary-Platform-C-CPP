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
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h"
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsListener.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct ImageComparisonWorker ImageComparisonWorker;
struct ImageComparisonWorker {
    BasicEventHandler base;
    CapturedImageWorkerResultsListener CapturedImageWorkerResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* bufferedImageVector;
    ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface;
    ImageComparator* imageComparator;
    bool running;
    int32_t index2;
};


ImageComparisonWorker* ImageComparisonWorker_new(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

void ImageComparisonWorker_init(ImageComparisonWorker* this, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);
bool ImageComparisonWorker_isRunning(ImageComparisonWorker* this);
void ImageComparisonWorker_setRunning(ImageComparisonWorker* this, bool running);
void ImageComparisonWorker_onCaptureEvent(ImageComparisonWorker* this, CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent);
void ImageComparisonWorker_onEvent(ImageComparisonWorker* this, AllBinaryEventObject* allBinaryEventObject);
void ImageComparisonWorker_run(ImageComparisonWorker* this);

static void ImageComparisonWorker_initFields(ImageComparisonWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->bufferedImageVector = BasicArrayListD_new();
    
    
    this->running = false;
    this->index2 = 0;
}


void ImageComparisonWorker_init(ImageComparisonWorker* this, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
    BasicEventHandler_init(&this->base);
    ImageComparisonWorker_initFields(this);
        this->imageComparatorConstraintsInterface = imageComparatorConstraintsInterface;
        this->imageComparator = ImageComparator_new(imageComparatorConstraintsInterface);
}

ImageComparisonWorker* ImageComparisonWorker_new(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
    ImageComparisonWorker* this = calloc(1, sizeof(ImageComparisonWorker));
    ImageComparisonWorker_init(this, imageComparatorConstraintsInterface);
    return this;
}


// synchronized
bool ImageComparisonWorker_isRunning(ImageComparisonWorker* this) {
        return this->running;
}


// synchronized
void ImageComparisonWorker_setRunning(ImageComparisonWorker* this, bool running) {
        this->running = running;
}


// synchronized
void ImageComparisonWorker_onCaptureEvent(ImageComparisonWorker* this, CapturedImageWorkerResultsEvent* capturedImageWorkerResultsEvent) {
        BasicArrayList_add(this->bufferedImageVector, capturedImageWorkerResultsEvent);
        if (BasicArrayList_size(this->bufferedImageVector) > 1) {
            ImageComparisonWorker_run(this);
        }
}


// synchronized
void ImageComparisonWorker_onEvent(ImageComparisonWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        ImageComparisonWorker_onCaptureEvent(this, ((CapturedImageWorkerResultsEvent*) allBinaryEventObject));
}


void ImageComparisonWorker_run(ImageComparisonWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            ImageComparisonWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            if (ImageComparatorConstraintsInterface_isFrameAllowed(this->imageComparatorConstraintsInterface, this->index2)) {
                CapturedImageWorkerResultsEvent** capturedImageWorkerResultsEvent = ((CapturedImageWorkerResultsEvent**) java_array_new(sizeof(CapturedImageWorkerResultsEvent*), 2));
                capturedImageWorkerResultsEvent[0] = ((CapturedImageWorkerResultsEvent*) BasicArrayList_get(this->bufferedImageVector, 0));
                capturedImageWorkerResultsEvent[1] = ((CapturedImageWorkerResultsEvent*) BasicArrayList_get(this->bufferedImageVector, 1));
                if (ImageComparatorConstraintsInterface_isImageValid(this->imageComparatorConstraintsInterface, JAVA_CALL(capturedImageWorkerResultsEvent[0], getBufferedImage)) && ImageComparatorConstraintsInterface_isImageValid(this->imageComparatorConstraintsInterface, JAVA_CALL(capturedImageWorkerResultsEvent[1], getBufferedImage))) {
                    ImageComparisonResult* imageComparisonResult = ImageComparator_compare(this->imageComparator, JAVA_CALL(capturedImageWorkerResultsEvent[0], getBufferedImage), JAVA_CALL(capturedImageWorkerResultsEvent[1], getBufferedImage), JAVA_CALL(capturedImageWorkerResultsEvent[0], getFrame), JAVA_CALL(capturedImageWorkerResultsEvent[1], getFrame), 0);
                    int64_t frame = JAVA_CALL(capturedImageWorkerResultsEvent[1], getFrame);
                    ImageComparisonResultFrameCacheable* imageComparisonResultFrameCacheable = ImageComparisonResultFrameCacheable_new(imageComparisonResult, frame);
                    ImageComparisonResultCacheSingleton_add(ImageComparisonResultCacheSingleton_getInstance(), imageComparisonResultFrameCacheable);
                    ImageComparisonWorker_fireEvent(this, ImageComparisonResultsEvent_new(this, imageComparisonResult));
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Image Comparison Result: "), append, ImageComparisonResult_toString(imageComparisonResult)), append, " for frame: "), appendlong, frame), toString), this, this->commonStrings->RUN);
                } else {
                    LogUtil_putF(this->logUtil, "An Image Was Not Valid: Image Worker Event Processing terminated", this, this->commonStrings->RUN);
                }
            }
            BasicArrayList_remove(this->bufferedImageVector, 0);
            this->index2++;
            const char* message = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Frame: "), appendint, this->index2), append, CommonLabels_getInstance()->ELAPSED), appendlong, ((int64_t) TimeDelayHelper_getElapsedTNT(timeHelper))), toString);
            LogUtil_putF(this->logUtil, message, this, this->commonStrings->RUN);
            ImageComparisonWorker_setRunning(this, false);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

