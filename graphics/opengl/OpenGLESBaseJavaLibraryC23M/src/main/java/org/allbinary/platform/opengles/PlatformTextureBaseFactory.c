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
// package org.allbinary.platform.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PlatformTextureBaseFactory PlatformTextureBaseFactory;
struct PlatformTextureBaseFactory {
    CommonStrings* commonStrings;
};

PlatformTextureBaseFactory* PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY;

PlatformTextureBaseFactory* PlatformTextureBaseFactory_new(void);
void PlatformTextureBaseFactory_load(PlatformTextureBaseFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

// Static fields with runtime initializers: call this once at startup
void PlatformTextureBaseFactory_staticInit(void) {
    PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY = PlatformTextureBaseFactory_new();
}

static void PlatformTextureBaseFactory_initFields(PlatformTextureBaseFactory* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void PlatformTextureBaseFactory_init(PlatformTextureBaseFactory* this) {
    PlatformTextureBaseFactory_initFields(this);
}

PlatformTextureBaseFactory* PlatformTextureBaseFactory_new(void) {
    PlatformTextureBaseFactory* this = calloc(1, sizeof(PlatformTextureBaseFactory));
    PlatformTextureBaseFactory_init(this);
    return this;
}


void PlatformTextureBaseFactory_load(PlatformTextureBaseFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip) {
}

