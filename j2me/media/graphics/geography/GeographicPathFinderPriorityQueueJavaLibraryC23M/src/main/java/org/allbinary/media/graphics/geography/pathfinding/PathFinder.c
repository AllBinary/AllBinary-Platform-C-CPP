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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/util/ABHashSet.h"
#include "org/allbinary/util/ABPriorityQueue.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"

typedef struct PathFinder PathFinder;
struct PathFinder {
    GeographicPathFinderBase base;
    LogUtil* logUtil;
    BasicArrayListUtil* basicArrayListUtil;
    MathUtil* mathUtil;
    ABPriorityQueue* openPriorityQueue;
    ABHashSet* closedSet;
    Any* geographicMapInterface;
    PathFindingNodeCost*** costArray;
};


PathFinder* PathFinder_new(void);
void PathFinder_init(PathFinder* this, BasicGeographicMap* geographicMapInterface);
BasicArrayList* PathFinder_searchTotalPath(PathFinder* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths);
BasicArrayList* PathFinder_searchTotalPathN(PathFinder* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState);
BasicArrayList* PathFinder_search(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode);
void PathFinder_searchStart(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState);
BasicArrayList* PathFinder_searchN(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState);
BasicArrayList* PathFinder_findPath(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target);
void PathFinder_findPathStart(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState);
BasicArrayList* PathFinder_findPathEnd(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState);
static BasicArrayList* PathFinder_extractPath(PathFinder* this, GeographicMapCellPosition* start, PathFindingNodeCost* current);

static void PathFinder_initFields(PathFinder* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->mathUtil = MathUtil_getInstance();
    this->openPriorityQueue = ABPriorityQueue_new();
    this->closedSet = ABHashSet_new();
    this->geographicMapInterface = NullUtil_getInstance()->NULL_OBJECT;
    this->costArray = PathFindingNodeCost_NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;
}

void PathFinder_init(PathFinder* this) {
    GeographicPathFinderBase_init(&this->base);
    PathFinder_initFields(this);
}

PathFinder* PathFinder_new(void) {
    PathFinder* this = calloc(1, sizeof(PathFinder));
    PathFinder_init(this);
    return this;
}


// throws Exception
void PathFinder_init(PathFinder* this, BasicGeographicMap* geographicMapInterface) {
        this->geographicMapInterface = geographicMapInterface;
        AllBinaryTiledLayer* tiledLayer = Any_getAllBinaryTiledLayer(geographicMapInterface);
        this->costArray = ((PathFindingNodeCost***) java_array_new2(sizeof(PathFindingNodeCost*), AllBinaryTiledLayer_getColumns(tiledLayer), AllBinaryTiledLayer_getRows(tiledLayer)));
        BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = Any_getGeographicMapCellPositionFactory(geographicMapInterface);
        PathFindingNodeCost* node = nullptr;
        int32_t sizeX = java_array_length(this->costArray);
        int32_t sizeY = java_array_length(this->costArray[0]);
        for (int32_t column = 0; column < sizeX; column++) {
            for (int32_t row = 0; row < sizeY; row++) {
                GeographicMapCellType* geographicMapCellType = Any_getCellTypeAt(geographicMapInterface, BasicGeographicMapCellPositionFactory_getAt(basicGeographicMapCellPositionFactory, column, row));
                RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = ((RaceTrackGeographicMapCellType*) geographicMapCellType);
                node = PathFindingNodeCost_new(NullUtil_getInstance()->NULL_OBJECT, BasicGeographicMapCellPositionFactory_getAt(basicGeographicMapCellPositionFactory, column, row), PathFindingNodeCostInfo_new(((int64_t) RaceTrackGeographicMapCellType_getTravelCost(raceTrackGeographicMapCellType)), ((int64_t) (-1))));
                this->costArray[column][row] = node;
            }
        }
}


BasicArrayList* PathFinder_searchTotalPath(PathFinder* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths) {
        JAVA_TRY {
            return PathFinder_search(this, ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, 0)), ((PathFindingNode*) BasicArrayList_get(endPathFindingNodeList, 0)));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "search", e);
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        } JAVA_END_TRY;
}


// throws Exception
BasicArrayList* PathFinder_searchTotalPathN(PathFinder* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState) {
        if (multipassState->step == 0) {
            multipassState->step++;
        } else if (multipassState->step == 1) {
            PathFinder_searchStart(this, ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, 0)), ((PathFindingNode*) BasicArrayList_get(endPathFindingNodeList, 0)), multipassState);
        } else if (multipassState->step == 2) {
            return PathFinder_searchN(this, ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, 0)), ((PathFindingNode*) BasicArrayList_get(endPathFindingNodeList, 0)), multipassState);
        }
        return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
}


// throws Exception
BasicArrayList* PathFinder_search(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode) {
        BasicArrayList* list = PathFinder_findPath(this, startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition);
        BasicArrayList* pathList = BasicArrayListD_new();
        BasicArrayList_add(pathList, list);
        return pathList;
}


// throws Exception
void PathFinder_searchStart(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState) {
        PathFinder_findPathStart(this, startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition, multipassState);
}


// throws Exception
BasicArrayList* PathFinder_searchN(PathFinder* this, PathFindingNode* startPathFindingNode, PathFindingNode* endPathFindingNode, MultipassState* multipassState) {
        BasicArrayList* list = PathFinder_findPathEnd(this, startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition, multipassState);
        if (list == nullptr) {
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        BasicArrayList* pathList = BasicArrayListD_new();
        BasicArrayList_add(pathList, list);
        multipassState->iteration = 0;
        multipassState->step = 0;
        return pathList;
}


// throws Exception
BasicArrayList* PathFinder_findPath(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target) {
        ABPriorityQueue_clear(this->openPriorityQueue);
        ABHashSet_clear(this->closedSet);
        int64_t discoveryCalculation = 0;
        PathFindingNodeCost* node = nullptr;
        int32_t targetColumn = GeographicMapCellPosition_getColumn(target);
        int32_t targetRow = GeographicMapCellPosition_getRow(target);
        int32_t sizeX = java_array_length(this->costArray);
        int32_t sizeY = java_array_length(this->costArray[0]);
        for (int32_t column = 0; column < sizeX; column++) {
            for (int32_t row = 0; row < sizeY; row++) {
                discoveryCalculation = ((int64_t) MathUtil_abs(this->mathUtil, column - targetColumn)) + MathUtil_abs(this->mathUtil, row - targetRow);
                node = this->costArray[column][row];
                node->pathFindingNodeCostInfoP->totalCostP = 0;
                node->pathFindingNodeCostInfoP->costToEndP = discoveryCalculation;
            }
        }
        PathFindingNodeCost* startNode = this->costArray[GeographicMapCellPosition_getColumn(start)][GeographicMapCellPosition_getRow(start)];
        ABPriorityQueue_add(this->openPriorityQueue, startNode);
        BasicGeographicMap* geographicMapInterface = ((BasicGeographicMap*) this->geographicMapInterface);
        BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = Any_getGeographicMapCellPositionFactory(geographicMapInterface);
        AllBinaryTiledLayer* allBinaryTiledLayer = Any_getAllBinaryTiledLayer(geographicMapInterface);
        PathFindingNodeCost* targetNode = this->costArray[GeographicMapCellPosition_getColumn(target)][GeographicMapCellPosition_getRow(target)];
        PathFindingNodeCost* current = nullptr;
        do {
            current = ABPriorityQueue_poll(this->openPriorityQueue);
            ABHashSet_add(this->closedSet, current);
            if (PathFindingNodeCost_equals(current, targetNode)) {
                return PathFinder_extractPath(this, start, current);
            }
            PathFindingNodeCost* neighbor = nullptr;
            PathFindingNodeCostInfo* neighborInfo = nullptr;
            int64_t calculatedCost = 0;
            for (int32_t column = JAVA_CALL(current->geographicMapCellPosition, getColumn) - 1; column < JAVA_CALL(current->geographicMapCellPosition, getColumn) + 2; column++) {
                for (int32_t row = JAVA_CALL(current->geographicMapCellPosition, getRow) - 1; row < JAVA_CALL(current->geographicMapCellPosition, getRow) + 2; row++) {
                    if (column > 0 && row > 0 && column < AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) && row < AllBinaryTiledLayer_getRows(allBinaryTiledLayer) && Any_isOnMap(geographicMapInterface, BasicGeographicMapCellPositionFactory_getAt(basicGeographicMapCellPositionFactory, column, row))) {
                        neighbor = this->costArray[column][row];
                        if (ABHashSet_contains(this->closedSet, neighbor)) {
                            continue;
                        }
                        neighborInfo = neighbor->pathFindingNodeCostInfoP;
                        calculatedCost = neighborInfo->costToEndP + neighborInfo->costFromStartP + current->pathFindingNodeCostInfoP->totalCostP;
                        if (calculatedCost < neighborInfo->totalCostP || !ABPriorityQueue_contains(this->openPriorityQueue, neighbor)) {
                            neighborInfo->totalCostP = calculatedCost;
                            neighbor->parent = current;
                            if (!ABPriorityQueue_contains(this->openPriorityQueue, neighbor)) {
                                if (Any_isOfFourDirections(geographicMapInterface, current->geographicMapCellPosition, neighbor->geographicMapCellPosition)) {
                                    ABPriorityQueue_add(this->openPriorityQueue, neighbor);
                                }
                            }
                        }
                    }
                }
            }
        } while (!ABPriorityQueue_isEmpty(this->openPriorityQueue));
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void PathFinder_findPathStart(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState) {
        ABPriorityQueue_clear(this->openPriorityQueue);
        ABHashSet_clear(this->closedSet);
        int64_t discoveryCalculation = 0;
        PathFindingNodeCost* node = nullptr;
        int32_t targetColumn = GeographicMapCellPosition_getColumn(target);
        int32_t targetRow = GeographicMapCellPosition_getRow(target);
        int32_t sizeX = java_array_length(this->costArray);
        int32_t sizeY = java_array_length(this->costArray[0]);
        for (int32_t column = 0; column < sizeX; column++) {
            for (int32_t row = 0; row < sizeY; row++) {
                discoveryCalculation = ((int64_t) MathUtil_abs(this->mathUtil, column - targetColumn)) + MathUtil_abs(this->mathUtil, row - targetRow);
                node = this->costArray[column][row];
                node->pathFindingNodeCostInfoP->totalCostP = 0;
                node->pathFindingNodeCostInfoP->costToEndP = discoveryCalculation;
            }
        }
        PathFindingNodeCost* startNode = this->costArray[GeographicMapCellPosition_getColumn(start)][GeographicMapCellPosition_getRow(start)];
        ABPriorityQueue_add(this->openPriorityQueue, startNode);
        multipassState->step++;
}


// throws Exception
BasicArrayList* PathFinder_findPathEnd(PathFinder* this, GeographicMapCellPosition* start, GeographicMapCellPosition* target, MultipassState* multipassState) {
        BasicGeographicMap* geographicMapInterface = ((BasicGeographicMap*) this->geographicMapInterface);
        BasicGeographicMapCellPositionFactory* basicGeographicMapCellPositionFactory = Any_getGeographicMapCellPositionFactory(geographicMapInterface);
        AllBinaryTiledLayer* allBinaryTiledLayer = Any_getAllBinaryTiledLayer(geographicMapInterface);
        PathFindingNodeCost* targetNode = this->costArray[GeographicMapCellPosition_getColumn(target)][GeographicMapCellPosition_getRow(target)];
        PathFindingNodeCost* current = nullptr;
        int32_t total = 0;
        do {
            current = ABPriorityQueue_poll(this->openPriorityQueue);
            ABHashSet_add(this->closedSet, current);
            if (PathFindingNodeCost_equals(current, targetNode)) {
                return PathFinder_extractPath(this, start, current);
            }
            PathFindingNodeCost* neighbor = nullptr;
            PathFindingNodeCostInfo* neighborInfo = nullptr;
            int64_t calculatedCost = 0;
            for (int32_t column = JAVA_CALL(current->geographicMapCellPosition, getColumn) - 1; column < JAVA_CALL(current->geographicMapCellPosition, getColumn) + 2; column++) {
                for (int32_t row = JAVA_CALL(current->geographicMapCellPosition, getRow) - 1; row < JAVA_CALL(current->geographicMapCellPosition, getRow) + 2; row++) {
                    if (column > 0 && row > 0 && column < AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) && row < AllBinaryTiledLayer_getRows(allBinaryTiledLayer) && Any_isOnMap(geographicMapInterface, BasicGeographicMapCellPositionFactory_getAt(basicGeographicMapCellPositionFactory, column, row))) {
                        neighbor = this->costArray[column][row];
                        if (ABHashSet_contains(this->closedSet, neighbor)) {
                            continue;
                        }
                        neighborInfo = neighbor->pathFindingNodeCostInfoP;
                        calculatedCost = neighborInfo->costToEndP + neighborInfo->costFromStartP + current->pathFindingNodeCostInfoP->totalCostP;
                        if (calculatedCost < neighborInfo->totalCostP || !ABPriorityQueue_contains(this->openPriorityQueue, neighbor)) {
                            neighborInfo->totalCostP = calculatedCost;
                            neighbor->parent = current;
                            if (!ABPriorityQueue_contains(this->openPriorityQueue, neighbor)) {
                                if (Any_isOfFourDirections(geographicMapInterface, current->geographicMapCellPosition, neighbor->geographicMapCellPosition)) {
                                    ABPriorityQueue_add(this->openPriorityQueue, neighbor);
                                }
                            }
                        }
                    }
                }
            }
            total++;
            if (total > 10) {
                return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
            }
        } while (!ABPriorityQueue_isEmpty(this->openPriorityQueue));
        java_throw(java_exception_new("RuntimeException", ""));
}


static BasicArrayList* PathFinder_extractPath(PathFinder* this, GeographicMapCellPosition* start, PathFindingNodeCost* current) {
        BasicArrayList* path = BasicArrayListD_new();
        while (current->parent != NullUtil_getInstance()->NULL_OBJECT) {
            BasicArrayList_add(path, current->geographicMapCellPosition);
            current = ((PathFindingNodeCost*) current->parent);
        }
        BasicArrayList_add(path, start);
        BasicArrayListUtil_reverse(this->basicArrayListUtil, path);
        return path;
}

