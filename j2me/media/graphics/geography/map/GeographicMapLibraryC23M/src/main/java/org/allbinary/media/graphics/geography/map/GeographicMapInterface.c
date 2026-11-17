/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/layer/Layer.h"

typedef struct GeographicMapInterface GeographicMapInterface;
struct GeographicMapInterface {
    int32_t (*getId)(void* this);
    const char* (*getName)(void* this);
    void (*reset)(void* this);
    AllBinaryTiledLayer* (*getAllBinaryTiledLayer)(void* this);
    bool (*getCellPositionsAt)(void* this, Layer* layer, GeographicMapCellPosition*** currentCellPositionArray, GeographicMapCellPosition*** cellPositionArray);
    GeographicMapCellPosition* (*getCellPositionAtXY)(void* this, int32_t x, int32_t y);
    GeographicMapCellPosition* (*getCellPositionAtXYNoThrow)(void* this, int32_t x, int32_t y);
    int32_t (*getCellTypeFromMapCellTypeInt)(void* this, int32_t cellTypeId);
    GeographicMapCellType* (*getCellTypeAtXY)(void* this, int32_t x, int32_t y);
    GeographicMapCellType* (*getCellTypeAt)(void* this, GeographicMapCellPosition* geographicMapCellPosition);
    BasicGeographicMapCellPositionFactory* (*getGeographicMapCellPositionFactory)(void* this);
    GeographicMapCellPositionFactoryInterface* (*getGeographicMapCellPositionFactoryInterface)(void* this);
    BasicColor* (*getForegroundBasicColor)(void* this);
    BasicColor* (*getBackgroundBasicColor)(void* this);
};


