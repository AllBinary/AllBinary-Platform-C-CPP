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
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h"

typedef struct GeographicMapTopViewGameLayerBehavior2 GeographicMapTopViewGameLayerBehavior2;
struct GeographicMapTopViewGameLayerBehavior2 {
    GeographicMapTopViewLayerBehavior base;
    GravityUtil* gravityUtil;
    MultiGeographicMapBehavior* geographicMapBehavior;
    bool autoStepBlocks;
    int32_t offsetY;
    GeographicMapCellPosition* previousGeographicMapCellPosition;
};


GeographicMapTopViewGameLayerBehavior2* GeographicMapTopViewGameLayerBehavior2_new(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);

void GeographicMapTopViewGameLayerBehavior2_init(GeographicMapTopViewGameLayerBehavior2* this, int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);
void GeographicMapTopViewGameLayerBehavior2_gravity(GeographicMapTopViewGameLayerBehavior2* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionTopLeft(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionTopRight(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionBottomLeft(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionBottomRight(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getLeftPosition(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getRightPosition(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer);
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
void GeographicMapTopViewGameLayerBehavior2_moveAndLand(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
bool GeographicMapTopViewGameLayerBehavior2_move(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
void GeographicMapTopViewGameLayerBehavior2_left(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
void GeographicMapTopViewGameLayerBehavior2_right(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

static void GeographicMapTopViewGameLayerBehavior2_initFields(GeographicMapTopViewGameLayerBehavior2* this) {
    this->gravityUtil = GravityUtil_getInstance();
    this->geographicMapBehavior = MultiGeographicMapBehavior_new();
    
    
    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


void GeographicMapTopViewGameLayerBehavior2_init(GeographicMapTopViewGameLayerBehavior2* this, int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY) {
        GeographicMapTopViewLayerBehavior_init(&this->base, maxGravityActionIndex);
        GeographicMapTopViewGameLayerBehavior2_initFields(this);
        this->autoStepBlocks = autoStepBlocks;
        this->offsetY = offsetY;
}

GeographicMapTopViewGameLayerBehavior2* GeographicMapTopViewGameLayerBehavior2_new(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY) {
    GeographicMapTopViewGameLayerBehavior2* this = calloc(1, sizeof(GeographicMapTopViewGameLayerBehavior2));
    GeographicMapTopViewGameLayerBehavior2_init(this, maxGravityActionIndex, autoStepBlocks, offsetY);
    return this;
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior2_gravity(GeographicMapTopViewGameLayerBehavior2* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) {
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior2_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
            if (!hasSolidBlock) {
                GravityUtil_process(this->gravityUtil, velocityProperties, this->gravityUtil->GAME_GRAVITY_VELOCITY);
                VelocityProperties_limitXYToForwardAndReverseMaxVelocity(velocityProperties);
                GeographicMapTopViewGameLayerBehavior2_gravity(this);
            } else {
            }
        }
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionTopLeft(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + -x;
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + -y;
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionTopRight(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + -x + AllBinaryLayer_getWidth(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + -y;
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionBottomLeft(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + -x;
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + -y + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getPositionBottomRight(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + -x + AllBinaryLayer_getWidth(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + -y + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getLeftPosition(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getRightPosition(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + AllBinaryLayer_getWidth(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        GeographicMapCellPosition* geographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        GeographicMapCellPosition* topLeftGeographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getPositionTopLeft(this, geographicMapInterfaceArray, layer, x, y);
        geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(this, geographicMapInterfaceArray, geographicMapCellTypeArray, topLeftGeographicMapCellPosition, velocityProperties, layer);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        }
        GeographicMapCellPosition* topRightGeographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getPositionTopRight(this, geographicMapInterfaceArray, layer, x, y);
        geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(this, geographicMapInterfaceArray, geographicMapCellTypeArray, topRightGeographicMapCellPosition, velocityProperties, layer);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        }
        GeographicMapCellPosition* bottomLeftGeographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getPositionBottomLeft(this, geographicMapInterfaceArray, layer, x, y);
        geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(this, geographicMapInterfaceArray, geographicMapCellTypeArray, bottomLeftGeographicMapCellPosition, velocityProperties, layer);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        }
        GeographicMapCellPosition* bottomRightGeographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getPositionBottomRight(this, geographicMapInterfaceArray, layer, x, y);
        geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(this, geographicMapInterfaceArray, geographicMapCellTypeArray, bottomRightGeographicMapCellPosition, velocityProperties, layer);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
        } else {
        }
        return geographicMapCellPosition;
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMap(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = geographicMapCellPosition;
            AllBinaryTiledLayer* tiledLayer = JAVA_CALL(geographicMapInterfaceArray[0], getAllBinaryTiledLayer);
            if (GeographicMapCellPosition_getColumn(possibleStepGeographicMapCellPosition) > 0 && GeographicMapCellPosition_getRow(possibleStepGeographicMapCellPosition) > 0 && GeographicMapCellPosition_getColumn(possibleStepGeographicMapCellPosition) < AllBinaryTiledLayer_getColumns(tiledLayer) && GeographicMapCellPosition_getRow(possibleStepGeographicMapCellPosition) < AllBinaryTiledLayer_getRows(tiledLayer)) {
                MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
                bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior2_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
                bool hasOffMap = GeographicMapTopViewGameLayerBehavior2_isOffMap(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
                if (hasSolidBlock || hasOffMap) {
                    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                } else {
                    this->previousGeographicMapCellPosition = possibleStepGeographicMapCellPosition;
                    return possibleStepGeographicMapCellPosition;
                }
            }
        } else {
        }
        this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior2_moveAndLand(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
            TopViewCharacterInterface_terrainMove(topViewCharacterInterface, geographicMapInterfaceArray, geographicMapCellTypeArray, x, y);
        } else {
        }
}


// throws Exception
bool GeographicMapTopViewGameLayerBehavior2_move(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(this, geographicMapInterfaceArray, geographicMapCellTypeArray, velocityProperties, layer, x, y);
        GeographicMapTopViewGameLayerBehavior2_moveAndLand(this, geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition, velocityProperties, layer, x, y);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            return false;
        } else {
            return true;
        }
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior2_left(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getLeftPosition(this, geographicMapInterfaceArray, layer);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = JAVA_CALL(JAVA_CALL(geographicMapInterfaceArray[0], getGeographicMapCellPositionFactory), getAt, GeographicMapCellPosition_getColumn(geographicMapCellPosition), GeographicMapCellPosition_getRow(geographicMapCellPosition) - 1);
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior2_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
            if (hasSolidBlock) {
                if (this->autoStepBlocks) {
                    TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
                    TopViewCharacterInterface_leftp(topViewCharacterInterface);
                } else {
                    JAVA_CALL(VelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
                }
            } else {
                TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
                TopViewCharacterInterface_leftp(topViewCharacterInterface);
            }
        }
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior2_right(GeographicMapTopViewGameLayerBehavior2* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior2_getRightPosition(this, geographicMapInterfaceArray, layer);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = JAVA_CALL(JAVA_CALL(geographicMapInterfaceArray[0], getGeographicMapCellPositionFactory), getAt, GeographicMapCellPosition_getColumn(geographicMapCellPosition), GeographicMapCellPosition_getRow(geographicMapCellPosition) - 1);
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior2_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
            if (hasSolidBlock) {
                if (this->autoStepBlocks) {
                    TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
                    TopViewCharacterInterface_rightp(topViewCharacterInterface);
                } else {
                    JAVA_CALL(VelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
                }
            } else {
                TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
                TopViewCharacterInterface_rightp(topViewCharacterInterface);
            }
        }
}

