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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"

typedef struct BaseRaceTrackGeographicMap BaseRaceTrackGeographicMap;
struct BaseRaceTrackGeographicMap {
    BasicGeographicMap base;
    RaceTrackGeographicMapInterface RaceTrackGeographicMapInterface_interface;
    LogUtil* logUtil;
    RaceTrackInfo* raceTrackInfo;
    RaceTrackData* raceTrackData;
    BasicGeographicMap* miniGeographicMap;
};


BaseRaceTrackGeographicMap* BaseRaceTrackGeographicMap_new(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

void BaseRaceTrackGeographicMap_init(BaseRaceTrackGeographicMap* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);
RaceTrackInfo* BaseRaceTrackGeographicMap_getRaceTrackInfo(BaseRaceTrackGeographicMap* this);
void BaseRaceTrackGeographicMap_setRaceTrackInfo(BaseRaceTrackGeographicMap* this, RaceTrackInfo* aRaceTrackInfo);
void BaseRaceTrackGeographicMap_setMiniBasicGeographicMap(BaseRaceTrackGeographicMap* this, BasicGeographicMap* miniBasicGeographicMap);
BasicGeographicMap* BaseRaceTrackGeographicMap_getMiniBasicGeographicMap(BaseRaceTrackGeographicMap* this);
RaceTrackData* BaseRaceTrackGeographicMap_getRaceTrackData(BaseRaceTrackGeographicMap* this);
void BaseRaceTrackGeographicMap_setRaceTrackData(BaseRaceTrackGeographicMap* this, RaceTrackData* raceTrackData);
int32_t BaseRaceTrackGeographicMap_getId(BaseRaceTrackGeographicMap* this);
const char* BaseRaceTrackGeographicMap_getName(BaseRaceTrackGeographicMap* this);
void BaseRaceTrackGeographicMap_reset(BaseRaceTrackGeographicMap* this);
AllBinaryTiledLayer* BaseRaceTrackGeographicMap_getAllBinaryTiledLayer(BaseRaceTrackGeographicMap* this);
int32_t BaseRaceTrackGeographicMap_getCellTypeFromMapCellTypeInt(BaseRaceTrackGeographicMap* this, int32_t cellTypeId);
GeographicMapCellType* BaseRaceTrackGeographicMap_getCellTypeAt(BaseRaceTrackGeographicMap* this, GeographicMapCellPosition* cellPosition);
BasicColor* BaseRaceTrackGeographicMap_getForegroundBasicColor(BaseRaceTrackGeographicMap* this);
BasicColor* BaseRaceTrackGeographicMap_getBackgroundBasicColor(BaseRaceTrackGeographicMap* this);

static void BaseRaceTrackGeographicMap_initFields(BaseRaceTrackGeographicMap* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


void BaseRaceTrackGeographicMap_init(BaseRaceTrackGeographicMap* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) {
        BasicGeographicMap_init(&this->base, RaceTrackInfo_getId(raceTrackInfo), RaceTrackInfo_getName(raceTrackInfo), RaceTrackData_getCellTypeIdToGeographicMapCellTypeArray(raceTrackData), tiledLayer, RaceTrackInfo_getForegroundBasicColor(raceTrackInfo), RaceTrackInfo_getBackgroundBasicColor(raceTrackInfo), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
        BaseRaceTrackGeographicMap_initFields(this);
        this->raceTrackInfo = raceTrackInfo;
        this->raceTrackData = raceTrackData;
        this->miniGeographicMap = miniGeographicMap;
        AllBinaryTiledLayer* miniTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->miniGeographicMap);
        if (AllBinaryTiledLayer_getColumns(miniTiledLayer) != JAVA_CALL(BaseRaceTrackGeographicMap_getGeographicMapCellPositionFactory(this), getColumns)) {
            const char* error = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "RaceTrackMap has incorrect Mini Map columns: "), appendint, ((int32_t) AllBinaryTiledLayer_getColumns(miniTiledLayer))), append, " != "), appendint, ((int32_t) JAVA_CALL(BaseRaceTrackGeographicMap_getGeographicMapCellPositionFactory(this), getColumns))), toString);
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR);
            java_throw(java_exception_new("Exception", error));
        }
        if (AllBinaryTiledLayer_getRows(miniTiledLayer) != JAVA_CALL(BaseRaceTrackGeographicMap_getGeographicMapCellPositionFactory(this), getRows)) {
            const char* error = "RaceTrackMap has incorrect Mini Map rows";
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR);
            java_throw(java_exception_new("Exception", error));
        }
}

BaseRaceTrackGeographicMap* BaseRaceTrackGeographicMap_new(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) {
    BaseRaceTrackGeographicMap* this = calloc(1, sizeof(BaseRaceTrackGeographicMap));
    BaseRaceTrackGeographicMap_init(this, raceTrackInfo, raceTrackData, tiledLayer, miniGeographicMap, geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
    return this;
}


RaceTrackInfo* BaseRaceTrackGeographicMap_getRaceTrackInfo(BaseRaceTrackGeographicMap* this) {
        return this->raceTrackInfo;
}


void BaseRaceTrackGeographicMap_setRaceTrackInfo(BaseRaceTrackGeographicMap* this, RaceTrackInfo* aRaceTrackInfo) {
        this->raceTrackInfo = aRaceTrackInfo;
}


void BaseRaceTrackGeographicMap_setMiniBasicGeographicMap(BaseRaceTrackGeographicMap* this, BasicGeographicMap* miniBasicGeographicMap) {
        this->miniGeographicMap = miniBasicGeographicMap;
}


BasicGeographicMap* BaseRaceTrackGeographicMap_getMiniBasicGeographicMap(BaseRaceTrackGeographicMap* this) {
        return this->miniGeographicMap;
}


RaceTrackData* BaseRaceTrackGeographicMap_getRaceTrackData(BaseRaceTrackGeographicMap* this) {
        return this->raceTrackData;
}


void BaseRaceTrackGeographicMap_setRaceTrackData(BaseRaceTrackGeographicMap* this, RaceTrackData* raceTrackData) {
        this->raceTrackData = raceTrackData;
}


int32_t BaseRaceTrackGeographicMap_getId(BaseRaceTrackGeographicMap* this) {
        return BasicGeographicMap_getId((&this->base));
}


const char* BaseRaceTrackGeographicMap_getName(BaseRaceTrackGeographicMap* this) {
        return BasicGeographicMap_getName((&this->base));
}


void BaseRaceTrackGeographicMap_reset(BaseRaceTrackGeographicMap* this) {
        BasicGeographicMap_reset((&this->base));
}


AllBinaryTiledLayer* BaseRaceTrackGeographicMap_getAllBinaryTiledLayer(BaseRaceTrackGeographicMap* this) {
        return BasicGeographicMap_getAllBinaryTiledLayer((&this->base));
}


int32_t BaseRaceTrackGeographicMap_getCellTypeFromMapCellTypeInt(BaseRaceTrackGeographicMap* this, int32_t cellTypeId) {
        return BasicGeographicMap_getCellTypeFromMapCellTypeInt((&this->base), cellTypeId);
}


// throws Exception
GeographicMapCellType* BaseRaceTrackGeographicMap_getCellTypeAt(BaseRaceTrackGeographicMap* this, GeographicMapCellPosition* cellPosition) {
        return BasicGeographicMap_getCellTypeAt((&this->base), cellPosition);
}


BasicColor* BaseRaceTrackGeographicMap_getForegroundBasicColor(BaseRaceTrackGeographicMap* this) {
        return BasicGeographicMap_getForegroundBasicColor((&this->base));
}


BasicColor* BaseRaceTrackGeographicMap_getBackgroundBasicColor(BaseRaceTrackGeographicMap* this) {
        return BasicGeographicMap_getBackgroundBasicColor((&this->base));
}

