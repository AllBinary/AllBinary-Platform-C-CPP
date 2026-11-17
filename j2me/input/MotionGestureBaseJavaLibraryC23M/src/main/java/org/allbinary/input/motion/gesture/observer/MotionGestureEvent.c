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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct MotionGestureEvent MotionGestureEvent;
struct MotionGestureEvent {
    AllBinaryEventObject base;
    MotionGestureInput* motionGesture;
    int32_t id;
    GPoint* previousPoint;
    GPoint* currentPoint;
    CommonLabels* commonLabels;
};

static const char* MotionGestureEvent_PREVIOUS = " Previous: ";
static const char* MotionGestureEvent_HASHCODE = " hashcode: ";

MotionGestureEvent* MotionGestureEvent_new(Any* source, int32_t id, MotionGestureInput* motionGesture);

void MotionGestureEvent_init(MotionGestureEvent* this, Any* source, int32_t id, MotionGestureInput* motionGesture);
MotionGestureInput* MotionGestureEvent_getMotionGesture(MotionGestureEvent* this);
void MotionGestureEvent_setMotionGesture(MotionGestureEvent* this, MotionGestureInput* motionGesture);
GPoint* MotionGestureEvent_getPreviousPoint(MotionGestureEvent* this);
void MotionGestureEvent_setPreviousPoint(MotionGestureEvent* this, GPoint* previousPoint);
GPoint* MotionGestureEvent_getCurrentPoint(MotionGestureEvent* this);
void MotionGestureEvent_setCurrentPoint(MotionGestureEvent* this, GPoint* currentPoint);
const char* MotionGestureEvent_toString(MotionGestureEvent* this);
int32_t MotionGestureEvent_getId(MotionGestureEvent* this);

static void MotionGestureEvent_initFields(MotionGestureEvent* this) {
    this->motionGesture = TouchMotionGestureFactory_getInstance()->NO_MOTION;
    
    this->previousPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->currentPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->commonLabels = CommonLabels_getInstance();
}


void MotionGestureEvent_init(MotionGestureEvent* this, Any* source, int32_t id, MotionGestureInput* motionGesture) {
        AllBinaryEventObject_init(&this->base, source);
        MotionGestureEvent_initFields(this);
        this->id = id;
        MotionGestureEvent_setMotionGesture(this, motionGesture);
}

MotionGestureEvent* MotionGestureEvent_new(Any* source, int32_t id, MotionGestureInput* motionGesture) {
    MotionGestureEvent* this = calloc(1, sizeof(MotionGestureEvent));
    MotionGestureEvent_init(this, source, id, motionGesture);
    return this;
}


MotionGestureInput* MotionGestureEvent_getMotionGesture(MotionGestureEvent* this) {
        return this->motionGesture;
}


void MotionGestureEvent_setMotionGesture(MotionGestureEvent* this, MotionGestureInput* motionGesture) {
        this->motionGesture = motionGesture;
}


GPoint* MotionGestureEvent_getPreviousPoint(MotionGestureEvent* this) {
        return this->previousPoint;
}


void MotionGestureEvent_setPreviousPoint(MotionGestureEvent* this, GPoint* previousPoint) {
        this->previousPoint = previousPoint;
}


GPoint* MotionGestureEvent_getCurrentPoint(MotionGestureEvent* this) {
        return this->currentPoint;
}


void MotionGestureEvent_setCurrentPoint(MotionGestureEvent* this, GPoint* currentPoint) {
        this->currentPoint = currentPoint;
}


const char* MotionGestureEvent_toString(MotionGestureEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->motionGesture));
        StringMaker_append(stringBuffer, this->commonLabels->CURRENT);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->currentPoint));
        StringMaker_append(stringBuffer, MotionGestureEvent_PREVIOUS);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, this->previousPoint));
        StringMaker_append(stringBuffer, MotionGestureEvent_HASHCODE);
        StringMaker_appendint(stringBuffer, ((int32_t) TsUtil_hashCode(TsUtil_getInstance(), this)));
        return StringMaker_toString(stringBuffer);
}


int32_t MotionGestureEvent_getId(MotionGestureEvent* this) {
        return this->id;
}

