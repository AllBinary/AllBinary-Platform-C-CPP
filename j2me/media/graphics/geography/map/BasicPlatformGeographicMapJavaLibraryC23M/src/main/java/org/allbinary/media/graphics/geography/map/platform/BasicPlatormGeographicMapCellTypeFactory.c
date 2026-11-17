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
// package org.allbinary.media.graphics.geography.map.platform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Enumeration.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/EnumerationUtil.h"

typedef struct BasicPlatormGeographicMapCellTypeFactory BasicPlatormGeographicMapCellTypeFactory;
struct BasicPlatormGeographicMapCellTypeFactory {
    GeographicMapCellTypeFactory base;
    EnumerationUtil* enumerationUtil;
    BasicPlatormGeographicMapCellType* BLOCK_CELL_TYPE;
    BasicPlatormGeographicMapCellType* JUMP_THRU_CELL_TYPE;
    BasicPlatormGeographicMapCellType* LADDER_CELL_TYPE;
    int32_t maxTileId;
};


BasicPlatormGeographicMapCellTypeFactory* BasicPlatormGeographicMapCellTypeFactory_new(ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId);

void BasicPlatormGeographicMapCellTypeFactory_init(BasicPlatormGeographicMapCellTypeFactory* this, ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId);
int32_t BasicPlatormGeographicMapCellTypeFactory_getStartType(BasicPlatormGeographicMapCellTypeFactory* this);
int32_t BasicPlatormGeographicMapCellTypeFactory_getEndType(BasicPlatormGeographicMapCellTypeFactory* this);
int32_t BasicPlatormGeographicMapCellTypeFactory_getEmptyType(BasicPlatormGeographicMapCellTypeFactory* this);
bool BasicPlatormGeographicMapCellTypeFactory_isPath(BasicPlatormGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType);

static void BasicPlatormGeographicMapCellTypeFactory_initFields(BasicPlatormGeographicMapCellTypeFactory* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
    
    
    
    
}


void BasicPlatormGeographicMapCellTypeFactory_init(BasicPlatormGeographicMapCellTypeFactory* this, ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId) {
    GeographicMapCellTypeFactory_init(&this->base);
    BasicPlatormGeographicMapCellTypeFactory_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_CALL(this->logUtil, putF, commonStrings->START, this, commonStrings->INIT);
        this->maxTileId = maxTileId;
        GeographicMapCellType_new(0, 0);
        BasicPlatormGeographicMapCellType* BLOCK_CELL_TYPE = BasicPlatormGeographicMapCellType_createType(1);
        BasicPlatormGeographicMapCellType* JUMP_THRU_CELL_TYPE = BLOCK_CELL_TYPE;
        BasicPlatormGeographicMapCellType* LADDER_CELL_TYPE = BLOCK_CELL_TYPE;
        const char* PLATFORM = "Platform";
        const char* JUMP_TRHU = "JumpThru";
        const char* LADDER = "Ladder";
        Enumeration* enumeration = ABHashtable_keys(tileTypeToTileIdsMap);
        BasicArrayList* idsWithTypeList = nullptr;
        const char* key = nullptr;
        BasicPlatormGeographicMapCellType* basicPlatormGeographicMapCellType = nullptr;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            key = ((const char*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration));
            JAVA_CALL(this->logUtil, putF, key, this, commonStrings->INIT);
            idsWithTypeList = ((BasicArrayList*) ABHashtable_get(tileTypeToTileIdsMap, key));
            basicPlatormGeographicMapCellType = BasicPlatormGeographicMapCellType_new(idsWithTypeList);
            if ((strcmp(key, PLATFORM) == 0)) {
                BLOCK_CELL_TYPE = basicPlatormGeographicMapCellType;
            }
            if ((strcmp(key, JUMP_TRHU) == 0)) {
                JUMP_THRU_CELL_TYPE = basicPlatormGeographicMapCellType;
            }
            if ((strcmp(key, LADDER) == 0)) {
                LADDER_CELL_TYPE = basicPlatormGeographicMapCellType;
            }
        }
        this->BLOCK_CELL_TYPE = BLOCK_CELL_TYPE;
        this->JUMP_THRU_CELL_TYPE = JUMP_THRU_CELL_TYPE;
        this->LADDER_CELL_TYPE = LADDER_CELL_TYPE;
        GeographicMapCellType_new(this->maxTileId - 1, 0);
        GeographicMapCellType_new(this->maxTileId - 2, 0);
}

BasicPlatormGeographicMapCellTypeFactory* BasicPlatormGeographicMapCellTypeFactory_new(ABHashtable* tileTypeToTileIdsMap, int32_t maxTileId) {
    BasicPlatormGeographicMapCellTypeFactory* this = calloc(1, sizeof(BasicPlatormGeographicMapCellTypeFactory));
    BasicPlatormGeographicMapCellTypeFactory_init(this, tileTypeToTileIdsMap, maxTileId);
    return this;
}


int32_t BasicPlatormGeographicMapCellTypeFactory_getStartType(BasicPlatormGeographicMapCellTypeFactory* this) {
        return this->maxTileId - 1;
}


int32_t BasicPlatormGeographicMapCellTypeFactory_getEndType(BasicPlatormGeographicMapCellTypeFactory* this) {
        return this->maxTileId - 2;
}


int32_t BasicPlatormGeographicMapCellTypeFactory_getEmptyType(BasicPlatormGeographicMapCellTypeFactory* this) {
        return 0;
}


bool BasicPlatormGeographicMapCellTypeFactory_isPath(BasicPlatormGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType) {
        if (GeographicMapCellType_getType(cellType) == 0) {
            return true;
        }
        return false;
}

