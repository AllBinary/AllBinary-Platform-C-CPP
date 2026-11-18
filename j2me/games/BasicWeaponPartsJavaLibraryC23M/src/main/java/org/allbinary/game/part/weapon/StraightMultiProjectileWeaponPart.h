#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H
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
typedef struct NoDecimalTrigTable NoDecimalTrigTable;
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif
#if __has_include("org/allbinary/math/NoDecimalTrigTable.h")
#include "org/allbinary/math/NoDecimalTrigTable.h"
#endif
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

typedef struct StraightMultiProjectileWeaponPart StraightMultiProjectileWeaponPart;
struct StraightMultiProjectileWeaponPart {
    BasicWeaponPart base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
    int32_t total;
    NoDecimalTrigTable* noDecimalTrigTable;
};


StraightMultiProjectileWeaponPart* StraightMultiProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

StraightMultiProjectileWeaponPart* StraightMultiProjectileWeaponPart_createStraightMultiProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool);

void StraightMultiProjectileWeaponPart_init(StraightMultiProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void StraightMultiProjectileWeaponPart_processScore(StraightMultiProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);
#define StraightMultiProjectileWeaponPart_new7 StraightMultiProjectileWeaponPart_new
#define StraightMultiProjectileWeaponPart_init7 StraightMultiProjectileWeaponPart_init
#ifndef StraightMultiProjectileWeaponPart_createBasicWeaponPart
#define StraightMultiProjectileWeaponPart_createBasicWeaponPart BasicWeaponPart_createBasicWeaponPart
#endif
#ifndef StraightMultiProjectileWeaponPart_process
#define StraightMultiProjectileWeaponPart_process BasicWeaponPart_process
#endif
#ifndef StraightMultiProjectileWeaponPart_getOwnerLayerInterface
#define StraightMultiProjectileWeaponPart_getOwnerLayerInterface BasicWeaponPart_getOwnerLayerInterface
#endif
#ifndef StraightMultiProjectileWeaponPart_setOwnerLayerInterface
#define StraightMultiProjectileWeaponPart_setOwnerLayerInterface BasicWeaponPart_setOwnerLayerInterface
#endif
#ifndef StraightMultiProjectileWeaponPart_getAnimationInterface
#define StraightMultiProjectileWeaponPart_getAnimationInterface BasicWeaponPart_getAnimationInterface
#endif
#ifndef StraightMultiProjectileWeaponPart_setAnimationInterface
#define StraightMultiProjectileWeaponPart_setAnimationInterface BasicWeaponPart_setAnimationInterface
#endif
#ifndef StraightMultiProjectileWeaponPart_paint
#define StraightMultiProjectileWeaponPart_paint BasicWeaponPart_paint
#endif
#ifndef StraightMultiProjectileWeaponPart_paintThreed
#define StraightMultiProjectileWeaponPart_paintThreed BasicWeaponPart_paintThreed
#endif
#ifndef StraightMultiProjectileWeaponPart_getWeaponProperties
#define StraightMultiProjectileWeaponPart_getWeaponProperties BasicWeaponPart_getWeaponProperties
#endif
#ifndef StraightMultiProjectileWeaponPart_setWeaponProperties
#define StraightMultiProjectileWeaponPart_setWeaponProperties BasicWeaponPart_setWeaponProperties
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StraightMultiProjectileWeaponPart_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StraightMultiProjectileWeaponPart_register(void);


#endif // ORG_ALLBINARY_GAME_PART_WEAPON_STRAIGHTMULTIPROJECTILEWEAPONPART_H
