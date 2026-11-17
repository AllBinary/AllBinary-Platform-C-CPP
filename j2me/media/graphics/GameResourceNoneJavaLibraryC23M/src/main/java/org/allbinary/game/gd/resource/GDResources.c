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
// package org.allbinary.game.gd.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GDResources GDResources;
struct GDResources {
    const char** resourceStringArray;
    int32_t currentLayoutRequiredTotal;
};

static GDResources* GDResources_instance;

GDResources* GDResources_new(void);
GDResources* GDResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GDResources_staticInit(void) {
    GDResources_instance = GDResources_new();
}

static void GDResources_initFields(GDResources* this) {
    this->resourceStringArray = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){  }) / sizeof(const char*), (const char*[]){  }));
    this->currentLayoutRequiredTotal = 0;
}

void GDResources_init(GDResources* this) {
    GDResources_initFields(this);
}

GDResources* GDResources_new(void) {
    GDResources* this = calloc(1, sizeof(GDResources));
    GDResources_init(this);
    return this;
}


GDResources* GDResources_getInstance(void) {
        return GDResources_instance;
}

