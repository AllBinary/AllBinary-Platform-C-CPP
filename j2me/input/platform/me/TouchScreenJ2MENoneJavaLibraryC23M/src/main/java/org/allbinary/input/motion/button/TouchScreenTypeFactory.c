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

typedef struct TouchScreenTypeFactory TouchScreenTypeFactory;
struct TouchScreenTypeFactory {
    char unused;
};

static TouchScreenTypeFactory* TouchScreenTypeFactory_instance;

TouchScreenTypeFactory* TouchScreenTypeFactory_new(void);
TouchScreenTypeFactory* TouchScreenTypeFactory_getInstance(void);
void TouchScreenTypeFactory_TouchScreenTypeFactory(TouchScreenTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchScreenTypeFactory_staticInit(void) {
    TouchScreenTypeFactory_instance = TouchScreenTypeFactory_new();
}

void TouchScreenTypeFactory_init(TouchScreenTypeFactory* this) {
}

TouchScreenTypeFactory* TouchScreenTypeFactory_new(void) {
    TouchScreenTypeFactory* this = calloc(1, sizeof(TouchScreenTypeFactory));
    TouchScreenTypeFactory_init(this);
    return this;
}


TouchScreenTypeFactory* TouchScreenTypeFactory_getInstance(void) {
        return TouchScreenTypeFactory_instance;
}


void TouchScreenTypeFactory_TouchScreenTypeFactory(TouchScreenTypeFactory* this) {
        TouchScreenFactory* touchScreenFactory = TouchScreenFactory_getInstance();
        TouchScreenFactory_setTouch(touchScreenFactory, false);
}

