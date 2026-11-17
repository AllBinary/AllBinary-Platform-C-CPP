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

typedef struct ScaleBaseProcessor ScaleBaseProcessor;
struct ScaleBaseProcessor {
    char unused;
};

static ScaleBaseProcessor* ScaleBaseProcessor_instance;

ScaleBaseProcessor* ScaleBaseProcessor_new(void);
ScaleBaseProcessor* ScaleBaseProcessor_getInstance(void);
void ScaleBaseProcessor_update(ScaleBaseProcessor* this, Image* originalImage, Image** originalImageArray, Image** imageToShowArray, int32_t index, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

// Static fields with runtime initializers: call this once at startup
void ScaleBaseProcessor_staticInit(void) {
    ScaleBaseProcessor_instance = ScaleBaseProcessor_new();
}

void ScaleBaseProcessor_init(ScaleBaseProcessor* this) {
}

ScaleBaseProcessor* ScaleBaseProcessor_new(void) {
    ScaleBaseProcessor* this = calloc(1, sizeof(ScaleBaseProcessor));
    ScaleBaseProcessor_init(this);
    return this;
}


ScaleBaseProcessor* ScaleBaseProcessor_getInstance(void) {
        return ScaleBaseProcessor_instance;
}


void ScaleBaseProcessor_update(ScaleBaseProcessor* this, Image* originalImage, Image** originalImageArray, Image** imageToShowArray, int32_t index, float scaleX, float scaleY, float maxScaleX, float maxScaleY) {
}

