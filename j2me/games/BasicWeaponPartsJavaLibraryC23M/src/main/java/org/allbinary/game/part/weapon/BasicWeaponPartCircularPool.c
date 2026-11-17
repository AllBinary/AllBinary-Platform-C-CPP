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
// package org.allbinary.game.part.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct BasicWeaponPartCircularPool BasicWeaponPartCircularPool;
struct BasicWeaponPartCircularPool {
    BasicWeaponPart* basicWeaponPart;
};

BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_NULL_BASIC_WEAPON_PART_CIRCULAR_POOL;

BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_new(void);
void BasicWeaponPartCircularPool_init(BasicWeaponPartCircularPool* this, BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface);
BasicWeaponPart* BasicWeaponPartCircularPool_getInstance(BasicWeaponPartCircularPool* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

// Static fields with runtime initializers: call this once at startup
void BasicWeaponPartCircularPool_staticInit(void) {
    BasicWeaponPartCircularPool_NULL_BASIC_WEAPON_PART_CIRCULAR_POOL = BasicWeaponPartCircularPool_new();
}

static void BasicWeaponPartCircularPool_initFields(BasicWeaponPartCircularPool* this) {
    this->basicWeaponPart = BasicWeaponPart_NULL_BASIC_WEAPON_PART;
}

void BasicWeaponPartCircularPool_init(BasicWeaponPartCircularPool* this) {
    BasicWeaponPartCircularPool_initFields(this);
}

BasicWeaponPartCircularPool* BasicWeaponPartCircularPool_new(void) {
    BasicWeaponPartCircularPool* this = calloc(1, sizeof(BasicWeaponPartCircularPool));
    BasicWeaponPartCircularPool_init(this);
    return this;
}


// throws Exception
void BasicWeaponPartCircularPool_init(BasicWeaponPartCircularPool* this, BasicWeaponPartFactoryInterface* basicWeaponPartFactoryInterface) {
        this->basicWeaponPart = BasicWeaponPartFactoryInterface_getInstance(basicWeaponPartFactoryInterface);
}


// throws Exception
// synchronized
BasicWeaponPart* BasicWeaponPartCircularPool_getInstance(BasicWeaponPartCircularPool* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
        BasicWeaponPart_init(this->basicWeaponPart, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        return this->basicWeaponPart;
}

