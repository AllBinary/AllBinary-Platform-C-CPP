// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/TempExplosionWeaponLayer.h"
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
#if __has_include("org/allbinary/game/layer/weapon/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/layer/weapon/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/combat/weapon/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/multiplayer/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/GameTickTimeDelayHelper.h")
#include "org/allbinary/graphics/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/physics/movement/GameTickTimeDelayHelper.h")
#include "org/allbinary/physics/movement/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/view/GameTickTimeDelayHelper.h")
#include "org/allbinary/view/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/CollidableBaseBehavior.h")
#include "org/allbinary/game/layer/weapon/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/animation/CollidableBaseBehavior.h")
#include "org/allbinary/animation/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/CollidableBaseBehavior.h")
#include "org/allbinary/game/combat/weapon/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/CollidableBaseBehavior.h")
#include "org/allbinary/game/multiplayer/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/graphics/CollidableBaseBehavior.h")
#include "org/allbinary/graphics/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/layer/CollidableBaseBehavior.h")
#include "org/allbinary/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/physics/movement/CollidableBaseBehavior.h")
#include "org/allbinary/physics/movement/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/time/CollidableBaseBehavior.h")
#include "org/allbinary/time/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/time/CollidableBaseBehavior.h")
#include "org/allbinary/time/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/view/CollidableBaseBehavior.h")
#include "org/allbinary/view/CollidableBaseBehavior.h"
#endif





void TempExplosionWeaponLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TempExplosionWeaponLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TempExplosionWeaponLayer", "SimpleWeaponLayer");
    java_register_method("TempExplosionWeaponLayer", "processTick", (void*) TempExplosionWeaponLayer_processTick);
}

static void TempExplosionWeaponLayer_initFields(TempExplosionWeaponLayer* this) {
    this->weaponProperties = WeaponProperties_new(-1LL, -1LL, 0, 1000, ((int16_t) 0));
    this->timeDelayHelper = TimeDelayHelper_new(0);
}


void TempExplosionWeaponLayer_init(TempExplosionWeaponLayer* this, const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) {
    TempExplosionWeaponLayer_register();
        SimpleWeaponLayer_init(&this->base, name, (RemoteInfo_staticInit(), RemoteInfo_REMOTE_INFO), -1, movement, animationInterface, SimpleWeaponLayer_createDestroyed(), rectangle, viewPosition);
        TempExplosionWeaponLayer_initFields(this);
        this->timeDelayHelper->delay = timeDelay;
}

TempExplosionWeaponLayer* TempExplosionWeaponLayer_new(const char* name, Movement* movement, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition, int32_t timeDelay) {
    TempExplosionWeaponLayer* this = java_object_alloc(sizeof(TempExplosionWeaponLayer), "TempExplosionWeaponLayer");
    TempExplosionWeaponLayer_init(this, name, movement, animationInterface, rectangle, viewPosition, timeDelay);
    return this;
}


// throws Exception
void TempExplosionWeaponLayer_processTick(TempExplosionWeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            CollidableBaseBehavior_collide(CollidableCompositeLayer_getCollidableInferface(this), this, this);
            this->base.base.totalDamage = WeaponLayer_getInitDamage(this) + 1;
        }
        WeaponLayer_processTick((&this->base), allBinaryLayerManager);
}

