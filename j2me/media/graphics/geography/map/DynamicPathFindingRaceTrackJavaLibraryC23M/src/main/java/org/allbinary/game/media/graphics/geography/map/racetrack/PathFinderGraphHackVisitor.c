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
// package org.allbinary.game.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/jgrapht/GraphPath.h"
#include "org/jgrapht/graph/DefaultWeightedEdge.h"
#include "org/jgrapht/graph/SimpleWeightedGraph.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"

typedef struct PathFinderGraphHackVisitor PathFinderGraphHackVisitor;
struct PathFinderGraphHackVisitor {
    BasePathFinderGraphVisitor base;
    LogUtil* logUtil;
};


PathFinderGraphHackVisitor* PathFinderGraphHackVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

void PathFinderGraphHackVisitor_init(PathFinderGraphHackVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);
void PathFinderGraphHackVisitor_visit(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixStart(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixEnd(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* endPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixOverPassEdges(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph);
void PathFinderGraphHackVisitor_fixPath(PathFinderGraphHackVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);
static void PathFinderGraphHackVisitor_removeOverPassEdges(PathFinderGraphHackVisitor* this, BasicArrayList* pathList);
bool PathFinderGraphHackVisitor_isValid(PathFinderGraphHackVisitor* this, GraphPath* graphPath);

static void PathFinderGraphHackVisitor_initFields(PathFinderGraphHackVisitor* this) {
    this->logUtil = LogUtil_getInstance();
}


void PathFinderGraphHackVisitor_init(PathFinderGraphHackVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
        BasePathFinderGraphVisitor_init(&this->base, geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
        PathFinderGraphHackVisitor_initFields(this);
}

PathFinderGraphHackVisitor* PathFinderGraphHackVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphHackVisitor* this = calloc(1, sizeof(PathFinderGraphHackVisitor));
    PathFinderGraphHackVisitor_init(this, geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
    return this;
}


// throws Exception
void PathFinderGraphHackVisitor_visit(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
        PathFinderGraphHackVisitor_fixStart(this, graph, startPathFindingNodeList);
        PathFinderGraphHackVisitor_fixEnd(this, graph, endPathFindingNodeList);
        PathFinderGraphHackVisitor_fixOverPassEdges(this, graph);
}


// throws Exception
static void PathFinderGraphHackVisitor_fixStart(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(this->geographicMapInterface);
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        for (int32_t index = BasicArrayList_size(startPathFindingNodeList) - 1; index >= 0; index--) {
            PathFindingNode* startPathFindingNode = ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, index));
            GeographicMapCellPosition* geographicMapCellPosition = startPathFindingNode->geographicMapCellPosition;
            int32_t column = GeographicMapCellPosition_getColumn(geographicMapCellPosition);
            int32_t row = GeographicMapCellPosition_getRow(geographicMapCellPosition);
            int32_t nextRow = row + 1;
            if (AllBinaryTiledLayer_isOnTileLayer(tiledLayer, column, nextRow)) {
                GeographicMapCellPosition* geographicMapCellPositionNeighbor = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, nextRow);
                SimpleWeightedGraph_removeEdge(graph, geographicMapCellPosition, geographicMapCellPositionNeighbor);
            }
        }
}


// throws Exception
static void PathFinderGraphHackVisitor_fixEnd(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* endPathFindingNodeList) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(this->geographicMapInterface);
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        for (int32_t index = BasicArrayList_size(endPathFindingNodeList) - 1; index >= 0; index--) {
            PathFindingNode* endPathFindingNode = ((PathFindingNode*) BasicArrayList_get(endPathFindingNodeList, index));
            GeographicMapCellPosition* geographicMapCellPosition = endPathFindingNode->geographicMapCellPosition;
            SimpleWeightedGraph_addVertex(graph, geographicMapCellPosition);
            int32_t column = GeographicMapCellPosition_getColumn(geographicMapCellPosition);
            int32_t row = GeographicMapCellPosition_getRow(geographicMapCellPosition);
            int32_t nextRow = row + 1;
            if (AllBinaryTiledLayer_isOnTileLayer(tiledLayer, column, nextRow)) {
                GeographicMapCellPosition* geographicMapCellPositionNeighbor = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, nextRow);
                SimpleWeightedGraph_addEdge(graph, geographicMapCellPosition, geographicMapCellPositionNeighbor);
            }
        }
}


// throws Exception
static void PathFinderGraphHackVisitor_fixOverPassEdges(PathFinderGraphHackVisitor* this, SimpleWeightedGraph* graph) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(this->geographicMapInterface);
        RaceTrackGeographicMap* raceTrackGeographicMap = ((RaceTrackGeographicMap*) this->geographicMapInterface);
        CellPosition** CellPositionArray = JAVA_CALL(RaceTrackGeographicMap_getRaceTrackData(raceTrackGeographicMap), getOverPassGeographicMapCellPositionArray);
        for (int32_t index = java_array_length(CellPositionArray) - 1; index >= 0; index--) {
            CellPosition* overPassGeographicMapCellPosition = CellPositionArray[index];
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Fixing Over Pass: ", java_string_of(CellPosition_getColumn(overPassGeographicMapCellPosition))), ", "), java_string_of(CellPosition_getRow(overPassGeographicMapCellPosition))), this, "fixOverPassEdges");
            GeographicMapCellPosition* underPassGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, CellPosition_getColumn(overPassGeographicMapCellPosition), CellPosition_getRow(overPassGeographicMapCellPosition));
            GeographicMapCellPosition* rightUnderPassGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, CellPosition_getColumn(overPassGeographicMapCellPosition) + 1, CellPosition_getRow(overPassGeographicMapCellPosition));
            GeographicMapCellPosition* leftUnderPassGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, CellPosition_getColumn(overPassGeographicMapCellPosition) - 1, CellPosition_getRow(overPassGeographicMapCellPosition));
            SimpleWeightedGraph_removeEdge(graph, underPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
            SimpleWeightedGraph_removeEdge(graph, underPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
            SimpleWeightedGraph_addVertex(graph, overPassGeographicMapCellPosition);
            SimpleWeightedGraph_addEdge(graph, overPassGeographicMapCellPosition, rightUnderPassGeographicMapCellPosition);
            SimpleWeightedGraph_addEdge(graph, overPassGeographicMapCellPosition, leftUnderPassGeographicMapCellPosition);
        }
}


// throws Exception
void PathFinderGraphHackVisitor_fixPath(PathFinderGraphHackVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) {
        for (int32_t index = BasicArrayList_size(startPathFindingNodeList) - 1; index >= 0; index--) {
            PathFindingNode* endPathFindingNode = ((PathFindingNode*) BasicArrayList_get(endPathFindingNodeList, index));
            PathFindingNode* startPathFindingNode = ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, index));
            if (BasicGeographicMapUtil_isSameCellPosition(BasicGeographicMapUtil_getInstance(), startPathFindingNode->geographicMapCellPosition, endPathFindingNode->geographicMapCellPosition)) {
                if (BasicArrayList_remove(pathList, endPathFindingNode->geographicMapCellPosition)) {
                    BasicArrayList_remove(pathList, startPathFindingNode->geographicMapCellPosition);
                    BasicArrayList_addAt(pathList, 0, startPathFindingNode->geographicMapCellPosition);
                }
            }
        }
        PathFinderGraphHackVisitor_removeOverPassEdges(this, pathList);
}


// throws Exception
static void PathFinderGraphHackVisitor_removeOverPassEdges(PathFinderGraphHackVisitor* this, BasicArrayList* pathList) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(this->geographicMapInterface);
        RaceTrackGeographicMap* raceTrackGeographicMap = ((RaceTrackGeographicMap*) this->geographicMapInterface);
        CellPosition** CellPositionArray = JAVA_CALL(RaceTrackGeographicMap_getRaceTrackData(raceTrackGeographicMap), getOverPassGeographicMapCellPositionArray);
        for (int32_t index = java_array_length(CellPositionArray) - 1; index >= 0; index--) {
            CellPosition* overPassGeographicMapCellPosition = CellPositionArray[index];
            GeographicMapCellPosition* underPassGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, CellPosition_getColumn(overPassGeographicMapCellPosition), CellPosition_getRow(overPassGeographicMapCellPosition));
            int32_t indexOf = BasicArrayList_indexOf(pathList, overPassGeographicMapCellPosition);
            if (indexOf != -1) {
                BasicArrayList_set(pathList, indexOf, underPassGeographicMapCellPosition);
            }
        }
}


bool PathFinderGraphHackVisitor_isValid(PathFinderGraphHackVisitor* this, GraphPath* graphPath) {
        if (JAVA_CALL(GraphPath_getEdgeList(graphPath), size) > this->base.edgeMinimum && GraphPath_getWeight(graphPath) < this->base.maxPathWeight && GraphPath_getWeight(graphPath) > this->base.minPathWeight) {
            return true;
        } else {
            return false;
        }
}

