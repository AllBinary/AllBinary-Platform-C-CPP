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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "org/allbinary/animation/image/ModifierBaseProcessor.h"

typedef struct SetColorProcessor SetColorProcessor;
struct SetColorProcessor {
    ModifierBaseProcessor base;
};

static SetColorProcessor* SetColorProcessor_instanceC;

SetColorProcessor* SetColorProcessor_new(void);
SetColorProcessor* SetColorProcessor_getInstance(void);
void SetColorProcessor_updateColor(SetColorProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor);

// Static fields with runtime initializers: call this once at startup
void SetColorProcessor_staticInit(void) {
    SetColorProcessor_instanceC = SetColorProcessor_new();
}

void SetColorProcessor_init(SetColorProcessor* this) {
    ModifierBaseProcessor_init(&this->base);
}

SetColorProcessor* SetColorProcessor_new(void) {
    SetColorProcessor* this = calloc(1, sizeof(SetColorProcessor));
    SetColorProcessor_init(this);
    return this;
}


SetColorProcessor* SetColorProcessor_getInstance(void) {
        return SetColorProcessor_instanceC;
}


void SetColorProcessor_updateColor(SetColorProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) {
        ImageModifierUtil_setColor(imageModifierUtil, originalImage, imageToShow, index, basicColor);
}

