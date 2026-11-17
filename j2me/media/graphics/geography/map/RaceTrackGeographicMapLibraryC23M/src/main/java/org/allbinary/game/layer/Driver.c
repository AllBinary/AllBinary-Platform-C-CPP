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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct Driver Driver;
struct Driver {
    int32_t turnSpeed;
    int32_t trackPathSelectionSkill;
    Aggression* aggression;
};

Driver* Driver_NULL_DRIVER;

Driver* Driver_new(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression);

void Driver_init(Driver* this, int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression);
int32_t Driver_getTurnSpeed(Driver* this);
void Driver_setTurnSpeed(Driver* this, int32_t turnSpeed);
int32_t Driver_getTrackPathSelectionSkill(Driver* this);
void Driver_setTrackPathSelectionSkill(Driver* this, int32_t trackPathSelectionSkill);
Aggression* Driver_getAggression(Driver* this);
void Driver_setAggression(Driver* this, Aggression* aggression);

// Static fields with runtime initializers: call this once at startup
void Driver_staticInit(void) {
    Driver_NULL_DRIVER = Driver_new(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0), Aggression_new(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0)));
}

static void Driver_initFields(Driver* this) {
    this->turnSpeed = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    this->trackPathSelectionSkill = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
    
}


void Driver_init(Driver* this, int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression) {
    Driver_initFields(this);
        Driver_setTurnSpeed(this, turnSpeed);
        Driver_setTrackPathSelectionSkill(this, trackPathSelectionSkill);
        this->aggression = aggression;
}

Driver* Driver_new(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression) {
    Driver* this = calloc(1, sizeof(Driver));
    Driver_init(this, turnSpeed, trackPathSelectionSkill, aggression);
    return this;
}


int32_t Driver_getTurnSpeed(Driver* this) {
        return this->turnSpeed;
}


void Driver_setTurnSpeed(Driver* this, int32_t turnSpeed) {
        this->turnSpeed = turnSpeed;
}


int32_t Driver_getTrackPathSelectionSkill(Driver* this) {
        return this->trackPathSelectionSkill;
}


void Driver_setTrackPathSelectionSkill(Driver* this, int32_t trackPathSelectionSkill) {
        this->trackPathSelectionSkill = trackPathSelectionSkill;
}


Aggression* Driver_getAggression(Driver* this) {
        return this->aggression;
}


void Driver_setAggression(Driver* this, Aggression* aggression) {
        this->aggression = aggression;
}

