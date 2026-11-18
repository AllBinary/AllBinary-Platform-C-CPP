#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H
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
// package org.allbinary.game.combat.damage

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DamageableInterface DamageableInterface;
#include "org/allbinary/game/combat/damage/DamageableInterface.h"

typedef struct DamageableBaseBehavior DamageableBaseBehavior;
struct DamageableBaseBehavior {
    DamageableInterface DamageableInterface_interface;
};


DamageableBaseBehavior* DamageableBaseBehavior_new(void);
void DamageableBaseBehavior_init(DamageableBaseBehavior* this);

DamageableBaseBehavior* DamageableBaseBehavior_getInstance(void);

const char* DamageableBaseBehavior_getName(DamageableBaseBehavior* this);

void DamageableBaseBehavior_damage(DamageableBaseBehavior* this, int32_t damage, int32_t damageType);

int32_t DamageableBaseBehavior_getDamage(DamageableBaseBehavior* this, int32_t damageType);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DamageableBaseBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DamageableBaseBehavior_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEBASEBEHAVIOR_H
