#ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
#define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
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
// package org.allbinary.game.layer.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CollidableWeaponBehavior CollidableWeaponBehavior;
typedef struct GL GL;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct CollidableBaseBehavior CollidableBaseBehavior;
typedef struct DestroyedLayerProcessor DestroyedLayerProcessor;
typedef struct WeaponProperties WeaponProperties;
typedef struct GameConfigurationUtil GameConfigurationUtil;
typedef struct BasicGroupFactory BasicGroupFactory;
typedef struct MultiPlayerGameLayer MultiPlayerGameLayer;
typedef struct RemoteInfo RemoteInfo;
typedef struct NoScoreable NoScoreable;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct TickableInterface TickableInterface;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct Movement Movement;
typedef struct ViewPositionBase ViewPositionBase;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/WeaponProperties.h")
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#endif
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#if __has_include("org/allbinary/game/score/ScoreableInterface.h")
#include "org/allbinary/game/score/ScoreableInterface.h"
#endif
#include "org/allbinary/game/tick/TickableInterface.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/physics/movement/Movement.h")
#include "org/allbinary/physics/movement/Movement.h"
#endif
// #include "org/allbinary/view/ViewPosition.h"
#if __has_include("org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h")
#include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
#endif

typedef struct WeaponLayer WeaponLayer;
struct WeaponLayer {
    MultiPlayerGameLayer base;
    TickableInterface TickableInterface_interface;
    Animation* animationInterface;
    Animation* initAnimationInterface;
    Animation* destroyedAnimationInterface;
    AllBinaryLayer* sourceLayerInterface;
    int32_t totalDamage;
    int32_t initDamage;
    bool destroyed;
    ScoreableInterface* scoreableInterface;
    Movement* movement;
    WeaponProperties* weaponProperties;
    int32_t multiPlayerType;
    CollidableWeaponBehavior* collidableWeaponBehavior;
};


WeaponLayer* WeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

void WeaponLayer_init(WeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition);

void WeaponLayer_setCollidableInferface(WeaponLayer* this, CollidableBaseBehavior* collidableInferface);

void WeaponLayer_initXYZ(WeaponLayer* this, int32_t x, int32_t y, int32_t z);

void WeaponLayer_initMethod(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);

void WeaponLayer_setGroupInterfaces(WeaponLayer* this);

void WeaponLayer_processTick(WeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager);

bool WeaponLayer_isDestroyed(WeaponLayer* this);

void WeaponLayer_damage(WeaponLayer* this, int32_t damage, int32_t damageType);

void WeaponLayer_givePoints(WeaponLayer* this, int32_t total);

bool WeaponLayer_isExhausted(WeaponLayer* this);

int32_t WeaponLayer_getDamage(WeaponLayer* this, int32_t damageType);

void WeaponLayer_setDestroyed(WeaponLayer* this, bool destroyed);

int32_t WeaponLayer_getInitDamage(WeaponLayer* this);

void WeaponLayer_setAnimationInterface(WeaponLayer* this, Animation* animationInterface);

Animation* WeaponLayer_getAnimationInterface(WeaponLayer* this);

Animation* WeaponLayer_getInitAnimationInterfaceP(WeaponLayer* this);

void WeaponLayer_setInitAnimationInterfaceP(WeaponLayer* this, Animation* initAnimationInterface);

Animation* WeaponLayer_getDestroyedAnimationInterface(WeaponLayer* this);

AllBinaryLayer* WeaponLayer_getOwnerLayerInterface(WeaponLayer* this);

void WeaponLayer_setOwnerLayerInterface(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface);

void WeaponLayer_paint(WeaponLayer* this, Graphics* graphics);

void WeaponLayer_paintThreed(WeaponLayer* this, Graphics* graphics);

Movement* WeaponLayer_getMovement(WeaponLayer* this);

void WeaponLayer_setMovement(WeaponLayer* this, Movement* movement);

int32_t WeaponLayer_getType(WeaponLayer* this);

int32_t WeaponLayer_getStaticType(void);

int32_t WeaponLayer_getMultiPlayerType(WeaponLayer* this);

void WeaponLayer_setWeaponPropertiesP(WeaponLayer* this, WeaponProperties* weaponProperties);

WeaponProperties* WeaponLayer_getWeaponPropertiesP(WeaponLayer* this);

bool WeaponLayer_implmentsTickableInterface(WeaponLayer* this);

void WeaponLayer_set(WeaponLayer* this, GL* gl);
#define WeaponLayer_new8 WeaponLayer_new
#define WeaponLayer_init8 WeaponLayer_init
#ifndef WeaponLayer_getMultiplayerBehavior
#define WeaponLayer_getMultiplayerBehavior MultiPlayerGameLayer_getMultiplayerBehavior
#endif
#ifndef WeaponLayer_setPingInfo
#define WeaponLayer_setPingInfo MultiPlayerGameLayer_setPingInfo
#endif
#ifndef WeaponLayer_setFiring
#define WeaponLayer_setFiring MultiPlayerGameLayer_setFiring
#endif
#ifndef WeaponLayer_getFiring
#define WeaponLayer_getFiring MultiPlayerGameLayer_getFiring
#endif
#ifndef WeaponLayer_getNullInstance
#define WeaponLayer_getNullInstance CollidableDestroyableDamageableLayer_getNullInstance
#endif
#ifndef WeaponLayer_initPosition
#define WeaponLayer_initPosition CollidableDestroyableDamageableLayer_initPosition
#endif
#ifndef WeaponLayer_initPositionXYZ
#define WeaponLayer_initPositionXYZ CollidableDestroyableDamageableLayer_initPositionXYZ
#endif
#ifndef WeaponLayer_getGroupInterface
#define WeaponLayer_getGroupInterface CollidableDestroyableDamageableLayer_getGroupInterface
#endif
#ifndef WeaponLayer_setGroupInterface
#define WeaponLayer_setGroupInterface CollidableDestroyableDamageableLayer_setGroupInterface
#endif
#ifndef WeaponLayer_setAllBinaryGameLayerManager
#define WeaponLayer_setAllBinaryGameLayerManager CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager
#endif
#ifndef WeaponLayer_isReadyForExplosion
#define WeaponLayer_isReadyForExplosion CollidableDestroyableDamageableLayer_isReadyForExplosion
#endif
#ifndef WeaponLayer_setReadyForExplosion
#define WeaponLayer_setReadyForExplosion CollidableDestroyableDamageableLayer_setReadyForExplosion
#endif
#ifndef WeaponLayer_getInitWidth
#define WeaponLayer_getInitWidth CollidableDestroyableDamageableLayer_getInitWidth
#endif
#ifndef WeaponLayer_getInitHeight
#define WeaponLayer_getInitHeight CollidableDestroyableDamageableLayer_getInitHeight
#endif
#ifndef WeaponLayer_getInitX
#define WeaponLayer_getInitX CollidableDestroyableDamageableLayer_getInitX
#endif
#ifndef WeaponLayer_getInitY
#define WeaponLayer_getInitY CollidableDestroyableDamageableLayer_getInitY
#endif
#ifndef WeaponLayer_up
#define WeaponLayer_up CollidableDestroyableDamageableLayer_up
#endif
#ifndef WeaponLayer_down
#define WeaponLayer_down CollidableDestroyableDamageableLayer_down
#endif
#ifndef WeaponLayer_right
#define WeaponLayer_right CollidableDestroyableDamageableLayer_right
#endif
#ifndef WeaponLayer_left
#define WeaponLayer_left CollidableDestroyableDamageableLayer_left
#endif
#ifndef WeaponLayer_strafeLeft
#define WeaponLayer_strafeLeft CollidableDestroyableDamageableLayer_strafeLeft
#endif
#ifndef WeaponLayer_strafeRight
#define WeaponLayer_strafeRight CollidableDestroyableDamageableLayer_strafeRight
#endif
#ifndef WeaponLayer_fire
#define WeaponLayer_fire CollidableDestroyableDamageableLayer_fire
#endif
#ifndef WeaponLayer_special1
#define WeaponLayer_special1 CollidableDestroyableDamageableLayer_special1
#endif
#ifndef WeaponLayer_special2
#define WeaponLayer_special2 CollidableDestroyableDamageableLayer_special2
#endif
#ifndef WeaponLayer_special3
#define WeaponLayer_special3 CollidableDestroyableDamageableLayer_special3
#endif
#ifndef WeaponLayer_special4
#define WeaponLayer_special4 CollidableDestroyableDamageableLayer_special4
#endif
#ifndef WeaponLayer_special5
#define WeaponLayer_special5 CollidableDestroyableDamageableLayer_special5
#endif
#ifndef WeaponLayer_upAnalog
#define WeaponLayer_upAnalog CollidableDestroyableDamageableLayer_upAnalog
#endif
#ifndef WeaponLayer_downAnalog
#define WeaponLayer_downAnalog CollidableDestroyableDamageableLayer_downAnalog
#endif
#ifndef WeaponLayer_rightAnalog
#define WeaponLayer_rightAnalog CollidableDestroyableDamageableLayer_rightAnalog
#endif
#ifndef WeaponLayer_leftAnalog
#define WeaponLayer_leftAnalog CollidableDestroyableDamageableLayer_leftAnalog
#endif
#ifndef WeaponLayer_rightTrigger
#define WeaponLayer_rightTrigger CollidableDestroyableDamageableLayer_rightTrigger
#endif
#ifndef WeaponLayer_leftTrigger
#define WeaponLayer_leftTrigger CollidableDestroyableDamageableLayer_leftTrigger
#endif
#ifndef WeaponLayer_onDestroyed
#define WeaponLayer_onDestroyed CollidableDestroyableDamageableLayer_onDestroyed
#endif
#ifndef WeaponLayer_getPickupBehavior
#define WeaponLayer_getPickupBehavior CollidableDestroyableDamageableLayer_getPickupBehavior
#endif
#ifndef WeaponLayer_setPickupBehavior
#define WeaponLayer_setPickupBehavior CollidableDestroyableDamageableLayer_setPickupBehavior
#endif
#ifndef WeaponLayer_addPart
#define WeaponLayer_addPart CollidableDestroyableDamageableLayer_addPart
#endif
#ifndef WeaponLayer_setPartInterfaceArray
#define WeaponLayer_setPartInterfaceArray CollidableDestroyableDamageableLayer_setPartInterfaceArray
#endif
#ifndef WeaponLayer_getPartInterfaceArray
#define WeaponLayer_getPartInterfaceArray CollidableDestroyableDamageableLayer_getPartInterfaceArray
#endif
#ifndef WeaponLayer_toStringAppend
#define WeaponLayer_toStringAppend CollidableDestroyableDamageableLayer_toStringAppend
#endif
#ifndef WeaponLayer_toString
#define WeaponLayer_toString CollidableDestroyableDamageableLayer_toString
#endif
#ifndef WeaponLayer_getNullInstance
#define WeaponLayer_getNullInstance CollidableCompositeLayer_getNullInstance
#endif
#ifndef WeaponLayer_getArtificialIntelligenceInterface
#define WeaponLayer_getArtificialIntelligenceInterface CollidableCompositeLayer_getArtificialIntelligenceInterface
#endif
#ifndef WeaponLayer_getCollidableInferface
#define WeaponLayer_getCollidableInferface CollidableCompositeLayer_getCollidableInferface
#endif
#ifndef WeaponLayer_implmentsCollidableInterface
#define WeaponLayer_implmentsCollidableInterface CollidableCompositeLayer_implmentsCollidableInterface
#endif
#ifndef WeaponLayer_toStringAppend
#define WeaponLayer_toStringAppend CollidableCompositeLayer_toStringAppend
#endif
#ifndef WeaponLayer_toString
#define WeaponLayer_toString CollidableCompositeLayer_toString
#endif
#ifndef WeaponLayer_createPaintable
#define WeaponLayer_createPaintable AllBinaryGameLayer_createPaintable
#endif
#ifndef WeaponLayer_move
#define WeaponLayer_move AllBinaryGameLayer_move
#endif
#ifndef WeaponLayer_getGameKeyEventList
#define WeaponLayer_getGameKeyEventList AllBinaryGameLayer_getGameKeyEventList
#endif
#ifndef WeaponLayer_processInput
#define WeaponLayer_processInput AllBinaryGameLayer_processInput
#endif
#ifndef WeaponLayer_onEvent
#define WeaponLayer_onEvent AllBinaryGameLayer_onEvent
#endif
#ifndef WeaponLayer_onViewPositionChangeEvent
#define WeaponLayer_onViewPositionChangeEvent AllBinaryGameLayer_onViewPositionChangeEvent
#endif
#ifndef WeaponLayer_onChangeEvent
#define WeaponLayer_onChangeEvent AllBinaryGameLayer_onChangeEvent
#endif
#ifndef WeaponLayer_paintFirst
#define WeaponLayer_paintFirst AllBinaryGameLayer_paintFirst
#endif
#ifndef WeaponLayer_paintDebug
#define WeaponLayer_paintDebug AllBinaryGameLayer_paintDebug
#endif
#ifndef WeaponLayer_setWidth
#define WeaponLayer_setWidth AllBinaryGameLayer_setWidth
#endif
#ifndef WeaponLayer_setHeight
#define WeaponLayer_setHeight AllBinaryGameLayer_setHeight
#endif
#ifndef WeaponLayer_setPosition
#define WeaponLayer_setPosition AllBinaryLayer_setPosition
#endif
#ifndef WeaponLayer_moveDXYZ
#define WeaponLayer_moveDXYZ AllBinaryLayer_moveDXYZ
#endif
#ifndef WeaponLayer_getXP
#define WeaponLayer_getXP AllBinaryLayer_getXP
#endif
#ifndef WeaponLayer_getYP
#define WeaponLayer_getYP AllBinaryLayer_getYP
#endif
#ifndef WeaponLayer_getZP
#define WeaponLayer_getZP AllBinaryLayer_getZP
#endif
#ifndef WeaponLayer_getWidth
#define WeaponLayer_getWidth AllBinaryLayer_getWidth
#endif
#ifndef WeaponLayer_getHeight
#define WeaponLayer_getHeight AllBinaryLayer_getHeight
#endif
#ifndef WeaponLayer_setVisible
#define WeaponLayer_setVisible AllBinaryLayer_setVisible
#endif
#ifndef WeaponLayer_isVisible
#define WeaponLayer_isVisible AllBinaryLayer_isVisible
#endif
#ifndef WeaponLayer_onChangeEvent
#define WeaponLayer_onChangeEvent AllBinaryLayer_onChangeEvent
#endif
#ifndef WeaponLayer_getX2
#define WeaponLayer_getX2 AllBinaryLayer_getX2
#endif
#ifndef WeaponLayer_getY2
#define WeaponLayer_getY2 AllBinaryLayer_getY2
#endif
#ifndef WeaponLayer_getZ2
#define WeaponLayer_getZ2 AllBinaryLayer_getZ2
#endif
#ifndef WeaponLayer_getName
#define WeaponLayer_getName AllBinaryLayer_getName
#endif
#ifndef WeaponLayer_setHalfWidth
#define WeaponLayer_setHalfWidth AllBinaryLayer_setHalfWidth
#endif
#ifndef WeaponLayer_getHalfWidth
#define WeaponLayer_getHalfWidth AllBinaryLayer_getHalfWidth
#endif
#ifndef WeaponLayer_setHalfHeight
#define WeaponLayer_setHalfHeight AllBinaryLayer_setHalfHeight
#endif
#ifndef WeaponLayer_getHalfHeight
#define WeaponLayer_getHalfHeight AllBinaryLayer_getHalfHeight
#endif
#ifndef WeaponLayer_getHalfDepth
#define WeaponLayer_getHalfDepth AllBinaryLayer_getHalfDepth
#endif
#ifndef WeaponLayer_getViewPosition
#define WeaponLayer_getViewPosition AllBinaryLayer_getViewPosition
#endif
#ifndef WeaponLayer_setViewPosition
#define WeaponLayer_setViewPosition AllBinaryLayer_setViewPosition
#endif
#ifndef WeaponLayer_getGroupInterface
#define WeaponLayer_getGroupInterface AllBinaryLayer_getGroupInterface
#endif
#ifndef WeaponLayer_implmentsGameInputInterface
#define WeaponLayer_implmentsGameInputInterface AllBinaryLayer_implmentsGameInputInterface
#endif
#ifndef WeaponLayer_implmentsArtificialIntelligenceCompositeInterface
#define WeaponLayer_implmentsArtificialIntelligenceCompositeInterface AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface
#endif
#ifndef WeaponLayer_implmentsCollidableInterface
#define WeaponLayer_implmentsCollidableInterface AllBinaryLayer_implmentsCollidableInterface
#endif
#ifndef WeaponLayer_implementsThreedInterface
#define WeaponLayer_implementsThreedInterface AllBinaryLayer_implementsThreedInterface
#endif
#ifndef WeaponLayer_toStringAppend
#define WeaponLayer_toStringAppend AllBinaryLayer_toStringAppend
#endif
#ifndef WeaponLayer_toString
#define WeaponLayer_toString AllBinaryLayer_toString
#endif
#ifndef WeaponLayer_setPosition
#define WeaponLayer_setPosition Layer_setPosition
#endif
#ifndef WeaponLayer_moveDXY
#define WeaponLayer_moveDXY Layer_moveDXY
#endif
#ifndef WeaponLayer_moveDXYZ
#define WeaponLayer_moveDXYZ Layer_moveDXYZ
#endif
#ifndef WeaponLayer_getXP
#define WeaponLayer_getXP Layer_getXP
#endif
#ifndef WeaponLayer_getYP
#define WeaponLayer_getYP Layer_getYP
#endif
#ifndef WeaponLayer_getZP
#define WeaponLayer_getZP Layer_getZP
#endif
#ifndef WeaponLayer_getWidth
#define WeaponLayer_getWidth Layer_getWidth
#endif
#ifndef WeaponLayer_getHeight
#define WeaponLayer_getHeight Layer_getHeight
#endif
#ifndef WeaponLayer_getDepth
#define WeaponLayer_getDepth Layer_getDepth
#endif
#ifndef WeaponLayer_setVisible
#define WeaponLayer_setVisible Layer_setVisible
#endif
#ifndef WeaponLayer_isVisible
#define WeaponLayer_isVisible Layer_isVisible
#endif
#ifndef WeaponLayer_setLayerWidth
#define WeaponLayer_setLayerWidth Layer_setLayerWidth
#endif
#ifndef WeaponLayer_setLayerHeight
#define WeaponLayer_setLayerHeight Layer_setLayerHeight
#endif
#ifndef WeaponLayer_toStringAppend
#define WeaponLayer_toStringAppend Layer_toStringAppend
#endif
#ifndef WeaponLayer_setSize
#define WeaponLayer_setSize Layer_setSize
#endif
#ifndef WeaponLayer_getX
#define WeaponLayer_getX Layer_getX
#endif
#ifndef WeaponLayer_getY
#define WeaponLayer_getY Layer_getY
#endif
#ifndef WeaponLayer_move
#define WeaponLayer_move Layer_move
#endif
#ifndef WeaponLayer_setPosition
#define WeaponLayer_setPosition Layer_setPosition
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WeaponLayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WeaponLayer_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/WeaponProperties.h")
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/physics/movement/Movement.h")
#include "org/allbinary/physics/movement/Movement.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_H
