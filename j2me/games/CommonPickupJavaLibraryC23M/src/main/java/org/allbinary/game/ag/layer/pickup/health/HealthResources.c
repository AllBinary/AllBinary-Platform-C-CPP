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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HealthResources HealthResources;
struct HealthResources {
    const char* RESOURCE;
};

static HealthResources* HealthResources_SINGLETON;

HealthResources* HealthResources_new(void);

void HealthResources_init(HealthResources* this);
HealthResources* HealthResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void HealthResources_staticInit(void) {
    HealthResources_SINGLETON = HealthResources_new();
}

static void HealthResources_initFields(HealthResources* this) {
    this->RESOURCE = "health_drop_20_by_20.png";
}


void HealthResources_init(HealthResources* this) {
    HealthResources_initFields(this);
}

HealthResources* HealthResources_new(void) {
    HealthResources* this = calloc(1, sizeof(HealthResources));
    HealthResources_init(this);
    return this;
}


HealthResources* HealthResources_getInstance(void) {
        return HealthResources_SINGLETON;
}

