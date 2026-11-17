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
// package org.allbinary.game.layer.building

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/game/identification/GroupFactory.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/input/form/VisibleCellPositionsSingleton.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/AdvancedRTSProperties.h"
#include "org/allbinary/game/layer/CollidableRTSBehavior.h"
#include "org/allbinary/game/layer/RTSLayerUtil.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/waypoint/Waypoint.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/animation/RotationAnimation.h"

typedef struct BuildingLayer BuildingLayer;
struct BuildingLayer {
    AdvancedRTSGameLayer base;
    RotationAnimationInterfaceCompositeInterface RotationAnimationInterfaceCompositeInterface_interface;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    int32_t buildingLevelCost;
    int32_t productivity;
    int32_t efficiency;
    int32_t efficiencyPerLevel;
    TrackingEvent* trackingEvent;
    DamageFloaters* damageFloaters;
    Paintable* damageFloatersPaintableInterface;
    Paintable* healthBar;
    ABHashtable* pathsHashtable;
    bool local;
    TimeDelayHelper* timeDelayHelper;
};


BuildingLayer* BuildingLayer_new(RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);
BuildingLayer* BuildingLayer_createSimulated(void);

void BuildingLayer_init(BuildingLayer* this, RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);
void BuildingLayer_initVisibility(BuildingLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void BuildingLayer_construct(BuildingLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void BuildingLayer_onMovement(BuildingLayer* this, TrackingEvent* trackingEvent);
void BuildingLayer_processBuiltTick(BuildingLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
static int32_t BuildingLayer_calculateEfficiency(BuildingLayer* this);
int32_t BuildingLayer_getCost(BuildingLayer* this);
int32_t BuildingLayer_getDowngradeCost(BuildingLayer* this);
int32_t BuildingLayer_getUpgradeCost(BuildingLayer* this);
void BuildingLayer_downgrade(BuildingLayer* this);
void BuildingLayer_upgrade(BuildingLayer* this);
static int32_t BuildingLayer_getBuildingLevelCost(BuildingLayer* this);
void BuildingLayer_setBuildingLevelCost(BuildingLayer* this, int32_t buildingLevelCost);
int32_t BuildingLayer_getProductivity(BuildingLayer* this);
void BuildingLayer_setProductivity(BuildingLayer* this, int32_t productivity);
int32_t BuildingLayer_getEfficiency(BuildingLayer* this);
void BuildingLayer_setEfficiency(BuildingLayer* this, int32_t efficiency);
static void BuildingLayer_generateMoveOutOfBuildAreaPaths(BuildingLayer* this);
BasicArrayList* BuildingLayer_getMoveOutOfBuildAreaPath(BuildingLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* BuildingLayer_getEndGeographicMapCellPositionList(BuildingLayer* this);
bool BuildingLayer_shouldHandleStartSameAsEnd(BuildingLayer* this);
void BuildingLayer_paint(BuildingLayer* this, Graphics* graphics);
void BuildingLayer_damage(BuildingLayer* this, int32_t damage, int32_t damageType);
int32_t BuildingLayer_getDamage(BuildingLayer* this, int32_t damageType);
void BuildingLayer_addVisibility(BuildingLayer* this);
void BuildingLayer_removeVisibility(BuildingLayer* this);
void BuildingLayer_setDestroyed(BuildingLayer* this, bool destroyed);
SelectionHudPaintable* BuildingLayer_createHudPaintable(BuildingLayer* this);
SelectionHudPaintable* BuildingLayer_getHudPaintable(BuildingLayer* this);
int32_t BuildingLayer_getType(BuildingLayer* this);
int32_t BuildingLayer_getStaticType(void);
RotationAnimation* BuildingLayer_getRotationAnimationInterface(BuildingLayer* this);
void BuildingLayer_setFrame(BuildingLayer* this, int32_t index);

static void BuildingLayer_initFields(BuildingLayer* this) {
    this->buildingLevelCost = 0;
    this->productivity = 0;
    
    
    
    
    
    
    
    this->local = false;
    this->timeDelayHelper = TimeDelayHelper_new(3000);
}


// throws Exception
BuildingLayer* BuildingLayer_createSimulated(void) {
        AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory_getFactoryInstance();
        AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory_getFactoryInstance();
        return BuildingLayer_new(RemoteInfo_REMOTE_INFO, SimulatedBuildingPropertiesFactory_getInstance(), AdvancedRTSProperties_createPropertiesSimulated(), GroupFactory_getInstance()->NULL_GROUP_ARRAY, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, Health_NULL_HEALTH, NullRTSFormInputFactory_getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory_getFactoryInstance(), RectangleFactory_SINGLETON, 0, 0);
}


void BuildingLayer_init(BuildingLayer* this, RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
        AdvancedRTSGameLayer_init(&this->base, remoteInfo, NullPathFindingLayer_NULL_PATH_FINDING_LAYER, advancedRTSProperties, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, TileLayerPositionIntoViewPosition_new());
        BuildingLayer_initFields(this);
        BuildingLayer_setCollidableInferface(this, CollidableRTSBehavior_new(true));
        JAVA_CALL(BuildingLayer_getWaypointBehavior(this), setWaypoint, Waypoint_new(this, SelectSound_getInstance()));
        this->damageFloaters = BuildingPropertiesFactory_getDamageFloaters(buildingPropertiesFactory, this);
        this->damageFloatersPaintableInterface = buildingPropertiesFactory->damageFloatersPaintableInterface;
        this->healthBar = BuildingPropertiesFactory_getHealthBar(buildingPropertiesFactory, this);
        this->pathsHashtable = BuildingPropertiesFactory_getHashtable(buildingPropertiesFactory);
        BuildingLayer_setMaxLevel(this, 30);
        BuildingLayer_setProductivity(this, 1);
        BuildingLayer_setEfficiency(this, BuildingLayer_calculateEfficiency(this));
        this->efficiencyPerLevel = BuildingPropertiesFactory_getEfficiencyPerLevel(buildingPropertiesFactory, this);
        this->efficiency = this->efficiencyPerLevel;
        BuildingLayer_generateMoveOutOfBuildAreaPaths(this);
        this->trackingEvent = BuildingPropertiesFactory_getTrackingEvent(buildingPropertiesFactory, this);
}

BuildingLayer* BuildingLayer_new(RemoteInfo* remoteInfo, BuildingPropertiesFactory* buildingPropertiesFactory, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
    BuildingLayer* this = calloc(1, sizeof(BuildingLayer));
    BuildingLayer_init(this, remoteInfo, buildingPropertiesFactory, advancedRTSProperties, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
    return this;
}


void BuildingLayer_initVisibility(BuildingLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = ((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface);
        if (AdvancedRTSPlayerLayerInterface_isLocalPlayer(advancedRTSPlayerLayerInterface)) {
            this->local = true;
            BuildingLayer_addVisibility(this);
        } else {
            this->local = false;
        }
        AdvancedRTSGameLayer_initVisibility((&this->base), rtsPlayerLayerInterface);
}


// throws Exception
void BuildingLayer_construct(BuildingLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        AdvancedRTSGameLayer_construct((&this->base), rtsPlayerLayerInterface);
        TrackingEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
}


void BuildingLayer_onMovement(BuildingLayer* this, TrackingEvent* trackingEvent) {
        JAVA_TRY {
            AdvancedRTSGameLayer* layerInterface = ((AdvancedRTSGameLayer*) TrackingEvent_getLayerInterface(trackingEvent));
            if (AdvancedRTSGameLayer_getGroupInterface(layerInterface)[0] != BuildingLayer_getGroupInterface(this)[0]) {
                AdvancedRTSGameLayer_onMovementFound(layerInterface, this->trackingEvent);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "onMovement", e);
        } JAVA_END_TRY;
}


// throws Exception
void BuildingLayer_processBuiltTick(BuildingLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (JAVA_CALL(BuildingLayer_getHealthInterface(this), isDamaged)) {
            BuildingLayer_setAnimationInterface(this, this->destroyAnimationInterface);
        }
        if (!JAVA_CALL(BuildingLayer_getHealthInterface(this), isAlive)) {
            if (BuildingLayer_isReadyForExplosion(this)) {
                int32_t currentFrame = JAVA_CALL(this->destroyAnimationInterface, getFrame);
                int32_t size = JAVA_CALL(this->destroyAnimationInterface, getSize) - 1;
                if (currentFrame == size && !TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
                    if (!JAVA_CALL(BuildingLayer_getHealthInterface(this), isAlive)) {
                        BuildingLayer_setDestroyed(this, true);
                    }
                } else {
                    JAVA_CALL(this->destroyAnimationInterface, nextFrame);
                }
            } else {
                BuildingLayer_setAnimationInterface(this, this->destroyAnimationInterface);
                SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), ExplosionBasicSound_getInstance());
                JAVA_CALL(this->shakeListener, onSmallShakeEvent);
                JAVA_CALL(this->vibration, vibrate, this->duration, 0, 0);
                TimeDelayHelper_setStartTimeTNT(this->timeDelayHelper);
                BuildingLayer_setReadyForExplosion(this, true);
            }
        } else {
            AdvancedRTSGameLayer_processBuiltTick((&this->base), allBinaryLayerManager);
        }
        JAVA_CALL(this->indexedButShouldBeRotationAnimationInterface, nextFrame);
}


static int32_t BuildingLayer_calculateEfficiency(BuildingLayer* this) {
        return this->efficiencyPerLevel;
}


int32_t BuildingLayer_getCost(BuildingLayer* this) {
        int64_t total = RTSLayerUtil_getCostExponential(RTSLayerUtil_getInstance(), ((int64_t) (BuildingLayer_getLevel(this) * BuildingLayer_getBuildingLevelCost(this))));
        return ((int32_t) total);
}


int32_t BuildingLayer_getDowngradeCost(BuildingLayer* this) {
        int64_t downgradeCost = RTSLayerUtil_getCostExponential(RTSLayerUtil_getInstance(), ((int64_t) ((BuildingLayer_getLevel(this) - 1) * BuildingLayer_getBuildingLevelCost(this))));
        JAVA_CALL(this->logUtil, putF, java_concat("Cost: ", java_string_of(downgradeCost)), this, "getDowngradeCost");
        return ((int32_t) downgradeCost) * 9 / 10;
}


int32_t BuildingLayer_getUpgradeCost(BuildingLayer* this) {
        int64_t upgradeCost = RTSLayerUtil_getCostExponential(RTSLayerUtil_getInstance(), ((int64_t) ((BuildingLayer_getLevel(this) + 1) * BuildingLayer_getBuildingLevelCost(this))));
        return ((int32_t) upgradeCost);
}


void BuildingLayer_downgrade(BuildingLayer* this) {
        AdvancedRTSGameLayer_downgrade((&this->base));
        BuildingLayer_setProductivity(this, BuildingLayer_getProductivity(this) - 1);
        BuildingLayer_setEfficiency(this, BuildingLayer_getEfficiency(this) - BuildingLayer_calculateEfficiency(this));
        JAVA_CALL(BuildingLayer_getHealthInterface(this), setMaxHealth, JAVA_CALL(BuildingLayer_getHealthInterface(this), getMaxHealth) - ((BuildingLayer_getLevel(this) + 1) * 100));
}


void BuildingLayer_upgrade(BuildingLayer* this) {
        AdvancedRTSGameLayer_upgrade((&this->base));
        BuildingLayer_setProductivity(this, BuildingLayer_getProductivity(this) + 1);
        BuildingLayer_setEfficiency(this, BuildingLayer_getEfficiency(this) + BuildingLayer_calculateEfficiency(this));
        JAVA_CALL(BuildingLayer_getHealthInterface(this), setMaxHealth, JAVA_CALL(BuildingLayer_getHealthInterface(this), getMaxHealth) + (BuildingLayer_getLevel(this) * 100));
}


static int32_t BuildingLayer_getBuildingLevelCost(BuildingLayer* this) {
        return this->buildingLevelCost;
}


void BuildingLayer_setBuildingLevelCost(BuildingLayer* this, int32_t buildingLevelCost) {
        this->buildingLevelCost = buildingLevelCost;
}


int32_t BuildingLayer_getProductivity(BuildingLayer* this) {
        return this->productivity;
}


void BuildingLayer_setProductivity(BuildingLayer* this, int32_t productivity) {
        this->productivity = productivity;
}


int32_t BuildingLayer_getEfficiency(BuildingLayer* this) {
        return this->efficiency;
}


void BuildingLayer_setEfficiency(BuildingLayer* this, int32_t efficiency) {
        this->efficiency = efficiency;
}


// throws Exception
static void BuildingLayer_generateMoveOutOfBuildAreaPaths(BuildingLayer* this) {
        BasicArrayList* occupyList = JAVA_CALL(this->geographicMapCellPositionAreaBase, getOccupyingGeographicMapCellPositionList);
        BasicArrayList* surroundList = JAVA_CALL(this->geographicMapCellPositionAreaBase, getSurroundingGeographicMapCellPositionList);
        Direction* NO_DIRECTION = DirectionFactory_getInstance()->NO_DIRECTION;
        GeographicMapDirectionUtil* geographicMapDirectionUtil = GeographicMapDirectionUtil_getInstance();
        BasicArrayList* pathsList = nullptr;
        GeographicMapCellPosition* occupyGeographicMapCellPosition = nullptr;
        GeographicMapCellPosition* surroundGeographicMapCellPosition = nullptr;
        BasicArrayList* list = nullptr;
        for (int32_t index2 = BasicArrayList_size(occupyList) - 1; index2 >= 0; index2--) {
            pathsList = BasicArrayListD_new();
            occupyGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(occupyList, index2));
            for (int32_t index = BasicArrayList_size(surroundList) - 1; index >= 0; index--) {
                surroundGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(surroundList, index));
                if (GeographicMapDirectionUtil_getEightDirectionFromCellPositionToAdjacentCellPosition(geographicMapDirectionUtil, surroundGeographicMapCellPosition, occupyGeographicMapCellPosition) != NO_DIRECTION) {
                    list = BasicArrayListS_new(1);
                    BasicArrayList_add(list, surroundGeographicMapCellPosition);
                    BasicArrayList_add(pathsList, list);
                }
            }
            ABHashtable_put(this->pathsHashtable, occupyGeographicMapCellPosition, pathsList);
        }
}


BasicArrayList* BuildingLayer_getMoveOutOfBuildAreaPath(BuildingLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
        BasicArrayList* pathsList = ((BasicArrayList*) ABHashtable_get(this->pathsHashtable, geographicMapCellPosition));
        return pathsList;
}


BasicArrayList* BuildingLayer_getEndGeographicMapCellPositionList(BuildingLayer* this) {
        return JAVA_CALL(this->geographicMapCellPositionAreaBase, getSurroundingGeographicMapCellPositionList);
}


bool BuildingLayer_shouldHandleStartSameAsEnd(BuildingLayer* this) {
        return false;
}


void BuildingLayer_paint(BuildingLayer* this, Graphics* graphics) {
        if (BuildingLayer_isVisible(this)) {
            AdvancedRTSGameLayer_paint((&this->base), graphics);
            Paintable_paint(this->damageFloatersPaintableInterface, graphics);
            Paintable_paint(this->healthBar, graphics);
        }
}


// throws Exception
void BuildingLayer_damage(BuildingLayer* this, int32_t damage, int32_t damageType) {
        AdvancedRTSGameLayer_damage((&this->base), damage, damageType);
        DamageFloaters_add(this->damageFloaters, damage);
        if (damage > 0) {
            JAVA_CALL(BuildingLayer_getHealthInterface(this), damage, damage);
        }
}


// throws Exception
int32_t BuildingLayer_getDamage(BuildingLayer* this, int32_t damageType) {
        return 0;
}


void BuildingLayer_addVisibility(BuildingLayer* this) {
        GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = this->geographicMapCellPositionAreaBase;
        BasicArrayList* occupyList = GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(geographicMapCellPositionArea);
        VisibleCellPositionsSingleton_addStationaryCellPositions(VisibleCellPositionsSingleton_getInstance(), occupyList);
        BasicArrayList* surroundList = GeographicMapCellPositionAreaBase_getSurroundingGeographicMapCellPositionList(geographicMapCellPositionArea);
        VisibleCellPositionsSingleton_addStationaryCellPositions(VisibleCellPositionsSingleton_getInstance(), surroundList);
}


void BuildingLayer_removeVisibility(BuildingLayer* this) {
        BasicArrayList* occupyList = JAVA_CALL(this->geographicMapCellPositionAreaBase, getOccupyingGeographicMapCellPositionList);
        VisibleCellPositionsSingleton_removeStationaryCellPositions(VisibleCellPositionsSingleton_getInstance(), occupyList);
        BasicArrayList* surroundList = JAVA_CALL(this->geographicMapCellPositionAreaBase, getSurroundingGeographicMapCellPositionList);
        VisibleCellPositionsSingleton_removeStationaryCellPositions(VisibleCellPositionsSingleton_getInstance(), surroundList);
}


// throws Exception
void BuildingLayer_setDestroyed(BuildingLayer* this, bool destroyed) {
        AdvancedRTSGameLayer_setDestroyed((&this->base), destroyed);
        if (BuildingLayer_isDestroyed(this)) {
            DropCellPositionHistory_removeAll(DropCellPositionHistory_getInstance(), this);
            TrackingEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
            if (this->local) {
                BuildingLayer_removeVisibility(this);
            }
            if (!JAVA_CALL(BuildingLayer_getHealthInterface(this), isAlive)) {
                int32_t damage = JAVA_CALL(BuildingLayer_getHealthInterface(this), getMaxHealth);
                if (damage > 10) {
                    SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), ExplosionBasicSound_getInstance());
                    if (damage < 100) {
                        JAVA_CALL(this->shakeListener, onSmallShakeEvent);
                        JAVA_CALL(this->vibration, vibrate, this->duration, 0, 0);
                    } else if (damage < 1000) {
                        JAVA_CALL(this->shakeListener, onMediumShakeEvent);
                        JAVA_CALL(this->vibration, vibrate, this->duration * 2, 0, 0);
                    } else if (damage < 3000) {
                        JAVA_CALL(this->shakeListener, onLargeShakeEvent);
                        JAVA_CALL(this->vibration, vibrate, this->duration * 4, 0, 0);
                    }
                }
            }
        }
}


SelectionHudPaintable* BuildingLayer_createHudPaintable(BuildingLayer* this) {
        BuildingInfoHudPaintable* buildingInfoHudPaintable = BuildingInfoHudPaintable_getInstance();
        BuildingInfoHudPaintable_setBasicColorP(buildingInfoHudPaintable, JAVA_CALL(this->allBinaryGameLayerManagerP, getForegroundBasicColor));
        BuildingInfoHudPaintable_setRtsLayer(buildingInfoHudPaintable, this);
        return buildingInfoHudPaintable;
}


SelectionHudPaintable* BuildingLayer_getHudPaintable(BuildingLayer* this) {
        BuildingInfoHudPaintable* buildingInfoHudPaintable = BuildingInfoHudPaintable_getInstance();
        return buildingInfoHudPaintable;
}


int32_t BuildingLayer_getType(BuildingLayer* this) {
        return BuildingLayer_getStaticType();
}


int32_t BuildingLayer_getStaticType(void) {
        return 2;
}


RotationAnimation* BuildingLayer_getRotationAnimationInterface(BuildingLayer* this) {
        return AdvancedRTSGameLayer_getRotationAnimationInterface((&this->base));
}


void BuildingLayer_setFrame(BuildingLayer* this, int32_t index) {
        AdvancedRTSGameLayer_setFrame((&this->base), index);
}

