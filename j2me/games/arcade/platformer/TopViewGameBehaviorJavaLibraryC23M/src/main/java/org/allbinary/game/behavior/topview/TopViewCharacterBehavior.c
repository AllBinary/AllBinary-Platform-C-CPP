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
// package org.allbinary.game.behavior.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h"

typedef struct TopViewCharacterBehavior TopViewCharacterBehavior;
struct TopViewCharacterBehavior {
    char unused;
};


TopViewCharacterBehavior* TopViewCharacterBehavior_new(void);
void TopViewCharacterBehavior_terrainEvent(TopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition);
void TopViewCharacterBehavior_terrainMove(TopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y);
bool TopViewCharacterBehavior_hasSolidBlock(TopViewCharacterBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray);

void TopViewCharacterBehavior_init(TopViewCharacterBehavior* this) {
}

TopViewCharacterBehavior* TopViewCharacterBehavior_new(void) {
    TopViewCharacterBehavior* this = calloc(1, sizeof(TopViewCharacterBehavior));
    TopViewCharacterBehavior_init(this);
    return this;
}


// throws Exception
void TopViewCharacterBehavior_terrainEvent(TopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition) {
}


void TopViewCharacterBehavior_terrainMove(TopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y) {
}


bool TopViewCharacterBehavior_hasSolidBlock(TopViewCharacterBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray) {
        int32_t size = java_array_length(geographicMapInterfaceArray);
        BasicTopViewGeographicMapCellTypeFactory* basicTopViewGeographicMapCellTypeFactory = nullptr;
        for (int32_t index = 0; index < size; index++) {
            basicTopViewGeographicMapCellTypeFactory = ((BasicTopViewGeographicMapCellTypeFactory*) JAVA_CALL(geographicMapInterfaceArray[index], getGeographicMapCellTypeFactory));
            if (JAVA_CALL(basicTopViewGeographicMapCellTypeFactory->BLOCK_CELL_TYPE, isType, geographicMapCellTypeArray[index])) {
                return true;
            }
        }
        return false;
}

