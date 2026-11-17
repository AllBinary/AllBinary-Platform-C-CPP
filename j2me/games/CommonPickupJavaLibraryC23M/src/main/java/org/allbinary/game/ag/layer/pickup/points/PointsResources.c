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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PointsResources PointsResources;
struct PointsResources {
    const char* RESOURCE;
    const char* RESOURCE_2;
    const char* RESOURCE_3;
    const char* RESOURCE_4;
};

static PointsResources* PointsResources_SINGLETON;

PointsResources* PointsResources_new(void);

void PointsResources_init(PointsResources* this);
PointsResources* PointsResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PointsResources_staticInit(void) {
    PointsResources_SINGLETON = PointsResources_new();
}

static void PointsResources_initFields(PointsResources* this) {
    this->RESOURCE = "points_drop_20_by_20.png";
    this->RESOURCE_2 = "points_2_drop_20_by_20.png";
    this->RESOURCE_3 = "points_3_drop_20_by_20.png";
    this->RESOURCE_4 = "points_4_drop_20_by_20.png";
}


void PointsResources_init(PointsResources* this) {
    PointsResources_initFields(this);
}

PointsResources* PointsResources_new(void) {
    PointsResources* this = calloc(1, sizeof(PointsResources));
    PointsResources_init(this);
    return this;
}


PointsResources* PointsResources_getInstance(void) {
        return PointsResources_SINGLETON;
}

