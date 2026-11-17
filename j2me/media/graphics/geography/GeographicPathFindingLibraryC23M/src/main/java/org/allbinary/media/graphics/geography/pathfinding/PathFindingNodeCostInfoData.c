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

typedef struct PathFindingNodeCostInfoData PathFindingNodeCostInfoData;
struct PathFindingNodeCostInfoData {
    int32_t MAX_TOTAL_COST;
    int32_t MAX_NODE_COST;
};

static PathFindingNodeCostInfoData* PathFindingNodeCostInfoData_instance;

PathFindingNodeCostInfoData* PathFindingNodeCostInfoData_new(void);
PathFindingNodeCostInfoData* PathFindingNodeCostInfoData_getInstance(void);

void PathFindingNodeCostInfoData_init(PathFindingNodeCostInfoData* this);

// Static fields with runtime initializers: call this once at startup
void PathFindingNodeCostInfoData_staticInit(void) {
    PathFindingNodeCostInfoData_instance = PathFindingNodeCostInfoData_new();
}

static void PathFindingNodeCostInfoData_initFields(PathFindingNodeCostInfoData* this) {
    this->MAX_TOTAL_COST = Integer_MAX_VALUE;
    this->MAX_NODE_COST = Integer_MAX_VALUE / 10000;
}


PathFindingNodeCostInfoData* PathFindingNodeCostInfoData_getInstance(void) {
        return PathFindingNodeCostInfoData_instance;
}


void PathFindingNodeCostInfoData_init(PathFindingNodeCostInfoData* this) {
    PathFindingNodeCostInfoData_initFields(this);
}

PathFindingNodeCostInfoData* PathFindingNodeCostInfoData_new(void) {
    PathFindingNodeCostInfoData* this = calloc(1, sizeof(PathFindingNodeCostInfoData));
    PathFindingNodeCostInfoData_init(this);
    return this;
}

