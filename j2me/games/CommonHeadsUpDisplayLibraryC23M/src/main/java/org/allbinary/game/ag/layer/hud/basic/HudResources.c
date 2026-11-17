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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HudResources HudResources;
struct HudResources {
    const char* RESOURCE_LIFE;
    const char* RESOURCE_HEALTH;
};

static HudResources* HudResources_instance;

HudResources* HudResources_new(void);
HudResources* HudResources_getInstance(void);

void HudResources_init(HudResources* this);

// Static fields with runtime initializers: call this once at startup
void HudResources_staticInit(void) {
    HudResources_instance = HudResources_new();
}

static void HudResources_initFields(HudResources* this) {
    this->RESOURCE_LIFE = "/hud_life_10_by_10.png";
    this->RESOURCE_HEALTH = "/hud_health_10_by_10.png";
}


HudResources* HudResources_getInstance(void) {
        return HudResources_instance;
}


void HudResources_init(HudResources* this) {
    HudResources_initFields(this);
}

HudResources* HudResources_new(void) {
    HudResources* this = calloc(1, sizeof(HudResources));
    HudResources_init(this);
    return this;
}

