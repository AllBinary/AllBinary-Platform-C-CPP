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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LockedResources LockedResources;
struct LockedResources {
    const char* LOCKED_DEMO_GAME_FEATURE_RESOURCE;
};

static LockedResources* LockedResources_instance;

LockedResources* LockedResources_new(void);
LockedResources* LockedResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LockedResources_staticInit(void) {
    LockedResources_instance = LockedResources_new();
}

static void LockedResources_initFields(LockedResources* this) {
    this->LOCKED_DEMO_GAME_FEATURE_RESOURCE = "/locked_demo_game_feature_64_by_64.png";
}

void LockedResources_init(LockedResources* this) {
    LockedResources_initFields(this);
}

LockedResources* LockedResources_new(void) {
    LockedResources* this = calloc(1, sizeof(LockedResources));
    LockedResources_init(this);
    return this;
}


LockedResources* LockedResources_getInstance(void) {
        return LockedResources_instance;
}

