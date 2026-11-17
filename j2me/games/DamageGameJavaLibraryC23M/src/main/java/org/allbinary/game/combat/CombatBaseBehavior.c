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
#include "org/allbinary/game/combat/damage/DamageableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"

typedef struct CombatBaseBehavior CombatBaseBehavior;
struct CombatBaseBehavior {
    DamageableBaseBehavior* damageableBaseBehavior;
    DestroyableBaseBehavior* destroyableBaseBehavior;
    bool readyForExplosion;
};

CombatBaseBehavior* CombatBaseBehavior_NULL_COMBAT_BEHAVIOR;

CombatBaseBehavior* CombatBaseBehavior_new(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior);

void CombatBaseBehavior_init(CombatBaseBehavior* this, DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior);
DamageableBaseBehavior* CombatBaseBehavior_getDamageableBaseBehavior(CombatBaseBehavior* this);
DestroyableBaseBehavior* CombatBaseBehavior_getDestroyableBaseBehavior(CombatBaseBehavior* this);
bool CombatBaseBehavior_isReadyForExplosion(CombatBaseBehavior* this);
void CombatBaseBehavior_setReadyForExplosion(CombatBaseBehavior* this, bool readyForExplosion);

// Static fields with runtime initializers: call this once at startup
void CombatBaseBehavior_staticInit(void) {
    CombatBaseBehavior_NULL_COMBAT_BEHAVIOR = CombatBaseBehavior_new(DamageableBaseBehavior_getInstance(), DestroyableBaseBehavior_getInstance());
}

static void CombatBaseBehavior_initFields(CombatBaseBehavior* this) {
    
    
    this->readyForExplosion = false;
}


void CombatBaseBehavior_init(CombatBaseBehavior* this, DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior) {
    CombatBaseBehavior_initFields(this);
        this->damageableBaseBehavior = damageableBaseBehavior;
        this->destroyableBaseBehavior = destroyableBaseBehavior;
}

CombatBaseBehavior* CombatBaseBehavior_new(DamageableBaseBehavior* damageableBaseBehavior, DestroyableBaseBehavior* destroyableBaseBehavior) {
    CombatBaseBehavior* this = calloc(1, sizeof(CombatBaseBehavior));
    CombatBaseBehavior_init(this, damageableBaseBehavior, destroyableBaseBehavior);
    return this;
}


DamageableBaseBehavior* CombatBaseBehavior_getDamageableBaseBehavior(CombatBaseBehavior* this) {
        return this->damageableBaseBehavior;
}


DestroyableBaseBehavior* CombatBaseBehavior_getDestroyableBaseBehavior(CombatBaseBehavior* this) {
        return this->destroyableBaseBehavior;
}


bool CombatBaseBehavior_isReadyForExplosion(CombatBaseBehavior* this) {
        return this->readyForExplosion;
}


void CombatBaseBehavior_setReadyForExplosion(CombatBaseBehavior* this, bool readyForExplosion) {
        this->readyForExplosion = readyForExplosion;
}

