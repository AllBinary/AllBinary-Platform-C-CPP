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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/animation/image/AlphaBaseProcessor.h"

typedef struct AlphaProcessor AlphaProcessor;
struct AlphaProcessor {
    AlphaBaseProcessor base;
};

static AlphaProcessor* AlphaProcessor_instanceC;

AlphaProcessor* AlphaProcessor_new(void);
AlphaProcessor* AlphaProcessor_getInstance(void);
void AlphaProcessor_setAlpha(AlphaProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha);

// Static fields with runtime initializers: call this once at startup
void AlphaProcessor_staticInit(void) {
    AlphaProcessor_instanceC = AlphaProcessor_new();
}

void AlphaProcessor_init(AlphaProcessor* this) {
    AlphaBaseProcessor_init(&this->base);
}

AlphaProcessor* AlphaProcessor_new(void) {
    AlphaProcessor* this = calloc(1, sizeof(AlphaProcessor));
    AlphaProcessor_init(this);
    return this;
}


AlphaProcessor* AlphaProcessor_getInstance(void) {
        return AlphaProcessor_instanceC;
}


void AlphaProcessor_setAlpha(AlphaProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha) {
        ImageModifierUtil_setAlpha3(imageModifierUtil, imageToShow, alpha);
}

