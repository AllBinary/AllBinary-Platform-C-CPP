#ifndef ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H
#define ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H
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
// package org.allbinary.game.combat

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DamageableBaseBehavior DamageableBaseBehavior;
typedef struct DestroyableBaseBehavior DestroyableBaseBehavior;
#if __has_include("org/allbinary/game/combat/damage/DamageableBaseBehavior.h")
#include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h")
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
#endif

typedef struct CombatBaseBehavior CombatBaseBehavior;
struct CombatBaseBehavior {
    DamageableBaseBehavior* damageableBaseBehavior;
    DestroyableBaseBehavior* destroyableBaseBehavior;
    bool readyForExplosion;
};

extern CombatBaseBehavior* CombatBaseBehavior_NULL_COMBAT_BEHAVIOR;

CombatBaseBehavior* CombatBaseBehavior_new(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior);

void CombatBaseBehavior_init(CombatBaseBehavior* this, DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior);

DamageableBaseBehavior* CombatBaseBehavior_getDamageableBaseBehavior(CombatBaseBehavior* this);

DestroyableBaseBehavior* CombatBaseBehavior_getDestroyableBaseBehavior(CombatBaseBehavior* this);

bool CombatBaseBehavior_isReadyForExplosion(CombatBaseBehavior* this);

void CombatBaseBehavior_setReadyForExplosion(CombatBaseBehavior* this, bool readyForExplosion);
#define CombatBaseBehavior_new2 CombatBaseBehavior_new
#define CombatBaseBehavior_init2 CombatBaseBehavior_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CombatBaseBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CombatBaseBehavior_register(void);

#if __has_include("org/allbinary/game/combat/damage/DamageableBaseBehavior.h")
#include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h")
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
#endif

#endif // ORG_ALLBINARY_GAME_COMBAT_COMBATBASEBEHAVIOR_H
