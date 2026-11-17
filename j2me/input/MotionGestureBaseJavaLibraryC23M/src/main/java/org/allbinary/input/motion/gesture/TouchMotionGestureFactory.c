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

typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
struct TouchMotionGestureFactory {
    MotionGestureInput* LEFT;
    MotionGestureInput* RIGHT;
    MotionGestureInput* UP;
    MotionGestureInput* DOWN;
    MotionGestureInput* PRESSED;
    MotionGestureInput* RELEASED;
    MotionGestureInput* DIAGONAL_DOWN_RIGHT;
    MotionGestureInput* DIAGONAL_DOWN_LEFT;
    MotionGestureInput* DIAGONAL_UP_RIGHT;
    MotionGestureInput* DIAGONAL_UP_LEFT;
    MotionGestureInput* SCROLL_UP;
    MotionGestureInput* SCROLL_DOWN;
    MotionGestureInput* NO_MOTION;
    MotionGestureInput* LAST_MOTION;
};

static Any* TouchMotionGestureFactory_instance;

TouchMotionGestureFactory* TouchMotionGestureFactory_new(void);
TouchMotionGestureFactory* TouchMotionGestureFactory_getInstance(void);

void TouchMotionGestureFactory_init(TouchMotionGestureFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchMotionGestureFactory_staticInit(void) {
    TouchMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void TouchMotionGestureFactory_initFields(TouchMotionGestureFactory* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


TouchMotionGestureFactory* TouchMotionGestureFactory_getInstance(void) {
        if (TouchMotionGestureFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            TouchMotionGestureFactory_instance = TouchMotionGestureFactory_new();
        }
        return ((TouchMotionGestureFactory*) TouchMotionGestureFactory_instance);
}


void TouchMotionGestureFactory_init(TouchMotionGestureFactory* this) {
    TouchMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 3, "Left Touch");
        this->RIGHT = MotionGestureInput_new(MAX - 4, "Right Touch");
        this->UP = MotionGestureInput_new(MAX - 5, "Up Touch");
        this->DOWN = MotionGestureInput_new(MAX - 6, "Down Touch");
        this->PRESSED = MotionGestureInput_new(MAX - 7, "Screen Press");
        this->RELEASED = MotionGestureInput_new(MAX - 8, "Released");
        this->DIAGONAL_DOWN_RIGHT = MotionGestureInput_new(MAX - 9, "Diagonal Dn R");
        this->DIAGONAL_DOWN_LEFT = MotionGestureInput_new(MAX - 10, "Diagonal Dn L");
        this->DIAGONAL_UP_RIGHT = MotionGestureInput_new(MAX - 11, "Diagonal Up R");
        this->DIAGONAL_UP_LEFT = MotionGestureInput_new(MAX - 12, "Diagonal Up L");
        this->SCROLL_UP = MotionGestureInput_new(MAX - 13, "Scroll Up");
        this->SCROLL_DOWN = MotionGestureInput_new(MAX - 14, "Scroll Down");
        this->NO_MOTION = MotionGestureInput_new(MAX - 2, "No Motion");
        this->LAST_MOTION = MotionGestureInput_new(MAX - 19, "Last Motion");
}

TouchMotionGestureFactory* TouchMotionGestureFactory_new(void) {
    TouchMotionGestureFactory* this = calloc(1, sizeof(TouchMotionGestureFactory));
    TouchMotionGestureFactory_init(this);
    return this;
}

