/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct TouchScreenTypesFactory TouchScreenTypesFactory;
struct TouchScreenTypesFactory {
    TouchScreenType* FINGER;
    TouchScreenType* NOTOUCH;
    TouchScreenType* STYLUS;
    TouchScreenType* UNDEFINED;
};

static TouchScreenTypesFactory* TouchScreenTypesFactory_instance;

TouchScreenTypesFactory* TouchScreenTypesFactory_new(void);
TouchScreenTypesFactory* TouchScreenTypesFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TouchScreenTypesFactory_staticInit(void) {
    TouchScreenTypesFactory_instance = TouchScreenTypesFactory_new();
}

static void TouchScreenTypesFactory_initFields(TouchScreenTypesFactory* this) {
    this->FINGER = TouchScreenType_new("Finger");
    this->NOTOUCH = TouchScreenType_new("No Touch");
    this->STYLUS = TouchScreenType_new("Stylus");
    this->UNDEFINED = TouchScreenType_new("Undefined");
}

void TouchScreenTypesFactory_init(TouchScreenTypesFactory* this) {
    TouchScreenTypesFactory_initFields(this);
}

TouchScreenTypesFactory* TouchScreenTypesFactory_new(void) {
    TouchScreenTypesFactory* this = calloc(1, sizeof(TouchScreenTypesFactory));
    TouchScreenTypesFactory_init(this);
    return this;
}


TouchScreenTypesFactory* TouchScreenTypesFactory_getInstance(void) {
        return TouchScreenTypesFactory_instance;
}

