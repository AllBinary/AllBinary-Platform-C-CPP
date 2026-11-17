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
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"

typedef struct Waypoint2SelectedLogHelper Waypoint2SelectedLogHelper;
struct Waypoint2SelectedLogHelper {
    Waypoint2LogHelper base;
    LogUtil* logUtil;
    CommonSeps* commonSeps;
    PositionStrings* positionStrings;
    StringUtil* stringUtil;
    const char* ENEMY_POSSIBLE_TARGET;
    const char* CLOSE_RANGE;
    const char* SENSOR_RANGE;
    const char* ONLY_TARGETS;
    const char* SHORTER_THAN_CURRENT_TARGET_DISTANCE;
    const char* CURRENT_TARGET_DESTROYED;
    const char* CURRENT_TARGET_NOT_AVAILABLE;
    const char* PROCESS_POSSIBLE_TARGET;
};

static Waypoint2SelectedLogHelper* Waypoint2SelectedLogHelper_instanceC;

Waypoint2SelectedLogHelper* Waypoint2SelectedLogHelper_new(void);
Waypoint2LogHelper* Waypoint2SelectedLogHelper_getInstance(void);
void Waypoint2SelectedLogHelper_initRange(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);
void Waypoint2SelectedLogHelper_processPossibleTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);
void Waypoint2SelectedLogHelper_processSetTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2SelectedLogHelper_processPossibleTargetCloser(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2SelectedLogHelper_setTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2SelectedLogHelper_setTargetPath(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2SelectedLogHelper_setTargetPathIgnoreNewPath(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase);
void Waypoint2SelectedLogHelper_processWaypoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* targetLayer, int32_t size);
void Waypoint2SelectedLogHelper_processWaypointTracked(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase);
void Waypoint2SelectedLogHelper_processWaypointTrackedVisit(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition);
void Waypoint2SelectedLogHelper_processWaypointTrackedWithoutProgress(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, const char* reason);
void Waypoint2SelectedLogHelper_wander(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2SelectedLogHelper_targetDestroyed(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2SelectedLogHelper_processTargeting(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);
void Waypoint2SelectedLogHelper_processTargetingNonWayPoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);
void Waypoint2SelectedLogHelper_removeWaypoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, const char* reason);
void Waypoint2SelectedLogHelper_removeWaypointList(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list);
void Waypoint2SelectedLogHelper_removeWaypointClear(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2SelectedLogHelper_clearTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2SelectedLogHelper_addWaypointFromUser(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void Waypoint2SelectedLogHelper_targetMovedSoRetarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

// Static fields with runtime initializers: call this once at startup
void Waypoint2SelectedLogHelper_staticInit(void) {
    Waypoint2SelectedLogHelper_instanceC = Waypoint2SelectedLogHelper_new();
}

static void Waypoint2SelectedLogHelper_initFields(Waypoint2SelectedLogHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->positionStrings = PositionStrings_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->ENEMY_POSSIBLE_TARGET = " Enemy Possible Target: ";
    this->CLOSE_RANGE = "closeRange: ";
    this->SENSOR_RANGE = " sensorRange: ";
    this->ONLY_TARGETS = " Only Targets: ";
    this->SHORTER_THAN_CURRENT_TARGET_DISTANCE = " isShorterThanCurrentTargetDistance: ";
    this->CURRENT_TARGET_DESTROYED = " isCurrentTargetDestroyed: ";
    this->CURRENT_TARGET_NOT_AVAILABLE = " isCurrentTargetNotAvailable: ";
    this->PROCESS_POSSIBLE_TARGET = "selected: processPossibleTarget1";
}

void Waypoint2SelectedLogHelper_init(Waypoint2SelectedLogHelper* this) {
    Waypoint2LogHelper_init(&this->base);
    Waypoint2SelectedLogHelper_initFields(this);
}

Waypoint2SelectedLogHelper* Waypoint2SelectedLogHelper_new(void) {
    Waypoint2SelectedLogHelper* this = calloc(1, sizeof(Waypoint2SelectedLogHelper));
    Waypoint2SelectedLogHelper_init(this);
    return this;
}


Waypoint2LogHelper* Waypoint2SelectedLogHelper_getInstance(void) {
        return Waypoint2SelectedLogHelper_instanceC;
}


void Waypoint2SelectedLogHelper_initRange(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->CLOSE_RANGE);
        StringMaker_appendint(stringBuffer, closeRange);
        StringMaker_append(stringBuffer, this->SENSOR_RANGE);
        StringMaker_appendint(stringBuffer, sensorRange);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: initRange");
}


void Waypoint2SelectedLogHelper_processPossibleTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed) {
        if (WaypointBehaviorBase_isWaypointListEmptyOrOnlyTargets(waypointBehaviorBase) && WaypointBehaviorBase_isInSensorRange(waypointBehaviorBase, ((CollidableDestroyableDamageableLayer*) layerInterface), anotherTargetDistance)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
            StringMaker_append(stringBuffer, this->ONLY_TARGETS);
            StringMaker_appendboolean(stringBuffer, WaypointBehaviorBase_isWaypointListEmptyOrOnlyTargets(waypointBehaviorBase));
            StringMaker_append(stringBuffer, this->SHORTER_THAN_CURRENT_TARGET_DISTANCE);
            StringMaker_appendboolean(stringBuffer, isShorterThanCurrentTargetDistance);
            StringMaker_append(stringBuffer, this->CURRENT_TARGET_DESTROYED);
            StringMaker_appendboolean(stringBuffer, isCurrentTargetDestroyed);
            StringMaker_append(stringBuffer, this->CURRENT_TARGET_NOT_AVAILABLE);
            StringMaker_appendboolean(stringBuffer, (WaypointBehaviorBase_getCurrentTargetLayerInterface(waypointBehaviorBase) == nullptr));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->PROCESS_POSSIBLE_TARGET);
        }
}


void Waypoint2SelectedLogHelper_processSetTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getCurrentTargetingStateString(waypointBehaviorBase));
        StringMaker_append(stringBuffer, this->ENEMY_POSSIBLE_TARGET);
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(layerInterface));
        StringMaker_append(stringBuffer, " anotherTargetDistance: ");
        StringMaker_appendint(stringBuffer, anotherTargetDistance);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processPossibleTarget2");
}


void Waypoint2SelectedLogHelper_processPossibleTargetCloser(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getCurrentTargetingStateString(waypointBehaviorBase));
        StringMaker_append(stringBuffer, this->ENEMY_POSSIBLE_TARGET);
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(layerInterface));
        StringMaker_append(stringBuffer, " anotherTargetDistance: ");
        StringMaker_appendint(stringBuffer, anotherTargetDistance);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processPossibleTarget3");
}


void Waypoint2SelectedLogHelper_setTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getName(waypointBehaviorBase));
        StringMaker_append(stringBuffer, " targeting: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(layerInterface));
        StringMaker_append(stringBuffer, " at: ");
        StringMaker_appendint(stringBuffer, anotherTargetDistance);
        StringMaker_append(stringBuffer, " instead of: ");
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getCurrentTargetingStateString(waypointBehaviorBase));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: setTarget");
}


void Waypoint2SelectedLogHelper_setTargetPath(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, "Target Destroyed", this, "selected: setTargetPath");
}


void Waypoint2SelectedLogHelper_setTargetPathIgnoreNewPath(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Set Path To Target: ");
        StringMaker_append(stringBuffer, JAVA_CALL(WaypointBehaviorBase_getCurrentTargetLayerInterface(waypointBehaviorBase), getName));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, WaypointBehaviorBase_getCurrentTargetLayerInterface(waypointBehaviorBase)));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: setTargetPath");
}


void Waypoint2SelectedLogHelper_processWaypoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase, PathFindingLayerInterface* targetLayer, int32_t size) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Size: ");
        StringMaker_appendint(stringBuffer, size);
        StringMaker_append(stringBuffer, " Waypoint: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(targetLayer));
        StringMaker_append(stringBuffer, " Target: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, WaypointBehaviorBase_getCurrentTargetLayerInterface(waypointBehaviorBase)));
        StringMaker_append(stringBuffer, " isTrackingWaypoint: ");
        StringMaker_appendboolean(stringBuffer, WaypointBehaviorBase_isTrackingWaypoint(waypointBehaviorBase));
        StringMaker_append(stringBuffer, " WaypointOverridesAttacking: ");
        StringMaker_appendboolean(stringBuffer, WaypointBehaviorBase_isWaypointOverridesAttacking(waypointBehaviorBase));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processWaypoint");
}


void Waypoint2SelectedLogHelper_processWaypointTracked(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* waypointBehaviorBase) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " currentPathGeographicMapCellPosition: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, WaypointBehaviorBase_getCurrentPathGeographicMapCellPosition(waypointBehaviorBase)));
        StringMaker_append(stringBuffer, " nextUnvisitedPathGeographicMapCellPosition: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(waypointBehaviorBase)));
        StringMaker_append(stringBuffer, " Tracked: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, JAVA_CALL(WaypointBehaviorBase_getCurrentGeographicMapCellHistory(waypointBehaviorBase), getTracked)));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processWaypoint");
}


void Waypoint2SelectedLogHelper_processWaypointTrackedVisit(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Visited: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, geographicMapCellPosition));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processWaypoint");
}


void Waypoint2SelectedLogHelper_processWaypointTrackedWithoutProgress(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, const char* reason) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, reason), toString), this, "turnTo");
}


void Waypoint2SelectedLogHelper_wander(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer), this, "wander");
}


void Waypoint2SelectedLogHelper_targetDestroyed(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " Target Destroyed"), toString), this, "selected: processTargeting");
}


void Waypoint2SelectedLogHelper_processTargeting(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->positionStrings->DX_LABEL);
        StringMaker_appendint(stringBuffer, dx);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->positionStrings->DY_LABEL);
        StringMaker_appendint(stringBuffer, dy);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processTargeting");
}


void Waypoint2SelectedLogHelper_processTargetingNonWayPoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Targeting Non Waypoint ");
        StringMaker_append(stringBuffer, this->positionStrings->DX_LABEL);
        StringMaker_appendint(stringBuffer, dx);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->positionStrings->DY_LABEL);
        StringMaker_appendint(stringBuffer, dy);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: processTargeting");
}


void Waypoint2SelectedLogHelper_removeWaypoint(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, const char* reason) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getName(unitWaypointBehavior2));
        StringMaker_append(stringBuffer, " remove: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(waypointLayer));
        StringMaker_append(stringBuffer, " because: ");
        StringMaker_append(stringBuffer, reason);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: removeWaypoint");
}


void Waypoint2SelectedLogHelper_removeWaypointList(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, WaypointBehaviorBase_getName(unitWaypointBehavior2));
        StringMaker_append(stringBuffer, " Waypoints: ");
        StringMaker_append(stringBuffer, StringUtil_toString(this->stringUtil, list));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: removeWaypoint");
}


void Waypoint2SelectedLogHelper_removeWaypointClear(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " Clearing removed waypoint"), toString), this, "selected: removeWaypoint");
}


void Waypoint2SelectedLogHelper_clearTarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " Cleared Target"), toString), this, "selected: clearTarget");
}


void Waypoint2SelectedLogHelper_addWaypointFromUser(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " Adding Waypoint to Selected: ");
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(advancedRTSGameLayer));
        if (PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer) != nullptr) {
            StringMaker_append(stringBuffer, " With Parent: ");
            StringMaker_append(stringBuffer, JAVA_CALL(PathFindingLayerInterface_getParentLayer(advancedRTSGameLayer), getName));
        }
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: onWaypointEvent");
}


void Waypoint2SelectedLogHelper_targetMovedSoRetarget(Waypoint2SelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " - target moved so retargeting"), toString), this, "turnTo");
}

