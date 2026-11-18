#ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H
#define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H
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
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct DamageUtil DamageUtil;
struct DamageUtil {
    LogUtil* logUtil;
    const char* COLLIDE;
};


DamageUtil* DamageUtil_new(void);

DamageUtil* DamageUtil_getInstance(void);

void DamageUtil_init(DamageUtil* this);

void DamageUtil_process(DamageUtil* this, DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2);

void DamageUtil_debugDamage(DamageUtil* this, CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
#define DamageUtil_new0 DamageUtil_new
#define DamageUtil_init0 DamageUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DamageUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DamageUtil_register(void);


#endif // ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEUTIL_H
