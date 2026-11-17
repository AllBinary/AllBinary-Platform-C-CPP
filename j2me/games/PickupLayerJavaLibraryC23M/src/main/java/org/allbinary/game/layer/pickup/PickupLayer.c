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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"

typedef struct PickupLayer PickupLayer;
struct PickupLayer {
    MultiPlayerGameLayer base;
    PickedUpLayerInterface PickedUpLayerInterface_interface;
    PickupableInterface PickupableInterface_interface;
    PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface;
    bool destroyed;
    Animation* animationInterface;
};


PickupLayer* PickupLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

void PickupLayer_init(PickupLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);
void PickupLayer_init(PickupLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface);
void PickupLayer_initXYZ(PickupLayer* this, int32_t x, int32_t y, int32_t z);
void PickupLayer_paint(PickupLayer* this, Graphics* graphics);
void PickupLayer_paintThreed(PickupLayer* this, Graphics* graphics);
PickedUpLayerInterfaceFactoryInterface* PickupLayer_getPickedUpLayerInterfaceFactoryInterface(PickupLayer* this);
void PickupLayer_setPickedUp(PickupLayer* this);
bool PickupLayer_isDestroyed(PickupLayer* this);
void PickupLayer_setDestroyed(PickupLayer* this, bool destroyed);
void PickupLayer_damage(PickupLayer* this, int32_t damage, int32_t damageType);
int32_t PickupLayer_getDamage(PickupLayer* this, int32_t damageType);
void PickupLayer_set(PickupLayer* this, GL* gl);

static void PickupLayer_initFields(PickupLayer* this) {
    this->pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
    this->destroyed = false;
    this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


void PickupLayer_init(PickupLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
        MultiPlayerGameLayer_init(&this->base, remoteInfo, BasicGroupFactory_getInstance()->NONE_ARRAY, name, rectangle, viewPosition);
        PickupLayer_initFields(this);
        PickupLayer_setCollidableInferface(this, CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance()));
        PickupLayer_setLayerWidth(this, 10);
        PickupLayer_setLayerHeight(this, 10);
        PickupLayer_init(this, pickedUpLayerInterfaceFactoryInterface, animationInterface);
}

PickupLayer* PickupLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    PickupLayer* this = calloc(1, sizeof(PickupLayer));
    PickupLayer_init(this, name, remoteInfo, total, pickedUpLayerInterfaceFactoryInterface, animationInterface, rectangle, viewPosition);
    return this;
}


void PickupLayer_init(PickupLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface) {
        this->pickedUpLayerInterfaceFactoryInterface = pickedUpLayerInterfaceFactoryInterface;
        this->animationInterface = animationInterface;
        PickupLayer_setDestroyed(this, false);
}


void PickupLayer_initXYZ(PickupLayer* this, int32_t x, int32_t y, int32_t z) {
        PickupLayer_setPosition(this, x, y, z);
}


void PickupLayer_paint(PickupLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = PickupLayer_getViewPosition(this);
        int32_t viewX = ViewPositionBase_getX(viewPosition);
        int32_t viewY = ViewPositionBase_getY(viewPosition);
        Animation_paintXY(this->animationInterface, graphics, viewX, viewY);
}


void PickupLayer_paintThreed(PickupLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = PickupLayer_getViewPosition(this);
        int32_t viewX = ViewPositionBase_getX(viewPosition);
        int32_t viewY = ViewPositionBase_getY(viewPosition);
        Animation_paintThreedXYZ(this->animationInterface, graphics, viewX, viewY, 3);
}


PickedUpLayerInterfaceFactoryInterface* PickupLayer_getPickedUpLayerInterfaceFactoryInterface(PickupLayer* this) {
        return this->pickedUpLayerInterfaceFactoryInterface;
}


void PickupLayer_setPickedUp(PickupLayer* this) {
        PickupLayer_setDestroyed(this, true);
}


bool PickupLayer_isDestroyed(PickupLayer* this) {
        return this->destroyed;
}


void PickupLayer_setDestroyed(PickupLayer* this, bool destroyed) {
        this->destroyed = destroyed;
        if (PickupLayer_isDestroyed(this)) {
            DestroyedLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this);
        }
}


void PickupLayer_damage(PickupLayer* this, int32_t damage, int32_t damageType) {
}


int32_t PickupLayer_getDamage(PickupLayer* this, int32_t damageType) {
        return 0;
}


// throws Exception
void PickupLayer_set(PickupLayer* this, GL* gl) {
        OpenGLSurfaceChangedInterface* openGLSurfaceChangedInterface = ((OpenGLSurfaceChangedInterface*) this->animationInterface);
        OpenGLSurfaceChangedInterface_set(openGLSurfaceChangedInterface, gl);
}

