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
#include "org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/game/terrain/TerrainEventCircularStaticPool.h"
#include "org/allbinary/game/terrain/TerrainEventHandler.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"

typedef struct NonPlayerTopViewCharacterBehavior NonPlayerTopViewCharacterBehavior;
struct NonPlayerTopViewCharacterBehavior {
    TopViewCharacterBehavior base;
    MultiGeographicMapBehavior* geographicMapBehavior;
    BasicTerrainInfo* CLIFF;
};


NonPlayerTopViewCharacterBehavior* NonPlayerTopViewCharacterBehavior_new(void);
void NonPlayerTopViewCharacterBehavior_terrainEvent(NonPlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);
void NonPlayerTopViewCharacterBehavior_terrainMove(NonPlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y);

static void NonPlayerTopViewCharacterBehavior_initFields(NonPlayerTopViewCharacterBehavior* this) {
    this->geographicMapBehavior = MultiGeographicMapBehavior_new();
    this->CLIFF = BasicTerrainInfo_new(AngleFactory_getInstance()->DOWN);
}

void NonPlayerTopViewCharacterBehavior_init(NonPlayerTopViewCharacterBehavior* this) {
    TopViewCharacterBehavior_init(&this->base);
    NonPlayerTopViewCharacterBehavior_initFields(this);
}

NonPlayerTopViewCharacterBehavior* NonPlayerTopViewCharacterBehavior_new(void) {
    NonPlayerTopViewCharacterBehavior* this = calloc(1, sizeof(NonPlayerTopViewCharacterBehavior));
    NonPlayerTopViewCharacterBehavior_init(this);
    return this;
}


// throws Exception
void NonPlayerTopViewCharacterBehavior_terrainEvent(NonPlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t maxColumns = JAVA_CALL(JAVA_CALL(geographicMapInterfaceArray[0], getAllBinaryTiledLayer), getColumns);
        if (GeographicMapCellPosition_getColumn(geographicMapCellPosition) > 0 && GeographicMapCellPosition_getColumn(geographicMapCellPosition) < maxColumns) {
            GeographicMapCellPosition* nextTerrainGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
            BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = JAVA_CALL(geographicMapInterfaceArray[0], getGeographicMapCellPositionFactory);
            if (direction == DirectionFactory_getInstance()->LEFT) {
                nextTerrainGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(geographicMapCellPosition) - 1, GeographicMapCellPosition_getRow(geographicMapCellPosition));
            } else if (direction == DirectionFactory_getInstance()->RIGHT) {
                nextTerrainGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(geographicMapCellPosition) + 1, GeographicMapCellPosition_getRow(geographicMapCellPosition));
            }
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, nextTerrainGeographicMapCellPosition);
            bool hasSolidBlock = NonPlayerTopViewCharacterBehavior_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
            if (!hasSolidBlock) {
                TerrainEvent* terrainEvent = TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool_getInstance(), this->CLIFF);
                TerrainEventHandler_fireEvent(TerrainEventHandler_getInstance(layer), terrainEvent);
            }
        }
}


void NonPlayerTopViewCharacterBehavior_terrainMove(NonPlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y) {
        AllBinaryLayer_moveDXY(layer, x, y);
}

