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
// package org.allbinary.input.gyro

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct OrientationMotionGestureFactory OrientationMotionGestureFactory;
struct OrientationMotionGestureFactory {
    MotionGestureInput* LEFT;
    MotionGestureInput* RIGHT;
    MotionGestureInput* UP;
    MotionGestureInput* DOWN;
    MotionGestureInput* ROLL_LEFT;
    MotionGestureInput* ROLL_RIGHT;
};

static Any* OrientationMotionGestureFactory_instance;

OrientationMotionGestureFactory* OrientationMotionGestureFactory_new(void);
OrientationMotionGestureFactory* OrientationMotionGestureFactory_getInstance(void);

void OrientationMotionGestureFactory_init(OrientationMotionGestureFactory* this);

// Static fields with runtime initializers: call this once at startup
void OrientationMotionGestureFactory_staticInit(void) {
    OrientationMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void OrientationMotionGestureFactory_initFields(OrientationMotionGestureFactory* this) {
    
    
    
    
    
    
}


OrientationMotionGestureFactory* OrientationMotionGestureFactory_getInstance(void) {
        if (OrientationMotionGestureFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            OrientationMotionGestureFactory_instance = OrientationMotionGestureFactory_new();
        }
        return ((OrientationMotionGestureFactory*) OrientationMotionGestureFactory_instance);
}


void OrientationMotionGestureFactory_init(OrientationMotionGestureFactory* this) {
    OrientationMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 20, "Left Orient");
        this->RIGHT = MotionGestureInput_new(MAX - 21, "Right Orient");
        this->UP = MotionGestureInput_new(MAX - 22, "Up Orient");
        this->DOWN = MotionGestureInput_new(MAX - 23, "Down Orient");
        this->ROLL_LEFT = MotionGestureInput_new(MAX - 24, "Roll Left");
        this->ROLL_RIGHT = MotionGestureInput_new(MAX - 25, "Roll Right");
}

OrientationMotionGestureFactory* OrientationMotionGestureFactory_new(void) {
    OrientationMotionGestureFactory* this = calloc(1, sizeof(OrientationMotionGestureFactory));
    OrientationMotionGestureFactory_init(this);
    return this;
}

