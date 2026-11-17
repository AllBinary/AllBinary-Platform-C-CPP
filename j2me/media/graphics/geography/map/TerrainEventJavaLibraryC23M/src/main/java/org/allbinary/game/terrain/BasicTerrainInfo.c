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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"

typedef struct BasicTerrainInfo BasicTerrainInfo;
struct BasicTerrainInfo {
    Angle* angle;
};

BasicTerrainInfo* BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO;

BasicTerrainInfo* BasicTerrainInfo_new(Angle* angle);

void BasicTerrainInfo_init(BasicTerrainInfo* this, Angle* angle);
Angle* BasicTerrainInfo_getAngle(BasicTerrainInfo* this);
void BasicTerrainInfo_setAngle(BasicTerrainInfo* this, Angle* angle);

// Static fields with runtime initializers: call this once at startup
void BasicTerrainInfo_staticInit(void) {
    BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO = BasicTerrainInfo_new(AngleFactory_getInstance()->NOT_ANGLE);
}

static void BasicTerrainInfo_initFields(BasicTerrainInfo* this) {
    
}


void BasicTerrainInfo_init(BasicTerrainInfo* this, Angle* angle) {
    BasicTerrainInfo_initFields(this);
        this->angle = angle;
}

BasicTerrainInfo* BasicTerrainInfo_new(Angle* angle) {
    BasicTerrainInfo* this = calloc(1, sizeof(BasicTerrainInfo));
    BasicTerrainInfo_init(this, angle);
    return this;
}


Angle* BasicTerrainInfo_getAngle(BasicTerrainInfo* this) {
        return this->angle;
}


void BasicTerrainInfo_setAngle(BasicTerrainInfo* this, Angle* angle) {
        this->angle = angle;
}

