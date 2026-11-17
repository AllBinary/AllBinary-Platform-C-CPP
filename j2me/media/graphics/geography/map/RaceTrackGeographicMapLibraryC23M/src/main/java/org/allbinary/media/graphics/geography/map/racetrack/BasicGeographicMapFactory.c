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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"

typedef struct BasicGeographicMapFactory BasicGeographicMapFactory;
struct BasicGeographicMapFactory {
    char unused;
};


BasicGeographicMapFactory* BasicGeographicMapFactory_new(void);
BasicGeographicMap* BasicGeographicMapFactory_getInstance(BasicGeographicMapFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

void BasicGeographicMapFactory_init(BasicGeographicMapFactory* this) {
}

BasicGeographicMapFactory* BasicGeographicMapFactory_new(void) {
    BasicGeographicMapFactory* this = calloc(1, sizeof(BasicGeographicMapFactory));
    BasicGeographicMapFactory_init(this);
    return this;
}


// throws Exception
BasicGeographicMap* BasicGeographicMapFactory_getInstance(BasicGeographicMapFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) {
        return BasicGeographicMap_new(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), JAVA_CALL(RaceTrackInfo_getId(raceTrackInfo), intValue) + 100 + 1), RaceTrackInfo_getName(raceTrackInfo), RaceTrackData_getCellTypeIdToGeographicMapCellTypeArray(raceTrackData), AllBinaryTiledLayerFactoryInterface_getMiniInstance(tiledLayerFactoryInterface, raceTrackData), BasicColorFactory_getInstance()->CLEAR_COLOR, BasicColorFactory_getInstance()->CLEAR_COLOR, geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory_new(), geographicMapCellTypeFactory);
}

