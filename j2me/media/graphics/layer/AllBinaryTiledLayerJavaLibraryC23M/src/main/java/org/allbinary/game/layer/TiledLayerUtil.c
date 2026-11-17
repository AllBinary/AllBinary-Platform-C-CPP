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

typedef struct TiledLayerUtil TiledLayerUtil;
struct TiledLayerUtil {
    char unused;
};

static TiledLayerUtil* TiledLayerUtil_instance;

TiledLayerUtil* TiledLayerUtil_new(void);
TiledLayerUtil* TiledLayerUtil_getInstance(void);
int32_t TiledLayerUtil_keepOnBorderdMapX(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width, int32_t mapBorderBufferWidth);
int32_t TiledLayerUtil_keepOnBorderdMapY(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height, int32_t mapBorderBufferHeight);
int32_t TiledLayerUtil_keepOnMapX(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width);
int32_t TiledLayerUtil_keepOnMapY(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height);

// Static fields with runtime initializers: call this once at startup
void TiledLayerUtil_staticInit(void) {
    TiledLayerUtil_instance = TiledLayerUtil_new();
}

void TiledLayerUtil_init(TiledLayerUtil* this) {
}

TiledLayerUtil* TiledLayerUtil_new(void) {
    TiledLayerUtil* this = calloc(1, sizeof(TiledLayerUtil));
    TiledLayerUtil_init(this);
    return this;
}


TiledLayerUtil* TiledLayerUtil_getInstance(void) {
        return TiledLayerUtil_instance;
}


int32_t TiledLayerUtil_keepOnBorderdMapX(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width, int32_t mapBorderBufferWidth) {
        int32_t newX = x;
        int32_t maxRight = AllBinaryTiledLayer_getWidth(terrainTiledLayer) - width - mapBorderBufferWidth;
        if (x + width > maxRight) {
            newX = maxRight;
        }
        if (x < mapBorderBufferWidth) {
            newX = mapBorderBufferWidth;
        }
        return newX;
}


int32_t TiledLayerUtil_keepOnBorderdMapY(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height, int32_t mapBorderBufferHeight) {
        int32_t newY = y;
        int32_t maxBottom = AllBinaryTiledLayer_getHeight(terrainTiledLayer) - height - mapBorderBufferHeight;
        if (y + height > maxBottom) {
            newY = maxBottom;
        }
        if (y < mapBorderBufferHeight) {
            newY = mapBorderBufferHeight;
        }
        return newY;
}


int32_t TiledLayerUtil_keepOnMapX(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width) {
        int32_t newX = x;
        int32_t maxRight = AllBinaryTiledLayer_getWidth(terrainTiledLayer) - width;
        if (x >= maxRight) {
            newX = maxRight;
        }
        if (x < 0) {
            newX = 0;
        }
        return newX;
}


int32_t TiledLayerUtil_keepOnMapY(TiledLayerUtil* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height) {
        int32_t newY = y;
        int32_t maxBottom = AllBinaryTiledLayer_getHeight(terrainTiledLayer) - height;
        if (y >= maxBottom) {
            newY = maxBottom;
        }
        if (y < 0) {
            newY = 0;
        }
        return newY;
}

