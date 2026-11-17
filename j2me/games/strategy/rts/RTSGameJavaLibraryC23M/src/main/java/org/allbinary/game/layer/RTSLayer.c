/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupFactory.h"
#include "org/allbinary/game/input/GameInputInterface.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/view/event/ViewPositionEventHandler.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/LayerDistanceUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/RTSInterface.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

typedef struct RTSLayer RTSLayer;
struct RTSLayer {
    MultiPlayerGameLayer base;
    TickableInterface TickableInterface_interface;
    GameInputInterface GameInputInterface_interface;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    RTSInterface RTSInterface_interface;
    PathFindingLayerInterface PathFindingLayerInterface_interface;
    bool debug;
    bool showMoreCaptionStates;
    GameInputProcessor** inputProcessorArray;
    RTSLayer2LogHelper* rtsLayer2LogHelper;
    WaypointLogHelper* waypointLogHelperP;
    Waypoint2LogHelper* waypoint2LogHelperP;
    WaypointRunnableLogHelper* waypointRunnableLogHelperP;
    RTSFormInput* rtsFormInput;
    IndexedAnimation* verticleBuildAnimationInterface;
    Animation* rangeAnimation;
    Animation* initRangeAnimation;
    Animation* sensorRangeAnimation;
    Animation* initSensorRangeAnimation;
    Animation* baseAnimationInterface;
    TimeDelayHelper* buildFrameTimeHelper;
    Animation* buildAnimationInterface;
    Animation* animationInterface;
    IndexedAnimation* initAnimationInterface;
    IndexedAnimation* indexedButShouldBeRotationAnimationInterface;
    IndexedAnimation* emptyAnimationInterface;
    IndexedAnimation* destroyAnimationInterface;
    TimeDelayHelper* fireTimeHelper;
    const char* rootName;
    ABHashtable* hashtable;
    int32_t BUILD_VALUE;
    GeographicMapCellPositionAreaBase* geographicMapCellPositionAreaBase;
    Health* healthInterface;
    int32_t level;
    int32_t maxLevel;
    int32_t hackVerticleBuild;
    int32_t slightAngle;
    int32_t percentCompleteP;
    bool destroyed;
    bool selected;
    RTSLayerUtil* rtsLayerUtil;
    LayerDistanceUtil* layerDistanceUtil;
};

static constexpr int32_t RTSLayer_id = 0;
constexpr int32_t RTSLayer_MAIN_INDEX = 0;
constexpr int32_t RTSLayer_SECONDARY_INDEX = 1;

RTSLayer* RTSLayer_new(RemoteInfo* remoteInfo, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);
RTSLayer* RTSLayer_createSimulatedInstance(RemoteInfo* remoteInfo);

void RTSLayer_init(RTSLayer* this, RemoteInfo* remoteInfo, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);
void RTSLayer_setAllBinaryGameLayerManager(RTSLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void RTSLayer_updateWaypointBehavior(RTSLayer* this, BasicGeographicMap* geographicMapInterface);
void RTSLayer_construct(RTSLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void RTSLayer_select(RTSLayer* this);
void RTSLayer_deselect(RTSLayer* this);
void RTSLayer_setSelected(RTSLayer* this, bool selected);
bool RTSLayer_isSelected(RTSLayer* this);
int32_t RTSLayer_getPercentComplete(RTSLayer* this);
ScrollSelectionForm* RTSLayer_getScrollSelectionForm(RTSLayer* this);
void RTSLayer_initInputProcessors(RTSLayer* this);
void RTSLayer_processBuiltTick(RTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void RTSLayer_processTick(RTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void RTSLayer_processInput(RTSLayer* this, AllBinaryLayerManager* layerManager);
void RTSLayer_reload(RTSLayer* this);
void RTSLayer_onMovement(RTSLayer* this, TrackingEvent* trackingEvent);
void RTSLayer_onMovementFound(RTSLayer* this, TrackingEvent* trackingEvent);
void RTSLayer_paint(RTSLayer* this, Graphics* graphics);
void RTSLayer_damage(RTSLayer* this, int32_t damage, int32_t damageType);
int32_t RTSLayer_getSourceId(RTSLayer* this);
void RTSLayer_downgrade(RTSLayer* this);
void RTSLayer_upgrade(RTSLayer* this);
bool RTSLayer_isCompleted(RTSLayer* this);
static void RTSLayer_build(RTSLayer* this);
bool RTSLayer_isSelfUpgradeable(RTSLayer* this);
int32_t RTSLayer_getCost(RTSLayer* this);
int32_t RTSLayer_getDowngradeCost(RTSLayer* this);
int32_t RTSLayer_getUpgradeCost(RTSLayer* this);
bool RTSLayer_isUpgradeable(RTSLayer* this);
bool RTSLayer_isDowngradeable(RTSLayer* this);
int32_t RTSLayer_getLevel(RTSLayer* this);
void RTSLayer_setLevel(RTSLayer* this, int32_t level);
Animation* RTSLayer_getVerticleBuildAnimationInterface(RTSLayer* this);
Animation* RTSLayer_getAnimationInterface(RTSLayer* this);
void RTSLayer_setAnimationInterface(RTSLayer* this, Animation* animationInterface);
void RTSLayer_setTarget(RTSLayer* this, PathFindingLayerInterface* targetGameLayer);
SelectionHudPaintable* RTSLayer_createHudPaintable(RTSLayer* this);
SelectionHudPaintable* RTSLayer_getHudPaintable(RTSLayer* this);
int32_t RTSLayer_getMaxLevel(RTSLayer* this);
void RTSLayer_setMaxLevel(RTSLayer* this, int32_t maxLevel);
Health* RTSLayer_getHealthInterface(RTSLayer* this);
void RTSLayer_setHealthInterface(RTSLayer* this, Health* healthInterface);
RTSFormInput* RTSLayer_getRTSFormInput(RTSLayer* this);
bool RTSLayer_isDestroyed(RTSLayer* this);
void RTSLayer_setDestroyed(RTSLayer* this, bool destroyed);
BasicArrayList* RTSLayer_getEndGeographicMapCellPositionList(RTSLayer* this);
GeographicMapCellPositionAreaBase* RTSLayer_getGeographicMapCellPositionArea(RTSLayer* this);
bool RTSLayer_shouldHandleStartSameAsEnd(RTSLayer* this);
void RTSLayer_handleCost(RTSLayer* this, PathFindingLayerInterface* ownerLayer);
WaypointBehaviorBase* RTSLayer_getWaypointBehavior(RTSLayer* this);
PathFindingLayerInterface* RTSLayer_getParentLayer(RTSLayer* this);
RTSLayer2LogHelper* RTSLayer_getRTSLayer2LogHelper(RTSLayer* this);
WaypointLogHelper* RTSLayer_getWaypointLogHelper(RTSLayer* this);
Waypoint2LogHelper* RTSLayer_getWaypoint2LogHelper(RTSLayer* this);
WaypointRunnableLogHelper* RTSLayer_getWaypointRunnableLogHelper(RTSLayer* this);
bool RTSLayer_shouldAddWaypointFromBuilding(RTSLayer* this);
CaptionAnimationHelperBase* RTSLayer_getCaptionAnimationHelper(RTSLayer* this);
bool RTSLayer_isShowMoreCaptionStates(RTSLayer* this);
void RTSLayer_init(RTSLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);
GeographicMapCellPosition* RTSLayer_getCurrentGeographicMapCellPosition(RTSLayer* this);
GeographicMapCellPosition* RTSLayer_getTopLeftGeographicMapCellPosition(RTSLayer* this);
BasicArrayList* RTSLayer_getMoveOutOfBuildAreaPath(RTSLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
void RTSLayer_setClosestGeographicMapCellHistory(RTSLayer* this, BasicArrayList* pathsList);
void RTSLayer_teleportTo(RTSLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
void RTSLayer_setLoad(RTSLayer* this, int32_t resource);
BasicArrayList* RTSLayer_getSurroundingGeographicMapCellPositionList(RTSLayer* this);
void RTSLayer_trackTo(RTSLayer* this, const char* reason);
void RTSLayer_trackToDXY(RTSLayer* this, int32_t dx, int32_t dy);
bool RTSLayer_isWaypointListEmptyOrOnlyTargets(RTSLayer* this);
TrackingEvent* RTSLayer_getTrackingEvent(RTSLayer* this);
bool RTSLayer_buildingChase(RTSLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
void RTSLayer_allStop(RTSLayer* this);
int32_t RTSLayer_getMinStaticType(void);
int32_t RTSLayer_getMaxStaticType(void);
bool RTSLayer_isRTSLayer(AllBinaryLayer* layerInterface);
bool RTSLayer_implmentsTickableInterface(RTSLayer* this);
bool RTSLayer_implmentsGameInputInterface(RTSLayer* this);
const char* RTSLayer_getRootName(RTSLayer* this);
RotationAnimation* RTSLayer_getRotationAnimationInterface(RTSLayer* this);
void RTSLayer_setFrame(RTSLayer* this, int32_t index);
void RTSLayer_setRotationAnimationInterface(RTSLayer* this, RotationAnimation* rotationAnimationInterface);

static void RTSLayer_initFields(RTSLayer* this) {
    this->debug = true;
    this->showMoreCaptionStates = this->debug;
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    this->rtsLayer2LogHelper = RTSLayer2LogHelper_getInstance();
    this->waypointLogHelperP = WaypointLogHelper_getInstance();
    this->waypoint2LogHelperP = Waypoint2LogHelper_getInstance();
    this->waypointRunnableLogHelperP = WaypointRunnableLogHelper_getInstance();
    
    
    
    
    
    
    
    this->buildFrameTimeHelper = TimeDelayHelper_new(50);
    
    
    
    
    
    
    this->fireTimeHelper = TimeDelayHelper_new(700);
    
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->BUILD_VALUE = 63;
    
    this->healthInterface = Health_NULL_HEALTH;
    this->level = 1;
    this->maxLevel = 1;
    this->hackVerticleBuild = this->BUILD_VALUE;
    this->slightAngle = 0;
    this->percentCompleteP = 0;
    this->destroyed = false;
    this->selected = false;
    this->rtsLayerUtil = RTSLayerUtil_getInstance();
    this->layerDistanceUtil = LayerDistanceUtil_getInstance();
}


// throws Exception
RTSLayer* RTSLayer_createSimulatedInstance(RemoteInfo* remoteInfo) {
        AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory_getFactoryInstance();
        AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory_getFactoryInstance();
        return RTSLayer_new(RemoteInfo_REMOTE_INFO, GroupFactory_getInstance()->NULL_GROUP_ARRAY, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, Health_NULL_HEALTH, NullRTSFormInputFactory_getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory_getFactoryInstance(), RectangleFactory_SINGLETON, 0, 0, TileLayerPositionIntoViewPosition_new());
}


void RTSLayer_init(RTSLayer* this, RemoteInfo* remoteInfo, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) {
        MultiPlayerGameLayer_init(&this->base, remoteInfo, groupInterface, name, rectangle, viewPosition);
        RTSLayer_initFields(this);
        RTSLayer_initInputProcessors(this);
        this->rootName = rootName;
        this->healthInterface = healthInterface;
        this->rtsFormInput = rtsFormInput;
        RTSLayer_setPosition(this, x, y, this->z);
        this->verticleBuildAnimationInterface = ((IndexedAnimation*) AnimationInterfaceFactoryInterface_getInstance(verticleBuildAnimationInterfaceFactoryInterface, 0));
        this->buildAnimationInterface = AnimationInterfaceFactoryInterface_getInstance(buildAnimationInterfaceFactoryInterface, 0);
        this->baseAnimationInterface = AnimationInterfaceFactoryInterface_getInstance(baseAnimationInterfaceFactoryInterface, 0);
        this->emptyAnimationInterface = ((IndexedAnimation*) AnimationInterfaceFactoryInterface_getInstance(emptyAnimationInterfaceFactoryInterface, 0));
        this->indexedButShouldBeRotationAnimationInterface = ((IndexedAnimation*) AnimationInterfaceFactoryInterface_getInstance(animationInterfaceFactoryInterface, 0));
        this->initAnimationInterface = this->indexedButShouldBeRotationAnimationInterface;
        this->destroyAnimationInterface = ((IndexedAnimation*) ProceduralAnimationInterfaceFactoryInterface_getInstanceAnimation(proceduralAnimationInterfaceFactoryInterface, this->indexedButShouldBeRotationAnimationInterface));
        Animation* animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        this->rangeAnimation = animation;
        this->initRangeAnimation = animation;
        this->sensorRangeAnimation = animation;
        this->initSensorRangeAnimation = animation;
        this->animationInterface = this->initAnimationInterface;
        this->geographicMapCellPositionAreaBase = GeographicMapCellPositionArea_new(this);
}

RTSLayer* RTSLayer_new(RemoteInfo* remoteInfo, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) {
    RTSLayer* this = calloc(1, sizeof(RTSLayer));
    RTSLayer_init(this, remoteInfo, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition);
    return this;
}


// throws Exception
void RTSLayer_setAllBinaryGameLayerManager(RTSLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        MultiPlayerGameLayer_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        TileLayerPositionIntoViewPosition* viewPosition2 = ((TileLayerPositionIntoViewPosition*) RTSLayer_getViewPosition(this));
        TileLayerPositionIntoViewPosition_setTiledLayer(viewPosition2, tiledLayer);
        RTSLayer_updateWaypointBehavior(this, geographicMapInterface);
}


// throws Exception
void RTSLayer_updateWaypointBehavior(RTSLayer* this, BasicGeographicMap* geographicMapInterface) {
        GeographicMapCellPositionAreaBase_update(this->geographicMapCellPositionAreaBase, geographicMapInterface);
}


// throws Exception
void RTSLayer_construct(RTSLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        ViewPositionEventHandler_addListener(ViewPositionEventHandler_getInstance(), ((AllBinaryLayer*) this));
        this->animationInterface = this->buildAnimationInterface;
        this->hackVerticleBuild = 0;
}


void RTSLayer_select(RTSLayer* this) {
        this->rangeAnimation = this->initRangeAnimation;
        this->sensorRangeAnimation = this->initSensorRangeAnimation;
        RTSLayer_setSelected(this, true);
}


void RTSLayer_deselect(RTSLayer* this) {
        Animation* animation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        this->rangeAnimation = animation;
        this->sensorRangeAnimation = animation;
        RTSLayer_setSelected(this, false);
}


void RTSLayer_setSelected(RTSLayer* this, bool selected) {
        this->selected = selected;
}


bool RTSLayer_isSelected(RTSLayer* this) {
        return this->selected;
}


int32_t RTSLayer_getPercentComplete(RTSLayer* this) {
        return this->percentCompleteP;
}


ScrollSelectionForm* RTSLayer_getScrollSelectionForm(RTSLayer* this) {
        return ScrollSelectionForm_getNullScrollSelectionForm();
}


void RTSLayer_initInputProcessors(RTSLayer* this) {
        GameInputProcessorUtil_init(this->inputProcessorArray);
}


// throws Exception
void RTSLayer_processBuiltTick(RTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        this->animationInterface = this->indexedButShouldBeRotationAnimationInterface;
}


void RTSLayer_processTick(RTSLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        JAVA_TRY {
            if (RTSLayer_isCompleted(this)) {
                RTSLayer_processBuiltTick(this, allBinaryLayerManager);
            } else {
                RTSLayer_build(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "processTick", e);
        } JAVA_END_TRY;
}


// throws Exception
void RTSLayer_processInput(RTSLayer* this, AllBinaryLayerManager* layerManager) {
}


void RTSLayer_reload(RTSLayer* this) {
}


void RTSLayer_onMovement(RTSLayer* this, TrackingEvent* trackingEvent) {
}


// throws Exception
void RTSLayer_onMovementFound(RTSLayer* this, TrackingEvent* trackingEvent) {
}


void RTSLayer_paint(RTSLayer* this, Graphics* graphics) {
        MultiPlayerGameLayer_paintFirst((&this->base), graphics);
        ViewPositionBase* viewPosition = RTSLayer_getViewPosition(this);
        int32_t viewX = ViewPositionBase_getX(viewPosition);
        int32_t viewY = ViewPositionBase_getY(viewPosition);
        JAVA_CALL(RTSLayer_getAnimationInterface(this), paintXY, graphics, viewX, viewY);
}


// throws Exception
void RTSLayer_damage(RTSLayer* this, int32_t damage, int32_t damageType) {
}


int32_t RTSLayer_getSourceId(RTSLayer* this) {
        return RTSLayer_id;
}


void RTSLayer_downgrade(RTSLayer* this) {
        RTSLayerUtil_downgrade(this->rtsLayerUtil, this);
}


void RTSLayer_upgrade(RTSLayer* this) {
        RTSLayerUtil_upgrade(this->rtsLayerUtil, this);
}


bool RTSLayer_isCompleted(RTSLayer* this) {
        if (this->hackVerticleBuild < this->BUILD_VALUE) {
            return false;
        } else {
            return true;
        }
}


// throws Exception
static void RTSLayer_build(RTSLayer* this) {
        if (TimeDelayHelper_isTimeTNT(this->buildFrameTimeHelper)) {
            this->animationInterface = this->buildAnimationInterface;
            IndexedAnimation_nextFrame(this->verticleBuildAnimationInterface);
            this->hackVerticleBuild++;
        }
        this->percentCompleteP = 100 * this->hackVerticleBuild / this->BUILD_VALUE;
        JAVA_CALL(RTSLayer_getHudPaintable(this), updateInfo);
}


bool RTSLayer_isSelfUpgradeable(RTSLayer* this) {
        return true;
}


int32_t RTSLayer_getCost(RTSLayer* this) {
        return RTSLayerUtil_getCost(this->rtsLayerUtil, this);
}


int32_t RTSLayer_getDowngradeCost(RTSLayer* this) {
        return RTSLayerUtil_getDowngradeCost(this->rtsLayerUtil, this);
}


int32_t RTSLayer_getUpgradeCost(RTSLayer* this) {
        return RTSLayerUtil_getUpgradeCost(this->rtsLayerUtil, this);
}


bool RTSLayer_isUpgradeable(RTSLayer* this) {
        if (RTSLayer_getLevel(this) < RTSLayer_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


bool RTSLayer_isDowngradeable(RTSLayer* this) {
        if (RTSLayer_getLevel(this) > 1) {
            return true;
        } else {
            return false;
        }
}


int32_t RTSLayer_getLevel(RTSLayer* this) {
        return this->level;
}


void RTSLayer_setLevel(RTSLayer* this, int32_t level) {
        this->level = level;
}


Animation* RTSLayer_getVerticleBuildAnimationInterface(RTSLayer* this) {
        return this->verticleBuildAnimationInterface;
}


Animation* RTSLayer_getAnimationInterface(RTSLayer* this) {
        return this->animationInterface;
}


void RTSLayer_setAnimationInterface(RTSLayer* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


// throws Exception
void RTSLayer_setTarget(RTSLayer* this, PathFindingLayerInterface* targetGameLayer) {
        int32_t anotherTargetDistance = LayerDistanceUtil_getDistance(this->layerDistanceUtil, ((AllBinaryLayer*) this), ((AllBinaryLayer*) targetGameLayer));
        WaypointBehaviorBase* waypointBehaviorBase = RTSLayer_getWaypointBehavior(this);
        WaypointBehaviorBase_setTargetWithDistance(waypointBehaviorBase, ((PathFindingLayerInterface*) targetGameLayer), anotherTargetDistance);
}


SelectionHudPaintable* RTSLayer_createHudPaintable(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


SelectionHudPaintable* RTSLayer_getHudPaintable(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t RTSLayer_getMaxLevel(RTSLayer* this) {
        return this->maxLevel;
}


void RTSLayer_setMaxLevel(RTSLayer* this, int32_t maxLevel) {
        this->maxLevel = maxLevel;
}


Health* RTSLayer_getHealthInterface(RTSLayer* this) {
        return this->healthInterface;
}


void RTSLayer_setHealthInterface(RTSLayer* this, Health* healthInterface) {
        this->healthInterface = healthInterface;
}


RTSFormInput* RTSLayer_getRTSFormInput(RTSLayer* this) {
        return this->rtsFormInput;
}


// throws Exception
bool RTSLayer_isDestroyed(RTSLayer* this) {
        return this->destroyed;
}


// throws Exception
void RTSLayer_setDestroyed(RTSLayer* this, bool destroyed) {
        this->destroyed = destroyed;
        if (RTSLayer_isDestroyed(this)) {
            DestroyedLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this);
            ViewPositionEventHandler_removeListener(ViewPositionEventHandler_getInstance(), this);
        }
}


BasicArrayList* RTSLayer_getEndGeographicMapCellPositionList(RTSLayer* this) {
        return GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(this->geographicMapCellPositionAreaBase);
}


GeographicMapCellPositionAreaBase* RTSLayer_getGeographicMapCellPositionArea(RTSLayer* this) {
        return this->geographicMapCellPositionAreaBase;
}


bool RTSLayer_shouldHandleStartSameAsEnd(RTSLayer* this) {
        return true;
}


// throws Exception
void RTSLayer_handleCost(RTSLayer* this, PathFindingLayerInterface* ownerLayer) {
}


WaypointBehaviorBase* RTSLayer_getWaypointBehavior(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PathFindingLayerInterface* RTSLayer_getParentLayer(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RTSLayer2LogHelper* RTSLayer_getRTSLayer2LogHelper(RTSLayer* this) {
        return this->rtsLayer2LogHelper;
}


WaypointLogHelper* RTSLayer_getWaypointLogHelper(RTSLayer* this) {
        return this->waypointLogHelperP;
}


Waypoint2LogHelper* RTSLayer_getWaypoint2LogHelper(RTSLayer* this) {
        return this->waypoint2LogHelperP;
}


WaypointRunnableLogHelper* RTSLayer_getWaypointRunnableLogHelper(RTSLayer* this) {
        return this->waypointRunnableLogHelperP;
}


bool RTSLayer_shouldAddWaypointFromBuilding(RTSLayer* this) {
        return false;
}


CaptionAnimationHelperBase* RTSLayer_getCaptionAnimationHelper(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool RTSLayer_isShowMoreCaptionStates(RTSLayer* this) {
        return this->showMoreCaptionStates;
}


// throws Exception
void RTSLayer_init(RTSLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) {
}


// throws Exception
GeographicMapCellPosition* RTSLayer_getCurrentGeographicMapCellPosition(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellPosition* RTSLayer_getTopLeftGeographicMapCellPosition(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* RTSLayer_getMoveOutOfBuildAreaPath(RTSLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void RTSLayer_setClosestGeographicMapCellHistory(RTSLayer* this, BasicArrayList* pathsList) {
}


void RTSLayer_teleportTo(RTSLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
}


// throws Exception
void RTSLayer_setLoad(RTSLayer* this, int32_t resource) {
}


// throws Exception
BasicArrayList* RTSLayer_getSurroundingGeographicMapCellPositionList(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void RTSLayer_trackTo(RTSLayer* this, const char* reason) {
}


// throws Exception
void RTSLayer_trackToDXY(RTSLayer* this, int32_t dx, int32_t dy) {
}


bool RTSLayer_isWaypointListEmptyOrOnlyTargets(RTSLayer* this) {
        return false;
}


TrackingEvent* RTSLayer_getTrackingEvent(RTSLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
bool RTSLayer_buildingChase(RTSLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
        return false;
}


void RTSLayer_allStop(RTSLayer* this) {
}


int32_t RTSLayer_getMinStaticType(void) {
        return 1;
}


int32_t RTSLayer_getMaxStaticType(void) {
        return 4;
}


bool RTSLayer_isRTSLayer(AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_getType(layerInterface) >= RTSLayer_getMinStaticType() && AllBinaryLayer_getType(layerInterface) <= RTSLayer_getMaxStaticType()) {
            return true;
        }
        return false;
}


bool RTSLayer_implmentsTickableInterface(RTSLayer* this) {
        return true;
}


bool RTSLayer_implmentsGameInputInterface(RTSLayer* this) {
        return true;
}


const char* RTSLayer_getRootName(RTSLayer* this) {
        return this->rootName;
}


RotationAnimation* RTSLayer_getRotationAnimationInterface(RTSLayer* this) {
        return ((RotationAnimation*) this->indexedButShouldBeRotationAnimationInterface);
}


void RTSLayer_setFrame(RTSLayer* this, int32_t index) {
        JAVA_CALL(RTSLayer_getRotationAnimationInterface(this), setFrame, index);
}


void RTSLayer_setRotationAnimationInterface(RTSLayer* this, RotationAnimation* rotationAnimationInterface) {
        this->indexedButShouldBeRotationAnimationInterface = rotationAnimationInterface;
}

