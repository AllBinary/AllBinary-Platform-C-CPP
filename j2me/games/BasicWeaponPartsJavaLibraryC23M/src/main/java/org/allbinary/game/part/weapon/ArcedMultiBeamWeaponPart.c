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
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"

typedef struct ArcedMultiBeamWeaponPart ArcedMultiBeamWeaponPart;
struct ArcedMultiBeamWeaponPart {
    BasicWeaponPart base;
    WeaponLayerCircularPool* weaponLayerCircularStaticPool;
    int32_t total;
    int32_t TOTAL_ANGLE;
};


ArcedMultiBeamWeaponPart* ArcedMultiBeamWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

void ArcedMultiBeamWeaponPart_init(ArcedMultiBeamWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
void ArcedMultiBeamWeaponPart_processScore(ArcedMultiBeamWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);

static void ArcedMultiBeamWeaponPart_initFields(ArcedMultiBeamWeaponPart* this) {
    
    
    this->TOTAL_ANGLE = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
}


void ArcedMultiBeamWeaponPart_init(ArcedMultiBeamWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
        BasicWeaponPart_init(&this->base, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        ArcedMultiBeamWeaponPart_initFields(this);
        this->total = total;
        this->weaponLayerCircularStaticPool = weaponLayerCircularStaticPool;
}

ArcedMultiBeamWeaponPart* ArcedMultiBeamWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponLayerCircularPool* weaponLayerCircularStaticPool, int32_t total, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    ArcedMultiBeamWeaponPart* this = calloc(1, sizeof(ArcedMultiBeamWeaponPart));
    ArcedMultiBeamWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponLayerCircularStaticPool, total, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


// throws Exception
void ArcedMultiBeamWeaponPart_processScore(ArcedMultiBeamWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        int16_t increment = ((int16_t) ((this->total - 1) / this->TOTAL_ANGLE));
        int16_t minAngle = ((int16_t) (((int32_t) angle) - ((((int32_t) increment) * this->total) >> 1)));
        int32_t next = 0;
        WeaponLayer* weaponLayer = nullptr;
        for (int32_t index = 0; index < this->total; index++) {
            weaponLayer = WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, ArcedMultiBeamWeaponPart_getOwnerLayerInterface(this), RelativeRelationship_getX(this->relativeRelationship), RelativeRelationship_getY(this->relativeRelationship), 0, (minAngle + increment), ((int32_t) otherAngle), weaponProperties, scoreableInterface);
            AllBinaryLayerManager_append(allbinaryLayerManager, weaponLayer);
            next += ((int32_t) increment);
        }
}

