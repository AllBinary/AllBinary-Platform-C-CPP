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
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/layer/SteeringVisitor.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/MultipassWaypointPathRunnable.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/WaypointPathRunnable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/math/LayerDistanceUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/thread/PathFindingThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"

typedef struct UnitWaypointBehavior2 UnitWaypointBehavior2;
struct UnitWaypointBehavior2 {
    UnitWaypointBehavior base;
    LogUtil* logUtil;
    UnitWaypointStrings* unitWaypointStrings;
    BasicColorFactory* basicColorFactory;
    LayerDistanceUtil* layerDistanceUtil;
    ThreadPool* pathFindingThreadPool;
    TimeDelayHelper* progressTimeDelayHelper;
    BasicArrayList* wanderPathsList;
    WaypointPathRunnableBase* waypointPathRunnable;
    int32_t sensorRange;
    int32_t closeRange;
    GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition;
    GeographicMapCellPosition* afterNextUnvisitedPathGeographicMapCellPosition;
    bool waitingOnTargetPath;
    bool waitingOnWaypointPath;
    CollidableDestroyableDamageableLayer* targetWithoutCachedPathLayerInterface;
    BuildingSteeringVisitor* buildingSteeringVisitor;
};

static BasicArrayList* UnitWaypointBehavior2_runningWaypointPathList;
static const char* UnitWaypointBehavior2_TARGET_DISTANCE = "Target Distance";
static const char* UnitWaypointBehavior2_TARGET_LAYER = "Target Layer";

UnitWaypointBehavior2* UnitWaypointBehavior2_new(UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint);

void UnitWaypointBehavior2_init(UnitWaypointBehavior2* this, UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint);
void UnitWaypointBehavior2_initRange(UnitWaypointBehavior2* this, int32_t weaponRange);
GeographicMapCellPosition* UnitWaypointBehavior2_getNextUnvisitedPathGeographicMapCellPosition(UnitWaypointBehavior2* this);
bool UnitWaypointBehavior2_isRunning(UnitWaypointBehavior2* this);
void UnitWaypointBehavior2_processTick(UnitWaypointBehavior2* this, AllBinaryLayerManager* allBinaryLayerManager);
static void UnitWaypointBehavior2_onEnemyMovement(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface);
static void UnitWaypointBehavior2_processPossibleTarget(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance);
static void UnitWaypointBehavior2_teleportIfNoProgress(UnitWaypointBehavior2* this);
static void UnitWaypointBehavior2_setTarget(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance);
static void UnitWaypointBehavior2_setTargetPath(UnitWaypointBehavior2* this);
void UnitWaypointBehavior2_setGeographicMapCellHistoryPath(UnitWaypointBehavior2* this, BasicArrayList* geographicMapCellPositionBasicArrayList);
static void UnitWaypointBehavior2_processWaypoint(UnitWaypointBehavior2* this);
static void UnitWaypointBehavior2_wander(UnitWaypointBehavior2* this);
static bool UnitWaypointBehavior2_visitIfAtMidPoint(UnitWaypointBehavior2* this, GeographicMapCellPosition* geographicMapCellPosition);
static void UnitWaypointBehavior2_processTargetList(UnitWaypointBehavior2* this);
static void UnitWaypointBehavior2_processTargeting(UnitWaypointBehavior2* this);
static void UnitWaypointBehavior2_updateCurrentPathGeographicMapCellPosition(UnitWaypointBehavior2* this);
static void UnitWaypointBehavior2_setWaypointPath(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* waypointLayer);
static void UnitWaypointBehavior2_runWaypointPathTask(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* waypointLayer);
static void UnitWaypointBehavior2_removeWaypoint(UnitWaypointBehavior2* this, RTSLayer* waypointLayer, const char* reason);
void UnitWaypointBehavior2_clearTarget(UnitWaypointBehavior2* this);
bool UnitWaypointBehavior2_isWaypointListEmptyOrOnlyTargets(UnitWaypointBehavior2* this);
static bool UnitWaypointBehavior2_isCloseRange(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t targetDistance);
bool UnitWaypointBehavior2_isInSensorRange(UnitWaypointBehavior2* this, CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance);
const char* UnitWaypointBehavior2_getCurrentTargetingStateString(UnitWaypointBehavior2* this);
void UnitWaypointBehavior2_addWaypointFromUser(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* advancedRTSGameLayer);
void UnitWaypointBehavior2_addBuildingChase(UnitWaypointBehavior2* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
static bool UnitWaypointBehavior2_buildingChase(UnitWaypointBehavior2* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

// Static fields with runtime initializers: call this once at startup
void UnitWaypointBehavior2_staticInit(void) {
    UnitWaypointBehavior2_runningWaypointPathList = BasicArrayListD_new();
}

static void UnitWaypointBehavior2_initFields(UnitWaypointBehavior2* this) {
    this->logUtil = LogUtil_getInstance();
    this->unitWaypointStrings = UnitWaypointStrings_getInstance();
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->layerDistanceUtil = LayerDistanceUtil_getInstance();
    this->pathFindingThreadPool = PathFindingThreadPool_getInstance();
    
    
    
    this->sensorRange = 0;
    this->closeRange = 0;
    this->nextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->afterNextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->waitingOnTargetPath = false;
    this->waitingOnWaypointPath = false;
    this->targetWithoutCachedPathLayerInterface = CollidableDestroyableDamageableLayer_getNullInstance();
    this->buildingSteeringVisitor = BuildingSteeringVisitor_new();
}


void UnitWaypointBehavior2_init(UnitWaypointBehavior2* this, UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint) {
        UnitWaypointBehavior_init(&this->base, ownerAdvancedRTSGameLayer, fakeWaypoint);
        UnitWaypointBehavior2_initFields(this);
        this->progressTimeDelayHelper = TimeDelayHelper_new(5000);
        this->wanderPathsList = BasicArrayListD_new();
        Features* features = Features_getInstance();
        this->waypointPathRunnable = (J2MEUtil_isHTML() ? MultipassWaypointPathRunnable_new() : WaypointPathRunnable_new());
}

UnitWaypointBehavior2* UnitWaypointBehavior2_new(UnitLayer* ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer* fakeWaypoint) {
    UnitWaypointBehavior2* this = calloc(1, sizeof(UnitWaypointBehavior2));
    UnitWaypointBehavior2_init(this, ownerAdvancedRTSGameLayer, fakeWaypoint);
    return this;
}


void UnitWaypointBehavior2_initRange(UnitWaypointBehavior2* this, int32_t weaponRange) {
        UnitWaypointBehavior_initRange((&this->base), weaponRange);
        this->closeRange = weaponRange;
        this->sensorRange = weaponRange * 4;
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, initRange, this->associatedAdvancedRTSGameLayer, this->closeRange, this->sensorRange);
}


GeographicMapCellPosition* UnitWaypointBehavior2_getNextUnvisitedPathGeographicMapCellPosition(UnitWaypointBehavior2* this) {
        return this->nextUnvisitedPathGeographicMapCellPosition;
}


bool UnitWaypointBehavior2_isRunning(UnitWaypointBehavior2* this) {
        if (WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void UnitWaypointBehavior2_processTick(UnitWaypointBehavior2* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            if (this->waypointPathsListP != UnitWaypointBehavior2_runningWaypointPathList) {
                WaypointPathRunnableBase_setRunning(this->waypointPathRunnable, false);
                if (this->waitingOnTargetPath) {
                    UnitWaypointBehavior2_setTargetPath(this);
                } else if (this->waitingOnWaypointPath) {
                    UnitWaypointBehavior2_setWaypointPath(this, ((AdvancedRTSGameLayer*) WaypointPathRunnableBase_getTargetLayer(this->waypointPathRunnable)));
                } else {
                    java_throw(java_exception_new("Exception", "Should not happen"));
                }
            } else {
                return;
            }
        }
        UnitWaypointBehavior2_processTargetList(this);
        if (!WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            UnitWaypointBehavior2_processWaypoint(this);
        } else {
            return;
        }
        if (!WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            UnitWaypointBehavior2_processTargeting(this);
        } else {
            return;
        }
        if (!WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            UnitWaypointBehavior2_teleportIfNoProgress(this);
        } else {
            return;
        }
}


// throws Exception
static void UnitWaypointBehavior2_onEnemyMovement(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface) {
        int32_t anotherTargetDistance = LayerDistanceUtil_getDistance(this->layerDistanceUtil, this->associatedAdvancedRTSGameLayer, layerInterface);
        if (layerInterface == this->currentTargetLayerInterfaceP) {
            UnitWaypointBehavior2_setCurrentTargetDistance(this, anotherTargetDistance);
        } else {
            UnitWaypointBehavior2_processPossibleTarget(this, layerInterface, anotherTargetDistance);
        }
}


// throws Exception
static void UnitWaypointBehavior2_processPossibleTarget(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance) {
        bool isShorterThanCurrentTargetDistance = UnitWaypointBehavior2_getCurrentTargetDistance(this) > anotherTargetDistance;
        bool isCurrentTargetDestroyed = this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance() && JAVA_CALL(this->currentTargetLayerInterfaceP, isDestroyed);
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processPossibleTarget, this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance, isShorterThanCurrentTargetDistance, isCurrentTargetDestroyed);
        if (UnitWaypointBehavior2_isWaypointListEmptyOrOnlyTargets(this) && UnitWaypointBehavior2_isInSensorRange(this, layerInterface, anotherTargetDistance) && (isShorterThanCurrentTargetDistance || isCurrentTargetDestroyed)) {
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processSetTarget, this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
            UnitWaypointBehavior2_setTarget(this, layerInterface, anotherTargetDistance);
        } else if (UnitWaypointBehavior2_isCloseRange(this, layerInterface, anotherTargetDistance) && (isShorterThanCurrentTargetDistance || isCurrentTargetDestroyed)) {
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processPossibleTargetCloser, this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
            UnitWaypointBehavior2_setTarget(this, layerInterface, anotherTargetDistance);
        }
}


// throws Exception
static void UnitWaypointBehavior2_teleportIfNoProgress(UnitWaypointBehavior2* this) {
        if (UnitWaypointBehavior2_isTrackingWaypoint(this) || JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getParentLayer), isDestroyed)) {
            if (TimeDelayHelper_isTimeTNT(this->progressTimeDelayHelper) && this->nextUnvisitedPathGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer, teleportTo, this->nextUnvisitedPathGeographicMapCellPosition);
            }
            if (JAVA_CALL(UnitWaypointBehavior2_getCompleteTimeDelayHelper(this), isTimeTNT)) {
                GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) JAVA_CALL(JAVA_CALL(this->currentGeographicMapCellHistoryP, getTracked), get, JAVA_CALL(this->currentGeographicMapCellHistoryP, getSize) - 1));
                JAVA_CALL(this->associatedAdvancedRTSGameLayer, teleportTo, geographicMapCellPosition);
            }
        }
}


// throws Exception
static void UnitWaypointBehavior2_setTarget(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t anotherTargetDistance) {
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, setTarget, this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
        JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->TARGET, BasicColorFactory_getInstance()->GREEN);
        JAVA_CALL(this->associatedAdvancedRTSGameLayer, setLoad, 0);
        UnitWaypointBehavior2_setCurrentTargetDistance(this, anotherTargetDistance);
        UnitWaypointBehavior2_setCurrentTargetLayerInterface(this, layerInterface);
        UnitWaypointBehavior2_setTrackingWaypoint(this, false);
        JAVA_CALL(this->targetList, clear);
        if (!UnitWaypointBehavior2_isCloseRange(this, layerInterface, anotherTargetDistance) && UnitWaypointBehavior2_canInsertWaypoint(this, 0, this->currentTargetLayerInterfaceP)) {
            GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCurrentGeographicMapCellPosition);
            PathFindingLayerInterface* pathFindingLayerInterface = (((PathFindingLayerInterface*) this->currentTargetLayerInterfaceP));
            WaypointBase* waypoint = JAVA_CALL(PathFindingLayerInterface_getWaypointBehavior(pathFindingLayerInterface), getWaypoint);
            BasicArrayList* list = WaypointBase_getPathsListFromCacheOnly(waypoint, geographicMapCellPosition);
            UnitWaypointBehavior2_setWaypointPathsList(this, list);
            if (this->waypointPathsListP == nullptr) {
                this->targetWithoutCachedPathLayerInterface = this->currentTargetLayerInterfaceP;
            } else if (JAVA_CALL(this->waypointPathsListP, size) != 0) {
                UnitWaypointBehavior2_setTargetPath(this);
            }
        }
}


// throws Exception
static void UnitWaypointBehavior2_setTargetPath(UnitWaypointBehavior2* this) {
        if (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance()) {
            if (JAVA_CALL(this->currentTargetLayerInterfaceP, isDestroyed)) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, setTargetPath, this->associatedAdvancedRTSGameLayer);
                JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->KILL, this->basicColorFactory->ORANGE);
                UnitWaypointBehavior2_clearTarget(this);
                return;
            }
            if (this->currentTargetLayerInterfaceP == WaypointPathRunnableBase_getTargetLayer(this->waypointPathRunnable)) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, setTargetPathIgnoreNewPath, this->associatedAdvancedRTSGameLayer, this);
                UnitWaypointBehavior2_insertWaypoint(this, 0, this->currentTargetLayerInterfaceP);
                UnitWaypointBehavior2_setRandomGeographicMapCellHistory(this, this->waypointPathsListP);
            }
        }
}


// throws Exception
void UnitWaypointBehavior2_setGeographicMapCellHistoryPath(UnitWaypointBehavior2* this, BasicArrayList* geographicMapCellPositionBasicArrayList) {
        UnitWaypointBehavior2_setCurrentPathGeographicMapCellPosition(this, SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION);
        this->nextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        UnitWaypointBehavior_setGeographicMapCellHistoryPath((&this->base), geographicMapCellPositionBasicArrayList);
}


// throws Exception
static void UnitWaypointBehavior2_processWaypoint(UnitWaypointBehavior2* this) {
        int32_t size = JAVA_CALL(this->targetList, size);
        if (size > 0) {
            AdvancedRTSGameLayer* targetLayer = ((AdvancedRTSGameLayer*) JAVA_CALL(this->targetList, get, 0));
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processWaypoint, this->associatedAdvancedRTSGameLayer, this, targetLayer, size);
            if (AdvancedRTSGameLayer_isDestroyed(targetLayer)) {
                JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->WAYPOINT_DESTROYED_SHORT, this->basicColorFactory->YELLOW);
                UnitWaypointBehavior2_removeWaypoint(this, targetLayer, this->unitWaypointStrings->WAYPOINT_DESTROYED);
            } else {
                GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCurrentGeographicMapCellPosition);
                if (UnitWaypointBehavior2_isTrackingWaypoint(this)) {
                    JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processWaypointTracked, this->associatedAdvancedRTSGameLayer, this);
                    if (UnitWaypointBehavior2_visitIfAtMidPoint(this, geographicMapCellPosition)) {
                        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processWaypointTrackedVisit, this->associatedAdvancedRTSGameLayer, geographicMapCellPosition);
                    }
                    if (JAVA_CALL(this->currentGeographicMapCellHistoryP, isAllVisited2) && this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance()) {
                        AdvancedRTSGameLayer* oldWaypointLayer = ((AdvancedRTSGameLayer*) this->currentTargetLayerInterfaceP);
                        JAVA_CALL(JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(oldWaypointLayer), getWaypoint), visit, this->associatedAdvancedRTSGameLayer);
                        JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->ALL_VISITED_SHORT, this->basicColorFactory->GREEN);
                        UnitWaypointBehavior2_removeWaypoint(this, ((AdvancedRTSGameLayer*) this->currentTargetLayerInterfaceP), this->unitWaypointStrings->ALL_VISITED);
                    }
                } else if (this->currentTargetLayerInterfaceP == nullptr || this->waypointOverridesAttacking) {
                    BasicArrayList* list = JAVA_CALL(JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(targetLayer), getWaypoint), getPathsListFromCacheOnly, geographicMapCellPosition);
                    UnitWaypointBehavior2_setWaypointPathsList(this, list);
                    if (this->waypointPathsListP == nullptr) {
                        this->waitingOnWaypointPath = true;
                        JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->THINKING, this->basicColorFactory->GREEN);
                        UnitWaypointBehavior2_runWaypointPathTask(this, targetLayer);
                        return;
                    }
                    UnitWaypointBehavior2_setWaypointPath(this, targetLayer);
                }
            }
        }
}


// throws Exception
static void UnitWaypointBehavior2_wander(UnitWaypointBehavior2* this) {
        if (JAVA_CALL(this->currentGeographicMapCellHistoryP, isAllVisited2)) {
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, wander, this->associatedAdvancedRTSGameLayer);
            JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->WANDERING, this->basicColorFactory->RED);
            BasicArrayList_clear(this->wanderPathsList);
            BasicArrayList_add(this->wanderPathsList, JAVA_CALL(this->associatedAdvancedRTSGameLayer, getSurroundingGeographicMapCellPositionList));
            UnitWaypointBehavior2_setRandomGeographicMapCellHistory(this, this->wanderPathsList);
        }
        UnitWaypointBehavior2_visitIfAtMidPoint(this, UnitWaypointBehavior2_getCurrentPathGeographicMapCellPosition(this));
        UnitWaypointBehavior2_updateCurrentPathGeographicMapCellPosition(this);
        JAVA_CALL(this->associatedAdvancedRTSGameLayer, trackTo, this->unitWaypointStrings->NEXT_PATH_NODE);
}


static bool UnitWaypointBehavior2_visitIfAtMidPoint(UnitWaypointBehavior2* this, GeographicMapCellPosition* geographicMapCellPosition) {
        UnitLayer* unitLayer = this->associatedAdvancedRTSGameLayer;
        if (geographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && this->nextUnvisitedPathGeographicMapCellPosition == geographicMapCellPosition) {
            GPoint* point = GeographicMapCellPosition_getMidPoint(geographicMapCellPosition);
            GPoint* afterNextPoint = GeographicMapCellPosition_getMidPoint(this->afterNextUnvisitedPathGeographicMapCellPosition);
            bool beyondMidPoint = true;
            if (GeographicMapCellPosition_getColumn(geographicMapCellPosition) == GeographicMapCellPosition_getColumn(this->afterNextUnvisitedPathGeographicMapCellPosition)) {
            } else if (GPoint_getX(point) < GPoint_getX(afterNextPoint)) {
                if (UnitLayer_getXP(unitLayer) + UnitLayer_getHalfWidth(unitLayer) < GPoint_getX(point)) {
                    beyondMidPoint = false;
                }
            } else {
                if (UnitLayer_getXP(unitLayer) + UnitLayer_getHalfWidth(unitLayer) > GPoint_getX(point)) {
                    beyondMidPoint = false;
                }
            }
            if (GeographicMapCellPosition_getRow(geographicMapCellPosition) == GeographicMapCellPosition_getRow(this->afterNextUnvisitedPathGeographicMapCellPosition)) {
            } else if (GPoint_getY(point) < GPoint_getY(afterNextPoint)) {
                if (UnitLayer_getYP(unitLayer) + UnitLayer_getHalfHeight(unitLayer) < GPoint_getY(point)) {
                    beyondMidPoint = false;
                }
            } else {
                if (UnitLayer_getYP(unitLayer) + UnitLayer_getHalfHeight(unitLayer) > GPoint_getY(point)) {
                    beyondMidPoint = false;
                }
            }
            if (beyondMidPoint) {
                return JAVA_CALL(this->currentGeographicMapCellHistoryP, visit, geographicMapCellPosition);
            }
        }
        return false;
}


// throws Exception
static void UnitWaypointBehavior2_processTargetList(UnitWaypointBehavior2* this) {
        this->targetWithoutCachedPathLayerInterface = CollidableDestroyableDamageableLayer_getNullInstance();
        for (int32_t index = JAVA_CALL(UnitWaypointBehavior2_getPossibleTargetList(this), size) - 1; index >= 0; index--) {
            AdvancedRTSGameLayer* layerInterface = ((AdvancedRTSGameLayer*) JAVA_CALL(UnitWaypointBehavior2_getPossibleTargetList(this), get, index));
            if (AdvancedRTSGameLayer_isDestroyed(layerInterface)) {
                JAVA_CALL(UnitWaypointBehavior2_getPossibleTargetList(this), remove, layerInterface);
            } else {
                UnitWaypointBehavior2_onEnemyMovement(this, layerInterface);
            }
        }
        if (this->targetWithoutCachedPathLayerInterface != CollidableDestroyableDamageableLayer_getNullInstance()) {
            this->waitingOnTargetPath = true;
            JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->THINKING_ABOUT_TARGET, this->basicColorFactory->GREEN);
            UnitWaypointBehavior2_runWaypointPathTask(this, ((AdvancedRTSGameLayer*) this->currentTargetLayerInterfaceP));
        }
        JAVA_CALL(UnitWaypointBehavior2_getPossibleTargetList(this), clear);
}


// throws Exception
static void UnitWaypointBehavior2_processTargeting(UnitWaypointBehavior2* this) {
        if (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance() && (UnitWaypointBehavior2_isInSensorRange(this, this->currentTargetLayerInterfaceP, UnitWaypointBehavior2_getCurrentTargetDistance(this)) || UnitWaypointBehavior2_isTrackingWaypoint(this))) {
            if (JAVA_CALL(this->currentTargetLayerInterfaceP, isDestroyed)) {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, targetDestroyed, this->associatedAdvancedRTSGameLayer);
                JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->KILL, this->basicColorFactory->ORANGE);
                UnitWaypointBehavior2_clearTarget(this);
                return;
            }
            int32_t dx = 0;
            int32_t dy = 0;
            if (UnitWaypointBehavior2_isTrackingWaypoint(this)) {
                UnitWaypointBehavior2_updateCurrentPathGeographicMapCellPosition(this);
                GPoint* point = GeographicMapCellPosition_getMidPoint(this->nextUnvisitedPathGeographicMapCellPosition);
                dx = JAVA_CALL(this->associatedAdvancedRTSGameLayer, getXP) + JAVA_CALL(this->associatedAdvancedRTSGameLayer, getHalfWidth) - GPoint_getX(point);
                dy = JAVA_CALL(this->associatedAdvancedRTSGameLayer, getYP) + JAVA_CALL(this->associatedAdvancedRTSGameLayer, getHalfHeight) - GPoint_getY(point);
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processTargeting, this->associatedAdvancedRTSGameLayer, dx, dy);
            } else {
                JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, processTargetingNonWayPoint, this->associatedAdvancedRTSGameLayer, dx, dy);
                dx = (JAVA_CALL(this->associatedAdvancedRTSGameLayer, getXP) + JAVA_CALL(this->associatedAdvancedRTSGameLayer, getHalfWidth)) - (JAVA_CALL(this->currentTargetLayerInterfaceP, getXP) + JAVA_CALL(this->currentTargetLayerInterfaceP, getHalfWidth));
                dy = (JAVA_CALL(this->associatedAdvancedRTSGameLayer, getYP) + JAVA_CALL(this->associatedAdvancedRTSGameLayer, getHalfHeight)) - (JAVA_CALL(this->currentTargetLayerInterfaceP, getYP) + JAVA_CALL(this->currentTargetLayerInterfaceP, getHalfHeight));
            }
            JAVA_CALL(this->associatedAdvancedRTSGameLayer, trackToDXY, dx, dy);
        } else {
            if (JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getParentLayer), isDestroyed)) {
                UnitWaypointBehavior2_wander(this);
            } else {
                if (this->associatedAdvancedRTSGameLayer->showMoreCaptionStates) {
                    JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->STOP, this->basicColorFactory->YELLOW);
                }
                JAVA_CALL(this->associatedAdvancedRTSGameLayer, allStop);
            }
        }
}


static void UnitWaypointBehavior2_updateCurrentPathGeographicMapCellPosition(UnitWaypointBehavior2* this) {
        UnitWaypointBehavior2_setLastPathGeographicMapCellPosition(this, UnitWaypointBehavior2_getCurrentPathGeographicMapCellPosition(this));
        UnitWaypointBehavior2_setCurrentPathGeographicMapCellPosition(this, this->nextUnvisitedPathGeographicMapCellPosition);
        this->nextUnvisitedPathGeographicMapCellPosition = JAVA_CALL(this->currentGeographicMapCellHistoryP, getFirstUnvisited);
        this->afterNextUnvisitedPathGeographicMapCellPosition = JAVA_CALL(this->currentGeographicMapCellHistoryP, getAfterIfNotLast, this->nextUnvisitedPathGeographicMapCellPosition);
        if (UnitWaypointBehavior2_getCurrentPathGeographicMapCellPosition(this) != this->nextUnvisitedPathGeographicMapCellPosition) {
            TimeDelayHelper_setStartTimeTNT(this->progressTimeDelayHelper);
        }
}


// throws Exception
static void UnitWaypointBehavior2_setWaypointPath(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* waypointLayer) {
        if (JAVA_CALL(this->waypointPathsListP, size) != 0) {
            UnitWaypointBehavior2_setCurrentTargetLayerInterface(this, waypointLayer);
            int32_t MAX = Integer_MAX_VALUE;
            UnitWaypointBehavior2_setCurrentTargetDistance(this, MAX);
            UnitWaypointBehavior2_setRandomGeographicMapCellHistory(this, this->waypointPathsListP);
        } else {
            JAVA_CALL(JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(waypointLayer), getWaypoint), visit, this->associatedAdvancedRTSGameLayer);
            JAVA_CALL(JAVA_CALL(this->associatedAdvancedRTSGameLayer, getCaptionAnimationHelper), update, this->unitWaypointStrings->ALREADY_THERE_SHORT, this->basicColorFactory->YELLOW);
            UnitWaypointBehavior2_removeWaypoint(this, waypointLayer, this->unitWaypointStrings->ALREADY_THERE);
        }
}


// throws Exception
static void UnitWaypointBehavior2_runWaypointPathTask(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* waypointLayer) {
        UnitWaypointBehavior2_setWaypointPathsList(this, UnitWaypointBehavior2_runningWaypointPathList);
        if (WaypointPathRunnableBase_isRunning(this->waypointPathRunnable)) {
            java_throw(java_exception_new("Exception", "Should never be running here"));
        }
        WaypointPathRunnableBase_setRunning(this->waypointPathRunnable, true);
        WaypointPathRunnableBase_setUnitLayer(this->waypointPathRunnable, this->associatedAdvancedRTSGameLayer);
        WaypointPathRunnableBase_setTargetLayer(this->waypointPathRunnable, waypointLayer);
        ThreadPool_runTask(this->pathFindingThreadPool, this->waypointPathRunnable);
}


// throws Exception
static void UnitWaypointBehavior2_removeWaypoint(UnitWaypointBehavior2* this, RTSLayer* waypointLayer, const char* reason) {
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, removeWaypoint, this->associatedAdvancedRTSGameLayer, this, waypointLayer, reason);
        JAVA_CALL(this->targetList, remove, waypointLayer);
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, removeWaypointList, this->associatedAdvancedRTSGameLayer, this, this->targetList);
        if (this->currentTargetLayerInterfaceP == waypointLayer) {
            JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, removeWaypointClear, this->associatedAdvancedRTSGameLayer);
            UnitWaypointBehavior2_clearTarget(this);
        }
}


// throws Exception
void UnitWaypointBehavior2_clearTarget(UnitWaypointBehavior2* this) {
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, clearTarget, this->associatedAdvancedRTSGameLayer);
        UnitWaypointBehavior2_setCurrentTargetLayerInterface(this, CollidableDestroyableDamageableLayer_getNullInstance());
        UnitWaypointBehavior2_setTrackingWaypoint(this, false);
        int32_t MAX = Integer_MAX_VALUE;
        UnitWaypointBehavior2_setCurrentTargetDistance(this, MAX);
        TrackingEventHandler_fireEvent(TrackingEventHandler_getInstance(), JAVA_CALL(this->associatedAdvancedRTSGameLayer, getTrackingEvent));
}


bool UnitWaypointBehavior2_isWaypointListEmptyOrOnlyTargets(UnitWaypointBehavior2* this) {
        BasicArrayList* list = this->targetList;
        if (BasicArrayList_size(list) == 0) {
            return true;
        }
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            AdvancedRTSGameLayer* layerInterface = ((AdvancedRTSGameLayer*) BasicArrayList_get(list, index));
            if (AdvancedRTSGameLayer_isWaypointListEmptyOrOnlyTargets(layerInterface)) {
                return false;
            }
        }
        return true;
}


static bool UnitWaypointBehavior2_isCloseRange(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* layerInterface, int32_t targetDistance) {
        return targetDistance < this->closeRange + AdvancedRTSGameLayer_getHalfHeight(layerInterface);
}


bool UnitWaypointBehavior2_isInSensorRange(UnitWaypointBehavior2* this, CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance) {
        return targetDistance < this->sensorRange + AdvancedRTSGameLayer_getHalfHeight(layerInterface);
}


const char* UnitWaypointBehavior2_getCurrentTargetingStateString(UnitWaypointBehavior2* this) {
        StringMaker* stringBuffer = StringMaker_new();
        if (this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer_getNullInstance()) {
            StringMaker_append(stringBuffer, UnitWaypointBehavior2_TARGET_LAYER);
            StringMaker_append(stringBuffer, this->commonSeps->SPACE);
            StringMaker_append(stringBuffer, JAVA_CALL(this->currentTargetLayerInterfaceP, getName));
            StringMaker_append(stringBuffer, " with ");
            StringMaker_append(stringBuffer, UnitWaypointBehavior2_TARGET_DISTANCE);
            StringMaker_append(stringBuffer, this->commonSeps->SPACE);
            StringMaker_appendint(stringBuffer, ((int32_t) UnitWaypointBehavior2_getCurrentTargetDistance(this)));
        }
        return StringMaker_toString(stringBuffer);
}


// throws Exception
void UnitWaypointBehavior2_addWaypointFromUser(UnitWaypointBehavior2* this, AdvancedRTSGameLayer* advancedRTSGameLayer) {
        if (AdvancedRTSGameLayer_isDestroyed(advancedRTSGameLayer)) {
            java_throw(java_exception_new("Exception", java_concat("Trying to add a dead: ", java_string_of(advancedRTSGameLayer))));
        }
        JAVA_CALL(this->associatedAdvancedRTSGameLayer->waypoint2LogHelperP, addWaypointFromUser, this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
        JAVA_CALL(this->targetList, clear);
        JAVA_CALL(this->targetList, add, advancedRTSGameLayer);
        UnitWaypointBehavior2_clearTarget(this);
}


// throws Exception
void UnitWaypointBehavior2_addBuildingChase(UnitWaypointBehavior2* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
        if (!JAVA_CALL(BuildingSteeringVisitor_getList(this->buildingSteeringVisitor), contains, allbinaryLayer)) {
            JAVA_CALL(BuildingSteeringVisitor_getList(this->buildingSteeringVisitor), add, allbinaryLayer);
            JAVA_CALL(BuildingSteeringVisitor_getPositionList(this->buildingSteeringVisitor), add, cellPosition);
        }
        if (!JAVA_CALL(UnitWaypointBehavior2_getSteeringVisitorList(this), contains, this->buildingSteeringVisitor)) {
            JAVA_CALL(UnitWaypointBehavior2_getSteeringVisitorList(this), add, this->buildingSteeringVisitor);
        }
}


// throws Exception
static bool UnitWaypointBehavior2_buildingChase(UnitWaypointBehavior2* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
        return JAVA_CALL(this->associatedAdvancedRTSGameLayer, buildingChase, allbinaryLayer, cellPosition);
}

typedef struct BuildingSteeringVisitor BuildingSteeringVisitor;
struct BuildingSteeringVisitor {
    SteeringVisitor base;
    BasicArrayList* positionList;
};


BuildingSteeringVisitor* BuildingSteeringVisitor_new(void);
    Any* UnitWaypointBehavior2_visit(UnitWaypointBehavior2* this, Any* anyType);
    BasicArrayList* UnitWaypointBehavior2_getPositionList(UnitWaypointBehavior2* this);

static void BuildingSteeringVisitor_initFields(BuildingSteeringVisitor* this) {
        this->positionList = BasicArrayListD_new();
}

void BuildingSteeringVisitor_init(BuildingSteeringVisitor* this) {
    SteeringVisitor_init(&this->base);
    BuildingSteeringVisitor_initFields(this);
}

BuildingSteeringVisitor* BuildingSteeringVisitor_new(void) {
    BuildingSteeringVisitor* this = calloc(1, sizeof(BuildingSteeringVisitor));
    BuildingSteeringVisitor_init(this);
    return this;
}
    

    Any* UnitWaypointBehavior2_visit(UnitWaypointBehavior2* this, Any* anyType) {
            LogUtil* logUtil = LogUtil_getInstance();
            JAVA_TRY {
                if (JAVA_CALL(UnitWaypointBehavior2_getList(this), size) > 0) {
                    AllBinaryLayer* allbinaryLayer = ((AllBinaryLayer*) JAVA_CALL(UnitWaypointBehavior2_getList(this), get, 0));
                    GeographicMapCellPosition* cellPosition = ((GeographicMapCellPosition*) JAVA_CALL(UnitWaypointBehavior2_getPositionList(this), get, 0));
                    bool clear = UnitWaypointBehavior2_buildingChase(this, allbinaryLayer, cellPosition);
                    if (clear) {
                        JAVA_CALL(UnitWaypointBehavior2_getList(this), clear);
                        BasicArrayList_clear(this->positionList);
                        return NullUtil_getInstance()->NULL_OBJECT;
                    }
                    return BooleanFactory_getInstance()->FALSE;
                }
                return NullUtil_getInstance()->NULL_OBJECT;
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, "visit", e);
                return NullUtil_getInstance()->NULL_OBJECT;
            } JAVA_END_TRY;
    }
    

    BasicArrayList* UnitWaypointBehavior2_getPositionList(UnitWaypointBehavior2* this) {
            return this->positionList;
    }

