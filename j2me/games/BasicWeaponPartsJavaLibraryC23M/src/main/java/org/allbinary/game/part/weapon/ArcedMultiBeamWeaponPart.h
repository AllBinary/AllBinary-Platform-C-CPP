#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_H
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
typedef struct ScoreableInterface ScoreableInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h")
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#endif
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

typedef struct ArcedMultiBeamWeaponPart ArcedMultiBeamWeaponPart;
struct ArcedMultiBeamWeaponPart {
    BasicWeaponPart base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
    int32_t total;
    int32_t TOTAL_ANGLE;
};


ArcedMultiBeamWeaponPart* ArcedMultiBeamWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void ArcedMultiBeamWeaponPart_init(ArcedMultiBeamWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void ArcedMultiBeamWeaponPart_processScore(ArcedMultiBeamWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);
#define ArcedMultiBeamWeaponPart_new7 ArcedMultiBeamWeaponPart_new
#define ArcedMultiBeamWeaponPart_init7 ArcedMultiBeamWeaponPart_init
#ifndef ArcedMultiBeamWeaponPart_createBasicWeaponPart
#define ArcedMultiBeamWeaponPart_createBasicWeaponPart BasicWeaponPart_createBasicWeaponPart
#endif
#ifndef ArcedMultiBeamWeaponPart_process
#define ArcedMultiBeamWeaponPart_process BasicWeaponPart_process
#endif
#ifndef ArcedMultiBeamWeaponPart_getOwnerLayerInterface
#define ArcedMultiBeamWeaponPart_getOwnerLayerInterface BasicWeaponPart_getOwnerLayerInterface
#endif
#ifndef ArcedMultiBeamWeaponPart_setOwnerLayerInterface
#define ArcedMultiBeamWeaponPart_setOwnerLayerInterface BasicWeaponPart_setOwnerLayerInterface
#endif
#ifndef ArcedMultiBeamWeaponPart_getAnimationInterface
#define ArcedMultiBeamWeaponPart_getAnimationInterface BasicWeaponPart_getAnimationInterface
#endif
#ifndef ArcedMultiBeamWeaponPart_setAnimationInterface
#define ArcedMultiBeamWeaponPart_setAnimationInterface BasicWeaponPart_setAnimationInterface
#endif
#ifndef ArcedMultiBeamWeaponPart_paint
#define ArcedMultiBeamWeaponPart_paint BasicWeaponPart_paint
#endif
#ifndef ArcedMultiBeamWeaponPart_paintThreed
#define ArcedMultiBeamWeaponPart_paintThreed BasicWeaponPart_paintThreed
#endif
#ifndef ArcedMultiBeamWeaponPart_getWeaponProperties
#define ArcedMultiBeamWeaponPart_getWeaponProperties BasicWeaponPart_getWeaponProperties
#endif
#ifndef ArcedMultiBeamWeaponPart_setWeaponProperties
#define ArcedMultiBeamWeaponPart_setWeaponProperties BasicWeaponPart_setWeaponProperties
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArcedMultiBeamWeaponPart_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArcedMultiBeamWeaponPart_register(void);


#endif // ORG_ALLBINARY_GAME_PART_WEAPON_ARCEDMULTIBEAMWEAPONPART_H
