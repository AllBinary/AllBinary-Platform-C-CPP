#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H
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
typedef struct PickedUpLayerInterface PickedUpLayerInterface;
typedef struct PickupableInterface PickupableInterface;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct CollidableAlwaysPickupNeverCollideBehaviorFactory CollidableAlwaysPickupNeverCollideBehaviorFactory;
typedef struct DestroyedLayerProcessor DestroyedLayerProcessor;
typedef struct BasicGroupFactory BasicGroupFactory;
typedef struct MultiPlayerGameLayer MultiPlayerGameLayer;
typedef struct RemoteInfo RemoteInfo;
typedef struct Rectangle Rectangle;
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
typedef struct ViewPositionBase ViewPositionBase;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

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

void PickupLayer_initMethod(PickupLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface);

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
#define PickupLayer_new7 PickupLayer_new
#define PickupLayer_init7 PickupLayer_init
#ifndef PickupLayer_getMultiplayerBehavior
#define PickupLayer_getMultiplayerBehavior MultiPlayerGameLayer_getMultiplayerBehavior
#endif
#ifndef PickupLayer_setPingInfo
#define PickupLayer_setPingInfo MultiPlayerGameLayer_setPingInfo
#endif
#ifndef PickupLayer_setFiring
#define PickupLayer_setFiring MultiPlayerGameLayer_setFiring
#endif
#ifndef PickupLayer_getFiring
#define PickupLayer_getFiring MultiPlayerGameLayer_getFiring
#endif
#ifndef PickupLayer_getNullInstance
#define PickupLayer_getNullInstance CollidableDestroyableDamageableLayer_getNullInstance
#endif
#ifndef PickupLayer_initPosition
#define PickupLayer_initPosition CollidableDestroyableDamageableLayer_initPosition
#endif
#ifndef PickupLayer_initPositionXYZ
#define PickupLayer_initPositionXYZ CollidableDestroyableDamageableLayer_initPositionXYZ
#endif
#ifndef PickupLayer_getGroupInterface
#define PickupLayer_getGroupInterface CollidableDestroyableDamageableLayer_getGroupInterface
#endif
#ifndef PickupLayer_setGroupInterface
#define PickupLayer_setGroupInterface CollidableDestroyableDamageableLayer_setGroupInterface
#endif
#ifndef PickupLayer_setAllBinaryGameLayerManager
#define PickupLayer_setAllBinaryGameLayerManager CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager
#endif
#ifndef PickupLayer_isReadyForExplosion
#define PickupLayer_isReadyForExplosion CollidableDestroyableDamageableLayer_isReadyForExplosion
#endif
#ifndef PickupLayer_setReadyForExplosion
#define PickupLayer_setReadyForExplosion CollidableDestroyableDamageableLayer_setReadyForExplosion
#endif
#ifndef PickupLayer_getInitWidth
#define PickupLayer_getInitWidth CollidableDestroyableDamageableLayer_getInitWidth
#endif
#ifndef PickupLayer_getInitHeight
#define PickupLayer_getInitHeight CollidableDestroyableDamageableLayer_getInitHeight
#endif
#ifndef PickupLayer_getInitX
#define PickupLayer_getInitX CollidableDestroyableDamageableLayer_getInitX
#endif
#ifndef PickupLayer_getInitY
#define PickupLayer_getInitY CollidableDestroyableDamageableLayer_getInitY
#endif
#ifndef PickupLayer_up
#define PickupLayer_up CollidableDestroyableDamageableLayer_up
#endif
#ifndef PickupLayer_down
#define PickupLayer_down CollidableDestroyableDamageableLayer_down
#endif
#ifndef PickupLayer_right
#define PickupLayer_right CollidableDestroyableDamageableLayer_right
#endif
#ifndef PickupLayer_left
#define PickupLayer_left CollidableDestroyableDamageableLayer_left
#endif
#ifndef PickupLayer_strafeLeft
#define PickupLayer_strafeLeft CollidableDestroyableDamageableLayer_strafeLeft
#endif
#ifndef PickupLayer_strafeRight
#define PickupLayer_strafeRight CollidableDestroyableDamageableLayer_strafeRight
#endif
#ifndef PickupLayer_fire
#define PickupLayer_fire CollidableDestroyableDamageableLayer_fire
#endif
#ifndef PickupLayer_special1
#define PickupLayer_special1 CollidableDestroyableDamageableLayer_special1
#endif
#ifndef PickupLayer_special2
#define PickupLayer_special2 CollidableDestroyableDamageableLayer_special2
#endif
#ifndef PickupLayer_special3
#define PickupLayer_special3 CollidableDestroyableDamageableLayer_special3
#endif
#ifndef PickupLayer_special4
#define PickupLayer_special4 CollidableDestroyableDamageableLayer_special4
#endif
#ifndef PickupLayer_special5
#define PickupLayer_special5 CollidableDestroyableDamageableLayer_special5
#endif
#ifndef PickupLayer_upAnalog
#define PickupLayer_upAnalog CollidableDestroyableDamageableLayer_upAnalog
#endif
#ifndef PickupLayer_downAnalog
#define PickupLayer_downAnalog CollidableDestroyableDamageableLayer_downAnalog
#endif
#ifndef PickupLayer_rightAnalog
#define PickupLayer_rightAnalog CollidableDestroyableDamageableLayer_rightAnalog
#endif
#ifndef PickupLayer_leftAnalog
#define PickupLayer_leftAnalog CollidableDestroyableDamageableLayer_leftAnalog
#endif
#ifndef PickupLayer_rightTrigger
#define PickupLayer_rightTrigger CollidableDestroyableDamageableLayer_rightTrigger
#endif
#ifndef PickupLayer_leftTrigger
#define PickupLayer_leftTrigger CollidableDestroyableDamageableLayer_leftTrigger
#endif
#ifndef PickupLayer_onDestroyed
#define PickupLayer_onDestroyed CollidableDestroyableDamageableLayer_onDestroyed
#endif
#ifndef PickupLayer_getPickupBehavior
#define PickupLayer_getPickupBehavior CollidableDestroyableDamageableLayer_getPickupBehavior
#endif
#ifndef PickupLayer_setPickupBehavior
#define PickupLayer_setPickupBehavior CollidableDestroyableDamageableLayer_setPickupBehavior
#endif
#ifndef PickupLayer_addPart
#define PickupLayer_addPart CollidableDestroyableDamageableLayer_addPart
#endif
#ifndef PickupLayer_setPartInterfaceArray
#define PickupLayer_setPartInterfaceArray CollidableDestroyableDamageableLayer_setPartInterfaceArray
#endif
#ifndef PickupLayer_getPartInterfaceArray
#define PickupLayer_getPartInterfaceArray CollidableDestroyableDamageableLayer_getPartInterfaceArray
#endif
#ifndef PickupLayer_toStringAppend
#define PickupLayer_toStringAppend CollidableDestroyableDamageableLayer_toStringAppend
#endif
#ifndef PickupLayer_toString
#define PickupLayer_toString CollidableDestroyableDamageableLayer_toString
#endif
#ifndef PickupLayer_getNullInstance
#define PickupLayer_getNullInstance CollidableCompositeLayer_getNullInstance
#endif
#ifndef PickupLayer_getArtificialIntelligenceInterface
#define PickupLayer_getArtificialIntelligenceInterface CollidableCompositeLayer_getArtificialIntelligenceInterface
#endif
#ifndef PickupLayer_getCollidableInferface
#define PickupLayer_getCollidableInferface CollidableCompositeLayer_getCollidableInferface
#endif
#ifndef PickupLayer_setCollidableInferface
#define PickupLayer_setCollidableInferface CollidableCompositeLayer_setCollidableInferface
#endif
#ifndef PickupLayer_implmentsCollidableInterface
#define PickupLayer_implmentsCollidableInterface CollidableCompositeLayer_implmentsCollidableInterface
#endif
#ifndef PickupLayer_toStringAppend
#define PickupLayer_toStringAppend CollidableCompositeLayer_toStringAppend
#endif
#ifndef PickupLayer_toString
#define PickupLayer_toString CollidableCompositeLayer_toString
#endif
#ifndef PickupLayer_createPaintable
#define PickupLayer_createPaintable AllBinaryGameLayer_createPaintable
#endif
#ifndef PickupLayer_move
#define PickupLayer_move AllBinaryGameLayer_move
#endif
#ifndef PickupLayer_getGameKeyEventList
#define PickupLayer_getGameKeyEventList AllBinaryGameLayer_getGameKeyEventList
#endif
#ifndef PickupLayer_processInput
#define PickupLayer_processInput AllBinaryGameLayer_processInput
#endif
#ifndef PickupLayer_processTick
#define PickupLayer_processTick AllBinaryGameLayer_processTick
#endif
#ifndef PickupLayer_onEvent
#define PickupLayer_onEvent AllBinaryGameLayer_onEvent
#endif
#ifndef PickupLayer_onViewPositionChangeEvent
#define PickupLayer_onViewPositionChangeEvent AllBinaryGameLayer_onViewPositionChangeEvent
#endif
#ifndef PickupLayer_onChangeEvent
#define PickupLayer_onChangeEvent AllBinaryGameLayer_onChangeEvent
#endif
#ifndef PickupLayer_paintFirst
#define PickupLayer_paintFirst AllBinaryGameLayer_paintFirst
#endif
#ifndef PickupLayer_paintDebug
#define PickupLayer_paintDebug AllBinaryGameLayer_paintDebug
#endif
#ifndef PickupLayer_setWidth
#define PickupLayer_setWidth AllBinaryGameLayer_setWidth
#endif
#ifndef PickupLayer_setHeight
#define PickupLayer_setHeight AllBinaryGameLayer_setHeight
#endif
#ifndef PickupLayer_setPosition
#define PickupLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef PickupLayer_moveDXYZ
#define PickupLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef PickupLayer_getXP
#define PickupLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef PickupLayer_getYP
#define PickupLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef PickupLayer_getZP
#define PickupLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef PickupLayer_getWidth
#define PickupLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef PickupLayer_getHeight
#define PickupLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef PickupLayer_setVisible
#define PickupLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef PickupLayer_isVisible
#define PickupLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef PickupLayer_onChangeEvent
#define PickupLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef PickupLayer_getX2
#define PickupLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef PickupLayer_getY2
#define PickupLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef PickupLayer_getZ2
#define PickupLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef PickupLayer_getName
#define PickupLayer_getName AllBinaryLayer_getName
#endif
#ifndef PickupLayer_setHalfWidth
#define PickupLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef PickupLayer_getHalfWidth
#define PickupLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef PickupLayer_setHalfHeight
#define PickupLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef PickupLayer_getHalfHeight
#define PickupLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef PickupLayer_getHalfDepth
#define PickupLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef PickupLayer_getViewPosition
#define PickupLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef PickupLayer_setViewPosition
#define PickupLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef PickupLayer_getGroupInterface
#define PickupLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef PickupLayer_implmentsTickableInterface
#define PickupLayer_implmentsTickableInterface AllBinaryLayer_implmentsTickableInterface
#endif
#ifndef PickupLayer_implmentsGameInputInterface
#define PickupLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef PickupLayer_implmentsArtificialIntelligenceCompositeInterface
#define PickupLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef PickupLayer_implmentsCollidableInterface
#define PickupLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef PickupLayer_implementsThreedInterface
#define PickupLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef PickupLayer_getType
#define PickupLayer_getType AllBinaryLayer_getType
#endif
#ifndef PickupLayer_getMultiPlayerType
#define PickupLayer_getMultiPlayerType AllBinaryLayer_getMultiPlayerType
#endif
#ifndef PickupLayer_toStringAppend
#define PickupLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef PickupLayer_toString
#define PickupLayer_toString AllBinaryLayer_toString
#endif
#ifndef PickupLayer_setPosition
#define PickupLayer_setPosition Layer_setPosition
#endif
#ifndef PickupLayer_moveDXY
#define PickupLayer_moveDXY Layer_moveDXY
#endif
#ifndef PickupLayer_moveDXYZ
#define PickupLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef PickupLayer_getXP
#define PickupLayer_getXP Layer_getXP
#endif
#ifndef PickupLayer_getYP
#define PickupLayer_getYP Layer_getYP
#endif
#ifndef PickupLayer_getZP
#define PickupLayer_getZP Layer_getZP
#endif
#ifndef PickupLayer_getWidth
#define PickupLayer_getWidth Layer_getWidth
#endif
#ifndef PickupLayer_getHeight
#define PickupLayer_getHeight Layer_getHeight
#endif
#ifndef PickupLayer_getDepth
#define PickupLayer_getDepth Layer_getDepth
#endif
#ifndef PickupLayer_setVisible
#define PickupLayer_setVisible Layer_setVisible
#endif
#ifndef PickupLayer_isVisible
#define PickupLayer_isVisible Layer_isVisible
#endif
#ifndef PickupLayer_setLayerWidth
#define PickupLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef PickupLayer_setLayerHeight
#define PickupLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef PickupLayer_toStringAppend
#define PickupLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef PickupLayer_setSize
#define PickupLayer_setSize Layer_setSize
#endif
#ifndef PickupLayer_getX
#define PickupLayer_getX Layer_getX
#endif
#ifndef PickupLayer_getY
#define PickupLayer_getY Layer_getY
#endif
#ifndef PickupLayer_move
#define PickupLayer_move Layer_move
#endif
#ifndef PickupLayer_setPosition
#define PickupLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickupLayer_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_H
