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
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct DamageUtil DamageUtil;
struct DamageUtil {
    LogUtil* logUtil;
    const char* COLLIDE;
};

static DamageUtil* DamageUtil_instance;

DamageUtil* DamageUtil_new(void);
DamageUtil* DamageUtil_getInstance(void);

void DamageUtil_init(DamageUtil* this);
void DamageUtil_process(DamageUtil* this, DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2);
void DamageUtil_debugDamage(DamageUtil* this, CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface);

// Static fields with runtime initializers: call this once at startup
void DamageUtil_staticInit(void) {
    DamageUtil_instance = DamageUtil_new();
}

static void DamageUtil_initFields(DamageUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->COLLIDE = "collide";
}


DamageUtil* DamageUtil_getInstance(void) {
        return DamageUtil_instance;
}


void DamageUtil_init(DamageUtil* this) {
    DamageUtil_initFields(this);
}

DamageUtil* DamageUtil_new(void) {
    DamageUtil* this = calloc(1, sizeof(DamageUtil));
    DamageUtil_init(this);
    return this;
}


// throws Exception
void DamageUtil_process(DamageUtil* this, DamageableInterface* damageableInterface, DamageableInterface* damageableInterface2) {
        DamageableInterface_damage(damageableInterface, DamageableInterface_getDamage(damageableInterface2, 0), 0);
}


// throws Exception
void DamageUtil_debugDamage(DamageUtil* this, CollidableCompositeLayer* collidableInterfaceCompositeInterface1, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) collidableInterfaceCompositeInterface);
        int32_t damage = CollidableDestroyableDamageableLayer_getDamage(collidableDestroyableDamageableLayer, 0);
        if (damage > 20000) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Collision ");
            StringMaker_append(stringBuffer, CollidableCompositeLayer_toString(collidableInterfaceCompositeInterface1));
            StringMaker_append(stringBuffer, " with: ");
            StringMaker_append(stringBuffer, CollidableCompositeLayer_toString(collidableInterfaceCompositeInterface));
            StringMaker_append(stringBuffer, " damage: ");
            StringMaker_appendint(stringBuffer, damage);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), collidableInterfaceCompositeInterface1, this->COLLIDE);
        }
}

