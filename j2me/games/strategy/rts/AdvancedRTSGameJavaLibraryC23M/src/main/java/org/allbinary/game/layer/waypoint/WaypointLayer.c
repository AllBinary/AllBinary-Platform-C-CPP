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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/input/form/NullRTSFormInputFactory.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/AdvancedRTSProperties.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/media/audio/AttackSound.h"

typedef struct WaypointLayer WaypointLayer;
struct WaypointLayer {
    AdvancedRTSGameLayer base;
};


WaypointLayer* WaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

void WaypointLayer_init(WaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);
void WaypointLayer_construct(WaypointLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface);
void WaypointLayer_paint(WaypointLayer* this, Graphics* graphics);
void WaypointLayer_processTick(WaypointLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
void WaypointLayer_damage(WaypointLayer* this, int32_t damage, int32_t damageType);
int32_t WaypointLayer_getDamage(WaypointLayer* this, int32_t damageType);
void WaypointLayer_setDestroyed(WaypointLayer* this, bool destroyed);
int32_t WaypointLayer_getType(WaypointLayer* this);
int32_t WaypointLayer_getStaticType(void);
bool WaypointLayer_isSelfUpgradeable(WaypointLayer* this);


void WaypointLayer_init(WaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
        AdvancedRTSGameLayer_init(&this->base, remoteInfo, parentLayer, AdvancedRTSProperties_createProperties(), groupInterface, rootName, name, Health_new(1000), NullRTSFormInputFactory_getInstance(), animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, TileLayerPositionIntoViewPosition_new());
        WaypointLayer_setCollidableInferface(this, CollidableWaypointBehavior_new(true));
        JAVA_CALL(WaypointLayer_getWaypointBehavior(this), setWaypoint, Waypoint_new(this, AttackSound_getInstance()));
        WaypointLayer_setAnimationInterface(this, this->indexedButShouldBeRotationAnimationInterface);
}

WaypointLayer* WaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
    WaypointLayer* this = calloc(1, sizeof(WaypointLayer));
    WaypointLayer_init(this, remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
    return this;
}


void WaypointLayer_construct(WaypointLayer* this, RTSPlayerLayerInterface* rtsPlayerLayerInterface) {
        this->percentCompleteP = 100;
        WaypointLayer_initVisibility(this, rtsPlayerLayerInterface);
}


void WaypointLayer_paint(WaypointLayer* this, Graphics* graphics) {
        if (WaypointLayer_isVisible(this)) {
            AdvancedRTSGameLayer_paint((&this->base), graphics);
        }
}


void WaypointLayer_processTick(WaypointLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        JAVA_TRY {
            JAVA_CALL(this->indexedButShouldBeRotationAnimationInterface, nextFrame);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "processTick", e);
        } JAVA_END_TRY;
}


void WaypointLayer_damage(WaypointLayer* this, int32_t damage, int32_t damageType) {
}


// throws Exception
int32_t WaypointLayer_getDamage(WaypointLayer* this, int32_t damageType) {
        return 0;
}


// throws Exception
void WaypointLayer_setDestroyed(WaypointLayer* this, bool destroyed) {
        AdvancedRTSGameLayer_setDestroyed((&this->base), destroyed);
        if (WaypointLayer_isDestroyed(this)) {
            WaypointCellPositionHistory_removeLayer(WaypointCellPositionHistory_getInstance(), this);
        }
}


int32_t WaypointLayer_getType(WaypointLayer* this) {
        return WaypointLayer_getStaticType();
}


int32_t WaypointLayer_getStaticType(void) {
        return 4;
}


bool WaypointLayer_isSelfUpgradeable(WaypointLayer* this) {
        return false;
}

