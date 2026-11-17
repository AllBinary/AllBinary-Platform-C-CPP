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
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"

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
void WeaponLayer_init(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable);
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

static void WeaponLayer_initFields(WeaponLayer* this) {
    this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
    
    
    this->sourceLayerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
    this->totalDamage = 0;
    this->initDamage = 0;
    this->destroyed = true;
    this->scoreableInterface = NoScoreable_getInstance();
    
    this->weaponProperties = WeaponProperties_NULL_WEAPON_PROPERTIES;
    
    this->collidableWeaponBehavior = CollidableWeaponBehavior_getNullInstance();
}


void WeaponLayer_init(WeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
        MultiPlayerGameLayer_init(&this->base, remoteInfo, BasicGroupFactory_getInstance()->NONE_ARRAY, name, rectangle, viewPosition);
        WeaponLayer_initFields(this);
        this->initAnimationInterface = animationInterface;
        WeaponLayer_setAnimationInterface(this, animationInterface);
        this->destroyedAnimationInterface = destroyedAnimationInterface;
        this->movement = movement;
        this->multiPlayerType = multiPlayerType;
}

WeaponLayer* WeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    WeaponLayer* this = calloc(1, sizeof(WeaponLayer));
    WeaponLayer_init(this, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
    return this;
}


void WeaponLayer_setCollidableInferface(WeaponLayer* this, CollidableBaseBehavior* collidableInferface) {
        MultiPlayerGameLayer_setCollidableInferface((&this->base), collidableInferface);
        this->collidableWeaponBehavior = ((CollidableWeaponBehavior*) WeaponLayer_getCollidableInferface(this));
}


// throws Exception
void WeaponLayer_initXYZ(WeaponLayer* this, int32_t x, int32_t y, int32_t z) {
        this->x = x;
        this->y = y;
        this->z = z;
}


// throws Exception
void WeaponLayer_init(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) {
        WeaponLayer_setWeaponPropertiesP(this, weaponProperties);
        WeaponLayer_setReadyForExplosion(this, false);
        WeaponLayer_setAnimationInterface(this, WeaponLayer_getInitAnimationInterfaceP(this));
        WeaponLayer_setOwnerLayerInterface(this, sourceLayerInterface);
        CollidableWeaponBehavior_init(this->collidableWeaponBehavior, sourceLayerInterface);
        WeaponLayer_setGroupInterfaces(this);
        if (scoreable != nullptr) {
            this->scoreableInterface = scoreable;
        }
        this->totalDamage = 0;
        this->initDamage = WeaponProperties_getDamage(weaponProperties);
        WeaponLayer_setDestroyed(this, false);
        Movement_init(this->movement, WeaponProperties_getSpeed(weaponProperties), angle, otherAngle);
}


void WeaponLayer_setGroupInterfaces(WeaponLayer* this) {
        BasicGroupFactory* basicGroupFactory = BasicGroupFactory_getInstance();
        if (AllBinaryLayer_getGroupInterface(this->sourceLayerInterface)[0] == basicGroupFactory->ENEMY) {
            WeaponLayer_setGroupInterface(this, basicGroupFactory->ENEMY_ARRAY);
        } else {
            WeaponLayer_setGroupInterface(this, AllBinaryLayer_getGroupInterface(this->sourceLayerInterface));
        }
}


// throws Exception
void WeaponLayer_processTick(WeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (WeaponLayer_isExhausted(this) && !WeaponLayer_isDestroyed(this)) {
            if (WeaponLayer_isReadyForExplosion(this)) {
                IndexedAnimation* indexedAnimationInterface = ((IndexedAnimation*) WeaponLayer_getAnimationInterface(this));
                int32_t currentFrame = IndexedAnimation_getFrame(indexedAnimationInterface);
                if (currentFrame < IndexedAnimation_getAnimationSize(indexedAnimationInterface) - 1) {
                    IndexedAnimation_nextFrame(indexedAnimationInterface);
                } else {
                    WeaponLayer_setDestroyed(this, true);
                }
            } else {
                CollidableWeaponBehavior* collidableWeaponBehavior = ((CollidableWeaponBehavior*) WeaponLayer_getCollidableInferface(this));
                if (CollidableWeaponBehavior_isCollided(collidableWeaponBehavior)) {
                    WeaponLayer_setAnimationInterface(this, this->destroyedAnimationInterface);
                    JAVA_CALL(WeaponLayer_getMovement(this), stop);
                    WeaponLayer_setReadyForExplosion(this, true);
                } else {
                    WeaponLayer_setDestroyed(this, true);
                }
            }
        }
        Movement_process(this->movement, this);
        this->totalDamage += WeaponProperties_getDissipation(this->weaponProperties);
}


bool WeaponLayer_isDestroyed(WeaponLayer* this) {
        return this->destroyed;
}


void WeaponLayer_damage(WeaponLayer* this, int32_t damage, int32_t damageType) {
        this->totalDamage += damage * damage;
}


void WeaponLayer_givePoints(WeaponLayer* this, int32_t total) {
        ScoreableInterface_addPoints(this->scoreableInterface, GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil_getInstance()) * total);
}


bool WeaponLayer_isExhausted(WeaponLayer* this) {
        if (this->totalDamage > WeaponLayer_getInitDamage(this) || this->totalDamage < 0) {
            return true;
        } else {
            return false;
        }
}


int32_t WeaponLayer_getDamage(WeaponLayer* this, int32_t damageType) {
        if (!WeaponLayer_isExhausted(this)) {
            int32_t total = WeaponLayer_getInitDamage(this) - this->totalDamage;
            WeaponLayer_givePoints(this, total);
            return total;
        }
        return 0;
}


void WeaponLayer_setDestroyed(WeaponLayer* this, bool destroyed) {
        this->destroyed = destroyed;
        if (WeaponLayer_isDestroyed(this)) {
            this->scoreableInterface = NoScoreable_getInstance();
            DestroyedLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this);
        }
}


int32_t WeaponLayer_getInitDamage(WeaponLayer* this) {
        return this->initDamage;
}


void WeaponLayer_setAnimationInterface(WeaponLayer* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


Animation* WeaponLayer_getAnimationInterface(WeaponLayer* this) {
        return this->animationInterface;
}


Animation* WeaponLayer_getInitAnimationInterfaceP(WeaponLayer* this) {
        return this->initAnimationInterface;
}


void WeaponLayer_setInitAnimationInterfaceP(WeaponLayer* this, Animation* initAnimationInterface) {
        this->initAnimationInterface = initAnimationInterface;
}


Animation* WeaponLayer_getDestroyedAnimationInterface(WeaponLayer* this) {
        return this->destroyedAnimationInterface;
}


AllBinaryLayer* WeaponLayer_getOwnerLayerInterface(WeaponLayer* this) {
        return this->sourceLayerInterface;
}


void WeaponLayer_setOwnerLayerInterface(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface) {
        this->sourceLayerInterface = sourceLayerInterface;
}


void WeaponLayer_paint(WeaponLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = WeaponLayer_getViewPosition(this);
        Animation_paintXY(this->animationInterface, graphics, ViewPositionBase_getX(viewPosition) - WeaponLayer_getHalfWidth(this), ViewPositionBase_getY(viewPosition) - WeaponLayer_getHalfHeight(this));
}


void WeaponLayer_paintThreed(WeaponLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = WeaponLayer_getViewPosition(this);
        Animation_paintThreedXYZ(this->animationInterface, graphics, ViewPositionBase_getX(viewPosition) - WeaponLayer_getHalfWidth(this), ViewPositionBase_getY(viewPosition) - WeaponLayer_getHalfHeight(this), ViewPositionBase_getZ(viewPosition) - WeaponLayer_getHalfDepth(this));
}


Movement* WeaponLayer_getMovement(WeaponLayer* this) {
        return this->movement;
}


void WeaponLayer_setMovement(WeaponLayer* this, Movement* movement) {
        this->movement = movement;
}


int32_t WeaponLayer_getType(WeaponLayer* this) {
        return WeaponLayer_getStaticType();
}


int32_t WeaponLayer_getStaticType(void) {
        return 0;
}


int32_t WeaponLayer_getMultiPlayerType(WeaponLayer* this) {
        return this->multiPlayerType;
}


void WeaponLayer_setWeaponPropertiesP(WeaponLayer* this, WeaponProperties* weaponProperties) {
        this->weaponProperties = weaponProperties;
}


WeaponProperties* WeaponLayer_getWeaponPropertiesP(WeaponLayer* this) {
        return this->weaponProperties;
}


bool WeaponLayer_implmentsTickableInterface(WeaponLayer* this) {
        return true;
}


// throws Exception
void WeaponLayer_set(WeaponLayer* this, GL* gl) {
        Animation_set(this->initAnimationInterface, gl);
}

