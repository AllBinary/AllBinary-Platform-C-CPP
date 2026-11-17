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
// package org.allbinary.media.graphics.geography.map.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h"

typedef struct BaseDropCellPositionGenerator BaseDropCellPositionGenerator;
struct BaseDropCellPositionGenerator {
    DropCellPositionGeneratorInterface DropCellPositionGeneratorInterface_interface;
};


BaseDropCellPositionGenerator* BaseDropCellPositionGenerator_new(void);
const char* BaseDropCellPositionGenerator_getName(BaseDropCellPositionGenerator* this);
void BaseDropCellPositionGenerator_update(BaseDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);
bool BaseDropCellPositionGenerator_isDropAllowedAt(BaseDropCellPositionGenerator* this, GeographicMapCellPosition* geographicMapCellPosition);
void BaseDropCellPositionGenerator_processTick(BaseDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager);

void BaseDropCellPositionGenerator_init(BaseDropCellPositionGenerator* this) {
}

BaseDropCellPositionGenerator* BaseDropCellPositionGenerator_new(void) {
    BaseDropCellPositionGenerator* this = calloc(1, sizeof(BaseDropCellPositionGenerator));
    BaseDropCellPositionGenerator_init(this);
    return this;
}


const char* BaseDropCellPositionGenerator_getName(BaseDropCellPositionGenerator* this) {
        return java_class_of(this);
}


// throws Exception
void BaseDropCellPositionGenerator_update(BaseDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) {
}


// throws Exception
bool BaseDropCellPositionGenerator_isDropAllowedAt(BaseDropCellPositionGenerator* this, GeographicMapCellPosition* geographicMapCellPosition) {
        return true;
}


// throws Exception
void BaseDropCellPositionGenerator_processTick(BaseDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager) {
}

