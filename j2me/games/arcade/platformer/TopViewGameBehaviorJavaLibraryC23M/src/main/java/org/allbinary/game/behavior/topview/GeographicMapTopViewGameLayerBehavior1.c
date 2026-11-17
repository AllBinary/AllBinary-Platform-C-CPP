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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h"

typedef struct GeographicMapTopViewGameLayerBehavior1 GeographicMapTopViewGameLayerBehavior1;
struct GeographicMapTopViewGameLayerBehavior1 {
    GeographicMapTopViewLayerBehavior base;
    LogUtil* logUtil;
    GravityUtil* gravityUtil;
    MultiGeographicMapBehavior* geographicMapBehavior;
    bool autoStepBlocks;
    int32_t offsetY;
    GeographicMapCellPosition* previousGeographicMapCellPosition;
};


GeographicMapTopViewGameLayerBehavior1* GeographicMapTopViewGameLayerBehavior1_new(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);

void GeographicMapTopViewGameLayerBehavior1_init(GeographicMapTopViewGameLayerBehavior1* this, int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);
void GeographicMapTopViewGameLayerBehavior1_gravity(GeographicMapTopViewGameLayerBehavior1* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getLeftPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer);
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getRightPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer);
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
void GeographicMapTopViewGameLayerBehavior1_moveAndLand(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
bool GeographicMapTopViewGameLayerBehavior1_move(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);
void GeographicMapTopViewGameLayerBehavior1_left(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);
void GeographicMapTopViewGameLayerBehavior1_right(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

static void GeographicMapTopViewGameLayerBehavior1_initFields(GeographicMapTopViewGameLayerBehavior1* this) {
    this->logUtil = LogUtil_getInstance();
    this->gravityUtil = GravityUtil_getInstance();
    this->geographicMapBehavior = MultiGeographicMapBehavior_new();
    
    
    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


void GeographicMapTopViewGameLayerBehavior1_init(GeographicMapTopViewGameLayerBehavior1* this, int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY) {
        GeographicMapTopViewLayerBehavior_init(&this->base, maxGravityActionIndex);
        GeographicMapTopViewGameLayerBehavior1_initFields(this);
        this->autoStepBlocks = autoStepBlocks;
        this->offsetY = offsetY;
}

GeographicMapTopViewGameLayerBehavior1* GeographicMapTopViewGameLayerBehavior1_new(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY) {
    GeographicMapTopViewGameLayerBehavior1* this = calloc(1, sizeof(GeographicMapTopViewGameLayerBehavior1));
    GeographicMapTopViewGameLayerBehavior1_init(this, maxGravityActionIndex, autoStepBlocks, offsetY);
    return this;
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior1_gravity(GeographicMapTopViewGameLayerBehavior1* this, VelocityProperties* velocityProperties, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) {
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior1_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
            if (!hasSolidBlock) {
                GravityUtil_process(this->gravityUtil, velocityProperties, this->gravityUtil->GAME_GRAVITY_VELOCITY);
                VelocityProperties_limitXYToForwardAndReverseMaxVelocity(velocityProperties);
                GeographicMapTopViewGameLayerBehavior1_gravity(this);
            } else {
            }
        }
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + -x + AllBinaryLayer_getWidth(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + -y + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getLeftPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
static GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getRightPosition(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, AllBinaryLayer* layer) {
        int32_t xCellPosition = AllBinaryLayer_getXP(layer) + AllBinaryLayer_getWidth(layer);
        int32_t yCellPosition = AllBinaryLayer_getYP(layer) + AllBinaryLayer_getHeight(layer);
        return JAVA_CALL(geographicMapInterfaceArray[0], getCellPositionAtXYNoThrow, xCellPosition, yCellPosition);
}


// throws Exception
GeographicMapCellPosition* GeographicMapTopViewGameLayerBehavior1_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior1_getPosition(this, geographicMapInterfaceArray, layer, x, y);
        if (this->previousGeographicMapCellPosition != geographicMapCellPosition && geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = geographicMapCellPosition;
            AllBinaryTiledLayer* tiledLayer = JAVA_CALL(geographicMapInterfaceArray[0], getAllBinaryTiledLayer);
            if (GeographicMapCellPosition_getColumn(possibleStepGeographicMapCellPosition) > 0 && GeographicMapCellPosition_getRow(possibleStepGeographicMapCellPosition) > 0 && GeographicMapCellPosition_getColumn(possibleStepGeographicMapCellPosition) < AllBinaryTiledLayer_getColumns(tiledLayer) && GeographicMapCellPosition_getRow(possibleStepGeographicMapCellPosition) < AllBinaryTiledLayer_getRows(tiledLayer)) {
                MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
                bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior1_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
                if (hasSolidBlock) {
                    JAVA_CALL(VelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
                    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                } else {
                    this->previousGeographicMapCellPosition = possibleStepGeographicMapCellPosition;
                    return possibleStepGeographicMapCellPosition;
                }
            }
        }
        this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior1_moveAndLand(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            TopViewCharacterInterface* topViewCharacterInterface = (((TopViewCharacterInterface*) layer));
            TopViewCharacterInterface_terrainMove(topViewCharacterInterface, geographicMapInterfaceArray, geographicMapCellTypeArray, x, y);
        } else {
        }
}


// throws Exception
bool GeographicMapTopViewGameLayerBehavior1_move(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior1_getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(this, geographicMapInterfaceArray, geographicMapCellTypeArray, velocityProperties, layer, x, y);
        GeographicMapTopViewGameLayerBehavior1_moveAndLand(this, geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition, velocityProperties, layer, x, y);
        if (geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            return false;
        } else {
            return true;
        }
}


// throws Exception
void GeographicMapTopViewGameLayerBehavior1_left(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior1_getLeftPosition(this, geographicMapInterfaceArray, layer);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = JAVA_CALL(JAVA_CALL(geographicMapInterfaceArray[0], getGeographicMapCellPositionFactory), getAt, GeographicMapCellPosition_getColumn(geographicMapCellPosition), GeographicMapCellPosition_getRow(geographicMapCellPosition) - 1);
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior1_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
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
void GeographicMapTopViewGameLayerBehavior1_right(GeographicMapTopViewGameLayerBehavior1* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) {
        GeographicMapCellPosition* geographicMapCellPosition = GeographicMapTopViewGameLayerBehavior1_getRightPosition(this, geographicMapInterfaceArray, layer);
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCellPosition* possibleStepGeographicMapCellPosition = JAVA_CALL(JAVA_CALL(geographicMapInterfaceArray[0], getGeographicMapCellPositionFactory), getAt, GeographicMapCellPosition_getColumn(geographicMapCellPosition), GeographicMapCellPosition_getRow(geographicMapCellPosition) - 1);
            MultiGeographicMapBehavior_getCellTypeAt(this->geographicMapBehavior, geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
            bool hasSolidBlock = GeographicMapTopViewGameLayerBehavior1_hasSolidBlock(this, geographicMapInterfaceArray, geographicMapCellTypeArray);
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

