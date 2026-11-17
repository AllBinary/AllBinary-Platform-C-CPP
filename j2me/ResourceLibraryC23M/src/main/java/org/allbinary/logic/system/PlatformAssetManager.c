/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.logic.system

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/data/resource/ResourceUtil.h"

typedef struct PlatformAssetManager PlatformAssetManager;
struct PlatformAssetManager {
    char unused;
};

static PlatformAssetManager* PlatformAssetManager_instance;

PlatformAssetManager* PlatformAssetManager_new(void);
PlatformAssetManager* PlatformAssetManager_getInstance(void);
InputStream* PlatformAssetManager_getResourceAsStream(PlatformAssetManager* this, const char* resource);

// Static fields with runtime initializers: call this once at startup
void PlatformAssetManager_staticInit(void) {
    PlatformAssetManager_instance = PlatformAssetManager_new();
}

void PlatformAssetManager_init(PlatformAssetManager* this) {
}

PlatformAssetManager* PlatformAssetManager_new(void) {
    PlatformAssetManager* this = calloc(1, sizeof(PlatformAssetManager));
    PlatformAssetManager_init(this);
    return this;
}


PlatformAssetManager* PlatformAssetManager_getInstance(void) {
        return PlatformAssetManager_instance;
}


// throws Exception
InputStream* PlatformAssetManager_getResourceAsStream(PlatformAssetManager* this, const char* resource) {
        ResourceUtil* resourceUtil = ResourceUtil_getInstance();
        InputStream* inputStream = ResourceUtil_getResourceAsStream(resourceUtil, resource);
        return inputStream;
}

