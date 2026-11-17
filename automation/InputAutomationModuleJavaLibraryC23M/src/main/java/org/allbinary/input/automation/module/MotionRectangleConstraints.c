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
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"

typedef struct MotionRectangleConstraints MotionRectangleConstraints;
struct MotionRectangleConstraints {
    MotionRectangleConstraintsInterface MotionRectangleConstraintsInterface_interface;
    Dimension* minDimension;
    Dimension* maxDimension;
    int32_t maxMotionRectangles;
    int32_t minArea;
};


MotionRectangleConstraints* MotionRectangleConstraints_new(void);

void MotionRectangleConstraints_init(MotionRectangleConstraints* this);
Dimension* MotionRectangleConstraints_getMinDimension(MotionRectangleConstraints* this);
Dimension* MotionRectangleConstraints_getMaxDimension(MotionRectangleConstraints* this);
bool MotionRectangleConstraints_isTooSmall(MotionRectangleConstraints* this, Rectangle* rectangle);
bool MotionRectangleConstraints_isAreaTooSmall(MotionRectangleConstraints* this, Rectangle* rectangle);
bool MotionRectangleConstraints_isTooBig(MotionRectangleConstraints* this, Rectangle* rectangle);
bool MotionRectangleConstraints_isValid(MotionRectangleConstraints* this, int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle);
void MotionRectangleConstraints_setMinDimension(MotionRectangleConstraints* this, Dimension* minDimension);
void MotionRectangleConstraints_setMaxDimension(MotionRectangleConstraints* this, Dimension* maxDimension);
int32_t MotionRectangleConstraints_getMaxMotionRectangles(MotionRectangleConstraints* this);
void MotionRectangleConstraints_setMaxMotionRectangles(MotionRectangleConstraints* this, int32_t maxMotionRectangles);
int32_t MotionRectangleConstraints_getMinArea(MotionRectangleConstraints* this);
void MotionRectangleConstraints_setMinArea(MotionRectangleConstraints* this, int32_t minArea);

static void MotionRectangleConstraints_initFields(MotionRectangleConstraints* this) {
    this->minDimension = nullptr;
    this->maxDimension = nullptr;
    this->maxMotionRectangles = 0;
    this->minArea = 0;
}


void MotionRectangleConstraints_init(MotionRectangleConstraints* this) {
    MotionRectangleConstraints_initFields(this);
}

MotionRectangleConstraints* MotionRectangleConstraints_new(void) {
    MotionRectangleConstraints* this = calloc(1, sizeof(MotionRectangleConstraints));
    MotionRectangleConstraints_init(this);
    return this;
}


Dimension* MotionRectangleConstraints_getMinDimension(MotionRectangleConstraints* this) {
        return this->minDimension;
}


Dimension* MotionRectangleConstraints_getMaxDimension(MotionRectangleConstraints* this) {
        return this->maxDimension;
}


bool MotionRectangleConstraints_isTooSmall(MotionRectangleConstraints* this, Rectangle* rectangle) {
        if (rectangle->width < MotionRectangleConstraints_getMinDimension(this)->width || rectangle->height < MotionRectangleConstraints_getMinDimension(this)->height) {
            return true;
        } else {
            return false;
        }
}


bool MotionRectangleConstraints_isAreaTooSmall(MotionRectangleConstraints* this, Rectangle* rectangle) {
        if (rectangle->width * rectangle->height < MotionRectangleConstraints_getMinArea(this)) {
            return true;
        } else {
            return false;
        }
}


bool MotionRectangleConstraints_isTooBig(MotionRectangleConstraints* this, Rectangle* rectangle) {
        if (rectangle->width > MotionRectangleConstraints_getMaxDimension(this)->width || rectangle->height > MotionRectangleConstraints_getMaxDimension(this)->height) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
bool MotionRectangleConstraints_isValid(MotionRectangleConstraints* this, int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void MotionRectangleConstraints_setMinDimension(MotionRectangleConstraints* this, Dimension* minDimension) {
        this->minDimension = minDimension;
}


void MotionRectangleConstraints_setMaxDimension(MotionRectangleConstraints* this, Dimension* maxDimension) {
        this->maxDimension = maxDimension;
}


int32_t MotionRectangleConstraints_getMaxMotionRectangles(MotionRectangleConstraints* this) {
        return this->maxMotionRectangles;
}


void MotionRectangleConstraints_setMaxMotionRectangles(MotionRectangleConstraints* this, int32_t maxMotionRectangles) {
        this->maxMotionRectangles = maxMotionRectangles;
}


int32_t MotionRectangleConstraints_getMinArea(MotionRectangleConstraints* this) {
        return this->minArea;
}


void MotionRectangleConstraints_setMinArea(MotionRectangleConstraints* this, int32_t minArea) {
        this->minArea = minArea;
}

