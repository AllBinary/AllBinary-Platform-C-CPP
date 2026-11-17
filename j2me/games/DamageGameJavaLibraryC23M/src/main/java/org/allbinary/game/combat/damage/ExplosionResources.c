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
// package org.allbinary.game.combat.damage

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ExplosionResources ExplosionResources;
struct ExplosionResources {
    const char* EXPLOSION_90_RESOURCE;
    const char* EXPLOSION_60_RESOURCE;
    const char* HALF_EXPLOSION_RESOURCE;
    const char* THIRD_EXPLOSION_RESOURCE;
};

static ExplosionResources* ExplosionResources_instance;

ExplosionResources* ExplosionResources_new(void);
ExplosionResources* ExplosionResources_getInstance(void);

void ExplosionResources_init(ExplosionResources* this);

// Static fields with runtime initializers: call this once at startup
void ExplosionResources_staticInit(void) {
    ExplosionResources_instance = ExplosionResources_new();
}

static void ExplosionResources_initFields(ExplosionResources* this) {
    this->EXPLOSION_90_RESOURCE = "/explosion_sprite_90_by_90.png";
    this->EXPLOSION_60_RESOURCE = "/explosion_sprite_60_by_60.png";
    this->HALF_EXPLOSION_RESOURCE = "/explosion_sprite_30_by_30.png";
    this->THIRD_EXPLOSION_RESOURCE = "/explosion_sprite_15_by_15.png";
}


ExplosionResources* ExplosionResources_getInstance(void) {
        return ExplosionResources_instance;
}


void ExplosionResources_init(ExplosionResources* this) {
    ExplosionResources_initFields(this);
}

ExplosionResources* ExplosionResources_new(void) {
    ExplosionResources* this = calloc(1, sizeof(ExplosionResources));
    ExplosionResources_init(this);
    return this;
}

