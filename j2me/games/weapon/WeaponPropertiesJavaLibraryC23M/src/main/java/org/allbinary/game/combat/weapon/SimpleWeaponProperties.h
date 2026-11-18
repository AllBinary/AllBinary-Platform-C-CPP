#ifndef ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H
#define ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H
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
struct SimpleWeaponProperties {
    int32_t damage;
    int16_t dissipation;
    int32_t range;
};


SimpleWeaponProperties* SimpleWeaponProperties_new(void);
void SimpleWeaponProperties_init(SimpleWeaponProperties* this);

void SimpleWeaponProperties_set(SimpleWeaponProperties* this, SimpleWeaponProperties* simpleWeaponProperties);

void SimpleWeaponProperties_setDamage(SimpleWeaponProperties* this, int32_t damage);

int32_t SimpleWeaponProperties_getDamage(SimpleWeaponProperties* this);

void SimpleWeaponProperties_setDissipation(SimpleWeaponProperties* this, int16_t dissipation);

int16_t SimpleWeaponProperties_getDissipation(SimpleWeaponProperties* this);

int32_t SimpleWeaponProperties_getRange(SimpleWeaponProperties* this);

void SimpleWeaponProperties_setRange(SimpleWeaponProperties* this, int32_t range);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimpleWeaponProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimpleWeaponProperties_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_WEAPON_SIMPLEWEAPONPROPERTIES_H
