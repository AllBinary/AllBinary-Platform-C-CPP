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
// package org.allbinary.game.ai.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h"
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicMapCellPathHistoryInfo.h"

typedef struct BasicAIProcessor BasicAIProcessor;
struct BasicAIProcessor {
    const char* name;
    GeographicMapCellHistory* geographicMapCellHistory;
    BasicArrayList* geographicMapCellPositionBasicArrayList;
    GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo;
    BasicDirectionAIHelper* basicAI;
    GeographicMapDirectionUtil* geographicMapDirectionUtil;
};


BasicAIProcessor* BasicAIProcessor_new(const char* name, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo, BasicArrayList* chosenPathList, AngleInfo* angleInfo, int32_t seed);

void BasicAIProcessor_init(BasicAIProcessor* this, const char* name, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo, BasicArrayList* chosenPathList, AngleInfo* angleInfo, int32_t seed);
static void BasicAIProcessor_setNewPath(BasicAIProcessor* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* chosenPathList);
void BasicAIProcessor_init(BasicAIProcessor* this);
static int32_t BasicAIProcessor_goTowardNextChosenOnPathPosition(BasicAIProcessor* this, GeographicMapCellPosition* currentGeographicMapCellPosition);
static void BasicAIProcessor_update(BasicAIProcessor* this);
int32_t BasicAIProcessor_processAI(BasicAIProcessor* this, AllBinaryLayerManager* myManager, GeographicMapCellPosition* currentGeographicMapCellPosition);
const char* BasicAIProcessor_getName(BasicAIProcessor* this);
void BasicAIProcessor_setName(BasicAIProcessor* this, const char* name);
GeographicMapCellPathHistoryInfo* BasicAIProcessor_getGeographicMapCellPathHistoryInfo(BasicAIProcessor* this);
void BasicAIProcessor_setGeographicMapCellPathHistoryInfo(BasicAIProcessor* this, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo);
GeographicMapCellHistory* BasicAIProcessor_getGeographicMapCellHistory(BasicAIProcessor* this);
void BasicAIProcessor_setGeographicMapCellHistory(BasicAIProcessor* this, GeographicMapCellHistory* geographicMapCellHistory);

static void BasicAIProcessor_initFields(BasicAIProcessor* this) {
    
    
    
    
    
    this->geographicMapDirectionUtil = GeographicMapDirectionUtil_getInstance();
}


void BasicAIProcessor_init(BasicAIProcessor* this, const char* name, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo, BasicArrayList* chosenPathList, AngleInfo* angleInfo, int32_t seed) {
    BasicAIProcessor_initFields(this);
        this->name = name;
        this->geographicMapCellHistory = geographicMapCellHistory;
        this->geographicMapCellPositionBasicArrayList = chosenPathList;
        this->geographicMapCellPathHistoryInfo = geographicMapCellPathHistoryInfo;
        BasicAIProcessor_setName(this, name);
        BasicAIProcessor_setNewPath(this, geographicMapCellHistory, chosenPathList);
        this->basicAI = BasicDirectionAIHelper_new(BasicAIProcessor_getName(this), angleInfo);
}

BasicAIProcessor* BasicAIProcessor_new(const char* name, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo, BasicArrayList* chosenPathList, AngleInfo* angleInfo, int32_t seed) {
    BasicAIProcessor* this = calloc(1, sizeof(BasicAIProcessor));
    BasicAIProcessor_init(this, name, geographicMapCellHistory, geographicMapCellPathHistoryInfo, chosenPathList, angleInfo, seed);
    return this;
}


static void BasicAIProcessor_setNewPath(BasicAIProcessor* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* chosenPathList) {
        BasicAIProcessor_setGeographicMapCellHistory(this, geographicMapCellHistory);
        this->geographicMapCellPositionBasicArrayList = chosenPathList;
        BasicAIProcessor_init(this);
}


void BasicAIProcessor_init(BasicAIProcessor* this) {
        this->geographicMapCellPathHistoryInfo = GeographicMapCellPathHistoryInfo_new();
        GeographicMapCellPathHistoryInfo_setPreviousOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo, ((GeographicMapCellPosition*) BasicArrayList_get(this->geographicMapCellPositionBasicArrayList, BasicArrayList_size(this->geographicMapCellPositionBasicArrayList) - 1)));
        GeographicMapCellPathHistoryInfo_setNextOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo, ((GeographicMapCellPosition*) BasicArrayList_get(this->geographicMapCellPositionBasicArrayList, BasicArrayList_size(this->geographicMapCellPositionBasicArrayList) - 1)));
        BasicAIProcessor_update(this);
}


// throws Exception
static int32_t BasicAIProcessor_goTowardNextChosenOnPathPosition(BasicAIProcessor* this, GeographicMapCellPosition* currentGeographicMapCellPosition) {
        int32_t keyDirection = -1;
        GeographicMapCellPosition* goToGeographicMapCellPosition = GeographicMapCellPathHistoryInfo_getNextChosenOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo);
        Direction* geographicMapDirectionData = GeographicMapDirectionUtil_getDirectionFromCellPositionToAdjacentCellPosition(this->geographicMapDirectionUtil, currentGeographicMapCellPosition, goToGeographicMapCellPosition);
        if (geographicMapDirectionData == DirectionFactory_getInstance()->NOT_BORDERED_WITH) {
            geographicMapDirectionData = GeographicMapDirectionUtil_getDirectionFromCellPositionToCellPosition(this->geographicMapDirectionUtil, currentGeographicMapCellPosition, goToGeographicMapCellPosition);
        }
        keyDirection = BasicDirectionAIHelper_getAIKeyPressedFromDirection(this->basicAI, geographicMapDirectionData);
        return keyDirection;
}


static void BasicAIProcessor_update(BasicAIProcessor* this) {
        GeographicMapCellPathHistoryInfo_setNextUnvisitedOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo, JAVA_CALL(BasicAIProcessor_getGeographicMapCellHistory(this), getFirstUnvisited));
        GeographicMapCellPathHistoryInfo_setNextChosenOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo, GeographicMapCellPathHistoryInfo_getNextUnvisitedOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo));
}


// throws Exception
int32_t BasicAIProcessor_processAI(BasicAIProcessor* this, AllBinaryLayerManager* myManager, GeographicMapCellPosition* currentGeographicMapCellPosition) {
        int32_t keyDirection = -1;
        if (BasicArrayList_contains(this->geographicMapCellPositionBasicArrayList, currentGeographicMapCellPosition)) {
            BasicAIProcessor_update(this);
            keyDirection = BasicAIProcessor_goTowardNextChosenOnPathPosition(this, currentGeographicMapCellPosition);
            GeographicMapCellPathHistoryInfo_setPreviousOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo, currentGeographicMapCellPosition);
        } else {
            keyDirection = BasicAIProcessor_goTowardNextChosenOnPathPosition(this, currentGeographicMapCellPosition);
        }
        return keyDirection;
}


const char* BasicAIProcessor_getName(BasicAIProcessor* this) {
        return this->name;
}


void BasicAIProcessor_setName(BasicAIProcessor* this, const char* name) {
        this->name = name;
}


GeographicMapCellPathHistoryInfo* BasicAIProcessor_getGeographicMapCellPathHistoryInfo(BasicAIProcessor* this) {
        return this->geographicMapCellPathHistoryInfo;
}


void BasicAIProcessor_setGeographicMapCellPathHistoryInfo(BasicAIProcessor* this, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo) {
        this->geographicMapCellPathHistoryInfo = geographicMapCellPathHistoryInfo;
}


GeographicMapCellHistory* BasicAIProcessor_getGeographicMapCellHistory(BasicAIProcessor* this) {
        return this->geographicMapCellHistory;
}


void BasicAIProcessor_setGeographicMapCellHistory(BasicAIProcessor* this, GeographicMapCellHistory* geographicMapCellHistory) {
        this->geographicMapCellHistory = geographicMapCellHistory;
}

