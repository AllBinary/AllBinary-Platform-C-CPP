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
// package org.allbinary.input.motion.gesture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct TrackballMotionGestureFactory TrackballMotionGestureFactory;
struct TrackballMotionGestureFactory {
    MotionGestureInput* LEFT;
    MotionGestureInput* RIGHT;
    MotionGestureInput* UP;
    MotionGestureInput* DOWN;
};

static Any* TrackballMotionGestureFactory_instance;

TrackballMotionGestureFactory* TrackballMotionGestureFactory_new(void);
TrackballMotionGestureFactory* TrackballMotionGestureFactory_getInstance(void);

void TrackballMotionGestureFactory_init(TrackballMotionGestureFactory* this);

// Static fields with runtime initializers: call this once at startup
void TrackballMotionGestureFactory_staticInit(void) {
    TrackballMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void TrackballMotionGestureFactory_initFields(TrackballMotionGestureFactory* this) {
    
    
    
    
}


TrackballMotionGestureFactory* TrackballMotionGestureFactory_getInstance(void) {
        if (TrackballMotionGestureFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            TrackballMotionGestureFactory_instance = TrackballMotionGestureFactory_new();
        }
        return ((TrackballMotionGestureFactory*) TrackballMotionGestureFactory_instance);
}


void TrackballMotionGestureFactory_init(TrackballMotionGestureFactory* this) {
    TrackballMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 26, "L Trackball");
        this->RIGHT = MotionGestureInput_new(MAX - 27, "R Trackball");
        this->UP = MotionGestureInput_new(MAX - 28, "Up Trackball");
        this->DOWN = MotionGestureInput_new(MAX - 29, "D Trackball");
}

TrackballMotionGestureFactory* TrackballMotionGestureFactory_new(void) {
    TrackballMotionGestureFactory* this = calloc(1, sizeof(TrackballMotionGestureFactory));
    TrackballMotionGestureFactory_init(this);
    return this;
}

