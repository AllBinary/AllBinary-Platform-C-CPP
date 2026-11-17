// Generated Code Do Not Modify
// package org.allbinary.game.layer.weapon

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
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/SimpleWeaponLayer.h"

typedef struct TempExplosionWeaponLayer TempExplosionWeaponLayer;
struct TempExplosionWeaponLayer {
    SimpleWeaponLayer base;
    WeaponProperties* weaponProperties;
    TimeDelayHelper* timeDelayHelper;
};


TempExplosionWeaponLayer* TempExplosionWeaponLayer_new(const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay);

void TempExplosionWeaponLayer_init(TempExplosionWeaponLayer* this, const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay);
void TempExplosionWeaponLayer_processTick(TempExplosionWeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager);

static void TempExplosionWeaponLayer_initFields(TempExplosionWeaponLayer* this) {
    this->weaponProperties = WeaponProperties_new(-1LL, -1LL, 0, 1000, ((int16_t) 0));
    this->timeDelayHelper = TimeDelayHelper_new(0);
}


void TempExplosionWeaponLayer_init(TempExplosionWeaponLayer* this, const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) {
        SimpleWeaponLayer_init(&this->base, name, RemoteInfo_REMOTE_INFO, -1, movement, animationInterface, SimpleWeaponLayer_createDestroyed(), rectangle, viewPosition);
        TempExplosionWeaponLayer_initFields(this);
        this->timeDelayHelper->delay = timeDelay;
}

TempExplosionWeaponLayer* TempExplosionWeaponLayer_new(const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) {
    TempExplosionWeaponLayer* this = calloc(1, sizeof(TempExplosionWeaponLayer));
    TempExplosionWeaponLayer_init(this, name, movement, animationInterface, rectangle, viewPosition, timeDelay);
    return this;
}


// throws Exception
void TempExplosionWeaponLayer_processTick(TempExplosionWeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            JAVA_CALL(TempExplosionWeaponLayer_getCollidableInferface(this), collide, this, this);
            this->totalDamage = TempExplosionWeaponLayer_getInitDamage(this) + 1;
        }
        SimpleWeaponLayer_processTick((&this->base), allBinaryLayerManager);
}

