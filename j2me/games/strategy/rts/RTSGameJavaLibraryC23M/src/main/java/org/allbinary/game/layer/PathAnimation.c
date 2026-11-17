/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct PathAnimation PathAnimation;
struct PathAnimation {
    Animation base;
    LogUtil* logUtil;
    LinePathAnimation* linePathAnimation;
    PathFindingLayerInterface* pathFindingLayer;
    AllBinaryGameLayerManager* allBinaryGameLayerManagerP;
    BasicColor* startColor;
    BasicColor* middleColor;
    BasicColor* endColor;
};


PathAnimation* PathAnimation_new(PathFindingLayerInterface* pathFindingLayer, LinePathAnimation* linePathAnimation);

void PathAnimation_init(PathAnimation* this, PathFindingLayerInterface* pathFindingLayer, LinePathAnimation* linePathAnimation);
void PathAnimation_setAllBinaryGameLayerManager(PathAnimation* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void PathAnimation_nextFrame(PathAnimation* this);
void PathAnimation_paintXY(PathAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void PathAnimation_initFields(PathAnimation* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->allBinaryGameLayerManagerP = AllBinaryGameLayerManager_getNullInstance();
    this->startColor = BasicColorFactory_getInstance()->RED;
    this->middleColor = BasicColorFactory_getInstance()->BLUE;
    this->endColor = BasicColorFactory_getInstance()->GREEN;
}


void PathAnimation_init(PathAnimation* this, PathFindingLayerInterface* pathFindingLayer, LinePathAnimation* linePathAnimation) {
    Animation_init(&this->base);
    PathAnimation_initFields(this);
        this->pathFindingLayer = pathFindingLayer;
        this->linePathAnimation = linePathAnimation;
}

PathAnimation* PathAnimation_new(PathFindingLayerInterface* pathFindingLayer, LinePathAnimation* linePathAnimation) {
    PathAnimation* this = calloc(1, sizeof(PathAnimation));
    PathAnimation_init(this, pathFindingLayer, linePathAnimation);
    return this;
}


// throws Exception
void PathAnimation_setAllBinaryGameLayerManager(PathAnimation* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        this->allBinaryGameLayerManagerP = allBinaryGameLayerManager;
}


// throws Exception
void PathAnimation_nextFrame(PathAnimation* this) {
}


void PathAnimation_paintXY(PathAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_TRY {
            WaypointBehaviorBase* waypointBehaviorBase = PathFindingLayerInterface_getWaypointBehavior(this->pathFindingLayer);
            if (waypointBehaviorBase != nullptr) {
                GeographicMapCellHistory* geographicMapCellHistory = WaypointBehaviorBase_getCurrentGeographicMapCellHistory(waypointBehaviorBase);
                BasicArrayList* list = GeographicMapCellHistory_getTracked(geographicMapCellHistory);
                int32_t size = BasicArrayList_size(list);
                if (size > 0) {
                    GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
                    BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
                    AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
                    GeographicMapCellPosition* geographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                    GPoint* nextPoint = nullptr;
                    GPoint* point = nullptr;
                    int32_t start = size - 2;
                    for (int32_t index = 0; index < size - 1; index++) {
                        if (index == start) {
                            PathAnimation_setBasicColorP(this, this->startColor);
                            JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, PathAnimation_getBasicColorP(this), PathAnimation_getColor(this));
                        } else if (GeographicMapCellHistory_isVisited(geographicMapCellHistory, geographicMapCellPosition)) {
                            PathAnimation_setBasicColorP(this, this->endColor);
                            JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, PathAnimation_getBasicColorP(this), PathAnimation_getColor(this));
                        } else {
                            PathAnimation_setBasicColorP(this, this->middleColor);
                            JAVA_CALL(this->basicSetColorUtil, setBasicColorP3, graphics, PathAnimation_getBasicColorP(this), PathAnimation_getColor(this));
                        }
                        geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(list, index));
                        point = GeographicMapCellPosition_getMidPoint(geographicMapCellPosition);
                        geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(list, index + 1));
                        nextPoint = GeographicMapCellPosition_getMidPoint(geographicMapCellPosition);
                        LinePathAnimation_paint(this->linePathAnimation, graphics, point, nextPoint, tiledLayer);
                    }
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, "Cleared Target", this, CanvasStrings_getInstance()->PAINT);
        } JAVA_END_TRY;
}

