#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H
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
// package org.allbinary.game.part.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicWeaponPart BasicWeaponPart;
typedef struct Animation Animation;
typedef struct WeaponProperties WeaponProperties;
typedef struct WeaponLayer WeaponLayer;
typedef struct WeaponLayerCircularPool WeaponLayerCircularPool;
typedef struct NoScoreable NoScoreable;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

typedef struct BasicProjectileWeaponPart BasicProjectileWeaponPart;
struct BasicProjectileWeaponPart {
    BasicWeaponPart base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
};


BasicProjectileWeaponPart* BasicProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

BasicProjectileWeaponPart* BasicProjectileWeaponPart_createBasicProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool);

void BasicProjectileWeaponPart_init(BasicProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void BasicProjectileWeaponPart_processScore(BasicProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);
#define BasicProjectileWeaponPart_new6 BasicProjectileWeaponPart_new
#define BasicProjectileWeaponPart_init6 BasicProjectileWeaponPart_init
#ifndef BasicProjectileWeaponPart_createBasicWeaponPart
#define BasicProjectileWeaponPart_createBasicWeaponPart BasicWeaponPart_createBasicWeaponPart
#endif
#ifndef BasicProjectileWeaponPart_process
#define BasicProjectileWeaponPart_process BasicWeaponPart_process
#endif
#ifndef BasicProjectileWeaponPart_getOwnerLayerInterface
#define BasicProjectileWeaponPart_getOwnerLayerInterface BasicWeaponPart_getOwnerLayerInterface
#endif
#ifndef BasicProjectileWeaponPart_setOwnerLayerInterface
#define BasicProjectileWeaponPart_setOwnerLayerInterface BasicWeaponPart_setOwnerLayerInterface
#endif
#ifndef BasicProjectileWeaponPart_getAnimationInterface
#define BasicProjectileWeaponPart_getAnimationInterface BasicWeaponPart_getAnimationInterface
#endif
#ifndef BasicProjectileWeaponPart_setAnimationInterface
#define BasicProjectileWeaponPart_setAnimationInterface BasicWeaponPart_setAnimationInterface
#endif
#ifndef BasicProjectileWeaponPart_paint
#define BasicProjectileWeaponPart_paint BasicWeaponPart_paint
#endif
#ifndef BasicProjectileWeaponPart_paintThreed
#define BasicProjectileWeaponPart_paintThreed BasicWeaponPart_paintThreed
#endif
#ifndef BasicProjectileWeaponPart_getWeaponProperties
#define BasicProjectileWeaponPart_getWeaponProperties BasicWeaponPart_getWeaponProperties
#endif
#ifndef BasicProjectileWeaponPart_setWeaponProperties
#define BasicProjectileWeaponPart_setWeaponProperties BasicWeaponPart_setWeaponProperties
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicProjectileWeaponPart_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicProjectileWeaponPart_register(void);


#endif // ORG_ALLBINARY_GAME_PART_WEAPON_BASICPROJECTILEWEAPONPART_H
