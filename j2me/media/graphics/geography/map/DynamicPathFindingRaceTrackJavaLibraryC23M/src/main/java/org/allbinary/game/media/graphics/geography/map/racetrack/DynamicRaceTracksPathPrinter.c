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
// package org.allbinary.game.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterfaceFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h"

typedef struct DynamicRaceTracksPathPrinter DynamicRaceTracksPathPrinter;
struct DynamicRaceTracksPathPrinter {
    RaceTracksPathPrinter base;
    LogUtil* logUtil;
};


DynamicRaceTracksPathPrinter* DynamicRaceTracksPathPrinter_new(void);
void DynamicRaceTracksPathPrinter_printAllPaths(DynamicRaceTracksPathPrinter* this, RaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PathFindingInfo* pathFindingInfo, int32_t size);

static void DynamicRaceTracksPathPrinter_initFields(DynamicRaceTracksPathPrinter* this) {
    this->logUtil = LogUtil_getInstance();
}

void DynamicRaceTracksPathPrinter_init(DynamicRaceTracksPathPrinter* this) {
    RaceTracksPathPrinter_init(&this->base);
    DynamicRaceTracksPathPrinter_initFields(this);
}

DynamicRaceTracksPathPrinter* DynamicRaceTracksPathPrinter_new(void) {
    DynamicRaceTracksPathPrinter* this = calloc(1, sizeof(DynamicRaceTracksPathPrinter));
    DynamicRaceTracksPathPrinter_init(this);
    return this;
}


void DynamicRaceTracksPathPrinter_printAllPaths(DynamicRaceTracksPathPrinter* this, RaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PathFindingInfo* pathFindingInfo, int32_t size) {
        JAVA_TRY {
            for (int32_t index = 0; index < size; index++) {
                BasicGeographicMap* geographicMapInterface = RaceTrackGeographicMapInterfaceFactoryInterface_getTrackInstance(raceTrackGeographicMapInterfaceFactoryInterface, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), index));
                BasicArrayList* list = PathGenerator_createList(PathGenerator_getInstance(), geographicMapInterface, RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance(), pathFindingInfo, 10);
                puts(java_string_of(java_concat("Track ", java_string_of(index))));
                DynamicRaceTracksPathPrinter_printPaths(this, list);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

