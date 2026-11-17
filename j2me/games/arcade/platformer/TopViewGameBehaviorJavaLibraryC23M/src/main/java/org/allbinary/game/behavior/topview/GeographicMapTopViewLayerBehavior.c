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
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/behavior/topview/TopViewGameLayerBehavior.h"

typedef struct GeographicMapTopViewLayerBehavior GeographicMapTopViewLayerBehavior;
struct GeographicMapTopViewLayerBehavior {
    TopViewGameLayerBehavior base;
};


GeographicMapTopViewLayerBehavior* GeographicMapTopViewLayerBehavior_new(int32_t maxGravityActionIndex);

void GeographicMapTopViewLayerBehavior_init(GeographicMapTopViewLayerBehavior* this, int32_t maxGravityActionIndex);
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionFromListIfNotSolidBlockOrOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, BasicArrayList* geographicMapCellPositionList, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
void GeographicMapTopViewLayerBehavior_gravity(GeographicMapTopViewLayerBehavior* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);
void GeographicMapTopViewLayerBehavior_left(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
bool GeographicMapTopViewLayerBehavior_move(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
void GeographicMapTopViewLayerBehavior_moveAndLand(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
void GeographicMapTopViewLayerBehavior_right(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
bool GeographicMapTopViewLayerBehavior_hasSolidBlock(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray);
bool GeographicMapTopViewLayerBehavior_isOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray);


void GeographicMapTopViewLayerBehavior_init(GeographicMapTopViewLayerBehavior* this, int32_t maxGravityActionIndex) {
        TopViewGameLayerBehavior_init(&this->base, maxGravityActionIndex);
}

GeographicMapTopViewLayerBehavior* GeographicMapTopViewLayerBehavior_new(int32_t maxGravityActionIndex) {
    GeographicMapTopViewLayerBehavior* this = calloc(1, sizeof(GeographicMapTopViewLayerBehavior));
    GeographicMapTopViewLayerBehavior_init(this, maxGravityActionIndex);
    return this;
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewLayerBehavior_getGeographicMapCellPositionFromListIfNotSolidBlockOrOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, BasicArrayList* geographicMapCellPositionList, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


// throws Exception
void GeographicMapTopViewLayerBehavior_gravity(GeographicMapTopViewLayerBehavior* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) {
}


// throws Exception
void GeographicMapTopViewLayerBehavior_left(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
}


// throws Exception
bool GeographicMapTopViewLayerBehavior_move(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        return false;
}


// throws Exception
void GeographicMapTopViewLayerBehavior_moveAndLand(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
}


// throws Exception
void GeographicMapTopViewLayerBehavior_right(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
}


bool GeographicMapTopViewLayerBehavior_hasSolidBlock(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray) {
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


bool GeographicMapTopViewLayerBehavior_isOffMap(GeographicMapTopViewLayerBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray) {
        int32_t size = java_array_length(geographicMapInterfaceArray);
        BasicTopViewGeographicMapCellTypeFactory* basicTopViewGeographicMapCellTypeFactory = nullptr;
        for (int32_t index = 0; index < size; index++) {
            basicTopViewGeographicMapCellTypeFactory = ((BasicTopViewGeographicMapCellTypeFactory*) JAVA_CALL(geographicMapInterfaceArray[index], getGeographicMapCellTypeFactory));
            if (JAVA_CALL(basicTopViewGeographicMapCellTypeFactory->OFF_MAP_CELL_TYPE, isType, geographicMapCellTypeArray[index])) {
                return true;
            }
        }
        return false;
}

