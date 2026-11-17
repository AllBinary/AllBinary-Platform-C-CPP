/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"

typedef struct WaypointSelectedLogHelper WaypointSelectedLogHelper;
struct WaypointSelectedLogHelper {
    WaypointLogHelper base;
    LogUtil* logUtil;
    CommonSeps* commonSeps;
    StringUtil* stringUtil;
};

static WaypointSelectedLogHelper* WaypointSelectedLogHelper_instanceC;

WaypointSelectedLogHelper* WaypointSelectedLogHelper_new(void);
WaypointSelectedLogHelper* WaypointSelectedLogHelper_getInstance(void);
void WaypointSelectedLogHelper_onWaypointEvent(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void WaypointSelectedLogHelper_addWaypointFromBuilding(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void WaypointSelectedLogHelper_addWaypointFromBuildingList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list);
void WaypointSelectedLogHelper_insertWaypoint(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName);
void WaypointSelectedLogHelper_insertWaypointList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName, BasicArrayList* list);
void WaypointSelectedLogHelper_setRandomGeographicMapCellHistoryList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);
void WaypointSelectedLogHelper_moveAwayFromBuilding(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void WaypointSelectedLogHelper_needToMove(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior);
void WaypointSelectedLogHelper_setRandomGeographicMapCellHistory(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void WaypointSelectedLogHelper_setCurrentPathGeographicMapCellPosition(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition);
void WaypointSelectedLogHelper_setNextUnvisitedPathGeographicMapCellPosition(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void WaypointSelectedLogHelper_staticInit(void) {
    WaypointSelectedLogHelper_instanceC = WaypointSelectedLogHelper_new();
}

static void WaypointSelectedLogHelper_initFields(WaypointSelectedLogHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->stringUtil = StringUtil_getInstance();
}

void WaypointSelectedLogHelper_init(WaypointSelectedLogHelper* this) {
    WaypointLogHelper_init(&this->base);
    WaypointSelectedLogHelper_initFields(this);
}

WaypointSelectedLogHelper* WaypointSelectedLogHelper_new(void) {
    WaypointSelectedLogHelper* this = calloc(1, sizeof(WaypointSelectedLogHelper));
    WaypointSelectedLogHelper_init(this);
    return this;
}


WaypointSelectedLogHelper* WaypointSelectedLogHelper_getInstance(void) {
        return WaypointSelectedLogHelper_instanceC;
}


void WaypointSelectedLogHelper_onWaypointEvent(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " onWaypointEvent: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(advancedRTSGameLayer));
        if (PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer) != nullptr) {
            StringMaker_append(stringBuffer, " With Parent: ");
            StringMaker_append(stringBuffer, JAVA_CALL(PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer), getName));
        }
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "onWaypointEvent");
}


void WaypointSelectedLogHelper_addWaypointFromBuilding(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Adding Waypoint: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(advancedRTSGameLayer));
        if (PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer) != nullptr) {
            StringMaker_append(stringBuffer, " With Parent: ");
            StringMaker_append(stringBuffer, JAVA_CALL(PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer), getName));
        }
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: onWaypointEvent");
}


void WaypointSelectedLogHelper_addWaypointFromBuildingList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Waypoints: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, list));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: onWaypointEvent");
}


void WaypointSelectedLogHelper_insertWaypoint(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, waypointName);
        StringMaker_append(stringBuffer, " Insert: ");
        StringMaker_append(stringBuffer, CollidableDestroyableDamageableLayer_getName(rtsLayer));
        StringMaker_append(stringBuffer, " for Waypoint: ");
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: insertWaypoint");
}


void WaypointSelectedLogHelper_insertWaypointList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName, BasicArrayList* list) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, waypointName);
        StringMaker_append(stringBuffer, " Insert: ");
        StringMaker_append(stringBuffer, CollidableDestroyableDamageableLayer_getName(rtsLayer));
        StringMaker_append(stringBuffer, " Waypoints: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, list));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: insertWaypoint");
}


void WaypointSelectedLogHelper_setRandomGeographicMapCellHistoryList(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) {
        int32_t size = BasicArrayList_size(pathsList);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->START);
        StringMaker_appendint(stringBuffer, size);
        StringMaker_append(stringBuffer, " -> ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, pathsList));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: setRandomGeographicMapCellHistory");
}


void WaypointSelectedLogHelper_moveAwayFromBuilding(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " Trying to move away from building"), toString), this, "selected: moveAwayFromBuilding");
}


void WaypointSelectedLogHelper_needToMove(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, WaypointBehaviorBase_getMovementLogicAsString(unitWaypointBehavior)), toString), this, "needToMove");
}


void WaypointSelectedLogHelper_setRandomGeographicMapCellHistory(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " pathsList is null"), toString), this, "setRandomGeographicMapCellHistory");
}


void WaypointSelectedLogHelper_setCurrentPathGeographicMapCellPosition(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition) {
        if (existingCurrentPathGeographicMapCellPosition == nullptr) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " currentPathGeographicMapCellPosition: "), append, StringUtil_toString(this->stringUtil, currentPathGeographicMapCellPosition)), toString), this, "setCurrentPathGeographicMapCellPosition");
        }
}


void WaypointSelectedLogHelper_setNextUnvisitedPathGeographicMapCellPosition(WaypointSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition) {
        if (existingNextUnvisitedPathGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " nextUnvisitedPathGeographicMapCellPosition: "), append, StringUtil_toString(this->stringUtil, nextUnvisitedPathGeographicMapCellPosition)), toString), this, "setNextUnvisitedPathGeographicMapCellPosition");
        }
}

