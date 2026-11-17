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
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"

typedef struct RaceTrackAdjacentDropCellPositionGenerator RaceTrackAdjacentDropCellPositionGenerator;
struct RaceTrackAdjacentDropCellPositionGenerator {
    RaceTrackDropCellPositionGenerator base;
    LayerCoveringCellPositionsUtil* layerCoveringCellPositionsUtil;
    GroupCommonFactory* groupCommonFactory;
    GeographicMapCellPosition** surroundingCellPositions;
    ABHashtable* hashtable;
    GeographicMapDirectionUtil* geographicMapDirectionUtil;
};

static RaceTrackAdjacentDropCellPositionGenerator* RaceTrackAdjacentDropCellPositionGenerator_SINGLETON;

RaceTrackAdjacentDropCellPositionGenerator* RaceTrackAdjacentDropCellPositionGenerator_new(void);
DropCellPositionGeneratorInterface* RaceTrackAdjacentDropCellPositionGenerator_getInstance(void);

void RaceTrackAdjacentDropCellPositionGenerator_init(RaceTrackAdjacentDropCellPositionGenerator* this);
static GeographicMapCellPosition* RaceTrackAdjacentDropCellPositionGenerator_getFirstNonRoadAdjacentCellPosition(RaceTrackAdjacentDropCellPositionGenerator* this, int32_t column, int32_t row);
void RaceTrackAdjacentDropCellPositionGenerator_update(RaceTrackAdjacentDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);
void RaceTrackAdjacentDropCellPositionGenerator_drop(RaceTrackAdjacentDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index);

// Static fields with runtime initializers: call this once at startup
void RaceTrackAdjacentDropCellPositionGenerator_staticInit(void) {
    RaceTrackAdjacentDropCellPositionGenerator_SINGLETON = RaceTrackAdjacentDropCellPositionGenerator_new();
}

static void RaceTrackAdjacentDropCellPositionGenerator_initFields(RaceTrackAdjacentDropCellPositionGenerator* this) {
    this->layerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil_getInstance();
    this->groupCommonFactory = GroupCommonFactory_getInstance();
    this->surroundingCellPositions = ((GeographicMapCellPosition**) java_array_new(sizeof(GeographicMapCellPosition*), 4));
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->geographicMapDirectionUtil = GeographicMapDirectionUtil_getInstance();
}


DropCellPositionGeneratorInterface* RaceTrackAdjacentDropCellPositionGenerator_getInstance(void) {
        return RaceTrackAdjacentDropCellPositionGenerator_SINGLETON;
}


void RaceTrackAdjacentDropCellPositionGenerator_init(RaceTrackAdjacentDropCellPositionGenerator* this) {
    RaceTrackDropCellPositionGenerator_init(&this->base);
    RaceTrackAdjacentDropCellPositionGenerator_initFields(this);
}

RaceTrackAdjacentDropCellPositionGenerator* RaceTrackAdjacentDropCellPositionGenerator_new(void) {
    RaceTrackAdjacentDropCellPositionGenerator* this = calloc(1, sizeof(RaceTrackAdjacentDropCellPositionGenerator));
    RaceTrackAdjacentDropCellPositionGenerator_init(this);
    return this;
}


// throws Exception
static GeographicMapCellPosition* RaceTrackAdjacentDropCellPositionGenerator_getFirstNonRoadAdjacentCellPosition(RaceTrackAdjacentDropCellPositionGenerator* this, int32_t column, int32_t row) {
        GeographicMapCellPosition* nonRoadGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = JAVA_CALL(this->raceTrackGeographicMap, getGeographicMapCellPositionFactory);
        this->surroundingCellPositions[0] = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row - 1);
        this->surroundingCellPositions[1] = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row + 1);
        this->surroundingCellPositions[2] = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column - 1, row);
        this->surroundingCellPositions[3] = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column + 1, row);
        BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = ((BaseRaceTrackGeographicMap*) this->raceTrackGeographicMap);
        RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) BaseRaceTrackGeographicMap_getGeographicMapCellTypeFactory(baseRaceTrackGeographicMap));
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = nullptr;
        for (int32_t index = java_array_length(this->surroundingCellPositions); --index >= 0; ) {
            geographicMapCellPosition = this->surroundingCellPositions[index];
            raceTrackGeographicMapCellType = ((RaceTrackGeographicMapCellType*) JAVA_CALL(this->raceTrackGeographicMap, getCellTypeAt, geographicMapCellPosition));
            if (!RaceTrackGeographicMapCellTypeFactory_isPath(raceTrackGeographicMapCellTypeFactory, raceTrackGeographicMapCellType)) {
                nonRoadGeographicMapCellPosition = geographicMapCellPosition;
                break;
            }
        }
        return nonRoadGeographicMapCellPosition;
}


// throws Exception
void RaceTrackAdjacentDropCellPositionGenerator_update(RaceTrackAdjacentDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) {
        ABHashtable_put(this->hashtable, AllBinaryGameLayerManager_ID, allBinaryGameLayerManager);
        RaceTrackDropCellPositionGenerator_update((&this->base), allBinaryGameLayerManager, geographicMapInterface);
}


// throws Exception
void RaceTrackAdjacentDropCellPositionGenerator_drop(RaceTrackAdjacentDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index) {
        GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(this->list, index));
        GeographicMapCellPosition* randomGeographicMapCellPosition = RaceTrackAdjacentDropCellPositionGenerator_getFirstNonRoadAdjacentCellPosition(this, GeographicMapCellPosition_getColumn(geographicMapCellPosition), GeographicMapCellPosition_getRow(geographicMapCellPosition));
        if (randomGeographicMapCellPosition == nullptr) {
            return;
        }
        DropCellPositionHistory* dropCellPositionHistory = DropCellPositionHistory_getInstance();
        if (!DropCellPositionHistory_isCellPositionWithDrop(dropCellPositionHistory, geographicMapCellPosition)) {
            Direction* direction = GeographicMapDirectionUtil_getDirectionFromCellPositionToAdjacentCellPosition(this->geographicMapDirectionUtil, randomGeographicMapCellPosition, geographicMapCellPosition);
            Any* objectCanBeNull = ABHashtable_get(this->hashtable, this->groupCommonFactory->ID);
            if (objectCanBeNull != nullptr) {
            } else {
                ABHashtable_put(this->hashtable, this->groupCommonFactory->ID, BasicGroupFactory_getInstance()->NONE_ARRAY);
            }
            ABHashtable_put(this->hashtable, DirectionFactory_getInstance()->NAME, direction);
            GPoint* point = GeographicMapCellPosition_getPoint(randomGeographicMapCellPosition);
            int32_t x = GPoint_getX(point);
            int32_t y = GPoint_getY(point);
            int32_t z = GPoint_getZ(point);
            AllBinaryLayer* layerInterface = JAVA_CALL(RaceTrackAdjacentDropLayerFactory_getRandomInstance(RaceTrackAdjacentDropLayerFactory_getInstance()), getNextInstance, this->hashtable, x, y, z);
            BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = ((BaseRaceTrackGeographicMap*) this->raceTrackGeographicMap);
            BasicArrayList* list = LayerCoveringCellPositionsUtil_getAll(this->layerCoveringCellPositionsUtil, baseRaceTrackGeographicMap, randomGeographicMapCellPosition, layerInterface, BasicArrayListD_new());
            if (DropCellPositionHistory_anyCellPositionWithDrop(dropCellPositionHistory, list)) {
                return;
            }
            GeographicMapCellType* geographicMapCellType = nullptr;
            for (int32_t index2 = BasicArrayList_size(list); --index2 >= 0; ) {
                geographicMapCellType = JAVA_CALL(this->raceTrackGeographicMap, getCellTypeAt, ((GeographicMapCellPosition*) BasicArrayList_get(list, index2)));
                if (RaceTrackGeographicMapCellTypeFactory_isPath(this->raceTrackGeographicMapCellTypeFactory, geographicMapCellType)) {
                    return;
                }
            }
            DropCellPositionHistory_addAll(dropCellPositionHistory, list, layerInterface);
            AllBinaryLayerManager_append(allBinaryLayerManager, layerInterface);
        }
}

