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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TouchScreenFactory TouchScreenFactory;
struct TouchScreenFactory {
    bool multiTouch;
    bool touch;
    TouchScreenType* touchScreenType;
};

static TouchScreenFactory* TouchScreenFactory_SINGLETON;

TouchScreenFactory* TouchScreenFactory_new(void);

void TouchScreenFactory_init(TouchScreenFactory* this);
TouchScreenFactory* TouchScreenFactory_getInstance(void);
bool TouchScreenFactory_isMultiTouch(TouchScreenFactory* this);
void TouchScreenFactory_setTouch(TouchScreenFactory* this, bool touch);
bool TouchScreenFactory_isTouch(TouchScreenFactory* this);
TouchScreenType* TouchScreenFactory_getTouchScreenType(TouchScreenFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchScreenFactory_staticInit(void) {
    TouchScreenFactory_SINGLETON = TouchScreenFactory_new();
}

static void TouchScreenFactory_initFields(TouchScreenFactory* this) {
    this->multiTouch = false;
    this->touch = false;
    this->touchScreenType = TouchScreenTypesFactory_getInstance()->NOTOUCH;
}


void TouchScreenFactory_init(TouchScreenFactory* this) {
    TouchScreenFactory_initFields(this);
}

TouchScreenFactory* TouchScreenFactory_new(void) {
    TouchScreenFactory* this = calloc(1, sizeof(TouchScreenFactory));
    TouchScreenFactory_init(this);
    return this;
}


TouchScreenFactory* TouchScreenFactory_getInstance(void) {
        return TouchScreenFactory_SINGLETON;
}


bool TouchScreenFactory_isMultiTouch(TouchScreenFactory* this) {
        return this->multiTouch;
}


void TouchScreenFactory_setTouch(TouchScreenFactory* this, bool touch) {
}


bool TouchScreenFactory_isTouch(TouchScreenFactory* this) {
        return this->touch;
}


TouchScreenType* TouchScreenFactory_getTouchScreenType(TouchScreenFactory* this) {
        return this->touchScreenType;
}

