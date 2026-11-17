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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h"

typedef struct AnyRandomDropCellPositionGenerator AnyRandomDropCellPositionGenerator;
struct AnyRandomDropCellPositionGenerator {
    BaseDropCellPositionGenerator base;
    BasicArrayList* list;
    Any* geographicMapInterface;
};


AnyRandomDropCellPositionGenerator* AnyRandomDropCellPositionGenerator_new(void);
void AnyRandomDropCellPositionGenerator_update(AnyRandomDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);
void AnyRandomDropCellPositionGenerator_processTick(AnyRandomDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager);

static void AnyRandomDropCellPositionGenerator_initFields(AnyRandomDropCellPositionGenerator* this) {
    this->list = BasicArrayListD_new();
    this->geographicMapInterface = NullUtil_getInstance()->NULL_OBJECT;
}

void AnyRandomDropCellPositionGenerator_init(AnyRandomDropCellPositionGenerator* this) {
    BaseDropCellPositionGenerator_init(&this->base);
    AnyRandomDropCellPositionGenerator_initFields(this);
}

AnyRandomDropCellPositionGenerator* AnyRandomDropCellPositionGenerator_new(void) {
    AnyRandomDropCellPositionGenerator* this = calloc(1, sizeof(AnyRandomDropCellPositionGenerator));
    AnyRandomDropCellPositionGenerator_init(this);
    return this;
}


// throws Exception
void AnyRandomDropCellPositionGenerator_update(AnyRandomDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) {
        this->geographicMapInterface = geographicMapInterface;
        BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = Any_getGeographicMapCellPositionFactory(geographicMapInterface);
        MyRandomFactory* randomFactory = MyRandomFactory_getInstance();
        AllBinaryTiledLayer* tiledLayer = Any_getAllBinaryTiledLayer(geographicMapInterface);
        int32_t total = AllBinaryTiledLayer_getColumns(tiledLayer) * AllBinaryTiledLayer_getRows(tiledLayer);
        int32_t randomColumn = 0;
        int32_t randomRow = 0;
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        for (int32_t index = total; --index >= 0; ) {
            randomColumn = MyRandomFactory_getAbsoluteNextInt(randomFactory, AllBinaryTiledLayer_getColumns(tiledLayer));
            randomRow = MyRandomFactory_getAbsoluteNextInt(randomFactory, AllBinaryTiledLayer_getRows(tiledLayer));
            geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(basicGeographicMapCellPositionFactory, randomColumn, randomRow);
            if (AnyRandomDropCellPositionGenerator_isDropAllowedAt(this, geographicMapCellPosition)) {
                BasicArrayList_add(this->list, geographicMapCellPosition);
            }
        }
}


// throws Exception
void AnyRandomDropCellPositionGenerator_processTick(AnyRandomDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager) {
}

