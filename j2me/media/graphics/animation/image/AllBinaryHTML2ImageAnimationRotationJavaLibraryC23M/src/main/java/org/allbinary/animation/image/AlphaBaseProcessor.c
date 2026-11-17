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

typedef struct AlphaBaseProcessor AlphaBaseProcessor;
struct AlphaBaseProcessor {
    char unused;
};

static AlphaBaseProcessor* AlphaBaseProcessor_instance;

AlphaBaseProcessor* AlphaBaseProcessor_new(void);
AlphaBaseProcessor* AlphaBaseProcessor_getInstance(void);
void AlphaBaseProcessor_setAlpha(AlphaBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha);

// Static fields with runtime initializers: call this once at startup
void AlphaBaseProcessor_staticInit(void) {
    AlphaBaseProcessor_instance = AlphaBaseProcessor_new();
}

void AlphaBaseProcessor_init(AlphaBaseProcessor* this) {
}

AlphaBaseProcessor* AlphaBaseProcessor_new(void) {
    AlphaBaseProcessor* this = calloc(1, sizeof(AlphaBaseProcessor));
    AlphaBaseProcessor_init(this);
    return this;
}


AlphaBaseProcessor* AlphaBaseProcessor_getInstance(void) {
        return AlphaBaseProcessor_instance;
}


void AlphaBaseProcessor_setAlpha(AlphaBaseProcessor* this, ImageModifierUtil* imageModifierUtil, Image* originalImage, Image* imageToShow, int32_t alpha) {
}

