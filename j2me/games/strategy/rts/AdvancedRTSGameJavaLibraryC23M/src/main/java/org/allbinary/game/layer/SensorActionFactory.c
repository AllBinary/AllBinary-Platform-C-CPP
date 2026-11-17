/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SensorActionFactory SensorActionFactory;
struct SensorActionFactory {
    SensorAction* ATTACK;
    SensorAction* EVADE;
};

static SensorActionFactory* SensorActionFactory_instance;

SensorActionFactory* SensorActionFactory_new(void);
SensorActionFactory* SensorActionFactory_getInstance(void);

void SensorActionFactory_init(SensorActionFactory* this);

// Static fields with runtime initializers: call this once at startup
void SensorActionFactory_staticInit(void) {
    SensorActionFactory_instance = SensorActionFactory_new();
}

static void SensorActionFactory_initFields(SensorActionFactory* this) {
    this->ATTACK = SensorAction_new("Attack");
    this->EVADE = SensorAction_new("Evade");
}


SensorActionFactory* SensorActionFactory_getInstance(void) {
        return SensorActionFactory_instance;
}


void SensorActionFactory_init(SensorActionFactory* this) {
    SensorActionFactory_initFields(this);
}

SensorActionFactory* SensorActionFactory_new(void) {
    SensorActionFactory* this = calloc(1, sizeof(SensorActionFactory));
    SensorActionFactory_init(this);
    return this;
}

