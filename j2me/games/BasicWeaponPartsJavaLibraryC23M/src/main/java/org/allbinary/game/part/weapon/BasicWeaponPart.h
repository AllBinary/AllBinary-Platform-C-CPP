#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H
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
typedef struct SalvoInterface SalvoInterface;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct WeaponProperties WeaponProperties;
typedef struct PartInterface PartInterface;
typedef struct NoScoreable NoScoreable;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct CommonStrings CommonStrings;
typedef struct ViewPositionBase ViewPositionBase;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/WeaponProperties.h")
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#endif
#include "org/allbinary/game/part/PartInterface.h"
#if __has_include("org/allbinary/game/score/ScoreableInterface.h")
#include "org/allbinary/game/score/ScoreableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/RelativeRelationship.h")
#include "org/allbinary/graphics/RelativeRelationship.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#include "org/allbinary/game/part/weapon/SalvoInterface.h"

typedef struct BasicWeaponPart BasicWeaponPart;
struct BasicWeaponPart {
    PartInterface PartInterface_interface;
    SalvoInterface SalvoInterface_interface;
    Animation* animationInterface;
    AllBinaryLayer* ownerLayerInterface;
    WeaponProperties* weaponProperties;
    ScoreableInterface* scoreableInterface;
    RelativeRelationship* relativeRelationship;
};

extern BasicWeaponPart* BasicWeaponPart_NULL_BASIC_WEAPON_PART;

BasicWeaponPart* BasicWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

BasicWeaponPart* BasicWeaponPart_createBasicWeaponPart(Animation* animationInterface);

void BasicWeaponPart_init(BasicWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void BasicWeaponPart_initMethod(BasicWeaponPart* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void BasicWeaponPart_process(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle);

void BasicWeaponPart_processScore(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);

AllBinaryLayer* BasicWeaponPart_getOwnerLayerInterface(BasicWeaponPart* this);

void BasicWeaponPart_setOwnerLayerInterface(BasicWeaponPart* this, AllBinaryLayer* ownerLayerInterface);

Animation* BasicWeaponPart_getAnimationInterface(BasicWeaponPart* this);

void BasicWeaponPart_setAnimationInterface(BasicWeaponPart* this, Animation* animationInterface);

void BasicWeaponPart_paint(BasicWeaponPart* this, Graphics* graphics);

void BasicWeaponPart_paintThreed(BasicWeaponPart* this, Graphics* graphics);

WeaponProperties* BasicWeaponPart_getWeaponProperties(BasicWeaponPart* this);

void BasicWeaponPart_setWeaponProperties(BasicWeaponPart* this, WeaponProperties* weaponProperties);
#define BasicWeaponPart_new5 BasicWeaponPart_new
#define BasicWeaponPart_init5 BasicWeaponPart_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicWeaponPart_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicWeaponPart_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/WeaponProperties.h")
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H
