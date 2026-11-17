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
#include "org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h"
#include "org/allbinary/media/image/comparison/ImageComparisonWorker.h"
#include "org/allbinary/media/image/comparison/SaveImageComparisonWorker.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h"
#include "org/allbinary/media/image/comparison/motion/SaveMotionRectanglesResultsWorker.h"
#include "org/allbinary/media/image/comparison/motion/TestInputForMotionRectanglesResultsWorker.h"

typedef struct TestInputAutomationWorker TestInputAutomationWorker;
struct TestInputAutomationWorker {
    ScreenCaptureImagesWorker* captureWorker;
    ImageComparisonWorker* imageComparisonWorker;
    MotionRectanglesWorker* motionRectanglesWorker;
    SaveImageComparisonWorker* changedPixelsImageComparisonResultsWorker;
    SaveMotionRectanglesResultsWorker* saveMotionRectanglesAsImagesWorker;
    TestInputForMotionRectanglesResultsWorker* moveMouseToFirstMotionRectanglesResultsWorker;
};


TestInputAutomationWorker* TestInputAutomationWorker_new(void);

void TestInputAutomationWorker_init(TestInputAutomationWorker* this);

static void TestInputAutomationWorker_initFields(TestInputAutomationWorker* this) {
    
    this->imageComparisonWorker = nullptr;
    this->motionRectanglesWorker = nullptr;
    
    
    
}


void TestInputAutomationWorker_init(TestInputAutomationWorker* this) {
    TestInputAutomationWorker_initFields(this);
        this->captureWorker = ScreenCaptureImagesWorker_new();
        this->changedPixelsImageComparisonResultsWorker = SaveImageComparisonWorker_new();
        this->saveMotionRectanglesAsImagesWorker = SaveMotionRectanglesResultsWorker_new();
        this->moveMouseToFirstMotionRectanglesResultsWorker = TestInputForMotionRectanglesResultsWorker_new();
        MotionRectanglesWorker_addListenerInterface(this->motionRectanglesWorker, this->saveMotionRectanglesAsImagesWorker);
        MotionRectanglesWorker_addListenerInterface(this->motionRectanglesWorker, this->moveMouseToFirstMotionRectanglesResultsWorker);
        ImageComparisonWorker_addListenerInterface(this->imageComparisonWorker, this->changedPixelsImageComparisonResultsWorker);
        ImageComparisonWorker_addListenerInterface(this->imageComparisonWorker, this->motionRectanglesWorker);
        ScreenCaptureImagesWorker_addListenerInterface(this->captureWorker, this->imageComparisonWorker);
}

TestInputAutomationWorker* TestInputAutomationWorker_new(void) {
    TestInputAutomationWorker* this = calloc(1, sizeof(TestInputAutomationWorker));
    TestInputAutomationWorker_init(this);
    return this;
}

