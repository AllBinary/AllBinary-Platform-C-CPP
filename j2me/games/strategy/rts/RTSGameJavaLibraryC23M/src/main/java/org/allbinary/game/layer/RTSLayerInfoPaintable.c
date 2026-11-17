/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/graphics/paint/NullInitUpdatePaintable.h"

typedef struct RTSLayerInfoPaintable RTSLayerInfoPaintable;
struct RTSLayerInfoPaintable {
    InitUpdatePaintable base;
    InitUpdatePaintable* initUpdatePaintable;
};


RTSLayerInfoPaintable* RTSLayerInfoPaintable_new(void);

void RTSLayerInfoPaintable_init(RTSLayerInfoPaintable* this);
void RTSLayerInfoPaintable_update(RTSLayerInfoPaintable* this);
void RTSLayerInfoPaintable_paint(RTSLayerInfoPaintable* this, Graphics* graphics);
void RTSLayerInfoPaintable_updateRTSLayerInfoInit(RTSLayerInfoPaintable* this, InitUpdatePaintable* hudPaintable);
void RTSLayerInfoPaintable_updateRTSLayerInfoSelection(RTSLayerInfoPaintable* this, SelectionHudPaintable* hudPaintable);

static void RTSLayerInfoPaintable_initFields(RTSLayerInfoPaintable* this) {
    this->initUpdatePaintable = NullInitUpdatePaintable_getInstance();
}


void RTSLayerInfoPaintable_init(RTSLayerInfoPaintable* this) {
    InitUpdatePaintable_init(&this->base);
    RTSLayerInfoPaintable_initFields(this);
}

RTSLayerInfoPaintable* RTSLayerInfoPaintable_new(void) {
    RTSLayerInfoPaintable* this = calloc(1, sizeof(RTSLayerInfoPaintable));
    RTSLayerInfoPaintable_init(this);
    return this;
}


void RTSLayerInfoPaintable_update(RTSLayerInfoPaintable* this) {
        InitUpdatePaintable_update(this->initUpdatePaintable);
}


void RTSLayerInfoPaintable_paint(RTSLayerInfoPaintable* this, Graphics* graphics) {
        InitUpdatePaintable_paint(this->initUpdatePaintable, graphics);
}


void RTSLayerInfoPaintable_updateRTSLayerInfoInit(RTSLayerInfoPaintable* this, InitUpdatePaintable* hudPaintable) {
        this->initUpdatePaintable = hudPaintable;
}


void RTSLayerInfoPaintable_updateRTSLayerInfoSelection(RTSLayerInfoPaintable* this, SelectionHudPaintable* hudPaintable) {
        InitUpdatePaintable_updateSelectionInfo(hudPaintable);
        this->initUpdatePaintable = hudPaintable;
}

