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

typedef struct ModifierBaseProcessor ModifierBaseProcessor;
struct ModifierBaseProcessor {
    char unused;
};

static ModifierBaseProcessor* ModifierBaseProcessor_instance;

ModifierBaseProcessor* ModifierBaseProcessor_new(void);
ModifierBaseProcessor* ModifierBaseProcessor_getInstance(void);
void ModifierBaseProcessor_updateColor(ModifierBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor);
void ModifierBaseProcessor_updateAlpha(ModifierBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, int32_t alpha);

// Static fields with runtime initializers: call this once at startup
void ModifierBaseProcessor_staticInit(void) {
    ModifierBaseProcessor_instance = ModifierBaseProcessor_new();
}

void ModifierBaseProcessor_init(ModifierBaseProcessor* this) {
}

ModifierBaseProcessor* ModifierBaseProcessor_new(void) {
    ModifierBaseProcessor* this = calloc(1, sizeof(ModifierBaseProcessor));
    ModifierBaseProcessor_init(this);
    return this;
}


ModifierBaseProcessor* ModifierBaseProcessor_getInstance(void) {
        return ModifierBaseProcessor_instance;
}


void ModifierBaseProcessor_updateColor(ModifierBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, BasicColor* basicColor) {
}


void ModifierBaseProcessor_updateAlpha(ModifierBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t index, int32_t alpha) {
}

