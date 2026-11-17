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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/ag/weapon/media/audio/ExplosionBasicSound.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelper.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/animation/vector/AdjustedCircleAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#include "org/allbinary/game/combat/damage/PtsDamageFloaters.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/health/HealthBar.h"
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/input/form/VisibleCellPositionsSingleton.h"
#include "org/allbinary/game/input/form/WaypointRTSFormInput.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSProperties.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/LayerCaptionResources.h"
#include "org/allbinary/game/layer/LinePathRelativeAnimation.h"
#include "org/allbinary/game/layer/PathAnimation.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/RTSLayerHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayerLogHelper.h"
#include "org/allbinary/game/layer/RTSLayerSelectedLogHelper.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/SensorActionFactory.h"
#include "org/allbinary/game/layer/SteeringVisitor.h"
#include "org/allbinary/game/layer/TiledLayerUtil.h"
#include "org/allbinary/game/layer/VehicleFrictionProperties.h"
#include "org/allbinary/game/layer/VehicleProperties.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/layer/building/BuildingLayer.h"
#include "org/allbinary/game/layer/building/event/BuildingEventHandler.h"
#include "org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h"
#include "org/allbinary/game/layer/capital/event/CapitalEvent.h"
#include "org/allbinary/game/layer/capital/event/CapitalEventHandlerFactory.h"
#include "org/allbinary/game/layer/geographic/map/LayerPartialCellPositionsUtil.h"
#include "org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialFireGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h"
#include "org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h"
#include "org/allbinary/game/layer/waypoint/MultipassNoCacheWaypoint.h"
#include "org/allbinary/game/layer/waypoint/NoCacheWaypoint.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"
#include "org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "org/allbinary/game/part/weapon/SalvoInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/FrameUtil.h"
#include "org/allbinary/math/LayerDistanceUtil.h"
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/media/audio/AttackSound.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/view/ViewPositionBase.h"

typedef struct UnitLayer UnitLayer;
struct UnitLayer {
    AdvancedRTSGameLayer base;
    BuildingEventListenerInterface BuildingEventListenerInterface_interface;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    BasicColorFactory* basicColorFactory;
    GroupCommonFactory* groupCommonFactory;
    LayerPartialCellPositionsUtil* layerPartialCellPositionsUtil;
    LayerDistanceUtil* layerDistanceUtil;
    AngleFactory* angleFactory;
    CellPositionFactory* cellPositionFactory;
    int16_t maxResourceLoad;
    VehicleProperties* vehicleProperties;
    BasicDecimal* accelerationBasicDecimal;
    BasicDecimal* decelerationBasicDecimal;
    TrackingEvent* trackingEvent;
    DamageFloaters* damageFloaters;
    Paintable* damageFloatersPaintableInterface;
    Paintable* healthBar;
    Sound* moveSoundInterface;
    RotationAnimation* initResourceAnimation;
    IndexedAnimation* resourceAnimation;
    PathAnimation* initPathAnimation;
    Animation* pathAnimation;
    CaptionAnimationHelperBase* captionAnimationHelper;
    RotationAnimation* decalAnimation;
    LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface;
    int32_t resourceLoad;
    int32_t weaponRange;
    RTSLayerLogHelper* rtsLogHelper;
    RotationAnimation* rotationAnimationInterfaceP;
    NamedAngle* movementAngle;
    GeographicMapCellPosition* steeringInsideGeographicMapCellPosition;
    BasicArrayList* sensorGeographicMapCellPositionList;
    CapitalEvent* CAPITAL_EVENT;
};

static BasicArrayList* UnitLayer_partialPositionList;
static constexpr int32_t UnitLayer_SENSOR_RANGE_MULTIPLIER = 6;
static const char* UnitLayer_MOVE = "Moving";

UnitLayer* UnitLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition);

void UnitLayer_init(UnitLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition);
void UnitLayer_setAllBinaryGameLayerManager(UnitLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void UnitLayer_updateWaypointBehavior(UnitLayer* this, BasicGeographicMap* geographicMapInterface);
void UnitLayer_construct(UnitLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void UnitLayer_updateSensorGeographicMapCellPositionList(UnitLayer* this);
BasicArrayList* UnitLayer_getSensorGeographicMapCellPositionList(UnitLayer* this);
void UnitLayer_select(UnitLayer* this);
void UnitLayer_deselect(UnitLayer* this);
void UnitLayer_setSelected(UnitLayer* this, bool selected);
void UnitLayer_setClosestGeographicMapCellHistory(UnitLayer* this, BasicArrayList* pathsList);
void UnitLayer_init(UnitLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);
void UnitLayer_onMovement(UnitLayer* this, TrackingEvent* trackingEvent);
void UnitLayer_onMovementFound(UnitLayer* this, TrackingEvent* trackingEvent);
void UnitLayer_initRangeHack(UnitLayer* this);
void UnitLayer_processBuiltTick(UnitLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void UnitLayer_teleportTo(UnitLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* UnitLayer_getCurrentGeographicMapCellPosition(UnitLayer* this);
void UnitLayer_fire(UnitLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void UnitLayer_left(UnitLayer* this);
void UnitLayer_right(UnitLayer* this);
void UnitLayer_down(UnitLayer* this);
void UnitLayer_up(UnitLayer* this);
void UnitLayer_initInputProcessors(UnitLayer* this);
void UnitLayer_processInput(UnitLayer* this, AllBinaryLayerManager* layerManager);
void UnitLayer_accelerate(UnitLayer* this, BasicDecimal* accelerate);
void UnitLayer_fireAll(UnitLayer* this, AllBinaryLayerManager* layerManager);
void UnitLayer_downgrade(UnitLayer* this);
void UnitLayer_upgrade(UnitLayer* this);
void UnitLayer_groundFriction(UnitLayer* this);
void UnitLayer_trackTo(UnitLayer* this, const char* reason);
void UnitLayer_trackToDXY(UnitLayer* this, int32_t dx, int32_t dy);
static bool UnitLayer_turnTo(UnitLayer* this, int32_t dx, int32_t dy, int32_t targetAngle);
static void UnitLayer_handleDeltalX(UnitLayer* this, int32_t dx, int32_t dy);
static void UnitLayer_handleDeltalY(UnitLayer* this, int32_t dx, int32_t dy);
static void UnitLayer_trackToDXYTargetAngle(UnitLayer* this, int32_t dx, int32_t dy, int32_t targetAngle);
void UnitLayer_fireOrMove(UnitLayer* this);
void UnitLayer_move(UnitLayer* this);
void UnitLayer_allStop(UnitLayer* this);
void UnitLayer_paint(UnitLayer* this, Graphics* graphics);
void UnitLayer_onBuildingEvent(UnitLayer* this, RTSLayerEvent* event);
VehicleProperties* UnitLayer_getVehicleProperties(UnitLayer* this);
void UnitLayer_damage(UnitLayer* this, int32_t damage, int32_t damageType);
int32_t UnitLayer_getDamage(UnitLayer* this, int32_t damageType);
void UnitLayer_setDestroyed(UnitLayer* this, bool destroyed);
int32_t UnitLayer_getLoad(UnitLayer* this);
void UnitLayer_clearResourceAnimation(UnitLayer* this);
void UnitLayer_setLoad(UnitLayer* this, int32_t resource);
void UnitLayer_addLoad(UnitLayer* this, int32_t resource);
void UnitLayer_handleCost(UnitLayer* this, PathFindingLayerInterface* ownerLayer);
SelectionHudPaintable* UnitLayer_createHudPaintable(UnitLayer* this);
SelectionHudPaintable* UnitLayer_getHudPaintable(UnitLayer* this);
int32_t UnitLayer_getType(UnitLayer* this);
int32_t UnitLayer_getStaticType(void);
UnitWaypointBehavior* UnitLayer_getUnitWaypointBehavior(UnitLayer* this);
TrackingEvent* UnitLayer_getTrackingEvent(UnitLayer* this);
CaptionAnimationHelperBase* UnitLayer_getCaptionAnimationHelper(UnitLayer* this);
bool UnitLayer_isSelfUpgradeable(UnitLayer* this);
int16_t UnitLayer_getMaxResourceLoad(UnitLayer* this);
BasicArrayList* UnitLayer_getPartialpositionlist(void);

// Static fields with runtime initializers: call this once at startup
void UnitLayer_staticInit(void) {
    UnitLayer_partialPositionList = BasicArrayListS_new(4);
}

static void UnitLayer_initFields(UnitLayer* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->groupCommonFactory = GroupCommonFactory_getInstance();
    this->layerPartialCellPositionsUtil = LayerPartialCellPositionsUtil_getInstance();
    this->layerDistanceUtil = LayerDistanceUtil_getInstance();
    this->angleFactory = AngleFactory_getInstance();
    this->cellPositionFactory = CellPositionFactory_getInstance();
    
    
    this->accelerationBasicDecimal = BasicDecimal_new(1600);
    this->decelerationBasicDecimal = BasicDecimal_new(-1000);
    
    this->damageFloaters = nullptr;
    this->damageFloatersPaintableInterface = nullptr;
    this->healthBar = nullptr;
    
    
    this->resourceAnimation = ((IndexedAnimation*) JAVA_CALL(NullIndexedAnimationFactory_getFactoryInstance(), getInstance, 0));
    
    this->pathAnimation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
    this->captionAnimationHelper = CaptionAnimationHelper_new(JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LayerCaptionResources_getInstance()->RESOURCE), getInstance, 0), -23, -25, 6, 0);
    
    
    this->resourceLoad = 0;
    this->weaponRange = 0;
    this->rtsLogHelper = RTSLayerLogHelper_getInstance();
    
    this->movementAngle = this->angleFactory->NOT_ANGLE;
    this->steeringInsideGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->sensorGeographicMapCellPositionList = BasicArrayListD_new();
    this->CAPITAL_EVENT = CapitalEvent_new(this);
}


void UnitLayer_init(UnitLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition) {
        AdvancedRTSGameLayer_init(&this->base, remoteInfo, parentLayer, advancedRTSProperties, groupInterface, rootName, name, healthInterface, WaypointRTSFormInput_new(groupInterface, true), animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition);
        UnitLayer_initFields(this);
        UnitLayer_setCollidableInferface(this, CollidableUnitBehavior_new(true));
        this->waypointLayerInterfaceFactoryInterface = waypointLayerInterfaceFactoryInterface;
        this->maxResourceLoad = SHORT_shortValue(maxResourceLoad);
        this->moveSoundInterface = moveSoundInterface;
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->DAMAGE_FLOATERS)) {
            this->damageFloaters = PtsDamageFloaters_new(this);
            this->damageFloatersPaintableInterface = this->damageFloaters;
        } else {
            this->damageFloatersPaintableInterface = NullPaintable_getInstance();
            this->damageFloaters = DamageFloaters_new();
        }
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->HEALTH_BARS)) {
            this->healthBar = HealthBar_new(this, UnitLayer_getHealthInterface(this), HealthBarTwodAnimation_new(((AllBinaryLayer*) this), BasicHudFactory_getInstance()->BOTTOMLEFT), -1);
        } else {
            this->healthBar = NullPaintable_getInstance();
        }
        this->decalAnimation = ((RotationAnimation*) AnimationInterfaceFactoryInterface_getInstance(decalAnimationInterfaceFactoryInterface, 0));
        this->initResourceAnimation = ((RotationAnimation*) AnimationInterfaceFactoryInterface_getInstance(resourceAnimationInterfaceFactoryInterface, 0));
        RotationAnimation_setFrameByDirection(this->initResourceAnimation, direction);
        RotationAnimation_setFrameByDirection(this->decalAnimation, direction);
        this->rotationAnimationInterfaceP = ((RotationAnimation*) this->indexedButShouldBeRotationAnimationInterface);
        RotationAnimation_setFrameByDirection(this->rotationAnimationInterfaceP, direction);
        UnitLayer_setMaxLevel(this, 12);
        this->vehicleProperties = vehicleProperties;
        this->trackingEvent = TrackingEvent_new(this);
        this->initPathAnimation = PathAnimation_new(this, LinePathRelativeAnimation_getInstance());
}

UnitLayer* UnitLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, VehicleProperties* vehicleProperties, Health* healthInterface, int32_t maxResourceLoad, Sound* moveSoundInterface, LayerInterfaceFactoryInterface* waypointLayerInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* decalAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* resourceAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, Direction* direction, int32_t x, int32_t y, int32_t z, ViewPositionBase* viewPosition) {
    UnitLayer* this = calloc(1, sizeof(UnitLayer));
    UnitLayer_init(this, remoteInfo, parentLayer, advancedRTSProperties, groupInterface, rootName, name, vehicleProperties, healthInterface, maxResourceLoad, moveSoundInterface, waypointLayerInterfaceFactoryInterface, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, decalAnimationInterfaceFactoryInterface, resourceAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, direction, x, y, z, viewPosition);
    return this;
}


// throws Exception
void UnitLayer_setAllBinaryGameLayerManager(UnitLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        AdvancedRTSGameLayer_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        PathAnimation_setAllBinaryGameLayerManager(this->initPathAnimation, allBinaryGameLayerManager);
}


// throws Exception
void UnitLayer_updateWaypointBehavior(UnitLayer* this, BasicGeographicMap* geographicMapInterface) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        ABHashtable_put(hashtable, this->groupCommonFactory->ID, UnitLayer_getGroupInterface(this));
        ABHashtable_put(hashtable, Layer_ID, this);
        ABHashtable_put(hashtable, AllBinaryGameLayerManager_ID, this->allBinaryGameLayerManagerP);
        UnitLayer_setWaypointBehavior(this, UnitWaypointBehavior2_new(this, ((AdvancedRTSGameLayer*) LayerInterfaceFactoryInterface_getNextInstance(this->waypointLayerInterfaceFactoryInterface, hashtable, this->x, this->y, this->z))));
        Features* features = Features_getInstance();
        WaypointBase* waypoint = (J2MEUtil_isHTML() ? MultipassNoCacheWaypoint_new(this, AttackSound_getInstance()) : NoCacheWaypoint_new(this, AttackSound_getInstance()));
        JAVA_CALL(UnitLayer_getWaypointBehavior(this), setWaypoint, waypoint);
        AdvancedRTSGameLayer_updateWaypointBehavior((&this->base), geographicMapInterface);
        UnitLayer_initRangeHack(this);
}


// throws Exception
void UnitLayer_construct(UnitLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        AdvancedRTSGameLayer_construct((&this->base), rtsPlayerLayerInterface);
        TrackingEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
        WaypointEventHandlerFactory_addListenerInterface(WaypointEventHandlerFactory_getInstance(UnitLayer_getGroupInterface(this)[0]), UnitLayer_getUnitWaypointBehavior(this));
        BuildingEventHandler_addListenerInterface(BuildingEventHandler_getInstance(), this);
        JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), setCurrentPathGeographicMapCellPosition, UnitLayer_getCurrentGeographicMapCellPosition(this));
        UnitLayer_updateSensorGeographicMapCellPositionList(this);
        JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), setLastPathGeographicMapCellPosition, JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), getCurrentPathGeographicMapCellPosition));
}


// throws Exception
void UnitLayer_updateSensorGeographicMapCellPositionList(UnitLayer* this) {
        if (VisibleCellPositionsSingleton_shouldProcess(VisibleCellPositionsSingleton_getInstance())) {
            GeographicMapCellPosition* currentGeographicMapCellPosition = UnitLayer_getCurrentGeographicMapCellPosition(this);
            BasicArrayList_clear(this->sensorGeographicMapCellPositionList);
            BasicArrayList_add(this->sensorGeographicMapCellPositionList, currentGeographicMapCellPosition);
            int32_t sensorRange = this->weaponRange * UnitLayer_SENSOR_RANGE_MULTIPLIER;
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
            int32_t totalCells = (sensorRange / AllBinaryTiledLayer_getCellHeight(tiledLayer)) / 2;
            BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
            int32_t column = GeographicMapCellPosition_getColumn(currentGeographicMapCellPosition);
            int32_t row = GeographicMapCellPosition_getRow(currentGeographicMapCellPosition);
            int32_t lastColumn = column + totalCells;
            int32_t lastRow = row + totalCells;
            if (lastColumn > AllBinaryTiledLayer_getColumns(tiledLayer)) {
                lastColumn = AllBinaryTiledLayer_getColumns(tiledLayer);
            }
            if (lastRow > AllBinaryTiledLayer_getRows(tiledLayer)) {
                lastRow = AllBinaryTiledLayer_getRows(tiledLayer);
            }
            int32_t firstColumn = column - totalCells;
            int32_t firstRow = row - totalCells;
            if (firstColumn < 0) {
                firstColumn = 0;
            }
            if (firstRow < 0) {
                firstRow = 0;
            }
            for (int32_t index = lastColumn - 1; index >= firstColumn; index--) {
                for (int32_t index2 = lastRow - 1; index2 >= firstRow; index2--) {
                    GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, index, index2);
                    if (!BasicArrayList_contains(this->sensorGeographicMapCellPositionList, geographicMapCellPosition)) {
                        BasicArrayList_add(this->sensorGeographicMapCellPositionList, geographicMapCellPosition);
                    }
                }
            }
        }
}


BasicArrayList* UnitLayer_getSensorGeographicMapCellPositionList(UnitLayer* this) {
        return this->sensorGeographicMapCellPositionList;
}


void UnitLayer_select(UnitLayer* this) {
        this->pathAnimation = this->initPathAnimation;
        AdvancedRTSGameLayer_select((&this->base));
}


void UnitLayer_deselect(UnitLayer* this) {
        this->pathAnimation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        AdvancedRTSGameLayer_deselect((&this->base));
}


void UnitLayer_setSelected(UnitLayer* this, bool selected) {
        AdvancedRTSGameLayer_setSelected((&this->base), selected);
        if (selected) {
            if (this->debug) {
                this->rtsLogHelper = RTSLayerSelectedLogHelper_getInstance();
            }
            this->rtsLayer2LogHelper = RTSLayer2SelectedLogHelper_getInstance();
        } else {
            if (this->debug) {
                this->rtsLogHelper = RTSLayerLogHelper_getInstance();
            }
            this->rtsLayer2LogHelper = RTSLayer2LogHelper_getInstance();
        }
}


// throws Exception
void UnitLayer_setClosestGeographicMapCellHistory(UnitLayer* this, BasicArrayList* pathsList) {
        RTSLayerLogHelper_setClosestGeographicMapCellHistory(this->rtsLogHelper, this, pathsList);
        int32_t closestIndex = -1;
        int32_t shortestDistance = Integer_MAX_VALUE;
        int32_t currentDistance = Integer_MAX_VALUE;
        for (int32_t index = BasicArrayList_size(pathsList) - 1; index >= 0; index--) {
            BasicArrayList* geographicMapCellPositionBasicArrayList = ((BasicArrayList*) BasicArrayList_get(pathsList, index));
            GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(geographicMapCellPositionBasicArrayList, BasicArrayList_size(geographicMapCellPositionBasicArrayList) - 1));
            currentDistance = LayerDistanceUtil_getDistanceAt(this->layerDistanceUtil, this, GeographicMapCellPosition_getMidPoint(geographicMapCellPosition));
            if (currentDistance < shortestDistance) {
                shortestDistance = currentDistance;
                closestIndex = index;
            }
        }
        if (closestIndex >= 0) {
            BasicArrayList* geographicMapCellPositionBasicArrayList = ((BasicArrayList*) BasicArrayList_get(pathsList, closestIndex));
            GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(geographicMapCellPositionBasicArrayList, 0));
            UnitLayer_teleportTo(this, geographicMapCellPosition);
        }
}


// throws Exception
void UnitLayer_init(UnitLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) {
        GeographicMapCellHistory_trackAll(geographicMapCellHistory, geographicMapCellPositionBasicArrayList);
}


void UnitLayer_onMovement(UnitLayer* this, TrackingEvent* trackingEvent) {
        JAVA_TRY {
            AdvancedRTSGameLayer* layerInterface = ((AdvancedRTSGameLayer*) TrackingEvent_getLayerInterface(trackingEvent));
            if (AdvancedRTSGameLayer_getGroupInterface(layerInterface)[0] != UnitLayer_getGroupInterface(this)[0]) {
                JAVA_CALL(JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), getPossibleTargetList), add, layerInterface);
                AdvancedRTSGameLayer_onMovementFound(layerInterface, UnitLayer_getTrackingEvent(this));
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "onMovement", e);
        } JAVA_END_TRY;
}


// throws Exception
void UnitLayer_onMovementFound(UnitLayer* this, TrackingEvent* trackingEvent) {
        AdvancedRTSGameLayer* layerInterface = ((AdvancedRTSGameLayer*) TrackingEvent_getLayerInterface(trackingEvent));
        if (AdvancedRTSGameLayer_getGroupInterface(layerInterface)[0] != UnitLayer_getGroupInterface(this)[0]) {
            JAVA_CALL(JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), getPossibleTargetList), add, layerInterface);
        }
}


void UnitLayer_initRangeHack(UnitLayer* this) {
        BasicWeaponPart* basicWeaponPart = ((BasicWeaponPart*) UnitLayer_getPartInterfaceArray(this)[0]);
        WeaponProperties* weaponProperties = BasicWeaponPart_getWeaponProperties(basicWeaponPart);
        this->weaponRange = WeaponProperties_getRange(weaponProperties);
        this->initRangeAnimation = AdjustedCircleAnimation_createW(this->weaponRange, this->weaponRange, UnitLayer_getWidth(this), this->basicColorFactory->GREEN);
        int32_t sensorRange = this->weaponRange * UnitLayer_SENSOR_RANGE_MULTIPLIER;
        this->initSensorRangeAnimation = AdjustedCircleAnimation_createW(sensorRange, sensorRange, UnitLayer_getWidth(this), this->basicColorFactory->RED);
        JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), initRange, this->weaponRange);
        this->fireTimeHelper->delay = (((int32_t) WeaponProperties_getReloadTime(weaponProperties)));
}


// throws Exception
void UnitLayer_processBuiltTick(UnitLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (!JAVA_CALL(UnitLayer_getHealthInterface(this), isAlive)) {
            if (UnitLayer_isReadyForExplosion(this)) {
                int32_t currentFrame = JAVA_CALL(this->destroyAnimationInterface, getFrame);
                int32_t size = JAVA_CALL(this->destroyAnimationInterface, getSize) - 1;
                if (currentFrame == size) {
                    if (!JAVA_CALL(UnitLayer_getHealthInterface(this), isAlive)) {
                        UnitLayer_setDestroyed(this, true);
                    }
                } else {
                    JAVA_CALL(this->destroyAnimationInterface, nextFrame);
                }
            } else {
                UnitLayer_setAnimationInterface(this, this->destroyAnimationInterface);
                SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), ExplosionBasicSound_getInstance());
                JAVA_CALL(this->shakeListener, onSmallShakeEvent);
                JAVA_CALL(this->vibration, vibrate, this->duration, 0, 0);
                UnitLayer_setReadyForExplosion(this, true);
            }
        } else {
            AdvancedRTSGameLayer_processBuiltTick((&this->base), allBinaryLayerManager);
        }
        CaptionAnimationHelperBase_tick(this->captionAnimationHelper);
        JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), processTick, allBinaryLayerManager);
}


void UnitLayer_teleportTo(UnitLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
        GPoint* point = GeographicMapCellPosition_getMidPoint(geographicMapCellPosition);
        UnitLayer_setPosition(this, GPoint_getX(point) - UnitLayer_getHalfWidth(this), GPoint_getY(point) - UnitLayer_getHalfHeight(this), this->z);
}


// throws Exception
GeographicMapCellPosition* UnitLayer_getCurrentGeographicMapCellPosition(UnitLayer* this) {
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, this->x + UnitLayer_getHalfWidth(this), this->y + UnitLayer_getHalfHeight(this));
        RaceTrackGeographicMap* raceTrackGeographicMap = ((RaceTrackGeographicMap*) geographicMapInterface);
        if (!RaceTrackGeographicMap_isValid(raceTrackGeographicMap, geographicMapCellPosition)) {
            java_throw(java_exception_new("Exception", java_concat("Position is not really on the map: ", java_string_of(geographicMapCellPosition))));
        }
        return geographicMapCellPosition;
}


// throws Exception
void UnitLayer_fire(UnitLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
        if (JAVA_CALL(this->fireTimeHelper, isTimeTNT)) {
            UnitLayer_fireAll(this, layerManager);
        } else {
            UnitLayer_reload(this);
        }
}


// throws Exception
void UnitLayer_left(UnitLayer* this) {
        RotationAnimation_previousRotation(this->initResourceAnimation);
        RotationAnimation_previousRotation(this->decalAnimation);
        RotationAnimation_previousRotation(this->rotationAnimationInterfaceP);
}


// throws Exception
void UnitLayer_right(UnitLayer* this) {
        RotationAnimation_nextRotation(this->initResourceAnimation);
        RotationAnimation_nextRotation(this->decalAnimation);
        RotationAnimation_nextRotation(this->rotationAnimationInterfaceP);
}


void UnitLayer_down(UnitLayer* this) {
        VelocityProperties* velocityProperties = JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties);
        if (!VelocityProperties_isOverXYMaxForwardVelocity(velocityProperties)) {
            UnitLayer_accelerate(this, this->decelerationBasicDecimal);
        }
}


void UnitLayer_up(UnitLayer* this) {
        VelocityProperties* velocityProperties = JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties);
        if (!VelocityProperties_isOverXYMaxForwardVelocity(velocityProperties)) {
            UnitLayer_accelerate(this, this->accelerationBasicDecimal);
        }
}


void UnitLayer_initInputProcessors(UnitLayer* this) {
        this->inputProcessorArray[Canvas_RIGHT] = SpecialRightGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_LEFT] = SpecialLeftGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_NUM0] = SpecialFireGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_POUND] = this->inputProcessorArray[Canvas_KEY_NUM0];
        this->inputProcessorArray[Canvas_DOWN] = SpecialDownGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_UP] = SpecialUpGameInputProcessor_new(this);
        AdvancedRTSGameLayer_initInputProcessors((&this->base));
}


// throws Exception
void UnitLayer_processInput(UnitLayer* this, AllBinaryLayerManager* layerManager) {
        BasicArrayList* list = UnitLayer_getGameKeyEventList(this);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(list, index);
            int32_t key = GameKeyEventUtil_getKey(anyType);
            JAVA_CALL(this->inputProcessorArray[key], processEvent, layerManager, GameKeyEvent_NONE);
        }
        BasicArrayList_clear(list);
        UnitLayer_groundFriction(this);
        UnitLayer_move(this);
}


void UnitLayer_accelerate(UnitLayer* this, BasicDecimal* accelerate) {
        JAVA_CALL(JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties), addVelocityi, BasicDecimal_getUnscaled(accelerate), ((int32_t) JAVA_CALL(RotationAnimation_getAngleInfoP(this->rotationAnimationInterfaceP), getAngle)), 90);
}


// throws Exception
void UnitLayer_fireAll(UnitLayer* this, AllBinaryLayerManager* layerManager) {
        AngleInfo* angleInfo = RotationAnimation_getAngleInfoP(this->rotationAnimationInterfaceP);
        int32_t angle = ((int32_t) (AngleInfo_getAngle(angleInfo) + this->slightAngle));
        ABHashtable_put(this->hashtable, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 1), SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), ((int32_t) JAVA_CALL(AngleFactory_getAt(AngleFactory_getInstance(), angle), getValue))));
        SalvoInterface* salvoInterface = ((SalvoInterface*) UnitLayer_getPartInterfaceArray(this)[0]);
        SalvoInterface_process(salvoInterface, layerManager, ((int16_t) angle), ((int16_t) 90));
}


void UnitLayer_downgrade(UnitLayer* this) {
        if (UnitLayer_getLevel(this) > 1) {
            AdvancedRTSGameLayer_downgrade((&this->base));
        }
}


void UnitLayer_upgrade(UnitLayer* this) {
        AdvancedRTSGameLayer_upgrade((&this->base));
        UnitLayer_initRangeHack(this);
}


void UnitLayer_groundFriction(UnitLayer* this) {
        VehicleFrictionProperties* vehicleFrictionProperties = JAVA_CALL(UnitLayer_getVehicleProperties(this), getVehicleFrictionProperties);
        JAVA_CALL(JAVA_CALL(UnitLayer_getVehicleProperties(this), getVehicleFrictionProperties), friction, JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties), VehicleFrictionProperties_getTireFrictionNominator(vehicleFrictionProperties));
}


// throws Exception
void UnitLayer_trackTo(UnitLayer* this, const char* reason) {
        WaypointBehaviorBase* waypointBehaviorBase = ((WaypointBehaviorBase*) this->waypointBehaviorBase);
        GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(waypointBehaviorBase);
        GPoint* point = GeographicMapCellPosition_getMidPoint(nextUnvisitedPathGeographicMapCellPosition);
        int32_t dx = (UnitLayer_getXP(this) + UnitLayer_getHalfWidth(this)) - GPoint_getX(point);
        int32_t dy = (UnitLayer_getYP(this) + UnitLayer_getHalfHeight(this)) - GPoint_getY(point);
        RTSLayerLogHelper_trackTo(this->rtsLogHelper, this, nextUnvisitedPathGeographicMapCellPosition, dx, dy, reason);
        UnitLayer_trackToDXY(this, dx, dy);
}


// throws Exception
void UnitLayer_trackToDXY(UnitLayer* this, int32_t dx, int32_t dy) {
        int32_t angleOfTarget = 0;
        UnitLayer_trackToDXYTargetAngle(this, dx, dy, angleOfTarget);
}


// throws Exception
static bool UnitLayer_turnTo(UnitLayer* this, int32_t dx, int32_t dy, int32_t targetAngle) {
        WaypointBehaviorBase* waypointBehaviorBase = ((WaypointBehaviorBase*) this->waypointBehaviorBase);
        GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(waypointBehaviorBase);
        bool evading = false;
        if (JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), getSensorAction) == SensorActionFactory_getInstance()->EVADE) {
            RTSLayerLogHelper_evade(this->rtsLogHelper, this);
            evading = true;
            targetAngle += 180;
        }
        AngleInfo* angleInfo = RotationAnimation_getAngleInfoP(this->rotationAnimationInterfaceP);
        int32_t angle = FrameUtil_adjustAngleToFrameAngle(FrameUtil_getInstance(), AngleInfo_getAngle(angleInfo) - 270);
        RTSLayerLogHelper_turnTo(this->rtsLogHelper, this, dx, dy, angleInfo, angle, this->movementAngle, evading, targetAngle);
        GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory_getInstance();
        if (dx == 0 && dy == 0) {
            RTSLayerLogHelper_doneMoving(this->rtsLogHelper, this);
            return true;
        } else if ((((int32_t) NamedAngle_getValue(this->movementAngle))) == angle) {
            if (dx > 0 && this->movementAngle == this->angleFactory->LEFT) {
                RTSLayerLogHelper_movingLeft(this->rtsLogHelper, this);
                return false;
            }
            if (dx < 0 && this->movementAngle == this->angleFactory->RIGHT) {
                RTSLayerLogHelper_movingRight(this->rtsLogHelper, this);
                return false;
            }
            if (dy > 0 && this->movementAngle == this->angleFactory->UP) {
                RTSLayerLogHelper_movingUp(this->rtsLogHelper, this);
                return false;
            }
            if (dy < 0 && this->movementAngle == this->angleFactory->DOWN) {
                RTSLayerLogHelper_movingDown(this->rtsLogHelper, this);
                return false;
            }
            RTSLayerLogHelper_currentMoveEnded(this->rtsLogHelper, this);
            if (this->movementAngle == this->angleFactory->LEFT || this->movementAngle == this->angleFactory->RIGHT) {
                UnitLayer_handleDeltalY(this, dx, dy);
            } else if (this->movementAngle == this->angleFactory->UP || this->movementAngle == this->angleFactory->DOWN) {
                UnitLayer_handleDeltalX(this, dx, dy);
            }
            return true;
        } else {
            if (nextUnvisitedPathGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
                if (this->steeringInsideGeographicMapCellPosition != nextUnvisitedPathGeographicMapCellPosition) {
                    if (((dx) < 0 ? -(dx) : (dx)) > ((dy) < 0 ? -(dy) : (dy)) && dy != 0) {
                        UnitLayer_handleDeltalY(this, dx, dy);
                    } else if (dx != 0) {
                        UnitLayer_handleDeltalX(this, dx, dy);
                    } else {
                        UnitLayer_handleDeltalY(this, dx, dy);
                    }
                }
                int32_t deltaAngle2 = NamedAngle_getValue(this->movementAngle) - angle;
                if (deltaAngle2 > 0) {
                    RTSLayerLogHelper_rotateRight(this->rtsLogHelper, this);
                    JAVA_CALL(UnitLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_RIGHT));
                } else {
                    RTSLayerLogHelper_rotateLeft(this->rtsLogHelper, this);
                    JAVA_CALL(UnitLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_LEFT));
                }
                return true;
            } else {
                RTSLayerLogHelper_noRotation(this->rtsLogHelper, this);
            }
            return false;
        }
}


static void UnitLayer_handleDeltalX(UnitLayer* this, int32_t dx, int32_t dy) {
        WaypointBehaviorBase* waypointBehaviorBase = ((WaypointBehaviorBase*) this->waypointBehaviorBase);
        GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(waypointBehaviorBase);
        if (dx > 0) {
            this->movementAngle = this->angleFactory->LEFT;
            this->steeringInsideGeographicMapCellPosition = nextUnvisitedPathGeographicMapCellPosition;
        } else {
            this->movementAngle = this->angleFactory->RIGHT;
            this->steeringInsideGeographicMapCellPosition = nextUnvisitedPathGeographicMapCellPosition;
        }
        RTSLayerLogHelper_handle(this->rtsLogHelper, this, this->movementAngle);
}


static void UnitLayer_handleDeltalY(UnitLayer* this, int32_t dx, int32_t dy) {
        WaypointBehaviorBase* waypointBehaviorBase = ((WaypointBehaviorBase*) this->waypointBehaviorBase);
        GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition = WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(waypointBehaviorBase);
        if (dy > 0) {
            this->movementAngle = this->angleFactory->UP;
            this->steeringInsideGeographicMapCellPosition = nextUnvisitedPathGeographicMapCellPosition;
        } else {
            this->movementAngle = this->angleFactory->DOWN;
            this->steeringInsideGeographicMapCellPosition = nextUnvisitedPathGeographicMapCellPosition;
        }
        RTSLayerLogHelper_handle(this->rtsLogHelper, this, this->movementAngle);
}


// throws Exception
static void UnitLayer_trackToDXYTargetAngle(UnitLayer* this, int32_t dx, int32_t dy, int32_t targetAngle) {
        BasicArrayList* list = JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), getSteeringVisitorList);
        if (BasicArrayList_size(list) > 0) {
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                SteeringVisitor* steeringVisitor = ((SteeringVisitor*) BasicArrayList_get(list, index));
                Any* anyType = SteeringVisitor_visit(steeringVisitor, this);
                if (anyType == nullptr) {
                    BasicArrayList_removeAt(list, index);
                }
            }
            UnitLayer_fireOrMove(this);
        } else if (!UnitLayer_turnTo(this, dx, dy, targetAngle)) {
            UnitLayer_fireOrMove(this);
        }
}


// throws Exception
void UnitLayer_fireOrMove(UnitLayer* this) {
        GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory_getInstance();
        if (JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), needToMove)) {
            JAVA_CALL(this->rtsLayer2LogHelper, steeringUp, this);
            if (this->showMoreCaptionStates && !CaptionAnimationHelperBase_isShowing(this->captionAnimationHelper)) {
                CaptionAnimationHelperBase_update(this->captionAnimationHelper, UnitLayer_MOVE, this->basicColorFactory->GREEN);
            }
            JAVA_CALL(UnitLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_UP));
        } else {
            CaptionAnimationHelperBase_update(this->captionAnimationHelper, CommonPhoneStrings_getInstance()->FIRE, this->basicColorFactory->RED);
            JAVA_CALL(this->rtsLayer2LogHelper, steeringFireOrStop, this);
            UnitLayer_allStop(this);
            JAVA_CALL(UnitLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_KEY_NUM0));
            TrackingEventHandler_fireEvent(TrackingEventHandler_getInstance(), UnitLayer_getTrackingEvent(this));
        }
}


void UnitLayer_move(UnitLayer* this) {
        JAVA_TRY {
            VelocityProperties* velocityProperties = JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties);
            int64_t velocityXScaled = ((int64_t) JAVA_CALL(VelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getScaled));
            int64_t velocityYScaled = ((int64_t) JAVA_CALL(VelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getScaled));
            JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), move);
            if (velocityXScaled != 0LL || velocityYScaled != 0LL) {
                JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), setMoving, true);
                GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
                BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
                LayerPartialCellPositionsUtil_getAllDXY(this->layerPartialCellPositionsUtil, geographicMapInterface, this, ((int32_t) velocityXScaled), ((int32_t) velocityYScaled), UnitLayer_getPartialpositionlist());
                GeographicMapCellPosition* cellPosition = ((GeographicMapCellPosition*) DropCellPositionHistory_getCellPositionWithDrop(DropCellPositionHistory_getInstance(), UnitLayer_getPartialpositionlist()));
                if (cellPosition == this->cellPositionFactory->NONE) {
                    AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
                    TiledLayerUtil* tiledLayerUtil = TiledLayerUtil_getInstance();
                    int32_t x = this->x + ((int32_t) velocityXScaled);
                    int32_t y = this->y + ((int32_t) velocityYScaled);
                    x = TiledLayerUtil_keepOnMapX(tiledLayerUtil, tiledLayer, x, UnitLayer_getWidth(this));
                    y = TiledLayerUtil_keepOnMapY(tiledLayerUtil, tiledLayer, y, UnitLayer_getHeight(this));
                    UnitLayer_setPosition(this, x, y, this->z);
                } else {
                    AllBinaryLayer* allbinaryLayer = DropCellPositionHistory_getLayerInterface(DropCellPositionHistory_getInstance(), cellPosition);
                    JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), setMovingFromStopped, false);
                    JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), addBuildingChase, allbinaryLayer, cellPosition);
                }
            }
            if (JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), isMoving)) {
                TrackingEventHandler_fireEvent(TrackingEventHandler_getInstance(), UnitLayer_getTrackingEvent(this));
            } else {
                JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), setMovingFromStopped, false);
            }
            if (JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), isMovingFromStopped) && UnitLayer_isVisible(this)) {
                SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), this->moveSoundInterface);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "move", e);
        } JAVA_END_TRY;
}


void UnitLayer_allStop(UnitLayer* this) {
        VelocityProperties* velocityProperties = JAVA_CALL(UnitLayer_getVehicleProperties(this), getVelocityProperties);
        JAVA_CALL(VelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
        JAVA_CALL(VelocityProperties_getVelocityYBasicDecimalP(velocityProperties), setint, 0);
}


void UnitLayer_paint(UnitLayer* this, Graphics* graphics) {
        if (UnitLayer_isVisible(this)) {
            AdvancedRTSGameLayer_paint((&this->base), graphics);
            ViewPositionBase* viewPosition = UnitLayer_getViewPosition(this);
            int32_t viewX = ViewPositionBase_getX(viewPosition);
            int32_t viewY = ViewPositionBase_getY(viewPosition);
            RotationAnimation_paintXY(this->decalAnimation, graphics, viewX, viewY);
            JAVA_CALL(this->rangeAnimation, paintXY, graphics, viewX, viewY);
            JAVA_CALL(this->sensorRangeAnimation, paintXY, graphics, viewX, viewY);
            Paintable_paint(this->damageFloatersPaintableInterface, graphics);
            Paintable_paint(this->healthBar, graphics);
            CaptionAnimationHelperBase_paintXY(this->captionAnimationHelper, graphics, viewX, viewY);
            Animation_paintXY(this->pathAnimation, graphics, viewX, viewY);
            IndexedAnimation_paintXY(this->resourceAnimation, graphics, viewX, viewY);
        }
}


// throws Exception
void UnitLayer_onBuildingEvent(UnitLayer* this, RTSLayerEvent* event) {
        BuildingLayer* buildingLayer = ((BuildingLayer*) RTSLayerEvent_getRtsLayer(event));
        JAVA_CALL(UnitLayer_getUnitWaypointBehavior(this), moveAwayFromBuilding, buildingLayer);
}


VehicleProperties* UnitLayer_getVehicleProperties(UnitLayer* this) {
        return this->vehicleProperties;
}


// throws Exception
void UnitLayer_damage(UnitLayer* this, int32_t damage, int32_t damageType) {
        AdvancedRTSGameLayer_damage((&this->base), damage, damageType);
        DamageFloaters_add(this->damageFloaters, damage);
        if (damage > 0) {
            JAVA_CALL(UnitLayer_getHealthInterface(this), damage, damage);
        }
}


// throws Exception
int32_t UnitLayer_getDamage(UnitLayer* this, int32_t damageType) {
        return 0;
}


// throws Exception
void UnitLayer_setDestroyed(UnitLayer* this, bool destroyed) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, "setDestroyed");
        AdvancedRTSGameLayer_setDestroyed((&this->base), destroyed);
        if (UnitLayer_isDestroyed(this)) {
            WaypointEventHandlerFactory_removeListener(WaypointEventHandlerFactory_getInstance(UnitLayer_getGroupInterface(this)[0]), UnitLayer_getUnitWaypointBehavior(this));
            TrackingEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
            BuildingEventHandler_removeListener(BuildingEventHandler_getInstance(), this);
            if (!JAVA_CALL(UnitLayer_getHealthInterface(this), isAlive)) {
                int32_t damage = JAVA_CALL(UnitLayer_getHealthInterface(this), getMaxHealth);
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


int32_t UnitLayer_getLoad(UnitLayer* this) {
        return this->resourceLoad;
}


// throws Exception
void UnitLayer_clearResourceAnimation(UnitLayer* this) {
        this->resourceAnimation = ((IndexedAnimation*) JAVA_CALL(NullIndexedAnimationFactory_getFactoryInstance(), getInstance, 0));
}


// throws Exception
void UnitLayer_setLoad(UnitLayer* this, int32_t resource) {
        if (resource > 0) {
            this->resourceAnimation = this->initResourceAnimation;
        } else {
            UnitLayer_clearResourceAnimation(this);
        }
        this->resourceLoad = resource;
}


void UnitLayer_addLoad(UnitLayer* this, int32_t resource) {
        this->resourceLoad += resource;
}


// throws Exception
void UnitLayer_handleCost(UnitLayer* this, PathFindingLayerInterface* ownerLayer) {
        if (UnitLayer_getLoad(this) > 0) {
            CapitalEvent_setValue(this->CAPITAL_EVENT, UnitLayer_getLoad(this));
            CapitalEventHandlerFactory_fireEvent(CapitalEventHandlerFactory_getInstance(PathFindingLayerInterface_getGroupInterface(ownerLayer)[0]), this->CAPITAL_EVENT);
            UnitLayer_setLoad(this, 0);
        }
}


SelectionHudPaintable* UnitLayer_createHudPaintable(UnitLayer* this) {
        RTSLayerHudPaintable* rtsLayerHudPaintable = RTSLayerHudPaintable_getInstance();
        RTSLayerHudPaintable_setBasicColorP(rtsLayerHudPaintable, JAVA_CALL(this->allBinaryGameLayerManagerP, getForegroundBasicColor));
        RTSLayerHudPaintable_setRtsLayer(rtsLayerHudPaintable, this);
        return rtsLayerHudPaintable;
}


SelectionHudPaintable* UnitLayer_getHudPaintable(UnitLayer* this) {
        RTSLayerHudPaintable* rtsLayerHudPaintable = RTSLayerHudPaintable_getInstance();
        return rtsLayerHudPaintable;
}


int32_t UnitLayer_getType(UnitLayer* this) {
        return 1;
}


int32_t UnitLayer_getStaticType(void) {
        return 1;
}


UnitWaypointBehavior* UnitLayer_getUnitWaypointBehavior(UnitLayer* this) {
        return ((UnitWaypointBehavior*) UnitLayer_getWaypointBehavior(this));
}


TrackingEvent* UnitLayer_getTrackingEvent(UnitLayer* this) {
        return this->trackingEvent;
}


CaptionAnimationHelperBase* UnitLayer_getCaptionAnimationHelper(UnitLayer* this) {
        return this->captionAnimationHelper;
}


bool UnitLayer_isSelfUpgradeable(UnitLayer* this) {
        return false;
}


int16_t UnitLayer_getMaxResourceLoad(UnitLayer* this) {
        return this->maxResourceLoad;
}


BasicArrayList* UnitLayer_getPartialpositionlist(void) {
        return UnitLayer_partialPositionList;
}

