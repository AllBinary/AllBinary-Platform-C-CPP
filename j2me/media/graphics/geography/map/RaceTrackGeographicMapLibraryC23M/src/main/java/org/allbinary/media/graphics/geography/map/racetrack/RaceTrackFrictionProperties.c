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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/physics/friction/FrictionData.h"

typedef struct RaceTrackFrictionProperties RaceTrackFrictionProperties;
struct RaceTrackFrictionProperties {
    int32_t ROAD_FRICTION_NOMINATOR;
    int32_t GROUND_FRICTION_NOMINATOR;
};


RaceTrackFrictionProperties* RaceTrackFrictionProperties_new(int32_t roadFriction, int32_t groundFriction);

void RaceTrackFrictionProperties_init(RaceTrackFrictionProperties* this, int32_t roadFriction, int32_t groundFriction);
int32_t RaceTrackFrictionProperties_getRoadFrictionNominator(RaceTrackFrictionProperties* this);
int32_t RaceTrackFrictionProperties_getGroundFrictionNominator(RaceTrackFrictionProperties* this);

static void RaceTrackFrictionProperties_initFields(RaceTrackFrictionProperties* this) {
    
    
}


void RaceTrackFrictionProperties_init(RaceTrackFrictionProperties* this, int32_t roadFriction, int32_t groundFriction) {
    RaceTrackFrictionProperties_initFields(this);
        this->ROAD_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - roadFriction;
        this->GROUND_FRICTION_NOMINATOR = FrictionData_getFrictionDenominator() - groundFriction;
}

RaceTrackFrictionProperties* RaceTrackFrictionProperties_new(int32_t roadFriction, int32_t groundFriction) {
    RaceTrackFrictionProperties* this = calloc(1, sizeof(RaceTrackFrictionProperties));
    RaceTrackFrictionProperties_init(this, roadFriction, groundFriction);
    return this;
}


int32_t RaceTrackFrictionProperties_getRoadFrictionNominator(RaceTrackFrictionProperties* this) {
        return this->ROAD_FRICTION_NOMINATOR;
}


int32_t RaceTrackFrictionProperties_getGroundFrictionNominator(RaceTrackFrictionProperties* this) {
        return this->GROUND_FRICTION_NOMINATOR;
}

