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
// package org.allbinary.game.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"

typedef struct ABToGBUtil ABToGBUtil;
struct ABToGBUtil {
    Canvas* abCanvas;
    AllBinaryGameLayerManager* allBinaryGameLayerManager;
};

static ABToGBUtil* ABToGBUtil_instance;

ABToGBUtil* ABToGBUtil_new(void);
ABToGBUtil* ABToGBUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ABToGBUtil_staticInit(void) {
    ABToGBUtil_instance = ABToGBUtil_new();
}

static void ABToGBUtil_initFields(ABToGBUtil* this) {
    this->abCanvas = NullCanvas_NULL_CANVAS;
    this->allBinaryGameLayerManager = AllBinaryGameLayerManager_getNullInstance();
}

void ABToGBUtil_init(ABToGBUtil* this) {
    ABToGBUtil_initFields(this);
}

ABToGBUtil* ABToGBUtil_new(void) {
    ABToGBUtil* this = calloc(1, sizeof(ABToGBUtil));
    ABToGBUtil_init(this);
    return this;
}


ABToGBUtil* ABToGBUtil_getInstance(void) {
        return ABToGBUtil_instance;
}

