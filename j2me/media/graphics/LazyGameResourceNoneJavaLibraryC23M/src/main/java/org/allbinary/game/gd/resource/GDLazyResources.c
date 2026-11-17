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

typedef struct GDLazyResources GDLazyResources;
struct GDLazyResources {
    int32_t* imageResourceWidthArray;
    int32_t* imageResourceHeightArray;
    const char** requiredResourcesBeforeLoadingArray;
};

static GDLazyResources* GDLazyResources_instance;

GDLazyResources* GDLazyResources_new(void);
GDLazyResources* GDLazyResources_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GDLazyResources_staticInit(void) {
    GDLazyResources_instance = GDLazyResources_new();
}

static void GDLazyResources_initFields(GDLazyResources* this) {
    this->imageResourceWidthArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){  }) / sizeof(int32_t), (int32_t[]){  }));
    this->imageResourceHeightArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){  }) / sizeof(int32_t), (int32_t[]){  }));
    this->requiredResourcesBeforeLoadingArray = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){  }) / sizeof(const char*), (const char*[]){  }));
}

void GDLazyResources_init(GDLazyResources* this) {
    GDLazyResources_initFields(this);
}

GDLazyResources* GDLazyResources_new(void) {
    GDLazyResources* this = calloc(1, sizeof(GDLazyResources));
    GDLazyResources_init(this);
    return this;
}


GDLazyResources* GDLazyResources_getInstance(void) {
        return GDLazyResources_instance;
}

