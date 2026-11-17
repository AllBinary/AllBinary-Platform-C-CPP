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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

typedef struct BasicProjectileWeaponPart BasicProjectileWeaponPart;
struct BasicProjectileWeaponPart {
    BasicWeaponPart base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
};


BasicProjectileWeaponPart* BasicProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
BasicProjectileWeaponPart* BasicProjectileWeaponPart_createBasicProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool);

void BasicProjectileWeaponPart_init(BasicProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
void BasicProjectileWeaponPart_processScore(BasicProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);

static void BasicProjectileWeaponPart_initFields(BasicProjectileWeaponPart* this) {
    
}


BasicProjectileWeaponPart* BasicProjectileWeaponPart_createBasicProjectileWeaponPart(Animation* animationInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool) {
        return BasicProjectileWeaponPart_new(animationInterface, AllBinaryLayer_NULL_ALLBINARY_LAYER, weaponLayerCircularStaticPool, WeaponProperties_NULL_WEAPON_PROPERTIES, NoScoreable_getInstance(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP);
}


void BasicProjectileWeaponPart_init(BasicProjectileWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
        BasicWeaponPart_init(&this->base, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        BasicProjectileWeaponPart_initFields(this);
        this->weaponLayerCircularStaticPool = weaponLayerCircularStaticPool;
}

BasicProjectileWeaponPart* BasicProjectileWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicProjectileWeaponPart* this = calloc(1, sizeof(BasicProjectileWeaponPart));
    BasicProjectileWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponLayerCircularStaticPool, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


// throws Exception
void BasicProjectileWeaponPart_processScore(BasicProjectileWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        WeaponLayer* weaponLayer = WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, BasicProjectileWeaponPart_getOwnerLayerInterface(this), RelativeRelationship_getX(this->relativeRelationship), RelativeRelationship_getY(this->relativeRelationship), RelativeRelationship_getZ(this->relativeRelationship), ((int32_t) angle), ((int32_t) otherAngle), weaponProperties, scoreableInterface);
        AllBinaryLayerManager_append(allbinaryLayerManager, weaponLayer);
}

