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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"

typedef struct RaceTrackGeographicMap RaceTrackGeographicMap;
struct RaceTrackGeographicMap {
    BaseRaceTrackGeographicMap base;
    CustomMapGeneratorBase* customMapGenerator;
};


RaceTrackGeographicMap* RaceTrackGeographicMap_new(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory);

void RaceTrackGeographicMap_init(RaceTrackGeographicMap* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory);
CustomMapGeneratorBase* RaceTrackGeographicMap_getCustomMapGenerator(RaceTrackGeographicMap* this);
bool RaceTrackGeographicMap_isValid(RaceTrackGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition);

static void RaceTrackGeographicMap_initFields(RaceTrackGeographicMap* this) {
    
}


void RaceTrackGeographicMap_init(RaceTrackGeographicMap* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory) {
        BaseRaceTrackGeographicMap_init(&this->base, raceTrackInfo, raceTrackData, AllBinaryTiledLayerFactoryInterface_getInstance(tiledLayerFactoryInterface, raceTrackInfo, raceTrackData), BasicGeographicMapFactory_getInstance(BasicGeographicMapFactory_new(), raceTrackInfo, raceTrackData, tiledLayerFactoryInterface, geographicMapCellPositionFactoryInterface, geographicMapCellTypeFactory), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
        RaceTrackGeographicMap_initFields(this);
        this->customMapGenerator = CustomMapGeneratorBaseFactory_create(customMapGeneratorBaseFactory, this);
}

RaceTrackGeographicMap* RaceTrackGeographicMap_new(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory) {
    RaceTrackGeographicMap* this = calloc(1, sizeof(RaceTrackGeographicMap));
    RaceTrackGeographicMap_init(this, raceTrackInfo, raceTrackData, tiledLayerFactoryInterface, geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory, customMapGeneratorBaseFactory);
    return this;
}


CustomMapGeneratorBase* RaceTrackGeographicMap_getCustomMapGenerator(RaceTrackGeographicMap* this) {
        return this->customMapGenerator;
}


// throws Exception
bool RaceTrackGeographicMap_isValid(RaceTrackGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t** customMapArray = CustomMapGeneratorBase_getCustomMapArray(this->customMapGenerator);
        if (GeographicMapCellPosition_getColumn(geographicMapCellPosition) >= java_array_length(customMapArray[0])) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Column: ");
            StringMaker_appendint(stringBuffer, ((int32_t) GeographicMapCellPosition_getColumn(geographicMapCellPosition)));
            StringMaker_append(stringBuffer, " not in: ");
            StringMaker_appendint(stringBuffer, java_array_length(customMapArray[0]));
            JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            if (GeographicMapCellPosition_getColumn(geographicMapCellPosition) == java_array_length(customMapArray[0])) {
                return true;
            } else {
                return false;
            }
        } else if (GeographicMapCellPosition_getRow(geographicMapCellPosition) > java_array_length(customMapArray)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Row: ");
            StringMaker_appendint(stringBuffer, ((int32_t) GeographicMapCellPosition_getRow(geographicMapCellPosition)));
            StringMaker_append(stringBuffer, " not in: ");
            StringMaker_appendint(stringBuffer, java_array_length(customMapArray));
            JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            if (GeographicMapCellPosition_getRow(geographicMapCellPosition) == java_array_length(customMapArray)) {
                return true;
            } else {
                return false;
            }
        }
        return true;
}

