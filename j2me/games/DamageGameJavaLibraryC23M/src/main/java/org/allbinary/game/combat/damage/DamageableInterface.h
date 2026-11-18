#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
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
typedef struct NamedInterface NamedInterface;
#include "org/allbinary/layer/NamedInterface.h"

typedef struct DamageableInterface DamageableInterface;
struct DamageableInterface {
    void (*damage)(void* this, int32_t damage, int32_t damageType);
    int32_t (*getDamage)(void* this, int32_t damageType);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DamageableInterface_staticInit(void);

static inline void DamageableInterface_damage(void* this, int32_t damage, int32_t damageType) {
    ((__typeof__(((DamageableInterface*) nullptr)->damage)) java_method_of(this, "damage"))(this, damage, damageType);
}

static inline int32_t DamageableInterface_getDamage(void* this, int32_t damageType) {
    return ((__typeof__(((DamageableInterface*) nullptr)->getDamage)) java_method_of(this, "getDamage"))(this, damageType);
}
#define DamageableInterface_getName NamedInterface_getName


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEABLEINTERFACE_H
