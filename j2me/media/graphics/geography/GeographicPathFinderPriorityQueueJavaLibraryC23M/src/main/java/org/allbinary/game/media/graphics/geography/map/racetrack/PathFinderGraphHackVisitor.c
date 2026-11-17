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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"

//1.4.2
typedef struct PathFinderGraphHackVisitor PathFinderGraphHackVisitor;
struct PathFinderGraphHackVisitor {
    BasePathFinderGraphVisitor base;
};


PathFinderGraphHackVisitor* PathFinderGraphHackVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

void PathFinderGraphHackVisitor_init(PathFinderGraphHackVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);
void PathFinderGraphHackVisitor_visit(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixStart(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* startPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixEnd(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* endPathFindingNodeList);
static void PathFinderGraphHackVisitor_fixOverPassEdges(PathFinderGraphHackVisitor* this, Any* graph);
void PathFinderGraphHackVisitor_fixPath(PathFinderGraphHackVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);
static void PathFinderGraphHackVisitor_removeOverPassEdges(PathFinderGraphHackVisitor* this, BasicArrayList* pathList);
bool PathFinderGraphHackVisitor_isValid(PathFinderGraphHackVisitor* this, Any* graphPath);


void PathFinderGraphHackVisitor_init(PathFinderGraphHackVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
        BasePathFinderGraphVisitor_init(&this->base, geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
}

PathFinderGraphHackVisitor* PathFinderGraphHackVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphHackVisitor* this = calloc(1, sizeof(PathFinderGraphHackVisitor));
    PathFinderGraphHackVisitor_init(this, geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
    return this;
}


// throws Exception
void PathFinderGraphHackVisitor_visit(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
        PathFinderGraphHackVisitor_fixStart(this, graph, startPathFindingNodeList);
        PathFinderGraphHackVisitor_fixEnd(this, graph, endPathFindingNodeList);
        PathFinderGraphHackVisitor_fixOverPassEdges(this, graph);
}


// throws Exception
static void PathFinderGraphHackVisitor_fixStart(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* startPathFindingNodeList) {
}


// throws Exception
static void PathFinderGraphHackVisitor_fixEnd(PathFinderGraphHackVisitor* this, Any* graph, BasicArrayList* endPathFindingNodeList) {
}


// throws Exception
static void PathFinderGraphHackVisitor_fixOverPassEdges(PathFinderGraphHackVisitor* this, Any* graph) {
}


// throws Exception
void PathFinderGraphHackVisitor_fixPath(PathFinderGraphHackVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) {
}


// throws Exception
static void PathFinderGraphHackVisitor_removeOverPassEdges(PathFinderGraphHackVisitor* this, BasicArrayList* pathList) {
}


bool PathFinderGraphHackVisitor_isValid(PathFinderGraphHackVisitor* this, Any* graphPath) {
        return false;
}

