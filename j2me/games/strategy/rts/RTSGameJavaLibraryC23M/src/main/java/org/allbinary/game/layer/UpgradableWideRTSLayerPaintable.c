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
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/layer/RTSLayerCompositePaintable.h"

typedef struct UpgradableWideRTSLayerPaintable UpgradableWideRTSLayerPaintable;
struct UpgradableWideRTSLayerPaintable {
    RTSLayerCompositePaintable base;
    const char* cost;
};


UpgradableWideRTSLayerPaintable* UpgradableWideRTSLayerPaintable_new(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);

void UpgradableWideRTSLayerPaintable_init(UpgradableWideRTSLayerPaintable* this, UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable);
void UpgradableWideRTSLayerPaintable_update(UpgradableWideRTSLayerPaintable* this, RTSLayer* rtsLayer);
void UpgradableWideRTSLayerPaintable_paint(UpgradableWideRTSLayerPaintable* this, Graphics* graphics);
void UpgradableWideRTSLayerPaintable_setCost(UpgradableWideRTSLayerPaintable* this, const char* cost);
const char* UpgradableWideRTSLayerPaintable_getCost(UpgradableWideRTSLayerPaintable* this);

static void UpgradableWideRTSLayerPaintable_initFields(UpgradableWideRTSLayerPaintable* this) {
    this->cost = StringUtil_getInstance()->EMPTY_STRING;
}


void UpgradableWideRTSLayerPaintable_init(UpgradableWideRTSLayerPaintable* this, UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) {
        RTSLayerCompositePaintable_init(&this->base, upgradableRTSLayerHudPaintable);
        UpgradableWideRTSLayerPaintable_initFields(this);
}

UpgradableWideRTSLayerPaintable* UpgradableWideRTSLayerPaintable_new(UpgradableRTSLayerHudPaintable* upgradableRTSLayerHudPaintable) {
    UpgradableWideRTSLayerPaintable* this = calloc(1, sizeof(UpgradableWideRTSLayerPaintable));
    UpgradableWideRTSLayerPaintable_init(this, upgradableRTSLayerHudPaintable);
    return this;
}


void UpgradableWideRTSLayerPaintable_update(UpgradableWideRTSLayerPaintable* this, RTSLayer* rtsLayer) {
        RTSLayerCompositePaintable_update((&this->base), rtsLayer);
        UpgradableWideRTSLayerPaintable_setCost(this, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), UpgradableWideRTSLayerPaintable_getUpgradeCost(this)), append, CommonSeps_getInstance()->SPACE), append, UpgradableWideRTSLayerPaintable_getDownGradeCost(this)), toString));
}


void UpgradableWideRTSLayerPaintable_paint(UpgradableWideRTSLayerPaintable* this, Graphics* graphics) {
        Graphics_drawString(graphics, UpgradableWideRTSLayerPaintable_getCost(this), this->upgradableRTSLayerHudPaintable->textX, this->upgradableRTSLayerHudPaintable->costY, 0);
}


void UpgradableWideRTSLayerPaintable_setCost(UpgradableWideRTSLayerPaintable* this, const char* cost) {
        this->cost = cost;
}


const char* UpgradableWideRTSLayerPaintable_getCost(UpgradableWideRTSLayerPaintable* this) {
        return this->cost;
}

