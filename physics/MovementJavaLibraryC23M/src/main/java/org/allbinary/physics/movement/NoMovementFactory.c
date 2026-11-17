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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NoMovementFactory NoMovementFactory;
struct NoMovementFactory {
    Movement* movement;
};

static NoMovementFactory* NoMovementFactory_instance;

NoMovementFactory* NoMovementFactory_new(void);
NoMovementFactory* NoMovementFactory_getInstance(void);
Movement* NoMovementFactory_getMovmentInstance(NoMovementFactory* this);

// Static fields with runtime initializers: call this once at startup
void NoMovementFactory_staticInit(void) {
    NoMovementFactory_instance = NoMovementFactory_new();
}

static void NoMovementFactory_initFields(NoMovementFactory* this) {
    this->movement = Movement_new();
}

void NoMovementFactory_init(NoMovementFactory* this) {
    NoMovementFactory_initFields(this);
}

NoMovementFactory* NoMovementFactory_new(void) {
    NoMovementFactory* this = calloc(1, sizeof(NoMovementFactory));
    NoMovementFactory_init(this);
    return this;
}


NoMovementFactory* NoMovementFactory_getInstance(void) {
        return NoMovementFactory_instance;
}


Movement* NoMovementFactory_getMovmentInstance(NoMovementFactory* this) {
        return this->movement;
}

