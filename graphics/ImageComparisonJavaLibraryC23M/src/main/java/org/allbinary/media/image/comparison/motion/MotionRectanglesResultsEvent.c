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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct MotionRectanglesResultsEvent MotionRectanglesResultsEvent;
struct MotionRectanglesResultsEvent {
    AllBinaryEventObject base;
    int64_t frame;
    MotionRectangles* motionRectangles;
};


MotionRectanglesResultsEvent* MotionRectanglesResultsEvent_new(Any* anyType, int64_t frame, MotionRectangles* motionRectangles);

void MotionRectanglesResultsEvent_init(MotionRectanglesResultsEvent* this, Any* anyType, int64_t frame, MotionRectangles* motionRectangles);
MotionRectangles* MotionRectanglesResultsEvent_getMotionRectangles(MotionRectanglesResultsEvent* this);
void MotionRectanglesResultsEvent_setMotionRectangles(MotionRectanglesResultsEvent* this, MotionRectangles* motionRectangles);
int64_t MotionRectanglesResultsEvent_getFrame(MotionRectanglesResultsEvent* this);

static void MotionRectanglesResultsEvent_initFields(MotionRectanglesResultsEvent* this) {
    
    this->motionRectangles = nullptr;
}


void MotionRectanglesResultsEvent_init(MotionRectanglesResultsEvent* this, Any* anyType, int64_t frame, MotionRectangles* motionRectangles) {
        AllBinaryEventObject_init(&this->base, anyType);
        MotionRectanglesResultsEvent_initFields(this);
        this->frame = frame;
        MotionRectanglesResultsEvent_setMotionRectangles(this, motionRectangles);
}

MotionRectanglesResultsEvent* MotionRectanglesResultsEvent_new(Any* anyType, int64_t frame, MotionRectangles* motionRectangles) {
    MotionRectanglesResultsEvent* this = calloc(1, sizeof(MotionRectanglesResultsEvent));
    MotionRectanglesResultsEvent_init(this, anyType, frame, motionRectangles);
    return this;
}


MotionRectangles* MotionRectanglesResultsEvent_getMotionRectangles(MotionRectanglesResultsEvent* this) {
        return this->motionRectangles;
}


void MotionRectanglesResultsEvent_setMotionRectangles(MotionRectanglesResultsEvent* this, MotionRectangles* motionRectangles) {
        this->motionRectangles = motionRectangles;
}


int64_t MotionRectanglesResultsEvent_getFrame(MotionRectanglesResultsEvent* this) {
        return this->frame;
}

