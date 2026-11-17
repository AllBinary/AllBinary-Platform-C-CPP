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
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/media/graphics/geography/pathfinding/Comparable.h"

typedef struct PathFindingNodeCostInfo PathFindingNodeCostInfo;
struct PathFindingNodeCostInfo {
    Comparable Comparable_interface;
    PathFindingNodeCostInfoData* pathFindingNodeCostInfoData;
    int64_t costFromStartP;
    int64_t costToEndP;
    int64_t totalCostP;
};


PathFindingNodeCostInfo* PathFindingNodeCostInfo_new(int64_t costFromStart, int64_t costToGoal);

void PathFindingNodeCostInfo_init(PathFindingNodeCostInfo* this, int64_t costFromStart, int64_t costToGoal);
void PathFindingNodeCostInfo_setCostToEnd(PathFindingNodeCostInfo* this, int64_t costToEnd);
void PathFindingNodeCostInfo_setTotalCost(PathFindingNodeCostInfo* this, int64_t totalCost);
void PathFindingNodeCostInfo_setCalculatedTotalCost(PathFindingNodeCostInfo* this);
void PathFindingNodeCostInfo_setCostFromStart(PathFindingNodeCostInfo* this, int64_t cost);
void PathFindingNodeCostInfo_addCostFromStart(PathFindingNodeCostInfo* this, int64_t cost);
int32_t PathFindingNodeCostInfo_compareTo(PathFindingNodeCostInfo* this, PathFindingNodeCostInfo* pathFindingNodeCostInfo);
const char* PathFindingNodeCostInfo_toString(PathFindingNodeCostInfo* this);

static void PathFindingNodeCostInfo_initFields(PathFindingNodeCostInfo* this) {
    this->pathFindingNodeCostInfoData = PathFindingNodeCostInfoData_getInstance();
    
    
    this->totalCostP = 0;
}


void PathFindingNodeCostInfo_init(PathFindingNodeCostInfo* this, int64_t costFromStart, int64_t costToGoal) {
    PathFindingNodeCostInfo_initFields(this);
        this->costFromStartP = costFromStart;
        this->costToEndP = costToGoal;
        PathFindingNodeCostInfo_setCalculatedTotalCost(this);
}

PathFindingNodeCostInfo* PathFindingNodeCostInfo_new(int64_t costFromStart, int64_t costToGoal) {
    PathFindingNodeCostInfo* this = calloc(1, sizeof(PathFindingNodeCostInfo));
    PathFindingNodeCostInfo_init(this, costFromStart, costToGoal);
    return this;
}


void PathFindingNodeCostInfo_setCostToEnd(PathFindingNodeCostInfo* this, int64_t costToEnd) {
        this->costToEndP = costToEnd;
}


void PathFindingNodeCostInfo_setTotalCost(PathFindingNodeCostInfo* this, int64_t totalCost) {
        this->totalCostP = totalCost;
}


// throws Exception
void PathFindingNodeCostInfo_setCalculatedTotalCost(PathFindingNodeCostInfo* this) {
        this->totalCostP = this->costFromStartP + this->costToEndP;
        if (this->totalCostP > this->pathFindingNodeCostInfoData->MAX_NODE_COST) {
            java_throw(java_exception_new("Exception", "Max Cost Exceeded"));
        }
}


void PathFindingNodeCostInfo_setCostFromStart(PathFindingNodeCostInfo* this, int64_t cost) {
        this->costFromStartP = cost;
}


void PathFindingNodeCostInfo_addCostFromStart(PathFindingNodeCostInfo* this, int64_t cost) {
        this->costFromStartP += cost;
}


int32_t PathFindingNodeCostInfo_compareTo(PathFindingNodeCostInfo* this, PathFindingNodeCostInfo* pathFindingNodeCostInfo) {
        if (this->totalCostP < pathFindingNodeCostInfo->totalCostP) {
            return -1;
        } else if (this->totalCostP > pathFindingNodeCostInfo->totalCostP) {
            return 1;
        }
        return 0;
}


const char* PathFindingNodeCostInfo_toString(PathFindingNodeCostInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->COLON_SEP);
        StringMaker_append(stringBuffer, "CostFromStart: ");
        StringMaker_appendlong(stringBuffer, this->costFromStartP);
        StringMaker_append(stringBuffer, " CostToEnd: ");
        StringMaker_appendlong(stringBuffer, this->costToEndP);
        StringMaker_append(stringBuffer, " TotalCost: ");
        StringMaker_appendlong(stringBuffer, this->totalCostP);
        return StringMaker_toString(stringBuffer);
}

