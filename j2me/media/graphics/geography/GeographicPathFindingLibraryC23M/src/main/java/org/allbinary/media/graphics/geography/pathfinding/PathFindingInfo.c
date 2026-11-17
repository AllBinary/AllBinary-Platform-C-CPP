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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfoInterface.h"

typedef struct PathFindingInfo PathFindingInfo;
struct PathFindingInfo {
    PathFindingInfoInterface PathFindingInfoInterface_interface;
    GeographicPathFinderBase* pathFinder;
    BasicArrayList* startPathFindingNodeList;
    BasicArrayList* endPathFindingNodeList;
    PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface;
};

PathFindingInfo* PathFindingInfo_NULL_PATH_FINDING_INFO;

PathFindingInfo* PathFindingInfo_new(PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);

void PathFindingInfo_init(PathFindingInfo* this, PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
BasicArrayList* PathFindingInfo_getStartPathFindingNodeList(PathFindingInfo* this);
BasicArrayList* PathFindingInfo_getEndPathFindingNodeList(PathFindingInfo* this);
GeographicPathFinderBase* PathFindingInfo_getPathFinder(PathFindingInfo* this);
void PathFindingInfo_addStartPathFindingNode(PathFindingInfo* this, PathFindingNode* startPathFindingNode);
void PathFindingInfo_addEndPathFindingNode(PathFindingInfo* this, PathFindingNode* endPathFindingNode);
void PathFindingInfo_setPathFinder(PathFindingInfo* this, GeographicPathFinderBase* pathFinder);
PathFindingNodeCostInfoFactoryBase* PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(PathFindingInfo* this);

// Static fields with runtime initializers: call this once at startup
void PathFindingInfo_staticInit(void) {
    PathFindingInfo_NULL_PATH_FINDING_INFO = PathFindingInfo_new(PathFindingNodeCostInfoFactoryBase_NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
}

static void PathFindingInfo_initFields(PathFindingInfo* this) {
    this->pathFinder = GeographicPathFinderBase_NULL_GEOGRAPHIC_PATH_FINDER_BASE;
    
    
    
}


void PathFindingInfo_init(PathFindingInfo* this, PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
    PathFindingInfo_initFields(this);
        this->pathFindingNodeCostInfoFactoryInterface = pathFindingNodeCostInfoFactoryInterface;
        this->startPathFindingNodeList = startPathFindingNodeList;
        this->endPathFindingNodeList = endPathFindingNodeList;
}

PathFindingInfo* PathFindingInfo_new(PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
    PathFindingInfo* this = calloc(1, sizeof(PathFindingInfo));
    PathFindingInfo_init(this, pathFindingNodeCostInfoFactoryInterface, startPathFindingNodeList, endPathFindingNodeList);
    return this;
}


BasicArrayList* PathFindingInfo_getStartPathFindingNodeList(PathFindingInfo* this) {
        return this->startPathFindingNodeList;
}


BasicArrayList* PathFindingInfo_getEndPathFindingNodeList(PathFindingInfo* this) {
        return this->endPathFindingNodeList;
}


GeographicPathFinderBase* PathFindingInfo_getPathFinder(PathFindingInfo* this) {
        return this->pathFinder;
}


void PathFindingInfo_addStartPathFindingNode(PathFindingInfo* this, PathFindingNode* startPathFindingNode) {
        BasicArrayList_add(this->startPathFindingNodeList, startPathFindingNode);
}


void PathFindingInfo_addEndPathFindingNode(PathFindingInfo* this, PathFindingNode* endPathFindingNode) {
        BasicArrayList_add(this->endPathFindingNodeList, endPathFindingNode);
}


void PathFindingInfo_setPathFinder(PathFindingInfo* this, GeographicPathFinderBase* pathFinder) {
        this->pathFinder = pathFinder;
}


PathFindingNodeCostInfoFactoryBase* PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(PathFindingInfo* this) {
        return this->pathFindingNodeCostInfoFactoryInterface;
}

