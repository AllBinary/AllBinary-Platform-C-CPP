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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/NullRaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct RaceTrackDropCellPositionGenerator RaceTrackDropCellPositionGenerator;
struct RaceTrackDropCellPositionGenerator {
    BaseDropCellPositionGenerator base;
    BasicArrayList* list;
    TimeDelayHelper* timeDelayHelper;
    int32_t STRAIGHTAWAY;
    RaceTrackGeographicMapInterface* raceTrackGeographicMap;
    GeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory;
    BasicArrayListUtil* basicArrayListUtil;
};


RaceTrackDropCellPositionGenerator* RaceTrackDropCellPositionGenerator_new(void);

void RaceTrackDropCellPositionGenerator_init(RaceTrackDropCellPositionGenerator* this);
static void RaceTrackDropCellPositionGenerator_init(RaceTrackDropCellPositionGenerator* this);
bool RaceTrackDropCellPositionGenerator_isDropAllowedAt(RaceTrackDropCellPositionGenerator* this, GeographicMapCellPosition* geographicMapCellPosition);
void RaceTrackDropCellPositionGenerator_update(RaceTrackDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);
void RaceTrackDropCellPositionGenerator_processTick(RaceTrackDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager);
void RaceTrackDropCellPositionGenerator_drop(RaceTrackDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index);

static void RaceTrackDropCellPositionGenerator_initFields(RaceTrackDropCellPositionGenerator* this) {
    this->list = BasicArrayListD_new();
    
    this->STRAIGHTAWAY = 4;
    this->raceTrackGeographicMap = NullRaceTrackGeographicMap_NULL_RACE_TRACK_GEOGRAPHIC_MAP;
    this->raceTrackGeographicMapCellTypeFactory = GeographicMapCellTypeFactory_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void RaceTrackDropCellPositionGenerator_init(RaceTrackDropCellPositionGenerator* this) {
    BaseDropCellPositionGenerator_init(&this->base);
    RaceTrackDropCellPositionGenerator_initFields(this);
        this->timeDelayHelper = TimeDelayHelper_new(10000);
}

RaceTrackDropCellPositionGenerator* RaceTrackDropCellPositionGenerator_new(void) {
    RaceTrackDropCellPositionGenerator* this = calloc(1, sizeof(RaceTrackDropCellPositionGenerator));
    RaceTrackDropCellPositionGenerator_init(this);
    return this;
}


static void RaceTrackDropCellPositionGenerator_init(RaceTrackDropCellPositionGenerator* this) {
        BasicArrayList_clear(this->list);
}


// throws Exception
bool RaceTrackDropCellPositionGenerator_isDropAllowedAt(RaceTrackDropCellPositionGenerator* this, GeographicMapCellPosition* geographicMapCellPosition) {
        RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = ((RaceTrackGeographicMapCellType*) RaceTrackGeographicMapInterface_getCellTypeAt(this->raceTrackGeographicMap, geographicMapCellPosition));
        RaceTrackGeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) this->raceTrackGeographicMapCellTypeFactory);
        if (raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE || raceTrackGeographicMapCellType == raceTrackGeographicMapCellTypeFactory->VERTICAL_STRAIGHT_ROAD_CELL_TYPE) {
            return true;
        }
        return false;
}


// throws Exception
void RaceTrackDropCellPositionGenerator_update(RaceTrackDropCellPositionGenerator* this, AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface) {
        RaceTrackDropCellPositionGenerator_init(this);
        BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap = ((BaseRaceTrackGeographicMap*) geographicMapInterface);
        this->raceTrackGeographicMap = baseRaceTrackGeographicMap;
        this->raceTrackGeographicMapCellTypeFactory = ((RaceTrackGeographicMapCellTypeFactory*) BaseRaceTrackGeographicMap_getGeographicMapCellTypeFactory(baseRaceTrackGeographicMap));
        GeographicMapCellHistory* roadGeographicMapCellHistory = RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance();
        BasicArrayList* trackedList = GeographicMapCellHistory_getTracked(roadGeographicMapCellHistory);
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        int32_t lastIndex = BasicArrayList_size(trackedList) - 1;
        int32_t total = 0;
        int32_t ahead = 0;
        for (int32_t index = lastIndex; index > 0; index--) {
            geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(trackedList, index));
            total = 0;
            ahead = index;
            while (RaceTrackDropCellPositionGenerator_isDropAllowedAt(this, ((GeographicMapCellPosition*) BasicArrayList_get(trackedList, ahead)))) {
                total++;
                if (total > this->STRAIGHTAWAY) {
                    BasicArrayList_add(this->list, geographicMapCellPosition);
                    break;
                }
                ahead++;
                if (ahead > lastIndex) {
                    break;
                }
            }
        }
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size - 1; index >= 0; index--) {
            RaceTrackDropCellPositionGenerator_drop(this, allBinaryGameLayerManager, index);
        }
}


// throws Exception
void RaceTrackDropCellPositionGenerator_processTick(RaceTrackDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            int32_t index = BasicArrayListUtil_getRandomIndex(this->basicArrayListUtil, this->list);
            RaceTrackDropCellPositionGenerator_drop(this, allBinaryLayerManager, index);
        }
}


// throws Exception
void RaceTrackDropCellPositionGenerator_drop(RaceTrackDropCellPositionGenerator* this, AllBinaryLayerManager* allBinaryLayerManager, int32_t index) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}

