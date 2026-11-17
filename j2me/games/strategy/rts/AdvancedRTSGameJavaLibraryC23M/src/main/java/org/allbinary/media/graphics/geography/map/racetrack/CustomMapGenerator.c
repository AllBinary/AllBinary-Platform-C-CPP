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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"

typedef struct CustomMapGenerator CustomMapGenerator;
struct CustomMapGenerator {
    CustomMapGeneratorBase base;
    int32_t** customMapArray;
    RaceTrackGeographicMap* raceTrackGeographicMap;
    GeographicMapCellTypeFactory* geographicMapCellTypeFactory;
    DropCellPositionHistory* dropCellPositionHistory;
};


CustomMapGenerator* CustomMapGenerator_new(RaceTrackGeographicMap* raceTrackGeographicMap);

void CustomMapGenerator_init(CustomMapGenerator* this, RaceTrackGeographicMap* raceTrackGeographicMap);
void CustomMapGenerator_copyMapIntoCustomMap(CustomMapGenerator* this);
int32_t CustomMapGenerator_getCustomType(CustomMapGenerator* this, int32_t column, int32_t row, int32_t currentType);
int32_t** CustomMapGenerator_getCustomMapArray(CustomMapGenerator* this);

static void CustomMapGenerator_initFields(CustomMapGenerator* this) {
    
    
    
    this->dropCellPositionHistory = DropCellPositionHistory_getInstance();
}


void CustomMapGenerator_init(CustomMapGenerator* this, RaceTrackGeographicMap* raceTrackGeographicMap) {
    CustomMapGeneratorBase_init(&this->base);
    CustomMapGenerator_initFields(this);
        this->raceTrackGeographicMap = raceTrackGeographicMap;
        this->geographicMapCellTypeFactory = RaceTrackGeographicMap_getGeographicMapCellTypeFactory(this->raceTrackGeographicMap);
        int32_t** mapArray = JAVA_CALL(RaceTrackGeographicMap_getRaceTrackData(raceTrackGeographicMap), getMapArray);
        int32_t size2 = java_array_length(mapArray[0]);
        this->customMapArray = ((int32_t**) java_array_new2(sizeof(int32_t), java_array_length(mapArray), size2));
        if (java_array_length(mapArray) != java_array_length(this->customMapArray) || java_array_length(mapArray[0]) != java_array_length(this->customMapArray[0])) {
            java_throw(java_exception_new("Exception", "Array Incorrect"));
        }
}

CustomMapGenerator* CustomMapGenerator_new(RaceTrackGeographicMap* raceTrackGeographicMap) {
    CustomMapGenerator* this = calloc(1, sizeof(CustomMapGenerator));
    CustomMapGenerator_init(this, raceTrackGeographicMap);
    return this;
}


// throws Exception
void CustomMapGenerator_copyMapIntoCustomMap(CustomMapGenerator* this) {
        int32_t** mapArray = JAVA_CALL(RaceTrackGeographicMap_getRaceTrackData(this->raceTrackGeographicMap), getMapArray);
        int32_t startIndex2 = java_array_length(mapArray[0]) - 1;
        for (int32_t index = java_array_length(mapArray) - 1; index >= 0; index--) {
            for (int32_t index2 = startIndex2; index2 >= 0; index2--) {
                this->customMapArray[index][index2] = CustomMapGenerator_getCustomType(this, index2, index, mapArray[index][index2]);
            }
        }
}


// throws Exception
int32_t CustomMapGenerator_getCustomType(CustomMapGenerator* this, int32_t column, int32_t row, int32_t currentType) {
        int32_t emptyType = GeographicMapCellTypeFactory_getEmptyType(this->geographicMapCellTypeFactory);
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = RaceTrackGeographicMap_getGeographicMapCellPositionFactory(this->raceTrackGeographicMap);
        CellPosition* cellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row);
        if (DropCellPositionHistory_isCellPositionWithDrop(this->dropCellPositionHistory, cellPosition)) {
            AllBinaryLayer* layer = DropCellPositionHistory_getLayerInterface(this->dropCellPositionHistory, cellPosition);
            if (layer == AllBinaryLayer_NULL_ALLBINARY_LAYER) {
                return emptyType;
            }
            AdvancedRTSGameLayer* rtsLayer = ((AdvancedRTSGameLayer*) layer);
            if (!(AdvancedRTSGameLayer_getType(rtsLayer) == WaypointLayer_getStaticType())) {
                return emptyType;
            }
        }
        return currentType;
}


int32_t** CustomMapGenerator_getCustomMapArray(CustomMapGenerator* this) {
        return this->customMapArray;
}

