#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H
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
typedef struct Paintable Paintable;
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct DamageFloaters DamageFloaters;
struct DamageFloaters {
    Paintable base;
};


DamageFloaters* DamageFloaters_new(void);
void DamageFloaters_init(DamageFloaters* this);

DamageFloaters* DamageFloaters_getInstance(void);

void DamageFloaters_add(DamageFloaters* this, int32_t damage);
#ifndef DamageFloaters_setBasicColorP
#define DamageFloaters_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef DamageFloaters_paint
#define DamageFloaters_paint Paintable_paint
#endif
#ifndef DamageFloaters_paintThreed
#define DamageFloaters_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DamageFloaters_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DamageFloaters_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H
