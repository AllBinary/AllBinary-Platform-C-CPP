/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/graphics/draw/KeyValueDrawString.h"

typedef struct WaypointInfoHudPaintable WaypointInfoHudPaintable;
struct WaypointInfoHudPaintable {
    SelectionHudPaintable base;
    KeyValueDrawString* keyvalueDrawString;
    PathFindingLayerInterface* rtsLayerP;
    int32_t textLine2Y;
};


WaypointInfoHudPaintable* WaypointInfoHudPaintable_new(void);

void WaypointInfoHudPaintable_init(WaypointInfoHudPaintable* this);
void WaypointInfoHudPaintable_updateMeasurement(WaypointInfoHudPaintable* this, Graphics* graphics);
void WaypointInfoHudPaintable_updateSelectionInfo(WaypointInfoHudPaintable* this);
void WaypointInfoHudPaintable_setRtsLayer(WaypointInfoHudPaintable* this, RTSLayer* rtsLayer);
PathFindingLayerInterface* WaypointInfoHudPaintable_getRtsLayer(WaypointInfoHudPaintable* this);
void WaypointInfoHudPaintable_paint(WaypointInfoHudPaintable* this, Graphics* graphics);

static void WaypointInfoHudPaintable_initFields(WaypointInfoHudPaintable* this) {
    
    this->rtsLayerP = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
    this->textLine2Y = 0;
}


void WaypointInfoHudPaintable_init(WaypointInfoHudPaintable* this) {
    SelectionHudPaintable_init(&this->base);
    WaypointInfoHudPaintable_initFields(this);
        this->keyvalueDrawString = KeyValueDrawString_new("Owner: ", this->textX);
}

WaypointInfoHudPaintable* WaypointInfoHudPaintable_new(void) {
    WaypointInfoHudPaintable* this = calloc(1, sizeof(WaypointInfoHudPaintable));
    WaypointInfoHudPaintable_init(this);
    return this;
}


void WaypointInfoHudPaintable_updateMeasurement(WaypointInfoHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_updateMeasurement((&this->base), graphics);
        Font* font = Graphics_getFont(graphics);
        this->textLine2Y = (this->y + Font_getHeight(font));
}


void WaypointInfoHudPaintable_updateSelectionInfo(WaypointInfoHudPaintable* this) {
        RTSLayer* rtsLayer = ((RTSLayer*) this->rtsLayerP);
        WaypointInfoHudPaintable_setName(this, RTSLayer_getName(rtsLayer));
        WaypointInfoHudPaintable_setAnimationInterface(this, RTSLayer_getVerticleBuildAnimationInterface(rtsLayer));
        KeyValueDrawString_update(this->keyvalueDrawString, JAVA_CALL(RTSLayer_getParentLayer(rtsLayer), getName));
}


void WaypointInfoHudPaintable_setRtsLayer(WaypointInfoHudPaintable* this, RTSLayer* rtsLayer) {
        this->rtsLayerP = rtsLayer;
}


PathFindingLayerInterface* WaypointInfoHudPaintable_getRtsLayer(WaypointInfoHudPaintable* this) {
        return this->rtsLayerP;
}


void WaypointInfoHudPaintable_paint(WaypointInfoHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_paint((&this->base), graphics);
        KeyValueDrawString_paint(this->keyvalueDrawString, graphics, this->textLine2Y);
        JAVA_CALL(WaypointInfoHudPaintable_getAnimationInterface(this), paintXY, graphics, this->imageX, this->y);
}

