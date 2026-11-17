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
// package org.allbinary.animation.transition.shake

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ShakeEventFactory ShakeEventFactory;
struct ShakeEventFactory {
    ShakeEvent* MICRO;
    ShakeEvent* SMALL;
    ShakeEvent* MEDIUM;
    ShakeEvent* LARGE;
};

static ShakeEventFactory* ShakeEventFactory_instance;

ShakeEventFactory* ShakeEventFactory_new(void);
ShakeEventFactory* ShakeEventFactory_getInstance(void);
void ShakeEventFactory_init(ShakeEventFactory* this);

// Static fields with runtime initializers: call this once at startup
void ShakeEventFactory_staticInit(void) {
    ShakeEventFactory_instance = ShakeEventFactory_new();
}

static void ShakeEventFactory_initFields(ShakeEventFactory* this) {
    this->MICRO = ShakeEvent_new();
    this->SMALL = ShakeEvent_new();
    this->MEDIUM = ShakeEvent_new();
    this->LARGE = ShakeEvent_new();
}

void ShakeEventFactory_init(ShakeEventFactory* this) {
    ShakeEventFactory_initFields(this);
}

ShakeEventFactory* ShakeEventFactory_new(void) {
    ShakeEventFactory* this = calloc(1, sizeof(ShakeEventFactory));
    ShakeEventFactory_init(this);
    return this;
}


ShakeEventFactory* ShakeEventFactory_getInstance(void) {
        return ShakeEventFactory_instance;
}


void ShakeEventFactory_init(ShakeEventFactory* this) {
}

