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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct RTSLayerCompositePaintable RTSLayerCompositePaintable;
struct RTSLayerCompositePaintable {
    Paintable base;
    const char* upgradeCost;
    const char* downGradeCost;
    const char* UPGRADE;
    const char* DOWNGRADE;
    UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable;
};


RTSLayerCompositePaintable* RTSLayerCompositePaintable_new(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);

void RTSLayerCompositePaintable_init(RTSLayerCompositePaintable* this, UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);
void RTSLayerCompositePaintable_update(RTSLayerCompositePaintable* this, RTSLayer* rtsLayer);
void RTSLayerCompositePaintable_paint(RTSLayerCompositePaintable* this, Graphics* graphics);
void RTSLayerCompositePaintable_setUpgradeCost(RTSLayerCompositePaintable* this, const char* upgradeCost);
const char* RTSLayerCompositePaintable_getUpgradeCost(RTSLayerCompositePaintable* this);
void RTSLayerCompositePaintable_setDownGradeCost(RTSLayerCompositePaintable* this, const char* downGradeCost);
const char* RTSLayerCompositePaintable_getDownGradeCost(RTSLayerCompositePaintable* this);

static void RTSLayerCompositePaintable_initFields(RTSLayerCompositePaintable* this) {
    this->upgradeCost = StringUtil_getInstance()->EMPTY_STRING;
    this->downGradeCost = StringUtil_getInstance()->EMPTY_STRING;
    this->UPGRADE = "Up: $";
    this->DOWNGRADE = "Down: $-";
    
}


void RTSLayerCompositePaintable_init(RTSLayerCompositePaintable* this, UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) {
    Paintable_init(&this->base);
    RTSLayerCompositePaintable_initFields(this);
        this->upgradableRTSLayerHudPaintable = upgradableRTSLayerHudPaintable;
}

RTSLayerCompositePaintable* RTSLayerCompositePaintable_new(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) {
    RTSLayerCompositePaintable* this = calloc(1, sizeof(RTSLayerCompositePaintable));
    RTSLayerCompositePaintable_init(this, upgradableRTSLayerHudPaintable);
    return this;
}


void RTSLayerCompositePaintable_update(RTSLayerCompositePaintable* this, RTSLayer* rtsLayer) {
        if (RTSLayer_isUpgradeable(rtsLayer)) {
            RTSLayerCompositePaintable_setUpgradeCost(this, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->UPGRADE), appendint, ((int32_t) RTSLayer_getUpgradeCost(rtsLayer))), toString));
        } else {
            RTSLayerCompositePaintable_setUpgradeCost(this, StringUtil_getInstance()->EMPTY_STRING);
        }
        if (RTSLayer_isDowngradeable(rtsLayer)) {
            RTSLayerCompositePaintable_setDownGradeCost(this, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->DOWNGRADE), appendint, ((int32_t) RTSLayer_getDowngradeCost(rtsLayer))), toString));
        } else {
            RTSLayerCompositePaintable_setDownGradeCost(this, StringUtil_getInstance()->EMPTY_STRING);
        }
}


void RTSLayerCompositePaintable_paint(RTSLayerCompositePaintable* this, Graphics* graphics) {
        Graphics_drawString(graphics, RTSLayerCompositePaintable_getDownGradeCost(this), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY1, 0);
        Graphics_drawString(graphics, RTSLayerCompositePaintable_getUpgradeCost(this), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY, 0);
}


void RTSLayerCompositePaintable_setUpgradeCost(RTSLayerCompositePaintable* this, const char* upgradeCost) {
        this->upgradeCost = upgradeCost;
}


const char* RTSLayerCompositePaintable_getUpgradeCost(RTSLayerCompositePaintable* this) {
        return this->upgradeCost;
}


void RTSLayerCompositePaintable_setDownGradeCost(RTSLayerCompositePaintable* this, const char* downGradeCost) {
        this->downGradeCost = downGradeCost;
}


const char* RTSLayerCompositePaintable_getDownGradeCost(RTSLayerCompositePaintable* this) {
        return this->downGradeCost;
}

