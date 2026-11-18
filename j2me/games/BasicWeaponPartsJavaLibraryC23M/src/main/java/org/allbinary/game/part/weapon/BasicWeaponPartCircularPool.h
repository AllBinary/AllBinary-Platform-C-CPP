#ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H
#define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H
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
typedef struct BasicWeaponPartFactoryInterface BasicWeaponPartFactoryInterface;
typedef struct WeaponProperties WeaponProperties;
typedef struct ScoreableInterface ScoreableInterface;
typedef struct RelativeRelationship RelativeRelationship;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/game/part/weapon/BasicWeaponPart.h")
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#endif

typedef struct BasicWeaponPartCircularPool BasicWeaponPartCircularPool;
struct BasicWeaponPartCircularPool {
    BasicWeaponPart* basicWeaponPart;
};

extern BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_NULL_BASIC_WEAPON_PART_CIRCULAR_POOL;

BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_new(void);
void BasicWeaponPartCircularPool_init(BasicWeaponPartCircularPool* this);

void BasicWeaponPartCircularPool_initMethod(BasicWeaponPartCircularPool* this, BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface);

BasicWeaponPart* BasicWeaponPartCircularPool_getInstance(BasicWeaponPartCircularPool* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicWeaponPartCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicWeaponPartCircularPool_register(void);


#endif // ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPARTCIRCULARPOOL_H
