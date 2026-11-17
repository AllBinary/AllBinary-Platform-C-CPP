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

typedef struct ChangeColorProcessor ChangeColorProcessor;
struct ChangeColorProcessor {
    ModifierBaseProcessor base;
};

static ChangeColorProcessor* ChangeColorProcessor_instanceC;

ChangeColorProcessor* ChangeColorProcessor_new(void);
ChangeColorProcessor* ChangeColorProcessor_getInstance(void);
void ChangeColorProcessor_updateColor(ChangeColorProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor);

// Static fields with runtime initializers: call this once at startup
void ChangeColorProcessor_staticInit(void) {
    ChangeColorProcessor_instanceC = ChangeColorProcessor_new();
}

void ChangeColorProcessor_init(ChangeColorProcessor* this) {
    ModifierBaseProcessor_init(&this->base);
}

ChangeColorProcessor* ChangeColorProcessor_new(void) {
    ChangeColorProcessor* this = calloc(1, sizeof(ChangeColorProcessor));
    ChangeColorProcessor_init(this);
    return this;
}


ChangeColorProcessor* ChangeColorProcessor_getInstance(void) {
        return ChangeColorProcessor_instanceC;
}


void ChangeColorProcessor_updateColor(ChangeColorProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) {
        ImageModifierUtil_changeColor(imageModifierUtil, originalImage, imageToShow, index, basicColor);
}

