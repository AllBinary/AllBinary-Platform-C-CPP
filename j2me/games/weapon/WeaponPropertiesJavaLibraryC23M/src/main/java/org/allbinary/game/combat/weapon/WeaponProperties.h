#ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
#define ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
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
// package org.allbinary.game.combat.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct SimpleWeaponProperties SimpleWeaponProperties;
typedef struct PreLogUtil PreLogUtil;
typedef struct BasicDecimal BasicDecimal;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#include "org/allbinary/game/combat/weapon/SimpleWeaponProperties.h"

typedef struct WeaponProperties WeaponProperties;
struct WeaponProperties {
    SimpleWeaponProperties base;
    int64_t reloadTime;
    int64_t targetingTime;
    BasicDecimal* speed;
    int64_t MAX;
    int16_t ZERO;
};

extern WeaponProperties* WeaponProperties_NULL_WEAPON_PROPERTIES;

WeaponProperties* WeaponProperties_new(int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);

void WeaponProperties_init(WeaponProperties* this, int64_t reloadTime, int64_t targetingTime, int64_t speed, int32_t damage, int16_t dissipation);


int64_t WeaponProperties_getReloadTime(WeaponProperties* this);


int64_t WeaponProperties_getTargetingTime(WeaponProperties* this);

BasicDecimal* WeaponProperties_getSpeed(WeaponProperties* this);

void WeaponProperties_setSpeed(WeaponProperties* this, BasicDecimal* speed);

int32_t WeaponProperties_getDamageI(WeaponProperties* this, int32_t range);

const char** WeaponProperties_toStringArray(WeaponProperties* this);

const char* WeaponProperties_toString(WeaponProperties* this);
#define WeaponProperties_new5 WeaponProperties_new
#define WeaponProperties_init5 WeaponProperties_init
#ifndef WeaponProperties_set
#define WeaponProperties_set SimpleWeaponProperties_set
#endif
#ifndef WeaponProperties_setDamage
#define WeaponProperties_setDamage SimpleWeaponProperties_setDamage
#endif
#ifndef WeaponProperties_getDamage
#define WeaponProperties_getDamage SimpleWeaponProperties_getDamage
#endif
#ifndef WeaponProperties_setDissipation
#define WeaponProperties_setDissipation SimpleWeaponProperties_setDissipation
#endif
#ifndef WeaponProperties_getDissipation
#define WeaponProperties_getDissipation SimpleWeaponProperties_getDissipation
#endif
#ifndef WeaponProperties_getRange
#define WeaponProperties_getRange SimpleWeaponProperties_getRange
#endif
#ifndef WeaponProperties_setRange
#define WeaponProperties_setRange SimpleWeaponProperties_setRange
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void WeaponProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void WeaponProperties_register(void);

#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

#endif // ORG_ALLBINARY_GAME_COMBAT_WEAPON_WEAPONPROPERTIES_H
