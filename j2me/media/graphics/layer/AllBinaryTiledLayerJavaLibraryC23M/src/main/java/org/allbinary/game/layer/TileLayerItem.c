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
// #include "javax/microedition/lcdui/Screen.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct TileLayerItem TileLayerItem;
struct TileLayerItem {
    ABCustomItem base;
    ABCustomItemInterface ABCustomItemInterface_interface;
    AllBinaryTiledLayer* tiledLayer;
};


TileLayerItem* TileLayerItem_new(const char* label, AllBinaryTiledLayer* tiledLayer, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void TileLayerItem_init(TileLayerItem* this, const char* label, AllBinaryTiledLayer* tiledLayer, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void TileLayerItem_setOwner(TileLayerItem* this, Screen* owner);
int32_t TileLayerItem_getMinimumWidth(TileLayerItem* this);
int32_t TileLayerItem_getMinimumHeight(TileLayerItem* this);
int32_t TileLayerItem_getMinContentHeight(TileLayerItem* this);
int32_t TileLayerItem_getMinContentWidth(TileLayerItem* this);
int32_t TileLayerItem_getPrefContentHeight(TileLayerItem* this, int32_t width);
int32_t TileLayerItem_getPrefContentWidth(TileLayerItem* this, int32_t height);
void TileLayerItem_paintXY(TileLayerItem* this, Graphics* graphics, int32_t x, int32_t y);
void TileLayerItem_paintUnselected(TileLayerItem* this, Graphics* graphics, int32_t x, int32_t y);
const char* TileLayerItem_getLabel(TileLayerItem* this);

static void TileLayerItem_initFields(TileLayerItem* this) {
    
}


void TileLayerItem_init(TileLayerItem* this, const char* label, AllBinaryTiledLayer* tiledLayer, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABCustomItem_init(&this->base, label, backgroundBasicColor, foregroundBasicColor);
        TileLayerItem_initFields(this);
        this->tiledLayer = tiledLayer;
}

TileLayerItem* TileLayerItem_new(const char* label, AllBinaryTiledLayer* tiledLayer, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    TileLayerItem* this = calloc(1, sizeof(TileLayerItem));
    TileLayerItem_init(this, label, tiledLayer, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void TileLayerItem_setOwner(TileLayerItem* this, Screen* owner) {
}


int32_t TileLayerItem_getMinimumWidth(TileLayerItem* this) {
        return AllBinaryTiledLayer_getWidth(this->tiledLayer);
}


int32_t TileLayerItem_getMinimumHeight(TileLayerItem* this) {
        return AllBinaryTiledLayer_getHeight(this->tiledLayer);
}


int32_t TileLayerItem_getMinContentHeight(TileLayerItem* this) {
        return AllBinaryTiledLayer_getHeight(this->tiledLayer);
}


int32_t TileLayerItem_getMinContentWidth(TileLayerItem* this) {
        return AllBinaryTiledLayer_getWidth(this->tiledLayer);
}


int32_t TileLayerItem_getPrefContentHeight(TileLayerItem* this, int32_t width) {
        return AllBinaryTiledLayer_getHeight(this->tiledLayer);
}


int32_t TileLayerItem_getPrefContentWidth(TileLayerItem* this, int32_t height) {
        return AllBinaryTiledLayer_getWidth(this->tiledLayer);
}


void TileLayerItem_paintXY(TileLayerItem* this, Graphics* graphics, int32_t x, int32_t y) {
        AllBinaryTiledLayer_setPosition(this->tiledLayer, x, y, AllBinaryTiledLayer_getZP(this->tiledLayer));
        AllBinaryTiledLayer_paint(this->tiledLayer, graphics);
}


void TileLayerItem_paintUnselected(TileLayerItem* this, Graphics* graphics, int32_t x, int32_t y) {
}


const char* TileLayerItem_getLabel(TileLayerItem* this) {
        return ABCustomItem_getLabel((&this->base));
}

