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
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"

typedef struct ConsolidateMotionRectangles ConsolidateMotionRectangles;
struct ConsolidateMotionRectangles {
    MotionRectangles base;
    LogUtil* logUtil;
};

static const char* ConsolidateMotionRectangles_NAME = "consolidatedMotionRectangles_";

ConsolidateMotionRectangles* ConsolidateMotionRectangles_new(MotionRectangles* motionRectangles);

void ConsolidateMotionRectangles_init(ConsolidateMotionRectangles* this, MotionRectangles* motionRectangles);
static void ConsolidateMotionRectangles_consolidateMotionRectangles(ConsolidateMotionRectangles* this);
static void ConsolidateMotionRectangles_remove(ConsolidateMotionRectangles* this, BasicArrayList* removeVector);

static void ConsolidateMotionRectangles_initFields(ConsolidateMotionRectangles* this) {
    this->logUtil = LogUtil_getInstance();
}


void ConsolidateMotionRectangles_init(ConsolidateMotionRectangles* this, MotionRectangles* motionRectangles) {
        MotionRectangles_init(&this->base, ConsolidateMotionRectangles_NAME, MotionRectangles_getImageComparisonResult(motionRectangles));
        ConsolidateMotionRectangles_initFields(this);
        BasicArrayList* vector = MotionRectangles_getVector(motionRectangles);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            MotionRectangle* motionRectangle = ((MotionRectangle*) BasicArrayList_get(vector, index));
            BasicArrayList_add(vector, MotionRectangle_clone(motionRectangle));
        }
        ConsolidateMotionRectangles_consolidateMotionRectangles(this);
}

ConsolidateMotionRectangles* ConsolidateMotionRectangles_new(MotionRectangles* motionRectangles) {
    ConsolidateMotionRectangles* this = calloc(1, sizeof(ConsolidateMotionRectangles));
    ConsolidateMotionRectangles_init(this, motionRectangles);
    return this;
}


static void ConsolidateMotionRectangles_consolidateMotionRectangles(ConsolidateMotionRectangles* this) {
        BasicArrayList* vector = ConsolidateMotionRectangles_getVector(this);
        LogUtil_putF(this->logUtil, java_concat("Start - Size Before: ", java_string_of(BasicArrayList_size(vector))), this, "consolidateMotionRectangleConstraints");
        BasicArrayList* removeVector = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            MotionRectangle* motionRectangle = ((MotionRectangle*) BasicArrayList_get(vector, index));
            for (int32_t i = index + 1; i < BasicArrayList_size(vector); i++) {
                MotionRectangle* motionRectangle2 = ((MotionRectangle*) BasicArrayList_get(vector, i));
                Rectangle* rectangle = MotionRectangle_getRectangle(motionRectangle);
                Rectangle* rectangle2 = MotionRectangle_getRectangle(motionRectangle2);
                int32_t x2 = rectangle->x + rectangle->width;
                int32_t y2 = rectangle->y + rectangle->height;
                int32_t rightX = rectangle2->x + rectangle2->width;
                int32_t bottomY = rectangle2->y + rectangle2->height;
                if (rectangle->x <= rectangle2->x && rectangle->y <= rectangle2->y && x2 >= rightX && y2 >= bottomY) {
                    BasicArrayList_add(removeVector, motionRectangle2);
                }
            }
        }
        ConsolidateMotionRectangles_remove(this, removeVector);
}


static void ConsolidateMotionRectangles_remove(ConsolidateMotionRectangles* this, BasicArrayList* removeVector) {
        BasicArrayList* vector = ConsolidateMotionRectangles_getVector(this);
        int32_t size = BasicArrayList_size(removeVector);
        for (int32_t index = 0; index < size; index++) {
            BasicArrayList_remove(vector, BasicArrayList_get(removeVector, index));
        }
}

