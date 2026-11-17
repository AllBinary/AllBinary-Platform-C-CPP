/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
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
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"

typedef struct FakeLayerManager FakeLayerManager;
struct FakeLayerManager {
    AllBinaryGameLayerManager base;
    GeographicMapCompositeInterface GeographicMapCompositeInterface_interface;
    BasicGeographicMap** geographicMapInterfaceArray;
    GeographicMapCellType** geographicMapCellTypeArray;
};


FakeLayerManager* FakeLayerManager_new(GameInfo* gameInfo);

void FakeLayerManager_init(FakeLayerManager* this, GameInfo* gameInfo);
BasicGeographicMap** FakeLayerManager_getGeographicMapInterface(FakeLayerManager* this);
void FakeLayerManager_setGeographicMapInterface(FakeLayerManager* this, BasicGeographicMap** geographicMapInterfaceArray);
GeographicMapCellType** FakeLayerManager_geographicMapCellTypeArray(FakeLayerManager* this);

static void FakeLayerManager_initFields(FakeLayerManager* this) {
    this->geographicMapInterfaceArray = BasicGeographicMap_NULL_BASIC_GEOGRAPHIC_MAP_ARRAY;
    this->geographicMapCellTypeArray = GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY;
}


void FakeLayerManager_init(FakeLayerManager* this, GameInfo* gameInfo) {
        AllBinaryGameLayerManager_init(&this->base, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE, gameInfo);
        FakeLayerManager_initFields(this);
}

FakeLayerManager* FakeLayerManager_new(GameInfo* gameInfo) {
    FakeLayerManager* this = calloc(1, sizeof(FakeLayerManager));
    FakeLayerManager_init(this, gameInfo);
    return this;
}


BasicGeographicMap** FakeLayerManager_getGeographicMapInterface(FakeLayerManager* this) {
        return this->geographicMapInterfaceArray;
}


void FakeLayerManager_setGeographicMapInterface(FakeLayerManager* this, BasicGeographicMap** geographicMapInterfaceArray) {
        this->geographicMapInterfaceArray = geographicMapInterfaceArray;
        this->geographicMapCellTypeArray = ((GeographicMapCellType**) java_array_new(sizeof(GeographicMapCellType*), java_array_length(this->geographicMapInterfaceArray)));
}


GeographicMapCellType** FakeLayerManager_geographicMapCellTypeArray(FakeLayerManager* this) {
        return this->geographicMapCellTypeArray;
}

