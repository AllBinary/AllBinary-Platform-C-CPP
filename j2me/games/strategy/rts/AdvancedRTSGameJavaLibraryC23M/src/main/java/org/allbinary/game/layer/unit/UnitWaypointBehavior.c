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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/form/PrimaryWaypointHelper.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/SensorAction.h"
#include "org/allbinary/game/layer/SensorActionFactory.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/building/BuildingLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/waypoint/event/WaypointEventListenerInterface.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct UnitWaypointBehavior UnitWaypointBehavior;
struct UnitWaypointBehavior {
    WaypointBehaviorBase base;
    WaypointEventListenerInterface WaypointEventListenerInterface_interface;
    CommonSeps* commonSeps;
    UnitWaypointStrings* unitWaypointStrings;
    int32_t longWeaponRange;
    SensorAction* sensorAction;
    TimeDelayHelper* completeTimeDelayHelper;
    GeographicMapCellHistory* currentGeographicMapCellHistoryP;
    GeographicMapCellPosition* lastPathGeographicMapCellPosition;
    GeographicMapCellPosition* currentPathGeographicMapCellPosition;
    CollidableDestroyableDamageableLayer* FAKE_WAYPOINT_LAYER;
    BasicArrayList* targetList;
    BasicArrayList* possibleTargetList;
    UnitLayer* associatedAdvancedRTSGameLayer;
    bool moving;
    bool movingFromStopped;
    BasicArrayList* waypointPathsListP;
    int32_t currentTargetDistance;
    CollidableDestroyableDamageableLayer* currentTargetLayerInterfaceP;
    bool trackingWaypoint;
    TimeDelayHelper* repeatedToLong;
};


UnitWaypointBehavior* UnitWaypointBehavior_new(UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint);

void UnitWaypointBehavior_init(UnitWaypointBehavior* this, UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint);
void UnitWaypointBehavior_initRange(UnitWaypointBehavior* this, int32_t weaponRange);
void UnitWaypointBehavior_onEvent(UnitWaypointBehavior* this, AllBinaryEventObject* eventObject);
void UnitWaypointBehavior_onWaypointEvent(UnitWaypointBehavior* this, RTSLayerEvent* event);
void UnitWaypointBehavior_addWaypointFromUser(UnitWaypointBehavior* this, AdvancedRTSGameLayer* advancedRTSGameLayer);
static void UnitWaypointBehavior_addWaypointFromBuilding(UnitWaypointBehavior* this, AdvancedRTSGameLayer* advancedRTSGameLayer);
bool UnitWaypointBehavior_isWaypointListEmptyOrOnlyTargets(UnitWaypointBehavior* this);
bool UnitWaypointBehavior_insertWaypoint(UnitWaypointBehavior* this, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer);
void UnitWaypointBehavior_move(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setRandomGeographicMapCellHistory(UnitWaypointBehavior* this, BasicArrayList* pathsList);
void UnitWaypointBehavior_setGeographicMapCellHistoryPath(UnitWaypointBehavior* this, BasicArrayList* geographicMapCellPositionBasicArrayList);
bool UnitWaypointBehavior_canInsertWaypoint(UnitWaypointBehavior* this, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer);
void UnitWaypointBehavior_addBuildingChase(UnitWaypointBehavior* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
void UnitWaypointBehavior_moveAwayFromBuilding(UnitWaypointBehavior* this, BuildingLayer* buildingLayer);
bool UnitWaypointBehavior_needToMove(UnitWaypointBehavior* this);
const char* UnitWaypointBehavior_getMovementLogicAsString(UnitWaypointBehavior* this);
bool UnitWaypointBehavior_isMovingFromStopped(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setMovingFromStopped(UnitWaypointBehavior* this, bool movingFromStopped);
void UnitWaypointBehavior_setWaypointPathsList(UnitWaypointBehavior* this, BasicArrayList* waypointPathsList);
BasicArrayList* UnitWaypointBehavior_getWaypointPathsList(UnitWaypointBehavior* this);
bool UnitWaypointBehavior_isMoving(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setMoving(UnitWaypointBehavior* this, bool moving);
bool UnitWaypointBehavior_isTrackingWaypoint(UnitWaypointBehavior* this);
BasicArrayList* UnitWaypointBehavior_getPossibleTargetList(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setLastPathGeographicMapCellPosition(UnitWaypointBehavior* this, GeographicMapCellPosition* lastPathGeographicMapCellPosition);
GeographicMapCellPosition* UnitWaypointBehavior_getLastPathGeographicMapCellPosition(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setCurrentPathGeographicMapCellPosition(UnitWaypointBehavior* this, GeographicMapCellPosition* currentPathGeographicMapCellPosition);
GeographicMapCellPosition* UnitWaypointBehavior_getCurrentPathGeographicMapCellPosition(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setSensorAction(UnitWaypointBehavior* this, SensorAction* sensorAction);
SensorAction* UnitWaypointBehavior_getSensorAction(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setCurrentTargetLayerInterface(UnitWaypointBehavior* this, CollidableDestroyableDamageableLayer* currentTargetLayerInterface);
CollidableDestroyableDamageableLayer* UnitWaypointBehavior_getCurrentTargetLayerInterface(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setCurrentTargetDistance(UnitWaypointBehavior* this, int32_t currentTargetDistance);
int32_t UnitWaypointBehavior_getCurrentTargetDistance(UnitWaypointBehavior* this);
TimeDelayHelper* UnitWaypointBehavior_getCompleteTimeDelayHelper(UnitWaypointBehavior* this);
GeographicMapCellHistory* UnitWaypointBehavior_getCurrentGeographicMapCellHistory(UnitWaypointBehavior* this);
void UnitWaypointBehavior_setTrackingWaypoint(UnitWaypointBehavior* this, bool trackingWaypoint);

static void UnitWaypointBehavior_initFields(UnitWaypointBehavior* this) {
    this->commonSeps = CommonSeps_getInstance();
    this->unitWaypointStrings = UnitWaypointStrings_getInstance();
    this->longWeaponRange = 0;
    this->sensorAction = SensorActionFactory_getInstance()->ATTACK;
    
    
    this->lastPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->currentPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
    
    
    
    this->moving = false;
    this->movingFromStopped = false;
    this->waypointPathsListP = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->currentTargetDistance = Integer_MAX_VALUE;
    this->currentTargetLayerInterfaceP = CollidableDestroyableDamageableLayer_getNullInstance();
    this->trackingWaypoint = false;
    this->repeatedToLong = TimeDelayHelper_new(22000);
}


void UnitWaypointBehavior_init(UnitWaypointBehavior* this, UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint) {
    WaypointBehaviorBase_init(&this->base);
    UnitWaypointBehavior_initFields(this);
        this->associatedAdvancedRTSGameLayer = associatedAdvancedRTSGameLayer;
        this->completeTimeDelayHelper = TimeDelayHelper_new(30000);
        this->targetList = BasicArrayListD_new();
        this->possibleTargetList = BasicArrayListD_new();
        UnitWaypointBehavior_setWaypointPathsList(this, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
        this->currentGeographicMapCellHistoryP = GeographicMapCellHistory_new();
        this->FAKE_WAYPOINT_LAYER = fakeWaypoint;
}

UnitWaypointBehavior* UnitWaypointBehavior_new(UnitLayer* associatedAdvancedRTSGameLayer, CollidableDestroyableDamageableLayer* fakeWaypoint) {
    UnitWaypointBehavior* this = calloc(1, sizeof(UnitWaypointBehavior));
    UnitWaypointBehavior_init(this, associatedAdvancedRTSGameLayer, fakeWaypoint);
    return this;
}


void UnitWaypointBehavior_initRange(UnitWaypointBehavior* this, int32_t weaponRange) {
        this->longWeaponRange = weaponRange / 2;
}


void UnitWaypointBehavior_onEvent(UnitWaypointBehavior* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void UnitWaypointBehavior_onWaypointEvent(UnitWaypointBehavior* this, RTSLayerEvent* event) {
        AdvancedRTSGameLayer* advancedRTSGameLayer = ((AdvancedRTSGameLayer*) RTSLayerEvent_getRtsLayer(event));
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, onWaypointEvent, this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
        if (UnitLayer_isSelected(this->associatedAdvancedRTSGameLayer)) {
            UnitWaypointBehavior_addWaypointFromUser(this, advancedRTSGameLayer);
        } else if (AdvancedRTSGameLayer_shouldAddWaypointFromBuilding(advancedRTSGameLayer)) {
            UnitWaypointBehavior_addWaypointFromBuilding(this, advancedRTSGameLayer);
        }
}


// throws Exception
void UnitWaypointBehavior_addWaypointFromUser(UnitWaypointBehavior* this, AdvancedRTSGameLayer* advancedRTSGameLayer) {
}


// throws Exception
static void UnitWaypointBehavior_addWaypointFromBuilding(UnitWaypointBehavior* this, AdvancedRTSGameLayer* advancedRTSGameLayer) {
        if (advancedRTSGameLayer == PrimaryWaypointHelper_getWaypointLayer(PrimaryWaypointHelper_getInstance()) || AdvancedRTSGameLayer_getParentLayer(advancedRTSGameLayer) == UnitLayer_getParentLayer(this->associatedAdvancedRTSGameLayer)) {
            if (!BasicArrayList_contains(this->targetList, advancedRTSGameLayer)) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, addWaypointFromBuilding, this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
                if (AdvancedRTSGameLayer_isDestroyed(advancedRTSGameLayer)) {
                    java_throw(java_exception_new("Exception", java_concat("Trying to add a dead: ", java_string_of(advancedRTSGameLayer))));
                }
                BasicArrayList_add(this->targetList, advancedRTSGameLayer);
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, addWaypointFromBuildingList, this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer, this->targetList);
            }
        }
}


bool UnitWaypointBehavior_isWaypointListEmptyOrOnlyTargets(UnitWaypointBehavior* this) {
        return false;
}


// throws Exception
bool UnitWaypointBehavior_insertWaypoint(UnitWaypointBehavior* this, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer) {
        if (UnitWaypointBehavior_canInsertWaypoint(this, index, rtsLayer)) {
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, insertWaypoint, this->associatedAdvancedRTSGameLayer, index, rtsLayer, UnitWaypointBehavior_getName(this));
            if (CollidableDestroyableDamageableLayer_isDestroyed(rtsLayer)) {
                java_throw(java_exception_new("Exception", java_concat("Trying to add a dead: ", java_string_of(rtsLayer))));
            }
            BasicArrayList_addAt(this->targetList, index, rtsLayer);
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, insertWaypointList, this->associatedAdvancedRTSGameLayer, index, rtsLayer, UnitWaypointBehavior_getName(this), this->targetList);
            return true;
        }
        return false;
}


void UnitWaypointBehavior_move(UnitWaypointBehavior* this) {
        if (UnitWaypointBehavior_isMoving(this)) {
            UnitWaypointBehavior_setMovingFromStopped(this, false);
        } else {
            UnitWaypointBehavior_setMovingFromStopped(this, true);
        }
        UnitWaypointBehavior_setMoving(this, false);
}


// throws Exception
void UnitWaypointBehavior_setRandomGeographicMapCellHistory(UnitWaypointBehavior* this, BasicArrayList* pathsList) {
        int32_t size = BasicArrayList_size(pathsList);
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, setRandomGeographicMapCellHistoryList, this->associatedAdvancedRTSGameLayer, pathsList);
        if (size > 0) {
            BasicArrayList* geographicMapCellPositionBasicArrayList = ((BasicArrayList*) BasicArrayListUtil_getRandom(BasicArrayListUtil_getInstance(), pathsList));
            UnitWaypointBehavior_setGeographicMapCellHistoryPath(this, geographicMapCellPositionBasicArrayList);
        }
}


// throws Exception
void UnitWaypointBehavior_setGeographicMapCellHistoryPath(UnitWaypointBehavior* this, BasicArrayList* geographicMapCellPositionBasicArrayList) {
        this->lastPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        if (this->associatedAdvancedRTSGameLayer->showMoreCaptionStates) {
            JAVA_CALL(UnitLayer_getCaptionAnimationHelper(this->associatedAdvancedRTSGameLayer), update, this->unitWaypointStrings->PATHING, BasicColorFactory_getInstance()->GREEN);
        }
        GeographicMapCellHistory_init(this->currentGeographicMapCellHistoryP);
        UnitLayer_init(this->associatedAdvancedRTSGameLayer, this->currentGeographicMapCellHistoryP, geographicMapCellPositionBasicArrayList);
        UnitWaypointBehavior_setTrackingWaypoint(this, true);
        JAVA_CALL(UnitWaypointBehavior_getCompleteTimeDelayHelper(this), setStartTimeTNT);
}


bool UnitWaypointBehavior_canInsertWaypoint(UnitWaypointBehavior* this, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer) {
        if (BasicArrayList_size(this->targetList) > 4) {
        } else if (BasicArrayList_contains(this->targetList, rtsLayer)) {
        } else {
            return true;
        }
        return false;
}


// throws Exception
void UnitWaypointBehavior_addBuildingChase(UnitWaypointBehavior* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
}


// throws Exception
void UnitWaypointBehavior_moveAwayFromBuilding(UnitWaypointBehavior* this, BuildingLayer* buildingLayer) {
        GeographicMapCellPosition* geographicMapCellPosition = UnitLayer_getCurrentGeographicMapCellPosition(this->associatedAdvancedRTSGameLayer);
        BasicArrayList* list = JAVA_CALL(buildingLayer->geographicMapCellPositionAreaBase, getOccupyingGeographicMapCellPositionList);
        if (BasicArrayList_contains(list, geographicMapCellPosition)) {
            if (UnitWaypointBehavior_insertWaypoint(this, 0, this->FAKE_WAYPOINT_LAYER)) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, moveAwayFromBuilding, this->associatedAdvancedRTSGameLayer);
                UnitWaypointBehavior_setCurrentTargetLayerInterface(this, ((CollidableDestroyableDamageableLayer*) this->FAKE_WAYPOINT_LAYER));
                BasicArrayList* pathsList = BuildingLayer_getMoveOutOfBuildAreaPath(buildingLayer, geographicMapCellPosition);
                UnitLayer_setClosestGeographicMapCellHistory(this->associatedAdvancedRTSGameLayer, pathsList);
            }
        }
}


bool UnitWaypointBehavior_needToMove(UnitWaypointBehavior* this) {
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypointLogHelperP, needToMove, this->associatedAdvancedRTSGameLayer, this);
        if (UnitWaypointBehavior_isTrackingWaypoint(this) || this->sensorAction == SensorActionFactory_getInstance()->EVADE || (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance() && UnitWaypointBehavior_getCurrentTargetDistance(this) >= this->longWeaponRange + CollidableDestroyableDamageableLayer_getHalfHeight(this->currentTargetLayerInterfaceP))) {
            TimeDelayHelper_setStartTimeTNT(this->repeatedToLong);
            return true;
        }
        if (TimeDelayHelper_isTimeTNT(this->repeatedToLong)) {
            const char* message = java_concat("Repeating too long: ", java_string_of(UnitWaypointBehavior_getMovementLogicAsString(this)));
            ForcedLogUtil_log(message, this->associatedAdvancedRTSGameLayer);
        }
        return false;
}


const char* UnitWaypointBehavior_getMovementLogicAsString(UnitWaypointBehavior* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "isTrackingWaypoint: ");
        StringMaker_appendboolean(stringBuffer, UnitWaypointBehavior_isTrackingWaypoint(this));
        StringMaker_append(stringBuffer, " sensorAction: ");
        StringMaker_append(stringBuffer, this->sensorAction->name);
        StringMaker_append(stringBuffer, " getCurrentTargetLayerInterface: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), this->currentTargetLayerInterfaceP));
        if (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance()) {
            StringMaker_append(stringBuffer, " Target Range: ");
            StringMaker_appendint(stringBuffer, UnitWaypointBehavior_getCurrentTargetDistance(this));
            StringMaker_append(stringBuffer, " >= ");
            StringMaker_appendint(stringBuffer, ((int32_t) (this->longWeaponRange + CollidableDestroyableDamageableLayer_getHalfHeight(this->currentTargetLayerInterfaceP))));
        }
        return StringMaker_toString(stringBuffer);
}


bool UnitWaypointBehavior_isMovingFromStopped(UnitWaypointBehavior* this) {
        return this->movingFromStopped;
}


void UnitWaypointBehavior_setMovingFromStopped(UnitWaypointBehavior* this, bool movingFromStopped) {
        this->movingFromStopped = movingFromStopped;
}


void UnitWaypointBehavior_setWaypointPathsList(UnitWaypointBehavior* this, BasicArrayList* waypointPathsList) {
        this->waypointPathsListP = waypointPathsList;
}


BasicArrayList* UnitWaypointBehavior_getWaypointPathsList(UnitWaypointBehavior* this) {
        return this->waypointPathsListP;
}


bool UnitWaypointBehavior_isMoving(UnitWaypointBehavior* this) {
        return this->moving;
}


void UnitWaypointBehavior_setMoving(UnitWaypointBehavior* this, bool moving) {
        this->moving = moving;
}


bool UnitWaypointBehavior_isTrackingWaypoint(UnitWaypointBehavior* this) {
        return this->trackingWaypoint;
}


BasicArrayList* UnitWaypointBehavior_getPossibleTargetList(UnitWaypointBehavior* this) {
        return this->possibleTargetList;
}


void UnitWaypointBehavior_setLastPathGeographicMapCellPosition(UnitWaypointBehavior* this, GeographicMapCellPosition* lastPathGeographicMapCellPosition) {
        this->lastPathGeographicMapCellPosition = lastPathGeographicMapCellPosition;
}


GeographicMapCellPosition* UnitWaypointBehavior_getLastPathGeographicMapCellPosition(UnitWaypointBehavior* this) {
        return this->lastPathGeographicMapCellPosition;
}


void UnitWaypointBehavior_setCurrentPathGeographicMapCellPosition(UnitWaypointBehavior* this, GeographicMapCellPosition* currentPathGeographicMapCellPosition) {
        this->currentPathGeographicMapCellPosition = currentPathGeographicMapCellPosition;
}


GeographicMapCellPosition* UnitWaypointBehavior_getCurrentPathGeographicMapCellPosition(UnitWaypointBehavior* this) {
        return this->currentPathGeographicMapCellPosition;
}


void UnitWaypointBehavior_setSensorAction(UnitWaypointBehavior* this, SensorAction* sensorAction) {
        this->sensorAction = sensorAction;
}


SensorAction* UnitWaypointBehavior_getSensorAction(UnitWaypointBehavior* this) {
        return this->sensorAction;
}


void UnitWaypointBehavior_setCurrentTargetLayerInterface(UnitWaypointBehavior* this, CollidableDestroyableDamageableLayer* currentTargetLayerInterface) {
        this->currentTargetLayerInterfaceP = currentTargetLayerInterface;
}


CollidableDestroyableDamageableLayer* UnitWaypointBehavior_getCurrentTargetLayerInterface(UnitWaypointBehavior* this) {
        return this->currentTargetLayerInterfaceP;
}


void UnitWaypointBehavior_setCurrentTargetDistance(UnitWaypointBehavior* this, int32_t currentTargetDistance) {
        this->currentTargetDistance = currentTargetDistance;
}


int32_t UnitWaypointBehavior_getCurrentTargetDistance(UnitWaypointBehavior* this) {
        return this->currentTargetDistance;
}


TimeDelayHelper* UnitWaypointBehavior_getCompleteTimeDelayHelper(UnitWaypointBehavior* this) {
        return this->completeTimeDelayHelper;
}


GeographicMapCellHistory* UnitWaypointBehavior_getCurrentGeographicMapCellHistory(UnitWaypointBehavior* this) {
        return this->currentGeographicMapCellHistoryP;
}


void UnitWaypointBehavior_setTrackingWaypoint(UnitWaypointBehavior* this, bool trackingWaypoint) {
        this->trackingWaypoint = trackingWaypoint;
}

