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
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"

typedef struct UpgradableRTSLayerHudPaintable UpgradableRTSLayerHudPaintable;
struct UpgradableRTSLayerHudPaintable {
    SelectionHudPaintable base;
    const char* PERCENT;
    CollidableDestroyableDamageableLayer* rtsLayer;
    int32_t costY;
    int32_t costY1;
    int32_t percentCompleteX2;
    RTSLayerCompositePaintable* rtsLayerCompositePaintableLateInit;
    int32_t charHeight;
    int32_t charWidth;
    int32_t percentComplete;
    int32_t percentCompleteX;
    uint16_t* percentCompleteArray;
    int32_t currentTotalDigits;
};

static UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable_instance;

UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable_new(void);
UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable_getInstance(void);

void UpgradableRTSLayerHudPaintable_init(UpgradableRTSLayerHudPaintable* this);
void UpgradableRTSLayerHudPaintable_updateMeasurement(UpgradableRTSLayerHudPaintable* this, Graphics* graphics);
void UpgradableRTSLayerHudPaintable_update(UpgradableRTSLayerHudPaintable* this);
void UpgradableRTSLayerHudPaintable_updateSelectionInfo(UpgradableRTSLayerHudPaintable* this);
void UpgradableRTSLayerHudPaintable_updateInfo(UpgradableRTSLayerHudPaintable* this);
void UpgradableRTSLayerHudPaintable_paint(UpgradableRTSLayerHudPaintable* this, Graphics* graphics);
void UpgradableRTSLayerHudPaintable_setRtsLayer(UpgradableRTSLayerHudPaintable* this, RTSLayer* rtsLayer);
CollidableDestroyableDamageableLayer* UpgradableRTSLayerHudPaintable_getRtsLayer(UpgradableRTSLayerHudPaintable* this);

// Static fields with runtime initializers: call this once at startup
void UpgradableRTSLayerHudPaintable_staticInit(void) {
    UpgradableRTSLayerHudPaintable_instance = UpgradableRTSLayerHudPaintable_new();
}

static void UpgradableRTSLayerHudPaintable_initFields(UpgradableRTSLayerHudPaintable* this) {
    this->PERCENT = "%";
    this->rtsLayer = CollidableDestroyableDamageableLayer_getNullInstance();
    this->costY = 0;
    this->costY1 = 0;
    this->percentCompleteX2 = 0;
    this->rtsLayerCompositePaintableLateInit = nullptr;
    this->charHeight = 0;
    this->charWidth = 0;
    this->percentComplete = 0;
    this->percentCompleteX = 0;
    this->percentCompleteArray = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
    this->currentTotalDigits = 0;
}


UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable_getInstance(void) {
        return UpgradableRTSLayerHudPaintable_instance;
}


void UpgradableRTSLayerHudPaintable_init(UpgradableRTSLayerHudPaintable* this) {
    SelectionHudPaintable_init(&this->base);
    UpgradableRTSLayerHudPaintable_initFields(this);
}

UpgradableRTSLayerHudPaintable* UpgradableRTSLayerHudPaintable_new(void) {
    UpgradableRTSLayerHudPaintable* this = calloc(1, sizeof(UpgradableRTSLayerHudPaintable));
    UpgradableRTSLayerHudPaintable_init(this);
    return this;
}


void UpgradableRTSLayerHudPaintable_updateMeasurement(UpgradableRTSLayerHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_updateMeasurement((&this->base), graphics);
        Font* font = Graphics_getFont(graphics);
        this->charHeight = Font_getHeight(font);
        this->charWidth = MyFontProcessor_defaultCharWidth(font);
}


void UpgradableRTSLayerHudPaintable_update(UpgradableRTSLayerHudPaintable* this) {
        SelectionHudPaintable_update((&this->base));
        CommonButtons* commonButtons = CommonButtons_getInstance();
        this->costY = (this->y + commonButtons->STANDARD_BUTTON_SIZE);
        this->costY1 = (this->y + commonButtons->STANDARD_BUTTON_SIZE - this->charHeight);
        this->percentCompleteX2 = this->imageX + commonButtons->STANDARD_BUTTON_SIZE - this->charWidth;
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        if (DisplayInfoSingleton_getLastWidth(displayInfoSingleton) > 320) {
            this->rtsLayerCompositePaintableLateInit = UpgradableWideRTSLayerPaintable_new(this);
        } else {
            this->rtsLayerCompositePaintableLateInit = RTSLayerCompositePaintable_new(this);
        }
}


void UpgradableRTSLayerHudPaintable_updateSelectionInfo(UpgradableRTSLayerHudPaintable* this) {
        RTSLayer* rtsLayer = ((RTSLayer*) UpgradableRTSLayerHudPaintable_getRtsLayer(this));
        RTSLayerCompositePaintable_update(this->rtsLayerCompositePaintableLateInit, rtsLayer);
        UpgradableRTSLayerHudPaintable_setAnimationInterface(this, CollidableDestroyableDamageableLayer_getVerticleBuildAnimationInterface(rtsLayer));
        UpgradableRTSLayerHudPaintable_setName(this, CollidableDestroyableDamageableLayer_getName(rtsLayer));
}


void UpgradableRTSLayerHudPaintable_updateInfo(UpgradableRTSLayerHudPaintable* this) {
        RTSLayer* rtsLayer = ((RTSLayer*) UpgradableRTSLayerHudPaintable_getRtsLayer(this));
        this->percentComplete = CollidableDestroyableDamageableLayer_getPercentComplete(rtsLayer);
        if (this->percentComplete < 10) {
            this->percentCompleteX = 32;
        } else if (this->percentComplete < 100) {
            this->percentCompleteX = 24;
        } else {
            this->percentCompleteX = 16;
        }
        this->percentCompleteArray = JAVA_CALL(UpgradableRTSLayerHudPaintable_getPrimitiveLongUtil(this), getCharArray, this->percentComplete);
        this->currentTotalDigits = JAVA_CALL(UpgradableRTSLayerHudPaintable_getPrimitiveLongUtil(this), getCurrentTotalDigits);
}


void UpgradableRTSLayerHudPaintable_paint(UpgradableRTSLayerHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_paint((&this->base), graphics);
        RTSLayerCompositePaintable_paint(this->rtsLayerCompositePaintableLateInit, graphics);
        Graphics_drawChars(graphics, this->percentCompleteArray, 0, this->currentTotalDigits, this->imageX + this->percentCompleteX, this->costY, 0);
        Graphics_drawString(graphics, this->PERCENT, this->percentCompleteX2, this->costY, 0);
        JAVA_CALL(UpgradableRTSLayerHudPaintable_getAnimationInterface(this), paintXY, graphics, this->imageX, this->y);
}


void UpgradableRTSLayerHudPaintable_setRtsLayer(UpgradableRTSLayerHudPaintable* this, RTSLayer* rtsLayer) {
        this->rtsLayer = rtsLayer;
}


CollidableDestroyableDamageableLayer* UpgradableRTSLayerHudPaintable_getRtsLayer(UpgradableRTSLayerHudPaintable* this) {
        return this->rtsLayer;
}

