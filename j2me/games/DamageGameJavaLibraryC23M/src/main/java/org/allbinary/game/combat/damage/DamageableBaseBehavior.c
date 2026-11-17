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
#include "org/allbinary/game/combat/damage/DamageableInterface.h"

typedef struct DamageableBaseBehavior DamageableBaseBehavior;
struct DamageableBaseBehavior {
    DamageableInterface DamageableInterface_interface;
};

static DamageableBaseBehavior* DamageableBaseBehavior_instance;

DamageableBaseBehavior* DamageableBaseBehavior_new(void);
DamageableBaseBehavior* DamageableBaseBehavior_getInstance(void);
const char* DamageableBaseBehavior_getName(DamageableBaseBehavior* this);
void DamageableBaseBehavior_damage(DamageableBaseBehavior* this, int32_t damage, int32_t damageType);
int32_t DamageableBaseBehavior_getDamage(DamageableBaseBehavior* this, int32_t damageType);

// Static fields with runtime initializers: call this once at startup
void DamageableBaseBehavior_staticInit(void) {
    DamageableBaseBehavior_instance = DamageableBaseBehavior_new();
}

void DamageableBaseBehavior_init(DamageableBaseBehavior* this) {
}

DamageableBaseBehavior* DamageableBaseBehavior_new(void) {
    DamageableBaseBehavior* this = calloc(1, sizeof(DamageableBaseBehavior));
    DamageableBaseBehavior_init(this);
    return this;
}


DamageableBaseBehavior* DamageableBaseBehavior_getInstance(void) {
        return DamageableBaseBehavior_instance;
}


const char* DamageableBaseBehavior_getName(DamageableBaseBehavior* this) {
        return java_class_of(this);
}


// throws Exception
void DamageableBaseBehavior_damage(DamageableBaseBehavior* this, int32_t damage, int32_t damageType) {
}


// throws Exception
int32_t DamageableBaseBehavior_getDamage(DamageableBaseBehavior* this, int32_t damageType) {
        return 6000;
}

