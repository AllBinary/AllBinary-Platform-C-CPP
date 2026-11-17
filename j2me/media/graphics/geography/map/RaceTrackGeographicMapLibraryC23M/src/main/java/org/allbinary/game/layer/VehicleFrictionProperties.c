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
#include "org/allbinary/game/physics/FrictionProperties.h"
#include "org/allbinary/game/physics/friction/FrictionData.h"

typedef struct VehicleFrictionProperties VehicleFrictionProperties;
struct VehicleFrictionProperties {
    FrictionProperties base;
    int32_t TIRE_FRICTION_NOMINATOR;
    int32_t BRAKE_FRICTION_NOMINATOR;
    int32_t AIR_FRICTION_NOMINATOR;
    int32_t CRASH_FRICTION_NOMINATOR;
};


VehicleFrictionProperties* VehicleFrictionProperties_new(int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction);

void VehicleFrictionProperties_init(VehicleFrictionProperties* this, int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction);
int32_t VehicleFrictionProperties_getTireFrictionNominator(VehicleFrictionProperties* this);
int32_t VehicleFrictionProperties_getBrakeFrictionNominator(VehicleFrictionProperties* this);
int32_t VehicleFrictionProperties_getAirFrictionNominator(VehicleFrictionProperties* this);
int32_t VehicleFrictionProperties_getCrashFrictionNominator(VehicleFrictionProperties* this);

static void VehicleFrictionProperties_initFields(VehicleFrictionProperties* this) {
    
    
    
    
}


void VehicleFrictionProperties_init(VehicleFrictionProperties* this, int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction) {
    FrictionProperties_init(&this->base);
    VehicleFrictionProperties_initFields(this);
        this->TIRE_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - tireFriction;
        this->BRAKE_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - brakeFriction;
        this->AIR_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - airFriction;
        this->CRASH_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - crashFriction;
}

VehicleFrictionProperties* VehicleFrictionProperties_new(int32_t tireFriction, int32_t brakeFriction, int32_t airFriction, int32_t crashFriction) {
    VehicleFrictionProperties* this = calloc(1, sizeof(VehicleFrictionProperties));
    VehicleFrictionProperties_init(this, tireFriction, brakeFriction, airFriction, crashFriction);
    return this;
}


int32_t VehicleFrictionProperties_getTireFrictionNominator(VehicleFrictionProperties* this) {
        return this->TIRE_FRICTION_NOMINATOR;
}


int32_t VehicleFrictionProperties_getBrakeFrictionNominator(VehicleFrictionProperties* this) {
        return this->BRAKE_FRICTION_NOMINATOR;
}


int32_t VehicleFrictionProperties_getAirFrictionNominator(VehicleFrictionProperties* this) {
        return this->AIR_FRICTION_NOMINATOR;
}


int32_t VehicleFrictionProperties_getCrashFrictionNominator(VehicleFrictionProperties* this) {
        return this->CRASH_FRICTION_NOMINATOR;
}

