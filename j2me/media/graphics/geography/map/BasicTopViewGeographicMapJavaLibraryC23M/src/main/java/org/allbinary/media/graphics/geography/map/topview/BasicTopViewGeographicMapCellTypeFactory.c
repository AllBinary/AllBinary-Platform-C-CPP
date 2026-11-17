/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media.graphics.geography.map.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"

typedef struct BasicTopViewGeographicMapCellTypeFactory BasicTopViewGeographicMapCellTypeFactory;
struct BasicTopViewGeographicMapCellTypeFactory {
    GeographicMapCellTypeFactory base;
    BasicTopViewGeographicMapCellType* BLOCK_CELL_TYPE;
    BasicTopViewGeographicMapCellType* OFF_MAP_CELL_TYPE;
    BasicTopViewGeographicMapCellType* FLOOR_CELL_TYPE;
    BasicTopViewGeographicMapCellType* DOOR_CELL_TYPE;
    BasicTopViewGeographicMapCellType* STAIRS_UP_CELL_TYPE;
    BasicTopViewGeographicMapCellType* STAIRS_DOWN_CELL_TYPE;
    BasicTopViewGeographicMapCellType* OTHER_CELL_TYPE;
    int32_t maxTileId;
};


BasicTopViewGeographicMapCellTypeFactory* BasicTopViewGeographicMapCellTypeFactory_new(ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId);

void BasicTopViewGeographicMapCellTypeFactory_init(BasicTopViewGeographicMapCellTypeFactory* this, ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId);
int32_t BasicTopViewGeographicMapCellTypeFactory_getStartType(BasicTopViewGeographicMapCellTypeFactory* this);
int32_t BasicTopViewGeographicMapCellTypeFactory_getEndType(BasicTopViewGeographicMapCellTypeFactory* this);
int32_t BasicTopViewGeographicMapCellTypeFactory_getEmptyType(BasicTopViewGeographicMapCellTypeFactory* this);
bool BasicTopViewGeographicMapCellTypeFactory_isPath(BasicTopViewGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType);
const char* BasicTopViewGeographicMapCellTypeFactory_toString(BasicTopViewGeographicMapCellTypeFactory* this);

static void BasicTopViewGeographicMapCellTypeFactory_initFields(BasicTopViewGeographicMapCellTypeFactory* this) {
    
    
    
    
    
    
    
    
}


void BasicTopViewGeographicMapCellTypeFactory_init(BasicTopViewGeographicMapCellTypeFactory* this, ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId) {
    GeographicMapCellTypeFactory_init(&this->base);
    BasicTopViewGeographicMapCellTypeFactory_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_CALL(this->logUtil, putF, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        this->maxTileId = maxTileId;
        BasicTopViewGeographicMapStrings* basicTopViewGeographicMapStrings = BasicTopViewGeographicMapStrings_getInstance();
        GeographicMapCellTypeFactory* geographicMapCellTypeFactory = GeographicMapCellTypeFactory_getInstance();
        GeographicMapCellType** geographicMapCellTypeArray = GeographicMapCellTypeFactory_getGeographicMapCellTypeArray(geographicMapCellTypeFactory);
        int32_t type = 0;
        if (geographicMapCellTypeArray[type] == nullptr) {
            RaceTrackGeographicMapCellType_new(CommonStrings_getInstance()->UNKNOWN, type, 999, 0);
        } else {
        }
        BasicTopViewGeographicMapCellType* BLOCK_CELL_TYPE = BasicTopViewGeographicMapCellType_createType(basicTopViewGeographicMapStrings->DEFAULT, 1, 1);
        BasicTopViewGeographicMapCellType* OFF_MAP_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicTopViewGeographicMapCellType* FLOOR_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicTopViewGeographicMapCellType* DOOR_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicTopViewGeographicMapCellType* STAIRS_UP_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicTopViewGeographicMapCellType* STAIRS_DOWN_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicTopViewGeographicMapCellType* OTHER_CELL_TYPE = BLOCK_CELL_TYPE;
        Any** keyArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), tileTypeToTileIdsMap);
        int32_t size = java_array_length(keyArray);
        BasicArrayList* idsWithTypeList = nullptr;
        const char* key = nullptr;
        BasicTopViewGeographicMapCellType* basicPlatormGeographicMapCellType = nullptr;
        for (int32_t index = 0; index < size; index++) {
            key = ((const char*) keyArray[index]);
            idsWithTypeList = ((BasicArrayList*) ABHashtable_get(tileTypeToTileIdsMap, key));
            if ((strcmp(key, basicTopViewGeographicMapStrings->WALL) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->WALL, idsWithTypeList, 1000);
                BLOCK_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->OFF_MAP) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->OFF_MAP, idsWithTypeList, 1001);
                OFF_MAP_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->FLOOR) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->FLOOR, idsWithTypeList, 1);
                FLOOR_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->DOOR) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->DOOR, idsWithTypeList, 1);
                DOOR_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->STAIRS_UP) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->STAIRS_UP, idsWithTypeList, 1);
                STAIRS_UP_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->STAIRS_DOWN) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->STAIRS_DOWN, idsWithTypeList, 1);
                STAIRS_DOWN_CELL_TYPE = basicPlatormGeographicMapCellType;
            } else if ((strcmp(key, basicTopViewGeographicMapStrings->OTHER) == 0)) {
                basicPlatormGeographicMapCellType = BasicTopViewGeographicMapCellType_new(basicTopViewGeographicMapStrings->OTHER, idsWithTypeList, 1);
                OTHER_CELL_TYPE = basicPlatormGeographicMapCellType;
            }
        }
        this->BLOCK_CELL_TYPE = BLOCK_CELL_TYPE;
        this->OFF_MAP_CELL_TYPE = OFF_MAP_CELL_TYPE;
        this->FLOOR_CELL_TYPE = FLOOR_CELL_TYPE;
        this->DOOR_CELL_TYPE = DOOR_CELL_TYPE;
        this->STAIRS_UP_CELL_TYPE = STAIRS_UP_CELL_TYPE;
        this->STAIRS_DOWN_CELL_TYPE = STAIRS_DOWN_CELL_TYPE;
        this->OTHER_CELL_TYPE = OTHER_CELL_TYPE;
        type = this->maxTileId - 1;
        if (geographicMapCellTypeArray[type] == nullptr) {
            RaceTrackGeographicMapCellType_new(commonStrings->START, type, 1, 0);
        } else {
        }
        type = this->maxTileId - 2;
        if (geographicMapCellTypeArray[type] == nullptr) {
            RaceTrackGeographicMapCellType_new(commonStrings->START, type, 1, 0);
        } else {
        }
}

BasicTopViewGeographicMapCellTypeFactory* BasicTopViewGeographicMapCellTypeFactory_new(ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId) {
    BasicTopViewGeographicMapCellTypeFactory* this = calloc(1, sizeof(BasicTopViewGeographicMapCellTypeFactory));
    BasicTopViewGeographicMapCellTypeFactory_init(this, tileTypeToTileIdsMap, maxTileId);
    return this;
}


int32_t BasicTopViewGeographicMapCellTypeFactory_getStartType(BasicTopViewGeographicMapCellTypeFactory* this) {
        return this->maxTileId - 1;
}


int32_t BasicTopViewGeographicMapCellTypeFactory_getEndType(BasicTopViewGeographicMapCellTypeFactory* this) {
        return this->maxTileId - 2;
}


int32_t BasicTopViewGeographicMapCellTypeFactory_getEmptyType(BasicTopViewGeographicMapCellTypeFactory* this) {
        return BasicTopViewGeographicMapCellType_getTypes(this->FLOOR_CELL_TYPE)[0];
}


bool BasicTopViewGeographicMapCellTypeFactory_isPath(BasicTopViewGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType) {
        if (BasicTopViewGeographicMapCellType_isType(this->FLOOR_CELL_TYPE, cellType)) {
            return true;
        }
        return false;
}


const char* BasicTopViewGeographicMapCellTypeFactory_toString(BasicTopViewGeographicMapCellTypeFactory* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "key: WALL/BLOCK_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->BLOCK_CELL_TYPE)), append, "key: FLOOR_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->FLOOR_CELL_TYPE)), append, "key: OTHER_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->OTHER_CELL_TYPE)), append, "key: OFF_MAP_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->OFF_MAP_CELL_TYPE)), append, "key: DOOR_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->DOOR_CELL_TYPE)), append, "key: STAIRS_DOWN_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->STAIRS_DOWN_CELL_TYPE)), append, "key: STAIRS_UP_CELL_TYPE: "), append, BasicTopViewGeographicMapCellType_toString(this->STAIRS_UP_CELL_TYPE)), toString);
}

