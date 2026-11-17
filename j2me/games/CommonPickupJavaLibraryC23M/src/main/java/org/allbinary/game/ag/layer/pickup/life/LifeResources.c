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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LifeResources LifeResources;
struct LifeResources {
    const char* RESOURCE;
};

static LifeResources* LifeResources_SINGLETON;

LifeResources* LifeResources_new(void);

void LifeResources_init(LifeResources* this);
LifeResources* LifeResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LifeResources_staticInit(void) {
    LifeResources_SINGLETON = LifeResources_new();
}

static void LifeResources_initFields(LifeResources* this) {
    this->RESOURCE = "life_drop_20_by_20.png";
}


void LifeResources_init(LifeResources* this) {
    LifeResources_initFields(this);
}

LifeResources* LifeResources_new(void) {
    LifeResources* this = calloc(1, sizeof(LifeResources));
    LifeResources_init(this);
    return this;
}


LifeResources* LifeResources_getInstance(void) {
        return LifeResources_SINGLETON;
}

