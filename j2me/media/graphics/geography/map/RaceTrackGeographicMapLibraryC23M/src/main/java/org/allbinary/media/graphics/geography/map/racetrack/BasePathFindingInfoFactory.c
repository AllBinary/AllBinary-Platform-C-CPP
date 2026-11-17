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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct BasePathFindingInfoFactory BasePathFindingInfoFactory;
struct BasePathFindingInfoFactory {
    LogUtil* logUtil;
};


BasePathFindingInfoFactory* BasePathFindingInfoFactory_new(void);
void BasePathFindingInfoFactory_init(BasePathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray);
static void BasePathFindingInfoFactory_addStartPathFindingNode(BasePathFindingInfoFactory* this, PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* startGeographicMapCellPosition);
static void BasePathFindingInfoFactory_addEndPathFindingNode(BasePathFindingInfoFactory* this, PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* endGeographicMapCellPosition);
PathFindingInfo* BasePathFindingInfoFactory_getInstancePathFindingInfo(BasePathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** graphArray);

static void BasePathFindingInfoFactory_initFields(BasePathFindingInfoFactory* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasePathFindingInfoFactory_init(BasePathFindingInfoFactory* this) {
    BasePathFindingInfoFactory_initFields(this);
}

BasePathFindingInfoFactory* BasePathFindingInfoFactory_new(void) {
    BasePathFindingInfoFactory* this = calloc(1, sizeof(BasePathFindingInfoFactory));
    BasePathFindingInfoFactory_init(this);
    return this;
}


// throws Exception
void BasePathFindingInfoFactory_init(BasePathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray) {
        #if 0 /* Java local class: move it to file scope */
typedef struct RaceTrackGeographicMapCellPositionFactoryInitVisitor RaceTrackGeographicMapCellPositionFactoryInitVisitor;
struct RaceTrackGeographicMapCellPositionFactoryInitVisitor {
    GeographicMapCellPositionFactoryInitVisitorInterface GeographicMapCellPositionFactoryInitVisitorInterface_interface;
    int32_t startLineId;
    int32_t finishLineId;
    BasePathFindingInfoFactory* pathFindingInfoFactory;
};


RaceTrackGeographicMapCellPositionFactoryInitVisitor* RaceTrackGeographicMapCellPositionFactoryInitVisitor_new(BasePathFindingInfoFactory* pathFindingInfoFactory);
        
        void BasePathFindingInfoFactory_init(BasePathFindingInfoFactory* this, BasePathFindingInfoFactory* pathFindingInfoFactory);
        void BasePathFindingInfoFactory_visit(BasePathFindingInfoFactory* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition);

static void RaceTrackGeographicMapCellPositionFactoryInitVisitor_initFields(RaceTrackGeographicMapCellPositionFactoryInitVisitor* this) {
            
            
            
}
        

        void BasePathFindingInfoFactory_init(BasePathFindingInfoFactory* this, BasePathFindingInfoFactory* pathFindingInfoFactory) {
            BasePathFindingInfoFactory_initFields(this);
                this->pathFindingInfoFactory = pathFindingInfoFactory;
                GeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = BasicGeographicMap_getGeographicMapCellTypeFactory(this->base.geographicMapInterface);
                this->startLineId = GeographicMapCellTypeFactory_getStartType(raceTrackGeographicMapCellTypeFactory);
                this->finishLineId = GeographicMapCellTypeFactory_getEndType(raceTrackGeographicMapCellTypeFactory);
        }

        BasePathFindingInfoFactory* BasePathFindingInfoFactory_new(BasePathFindingInfoFactory* pathFindingInfoFactory) {
            BasePathFindingInfoFactory* this = calloc(1, sizeof(BasePathFindingInfoFactory));
            BasePathFindingInfoFactory_init(this, pathFindingInfoFactory);
            return this;
        }
        

        // throws Exception
        void BasePathFindingInfoFactory_visit(BasePathFindingInfoFactory* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition) {
                int32_t row = GeographicMapCellPosition_getRow(cellPosition);
                int32_t column = GeographicMapCellPosition_getColumn(cellPosition);
                JAVA_TRY {
                    int32_t cellTypeId = this->base.mapArray[row][column];
                    int32_t geographicCellType = BasicGeographicMap_getCellTypeFromMapCellTypeInt(this->base.geographicMapInterface, cellTypeId);
                    if (geographicCellType == this->startLineId) {
                        BasePathFindingInfoFactory_addStartPathFindingNode(this->pathFindingInfoFactory, this->base.pathFindingInfo, cellPosition);
                    }
                    if (geographicCellType == this->finishLineId) {
                        if (geographicCellType == this->startLineId) {
                            BasePathFindingInfoFactory_addEndPathFindingNode(this->pathFindingInfoFactory, this->base.pathFindingInfo, JAVA_CALL(BasicGeographicMap_getGeographicMapCellPositionFactoryInterface(this->base.geographicMapInterface), getInstance, this->base.geographicMapInterface, GeographicMapCellPosition_getColumn(cellPosition), GeographicMapCellPosition_getRow(cellPosition), AllBinaryTiledLayer_getColumns(tiledLayer), AllBinaryTiledLayer_getRows(tiledLayer), AllBinaryTiledLayer_getCellWidth(tiledLayer), AllBinaryTiledLayer_getCellHeight(tiledLayer)));
                        } else {
                            BasePathFindingInfoFactory_addEndPathFindingNode(this->pathFindingInfoFactory, this->base.pathFindingInfo, cellPosition);
                        }
                    }
                    GeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = BasicGeographicMap_getGeographicMapCellTypeFactory(this->base.geographicMapInterface);
                    GeographicMapCellTypeFactory* geographicMapCellTypeFactory = GeographicMapCellTypeFactory_getInstance();
                    if (GeographicMapCellTypeFactory_isPath(raceTrackGeographicMapCellTypeFactory, GeographicMapCellTypeFactory_get(geographicMapCellTypeFactory, geographicCellType))) {
                        RaceTrackRoadsGeographicMapCellHistoryFactory_track(RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance(), cellPosition);
                    } else {
                    }
                } JAVA_CATCH(Exception, e) {
                    CommonSeps* commonSeps = CommonSeps_getInstance();
                    JAVA_CALL(this->pathFindingInfoFactory->logUtil, put, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), commonSeps->BRACKET_OPEN), appendint, row), append, commonSeps->BRACKET_CLOSE), append, commonSeps->BRACKET_OPEN), appendint, column), append, "] in ["), appendint, java_array_length(this->base.mapArray)), append, commonSeps->BRACKET_CLOSE), append, commonSeps->BRACKET_OPEN), appendint, java_array_length(this->base.mapArray[0])), append, commonSeps->BRACKET_CLOSE), toString), this, "visit", e);
                    java_throw(e);
                } JAVA_END_TRY;
        }
#endif
        JAVA_CALL(BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface), visit, RaceTrackGeographicMapCellPositionFactoryInitVisitor_new(this));
}


// throws Exception
static void BasePathFindingInfoFactory_addStartPathFindingNode(BasePathFindingInfoFactory* this, PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* startGeographicMapCellPosition) {
        PathFindingInfo_addStartPathFindingNode(pathFindingInfo, PathFindingNode_new(NullUtil_getInstance()->NULL_OBJECT, startGeographicMapCellPosition));
}


// throws Exception
static void BasePathFindingInfoFactory_addEndPathFindingNode(BasePathFindingInfoFactory* this, PathFindingInfo* pathFindingInfo, GeographicMapCellPosition* endGeographicMapCellPosition) {
        PathFindingInfo_addEndPathFindingNode(pathFindingInfo, PathFindingNode_new(NullUtil_getInstance()->NULL_OBJECT, endGeographicMapCellPosition));
}


// throws Exception
PathFindingInfo* BasePathFindingInfoFactory_getInstancePathFindingInfo(BasePathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** graphArray) {
        java_throw(java_exception_new("RuntimeException", ""));
}

