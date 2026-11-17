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
// #include "java/util/Vector.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/media/image/comparison/motion/Cloneable.h"

typedef struct MotionRectangle MotionRectangle;
struct MotionRectangle {
    Cloneable Cloneable_interface;
    Rectangle* rectangle;
    BasicArrayList* pixelDeltaVector;
};


MotionRectangle* MotionRectangle_new(Rectangle* rectangle);

void MotionRectangle_init(MotionRectangle* this, Rectangle* rectangle);
Rectangle* MotionRectangle_getRectangle(MotionRectangle* this);
void MotionRectangle_setRectangle(MotionRectangle* this, Rectangle* rectangle);
BasicArrayList* MotionRectangle_getPixelDeltaVector(MotionRectangle* this);
void MotionRectangle_setPixelDeltaVector(MotionRectangle* this, BasicArrayList* pixelDeltaVector);
Any* MotionRectangle_clone(MotionRectangle* this);

static void MotionRectangle_initFields(MotionRectangle* this) {
    this->rectangle = nullptr;
    this->pixelDeltaVector = nullptr;
}


void MotionRectangle_init(MotionRectangle* this, Rectangle* rectangle) {
    MotionRectangle_initFields(this);
        MotionRectangle_setRectangle(this, rectangle);
        MotionRectangle_setPixelDeltaVector(this, BasicArrayListD_new());
}

MotionRectangle* MotionRectangle_new(Rectangle* rectangle) {
    MotionRectangle* this = calloc(1, sizeof(MotionRectangle));
    MotionRectangle_init(this, rectangle);
    return this;
}


Rectangle* MotionRectangle_getRectangle(MotionRectangle* this) {
        return this->rectangle;
}


void MotionRectangle_setRectangle(MotionRectangle* this, Rectangle* rectangle) {
        this->rectangle = rectangle;
}


BasicArrayList* MotionRectangle_getPixelDeltaVector(MotionRectangle* this) {
        return this->pixelDeltaVector;
}


void MotionRectangle_setPixelDeltaVector(MotionRectangle* this, BasicArrayList* pixelDeltaVector) {
        this->pixelDeltaVector = pixelDeltaVector;
}


Any* MotionRectangle_clone(MotionRectangle* this) {
        MotionRectangle* motionRectangle = MotionRectangle_new(((Rectangle*) JAVA_CALL(MotionRectangle_getRectangle(this), clone)));
        MotionRectangle_setPixelDeltaVector(motionRectangle, ((BasicArrayList*) JAVA_CALL(MotionRectangle_getPixelDeltaVector(this), clone)));
        return motionRectangle;
}

