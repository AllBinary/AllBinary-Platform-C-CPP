/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2006 AllBinary
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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/media/graphics/geography/pathfinding/Comparable.h"

typedef struct PathFindingNodeCost PathFindingNodeCost;
struct PathFindingNodeCost {
    PathFindingNode base;
    Comparable Comparable_interface;
    CommonSeps* commonSeps;
    PathFindingNodeCostInfo* pathFindingNodeCostInfoP;
};

PathFindingNodeCost*** PathFindingNodeCost_NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY;

PathFindingNodeCost* PathFindingNodeCost_new(Any* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo);

void PathFindingNodeCost_init(PathFindingNodeCost* this, Any* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo);
PathFindingNodeCostInfo* PathFindingNodeCost_getPathFindingNodeCostInfo(PathFindingNodeCost* this);
void PathFindingNodeCost_setPathFindingNodeCostInfo(PathFindingNodeCost* this, PathFindingNodeCostInfo* pathFindingNodeCostInfo);
int32_t PathFindingNodeCost_compareTo(PathFindingNodeCost* this, PathFindingNodeCost* pathFindingNodeCost);
const char* PathFindingNodeCost_toString(PathFindingNodeCost* this);

// Static fields with runtime initializers: call this once at startup
void PathFindingNodeCost_staticInit(void) {
    PathFindingNodeCost_NULL_PATH_FINDING_NODE_COST_ARRAY_ARRAY = ((PathFindingNodeCost***) java_array_new2(sizeof(PathFindingNodeCost*), 0, 0));
}

static void PathFindingNodeCost_initFields(PathFindingNodeCost* this) {
    this->commonSeps = CommonSeps_getInstance();
    
}


void PathFindingNodeCost_init(PathFindingNodeCost* this, Any* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) {
        PathFindingNode_init(&this->base, parent, geographicMapCellPosition);
        PathFindingNodeCost_initFields(this);
        this->pathFindingNodeCostInfoP = pathFindingNodeCostInfo;
        if (this->geographicMapCellPosition == nullptr) {
            java_throw(java_exception_new("Exception", "No GeographicMapCellPosition"));
        }
        if (PathFindingNodeCost_getPathFindingNodeCostInfo(this) == nullptr) {
            java_throw(java_exception_new("Exception", "No PathFindingNodeCostInfo"));
        }
}

PathFindingNodeCost* PathFindingNodeCost_new(Any* parent, GeographicMapCellPosition* geographicMapCellPosition, PathFindingNodeCostInfo* pathFindingNodeCostInfo) {
    PathFindingNodeCost* this = calloc(1, sizeof(PathFindingNodeCost));
    PathFindingNodeCost_init(this, parent, geographicMapCellPosition, pathFindingNodeCostInfo);
    return this;
}


PathFindingNodeCostInfo* PathFindingNodeCost_getPathFindingNodeCostInfo(PathFindingNodeCost* this) {
        return this->pathFindingNodeCostInfoP;
}


void PathFindingNodeCost_setPathFindingNodeCostInfo(PathFindingNodeCost* this, PathFindingNodeCostInfo* pathFindingNodeCostInfo) {
        this->pathFindingNodeCostInfoP = pathFindingNodeCostInfo;
}


int32_t PathFindingNodeCost_compareTo(PathFindingNodeCost* this, PathFindingNodeCost* pathFindingNodeCost) {
        return PathFindingNodeCostInfo_compareTo(this->pathFindingNodeCostInfoP, pathFindingNodeCost->pathFindingNodeCostInfoP);
}


const char* PathFindingNodeCost_toString(PathFindingNodeCost* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->COLON_SEP);
        StringMaker_append(stringBuffer, JAVA_CALL(PathFindingNodeCost_getPathFindingNodeCostInfo(this), toString));
        StringMaker_append(stringBuffer, " Path: ");
        StringMaker_append(stringBuffer, GeographicMapCellPosition_toString(this->geographicMapCellPosition));
        PathFindingNode* pathFindingNode = ((PathFindingNode*) this->parent);
        while (pathFindingNode != nullptr) {
            StringMaker_append(stringBuffer, JAVA_CALL(pathFindingNode->geographicMapCellPosition, toString));
            StringMaker_append(stringBuffer, this->commonSeps->SPACE);
            pathFindingNode = ((PathFindingNode*) pathFindingNode->parent);
        }
        return StringMaker_toString(stringBuffer);
}

