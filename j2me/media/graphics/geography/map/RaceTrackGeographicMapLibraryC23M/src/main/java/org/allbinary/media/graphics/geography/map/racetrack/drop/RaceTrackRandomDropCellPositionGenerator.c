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
// package org.allbinary.media.graphics.geography.map.racetrack.drop

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/drop/DropLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h"
#include "org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"

typedef struct RaceTrackRandomDropCellPositionGenerator RaceTrackRandomDropCellPositionGenerator;
struct RaceTrackRandomDropCellPositionGenerator {
    RaceTrackDropCellPositionGenerator base;
    MyRandomFactory* myRandomFactory;
    int32_t cellsPerRowOrColumn;
    int32_t totalCells;
    int32_t* rowArray;
    int32_t* columnArray;
    int32_t cellWidth;
    int32_t cellHeight;
};

static RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator_SINGLETON;

RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator_new(void);
RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator_getInstance(void);

void RaceTrackRandomDropCellPositionGenerator_init(RaceTrackRandomDropCellPositionGenerator* this);
void RaceTrackRandomDropCellPositionGenerator_update(RaceTrackRandomDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);
void RaceTrackRandomDropCellPositionGenerator_drop(RaceTrackRandomDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index);

// Static fields with runtime initializers: call this once at startup
void RaceTrackRandomDropCellPositionGenerator_staticInit(void) {
    RaceTrackRandomDropCellPositionGenerator_SINGLETON = RaceTrackRandomDropCellPositionGenerator_new();
}

static void RaceTrackRandomDropCellPositionGenerator_initFields(RaceTrackRandomDropCellPositionGenerator* this) {
    this->myRandomFactory = MyRandomFactory_getInstance();
    this->cellsPerRowOrColumn = 3;
    this->totalCells = this->cellsPerRowOrColumn * this->cellsPerRowOrColumn;
    this->rowArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, 1, 2, 0, 1, 2, 0, 1, 2 }) / sizeof(int32_t), (int32_t[]){ 0, 1, 2, 0, 1, 2, 0, 1, 2 }));
    this->columnArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, 0, 0, 1, 1, 1, 2, 2, 2 }) / sizeof(int32_t), (int32_t[]){ 0, 0, 0, 1, 1, 1, 2, 2, 2 }));
    this->cellWidth = 0;
    this->cellHeight = 0;
}


RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator_getInstance(void) {
        return RaceTrackRandomDropCellPositionGenerator_SINGLETON;
}


void RaceTrackRandomDropCellPositionGenerator_init(RaceTrackRandomDropCellPositionGenerator* this) {
    RaceTrackDropCellPositionGenerator_init(&this->base);
    RaceTrackRandomDropCellPositionGenerator_initFields(this);
}

RaceTrackRandomDropCellPositionGenerator* RaceTrackRandomDropCellPositionGenerator_new(void) {
    RaceTrackRandomDropCellPositionGenerator* this = calloc(1, sizeof(RaceTrackRandomDropCellPositionGenerator));
    RaceTrackRandomDropCellPositionGenerator_init(this);
    return this;
}


// throws Exception
void RaceTrackRandomDropCellPositionGenerator_update(RaceTrackRandomDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) {
        RaceTrackDropCellPositionGenerator_update((&this->base), allBinaryGameLayerManager, geographicMapInterface);
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        this->cellWidth = AllBinaryTiledLayer_getCellWidth(tiledLayer) / this->cellsPerRowOrColumn;
        this->cellHeight = AllBinaryTiledLayer_getCellHeight(tiledLayer) / this->cellsPerRowOrColumn;
}


// throws Exception
void RaceTrackRandomDropCellPositionGenerator_drop(RaceTrackRandomDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index) {
        GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) JAVA_CALL(this->list, get, index));
        GPoint* point = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
        int32_t randomCell = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, this->totalCells);
        int32_t row = this->rowArray[randomCell];
        int32_t column = this->columnArray[randomCell];
        int32_t x = GPoint_getX(point) + (row * this->cellWidth);
        int32_t y = GPoint_getY(point) + (column * this->cellHeight);
        PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactory = DropLayerFactory_getRandomInstance(DropLayerFactory_getInstance());
        AllBinaryTiledLayer* tiledLayer = JAVA_CALL(this->raceTrackGeographicMap, getAllBinaryTiledLayer);
        RaceTrackPickupLayer* pickupLayer = ((RaceTrackPickupLayer*) PickupLayerCircularStaticPool_getInstanceXYZ(PickupLayerCircularStaticPool_getInstance(), pickedUpLayerInterfaceFactory, x, y, AllBinaryTiledLayer_getZP(tiledLayer) + 3));
        RaceTrackPickupLayer_setTiledLayer(pickupLayer, tiledLayer);
        AllBinaryLayerManager_append(allBinaryLayerManager, pickupLayer);
}

