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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"

typedef struct RTSLayerHudPaintable RTSLayerHudPaintable;
struct RTSLayerHudPaintable {
    SelectionHudPaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    const char** weaponProperties;
    CollidableDestroyableDamageableLayer* rtsLayer;
    int32_t costY;
    int32_t costY1;
    int32_t fontHeight;
};

static RTSLayerHudPaintable* RTSLayerHudPaintable_instance;

RTSLayerHudPaintable* RTSLayerHudPaintable_new(void);
RTSLayerHudPaintable* RTSLayerHudPaintable_getInstance(void);

void RTSLayerHudPaintable_init(RTSLayerHudPaintable* this);
void RTSLayerHudPaintable_updateMeasurement(RTSLayerHudPaintable* this, Graphics* graphics);
void RTSLayerHudPaintable_updateSelectionInfo(RTSLayerHudPaintable* this);
void RTSLayerHudPaintable_paint(RTSLayerHudPaintable* this, Graphics* graphics);
void RTSLayerHudPaintable_setRtsLayer(RTSLayerHudPaintable* this, RTSLayer* rtsLayer);
static CollidableDestroyableDamageableLayer* RTSLayerHudPaintable_getRtsLayer(RTSLayerHudPaintable* this);

// Static fields with runtime initializers: call this once at startup
void RTSLayerHudPaintable_staticInit(void) {
    RTSLayerHudPaintable_instance = RTSLayerHudPaintable_new();
}

static void RTSLayerHudPaintable_initFields(RTSLayerHudPaintable* this) {
    this->weaponProperties = StringUtil_getArrayInstance(StringUtil_getInstance());
    this->rtsLayer = CollidableDestroyableDamageableLayer_getNullInstance();
    this->costY = 0;
    this->costY1 = 0;
    this->fontHeight = 0;
}


RTSLayerHudPaintable* RTSLayerHudPaintable_getInstance(void) {
        return RTSLayerHudPaintable_instance;
}


void RTSLayerHudPaintable_init(RTSLayerHudPaintable* this) {
    SelectionHudPaintable_init(&this->base);
    RTSLayerHudPaintable_initFields(this);
}

RTSLayerHudPaintable* RTSLayerHudPaintable_new(void) {
    RTSLayerHudPaintable* this = calloc(1, sizeof(RTSLayerHudPaintable));
    RTSLayerHudPaintable_init(this);
    return this;
}


void RTSLayerHudPaintable_updateMeasurement(RTSLayerHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_updateMeasurement((&this->base), graphics);
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->costY1 = (this->y + ((java_array_length(this->weaponProperties) + 1) * this->fontHeight));
        if (!AndroidUtil_isAndroid()) {
            this->costY = this->costY1;
        } else {
            this->costY = (this->y + ((java_array_length(this->weaponProperties) + 2) * this->fontHeight));
        }
}


void RTSLayerHudPaintable_updateSelectionInfo(RTSLayerHudPaintable* this) {
        RTSLayerHudPaintable_setName(this, JAVA_CALL(RTSLayerHudPaintable_getRtsLayer(this), getName));
        BasicWeaponPart* partInterface = ((BasicWeaponPart*) JAVA_CALL(RTSLayerHudPaintable_getRtsLayer(this), getPartInterfaceArray)[0]);
        this->weaponProperties = JAVA_CALL(BasicWeaponPart_getWeaponProperties(partInterface), toStringArray);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void RTSLayerHudPaintable_paint(RTSLayerHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_paint((&this->base), graphics);
        int32_t size = java_array_length(this->weaponProperties);
        for (int32_t index = 0; index < size; index++) {
            Graphics_drawString(graphics, this->weaponProperties[index], this->textX, this->y + ((index + 1) * this->fontHeight), 0);
        }
}


void RTSLayerHudPaintable_setRtsLayer(RTSLayerHudPaintable* this, RTSLayer* rtsLayer) {
        this->rtsLayer = rtsLayer;
}


static CollidableDestroyableDamageableLayer* RTSLayerHudPaintable_getRtsLayer(RTSLayerHudPaintable* this) {
        return this->rtsLayer;
}

