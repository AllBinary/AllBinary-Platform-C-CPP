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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupFactory.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/layer/building/event/BuildingEventHandler.h"
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
#include "org/allbinary/game/layer/waypoint/Waypoint2SelectedLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"
#include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointRunnableSelectedLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointSelectedLogHelper.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/tick/NullTickable.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/FrameUtil.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/RTSLayer.h"

typedef struct AdvancedRTSGameLayer AdvancedRTSGameLayer;
struct AdvancedRTSGameLayer {
    RTSLayer base;
    DestroyedEventListenerInterface DestroyedEventListenerInterface_interface;
    ShakeAnimationListener* shakeListener;
    AllBinaryVibrationME* vibration;
    int32_t duration;
    PathFindingLayerInterface* parentLayer;
    TickableInterface* waypointBehaviorBase;
};


AdvancedRTSGameLayer* AdvancedRTSGameLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);
AdvancedRTSGameLayer* AdvancedRTSGameLayer_createSimulated(void);

void AdvancedRTSGameLayer_init(AdvancedRTSGameLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition);
void AdvancedRTSGameLayer_updateWaypointBehavior(AdvancedRTSGameLayer* this, BasicGeographicMap* geographicMapInterface);
void AdvancedRTSGameLayer_initVisibility(AdvancedRTSGameLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void AdvancedRTSGameLayer_construct(AdvancedRTSGameLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void AdvancedRTSGameLayer_setDestroyed(AdvancedRTSGameLayer* this, bool destroyed);
PathFindingLayerInterface* AdvancedRTSGameLayer_getParentLayer(AdvancedRTSGameLayer* this);
void AdvancedRTSGameLayer_setParentLayer(AdvancedRTSGameLayer* this, PathFindingLayerInterface* parentLayer);
WaypointBehaviorBase* AdvancedRTSGameLayer_getWaypointBehavior(AdvancedRTSGameLayer* this);
void AdvancedRTSGameLayer_setWaypointBehavior(AdvancedRTSGameLayer* this, WaypointBehaviorBase* unitWaypointHelper);
WaypointLogHelper* AdvancedRTSGameLayer_getWaypointLogHelper(AdvancedRTSGameLayer* this);
Waypoint2LogHelper* AdvancedRTSGameLayer_getWaypoint2LogHelper(AdvancedRTSGameLayer* this);
WaypointRunnableLogHelper* AdvancedRTSGameLayer_getWaypointRunnableLogHelper(AdvancedRTSGameLayer* this);
bool AdvancedRTSGameLayer_shouldAddWaypointFromBuilding(AdvancedRTSGameLayer* this);
bool AdvancedRTSGameLayer_isWaypointListEmptyOrOnlyTargets(AdvancedRTSGameLayer* this);
bool AdvancedRTSGameLayer_buildingChase(AdvancedRTSGameLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
BasicArrayList* AdvancedRTSGameLayer_getSurroundingGeographicMapCellPositionList(AdvancedRTSGameLayer* this);
void AdvancedRTSGameLayer_setSelected(AdvancedRTSGameLayer* this, bool selected);
void AdvancedRTSGameLayer_onDestroyed(AdvancedRTSGameLayer* this, DestroyedEvent* destroyedEvent);

static void AdvancedRTSGameLayer_initFields(AdvancedRTSGameLayer* this) {
    
    
    
    this->parentLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
    this->waypointBehaviorBase = NullTickable_getInstance();
}


// throws Exception
AdvancedRTSGameLayer* AdvancedRTSGameLayer_createSimulated(void) {
        AnimationInterfaceFactoryInterface* nullAnimationInterfaceFactoryInterface = NullAnimationFactory_getFactoryInstance();
        AnimationInterfaceFactoryInterface* nullIndexedAnimationInterfaceFactoryInterface = NullIndexedAnimationFactory_getFactoryInstance();
        return AdvancedRTSGameLayer_new(RemoteInfo_REMOTE_INFO, NullPathFindingLayer_NULL_PATH_FINDING_LAYER, AdvancedRTSProperties_createPropertiesSimulated(), GroupFactory_getInstance()->NULL_GROUP_ARRAY, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING, Health_NULL_HEALTH, NullRTSFormInputFactory_getInstance(), nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullAnimationInterfaceFactoryInterface, nullIndexedAnimationInterfaceFactoryInterface, NullIndexedAnimationFactory_getFactoryInstance(), RectangleFactory_SINGLETON, 0, 0, TileLayerPositionIntoViewPosition_new());
}


void AdvancedRTSGameLayer_init(AdvancedRTSGameLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) {
        RTSLayer_init(&this->base, remoteInfo, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition);
        AdvancedRTSGameLayer_initFields(this);
        AdvancedRTSGameLayer_setVisible(this, false);
        AdvancedRTSGameLayer_setWaypointBehavior(this, WaypointBehaviorBase_new());
        this->shakeListener = advancedRTSProperties->shakeListener;
        this->vibration = advancedRTSProperties->vibration;
        this->duration = advancedRTSProperties->duration;
        AdvancedRTSGameLayer_setParentLayer(this, parentLayer);
}

AdvancedRTSGameLayer* AdvancedRTSGameLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, AdvancedRTSProperties* advancedRTSProperties, Group** groupInterface, const char* rootName, const char* name, Health* healthInterface, RTSFormInput* rtsFormInput, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* emptyAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* baseAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* buildAnimationInterfaceFactoryInterface, AnimationInterfaceFactoryInterface* verticleBuildAnimationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y, ViewPositionBase* viewPosition) {
    AdvancedRTSGameLayer* this = calloc(1, sizeof(AdvancedRTSGameLayer));
    AdvancedRTSGameLayer_init(this, remoteInfo, parentLayer, advancedRTSProperties, groupInterface, rootName, name, healthInterface, rtsFormInput, animationInterfaceFactoryInterface, emptyAnimationInterfaceFactoryInterface, baseAnimationInterfaceFactoryInterface, buildAnimationInterfaceFactoryInterface, verticleBuildAnimationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, viewPosition);
    return this;
}


// throws Exception
void AdvancedRTSGameLayer_updateWaypointBehavior(AdvancedRTSGameLayer* this, BasicGeographicMap* geographicMapInterface) {
        RTSLayer_updateWaypointBehavior((&this->base), geographicMapInterface);
        JAVA_CALL(JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(this), getWaypoint), setAllBinaryGameLayerManager, this->allBinaryGameLayerManagerP);
}


void AdvancedRTSGameLayer_initVisibility(AdvancedRTSGameLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = ((AdvancedRTSPlayerLayerInterface*) rtsPlayerLayerInterface);
        if (AdvancedRTSPlayerLayerInterface_isLocalPlayer(advancedRTSPlayerLayerInterface) || AdvancedRTSPlayerLayerInterface_getGameType(advancedRTSPlayerLayerInterface) == GameTypeFactory_getInstance()->BOT) {
            AdvancedRTSGameLayer_setVisible(this, true);
        } else {
            AdvancedRTSGameLayer_setVisible(this, false);
        }
}


// throws Exception
void AdvancedRTSGameLayer_construct(AdvancedRTSGameLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        RTSLayer_construct((&this->base), rtsPlayerLayerInterface);
        AdvancedRTSGameLayer_initVisibility(this, rtsPlayerLayerInterface);
        BuildingEventHandler_addListenerInterface(BuildingEventHandler_getInstance(), JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(this), getWaypoint));
}


// throws Exception
void AdvancedRTSGameLayer_setDestroyed(AdvancedRTSGameLayer* this, bool destroyed) {
        RTSLayer_setDestroyed((&this->base), destroyed);
        if (AdvancedRTSGameLayer_isDestroyed(this)) {
            BuildingEventHandler_removeListener(BuildingEventHandler_getInstance(), JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(this), getWaypoint));
            BuildingEventHandler_removeListener(BuildingEventHandler_getInstance(), this);
            DestroyedEventHandler_addListener(DestroyedEventHandler_getInstance(), this);
            RTSLayerUtil_destroyAndClear(RTSLayerUtil_getInstance(), JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(this), getOwnedWaypointList));
        }
}


PathFindingLayerInterface* AdvancedRTSGameLayer_getParentLayer(AdvancedRTSGameLayer* this) {
        return this->parentLayer;
}


void AdvancedRTSGameLayer_setParentLayer(AdvancedRTSGameLayer* this, PathFindingLayerInterface* parentLayer) {
        this->parentLayer = parentLayer;
}


WaypointBehaviorBase* AdvancedRTSGameLayer_getWaypointBehavior(AdvancedRTSGameLayer* this) {
        return ((WaypointBehaviorBase*) this->waypointBehaviorBase);
}


void AdvancedRTSGameLayer_setWaypointBehavior(AdvancedRTSGameLayer* this, WaypointBehaviorBase* unitWaypointHelper) {
        this->waypointBehaviorBase = unitWaypointHelper;
}


WaypointLogHelper* AdvancedRTSGameLayer_getWaypointLogHelper(AdvancedRTSGameLayer* this) {
        return this->waypointLogHelperP;
}


Waypoint2LogHelper* AdvancedRTSGameLayer_getWaypoint2LogHelper(AdvancedRTSGameLayer* this) {
        return this->waypoint2LogHelperP;
}


WaypointRunnableLogHelper* AdvancedRTSGameLayer_getWaypointRunnableLogHelper(AdvancedRTSGameLayer* this) {
        return this->waypointRunnableLogHelperP;
}


bool AdvancedRTSGameLayer_shouldAddWaypointFromBuilding(AdvancedRTSGameLayer* this) {
        if (this->parentLayer != NullPathFindingLayer_NULL_PATH_FINDING_LAYER) {
            AdvancedRTSGameLayer* parentAdvancedRTSGameLayer = ((AdvancedRTSGameLayer*) this->parentLayer);
            if (AdvancedRTSGameLayer_getType(parentAdvancedRTSGameLayer) != 1) {
                return true;
            }
        }
        return false;
}


bool AdvancedRTSGameLayer_isWaypointListEmptyOrOnlyTargets(AdvancedRTSGameLayer* this) {
        if (AdvancedRTSGameLayer_getType(this) != 1) {
            return true;
        }
        return false;
}


// throws Exception
bool AdvancedRTSGameLayer_buildingChase(AdvancedRTSGameLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
        GeographicMapCellPosition* geographicMapCellPosition = AdvancedRTSGameLayer_getCurrentGeographicMapCellPosition(this);
        Direction* buildingDirection = GeographicMapDirectionUtil_getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapDirectionUtil_getInstance(), geographicMapCellPosition, cellPosition);
        AngleInfo* angleInfo = JAVA_CALL(AdvancedRTSGameLayer_getRotationAnimationInterface(this), getAngleInfoP);
        int32_t angle = FrameUtil_adjustAngleToFrameAngle(FrameUtil_getInstance(), AngleInfo_getAngle(angleInfo) + 90);
        GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory_getInstance();
        if (buildingDirection == DirectionFactory_getInstance()->UP) {
            JAVA_CALL(this->rtsLayer2LogHelper, buildingAbove, this);
            if (angle > 180 && angle < 360) {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseLeft, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_LEFT));
                if (angle <= 190) {
                    return true;
                }
            } else {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseRight, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_RIGHT));
                if (angle >= 170) {
                    return true;
                }
            }
        } else if (buildingDirection == DirectionFactory_getInstance()->DOWN) {
            JAVA_CALL(this->rtsLayer2LogHelper, buildingDown, this);
            if (angle > 180 && angle < 360) {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseLeft, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_RIGHT));
                if (angle > 315) {
                    return true;
                }
            } else {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseRight, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_LEFT));
                if (angle < 45) {
                    return true;
                }
            }
        } else if (buildingDirection == DirectionFactory_getInstance()->LEFT) {
            JAVA_CALL(this->rtsLayer2LogHelper, buildingLeft);
            if (angle > 90 && angle < 270) {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseDown, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_LEFT));
                if (angle < 135) {
                    return true;
                }
            } else {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseUp, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_RIGHT));
                if (angle > 45) {
                    return true;
                }
            }
        } else if (buildingDirection == DirectionFactory_getInstance()->RIGHT) {
            JAVA_CALL(this->rtsLayer2LogHelper, buildingRight);
            if (angle > 90 && angle < 270) {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseDown, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_RIGHT));
                if (angle > 225) {
                    return true;
                }
            } else {
                JAVA_CALL(this->rtsLayer2LogHelper, buildingChaseUp, this, angle);
                JAVA_CALL(AdvancedRTSGameLayer_getGameKeyEventList(this), add, GameKeyEventFactory_getInstanceForKey(gameKeyEventFactory, this, Canvas_LEFT));
                if (angle < 315 && angle > 180) {
                    return true;
                }
            }
        } else {
            return true;
        }
        return false;
}


// throws Exception
BasicArrayList* AdvancedRTSGameLayer_getSurroundingGeographicMapCellPositionList(AdvancedRTSGameLayer* this) {
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        JAVA_CALL(this->geographicMapCellPositionAreaBase, update, geographicMapInterface);
        return JAVA_CALL(this->geographicMapCellPositionAreaBase, getSurroundingGeographicMapCellPositionList);
}


void AdvancedRTSGameLayer_setSelected(AdvancedRTSGameLayer* this, bool selected) {
        RTSLayer_setSelected((&this->base), selected);
        if (this->debug) {
            if (selected) {
                this->waypointLogHelperP = WaypointSelectedLogHelper_getInstance();
                this->waypoint2LogHelperP = Waypoint2SelectedLogHelper_getInstance();
                this->waypointRunnableLogHelperP = WaypointRunnableSelectedLogHelper_getInstance();
            } else {
                this->waypointLogHelperP = WaypointLogHelper_getInstance();
                this->waypoint2LogHelperP = Waypoint2LogHelper_getInstance();
                this->waypointRunnableLogHelperP = WaypointRunnableLogHelper_getInstance();
            }
        }
}


void AdvancedRTSGameLayer_onDestroyed(AdvancedRTSGameLayer* this, DestroyedEvent* destroyedEvent) {
        JAVA_TRY {
            AllBinaryLayer* layerInterface = DestroyedEvent_getLayerInterface(destroyedEvent);
            if (layerInterface == this) {
                DestroyedEventHandler_removeListener(DestroyedEventHandler_getInstance(), this);
                WaypointBase* waypoint = ((WaypointBase*) JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(this), getWaypoint));
                WaypointBase_reset(waypoint);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "onDestroyed", e);
        } JAVA_END_TRY;
}

