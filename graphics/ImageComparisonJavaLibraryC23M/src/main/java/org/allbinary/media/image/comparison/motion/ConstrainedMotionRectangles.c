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
// #include "java/awt/Rectangle.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"

typedef struct ConstrainedMotionRectangles ConstrainedMotionRectangles;
struct ConstrainedMotionRectangles {
    MotionRectangles base;
    LogUtil* logUtil;
    MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface;
};

static const char* ConstrainedMotionRectangles_NAME = "constrainedMotionRectangles_";

ConstrainedMotionRectangles* ConstrainedMotionRectangles_new(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles);

void ConstrainedMotionRectangles_init(ConstrainedMotionRectangles* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles);
void ConstrainedMotionRectangles_applyMotionRectangleConstraints(ConstrainedMotionRectangles* this, MotionRectangles* motionRectangles);
MotionRectangleConstraintsInterface* ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(ConstrainedMotionRectangles* this);
void ConstrainedMotionRectangles_setMotionRectangleConstraintsInterface(ConstrainedMotionRectangles* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

static void ConstrainedMotionRectangles_initFields(ConstrainedMotionRectangles* this) {
    this->logUtil = LogUtil_getInstance();
    this->motionRectangleConstraintsInterface = nullptr;
}


void ConstrainedMotionRectangles_init(ConstrainedMotionRectangles* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles) {
        MotionRectangles_init(&this->base, ConstrainedMotionRectangles_NAME, MotionRectangles_getImageComparisonResult(motionRectangles));
        ConstrainedMotionRectangles_initFields(this);
        ConstrainedMotionRectangles_setMotionRectangleConstraintsInterface(this, motionRectangleConstraintsInterface);
}

ConstrainedMotionRectangles* ConstrainedMotionRectangles_new(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles) {
    ConstrainedMotionRectangles* this = calloc(1, sizeof(ConstrainedMotionRectangles));
    ConstrainedMotionRectangles_init(this, motionRectangleConstraintsInterface, motionRectangles);
    return this;
}


// throws Exception
void ConstrainedMotionRectangles_applyMotionRectangleConstraints(ConstrainedMotionRectangles* this, MotionRectangles* motionRectangles) {
        LogUtil_putF(this->logUtil, java_concat("Start - Size Before: ", java_string_of(JAVA_CALL(MotionRectangles_getVector(motionRectangles), size))), this, "applyMotionRectangleConstraints");
        BufferedImage** bufferedImageArray = JAVA_CALL(MotionRectangles_getImageComparisonResult(motionRectangles), getBufferedImages);
        BufferedImage* bufferedImage = bufferedImageArray[1];
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList* vector2 = MotionRectangles_getVector(motionRectangles);
        int32_t size = BasicArrayList_size(vector2);
        for (int32_t index = 0; index < size; index++) {
            MotionRectangle* motionRectangle = ((MotionRectangle*) BasicArrayList_get(vector2, index));
            Rectangle* rectangle = MotionRectangle_getRectangle(motionRectangle);
            bool isTooSmall = JAVA_CALL(ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(this), isTooSmall, rectangle);
            if (isTooSmall) {
                continue;
            }
            bool isAreaTooSmall = JAVA_CALL(ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(this), isAreaTooSmall, rectangle);
            if (isAreaTooSmall) {
                continue;
            }
            bool isTooBig = JAVA_CALL(ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(this), isTooBig, rectangle);
            if (isTooBig) {
                continue;
            }
            bool isValid = JAVA_CALL(ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(this), isValid, JAVA_CALL(ConstrainedMotionRectangles_getImageComparisonResult(this), getFrameTwo), bufferedImage, MotionRectangle_getRectangle(motionRectangle));
            if (!isValid) {
                continue;
            }
            if (!isTooSmall && !isAreaTooSmall && !isTooBig && isValid) {
                BasicArrayList_add(vector, motionRectangle);
            }
        }
        ConstrainedMotionRectangles_setVector(this, vector);
}


MotionRectangleConstraintsInterface* ConstrainedMotionRectangles_getMotionRectangleConstraintsInterface(ConstrainedMotionRectangles* this) {
        return this->motionRectangleConstraintsInterface;
}


void ConstrainedMotionRectangles_setMotionRectangleConstraintsInterface(ConstrainedMotionRectangles* this, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
        this->motionRectangleConstraintsInterface = motionRectangleConstraintsInterface;
}

