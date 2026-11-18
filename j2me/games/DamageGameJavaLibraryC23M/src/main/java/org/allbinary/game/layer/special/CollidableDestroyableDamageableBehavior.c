// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/combat/damage/DamageUtil.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"








void CollidableDestroyableDamageableBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableDestroyableDamageableBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableDestroyableDamageableBehavior", "CollidableBaseBehavior");
    java_register_method("CollidableDestroyableDamageableBehavior", "isCollision", (void*) CollidableDestroyableDamageableBehavior_isCollision);
    java_register_method("CollidableDestroyableDamageableBehavior", "collide", (void*) CollidableDestroyableDamageableBehavior_collide);
    java_register_method("CollidableDestroyableDamageableBehavior", "isCollisionInterface", (void*) CollidableDestroyableDamageableBehavior_isCollisionInterface);
    java_register_method("CollidableDestroyableDamageableBehavior", "collideInterface", (void*) CollidableDestroyableDamageableBehavior_collideInterface);
}

static void CollidableDestroyableDamageableBehavior_initFields(CollidableDestroyableDamageableBehavior* this) {
    this->damageUtil = DamageUtil_getInstance();
}


void CollidableDestroyableDamageableBehavior_init(CollidableDestroyableDamageableBehavior* this, bool collidable) {
    CollidableDestroyableDamageableBehavior_register();
        CollidableBaseBehavior_init(&this->base, collidable);
        CollidableDestroyableDamageableBehavior_initFields(this);
}

CollidableDestroyableDamageableBehavior* CollidableDestroyableDamageableBehavior_new(bool collidable) {
    CollidableDestroyableDamageableBehavior* this = java_object_alloc(sizeof(CollidableDestroyableDamageableBehavior), "CollidableDestroyableDamageableBehavior");
    CollidableDestroyableDamageableBehavior_init(this, collidable);
    return this;
}


bool CollidableDestroyableDamageableBehavior_isCollision(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (AllBinaryLayer_getGroupInterface(ownerLayer)[0] != AllBinaryLayer_getGroupInterface(collisionLayer)[0]) {
            return CollidableBaseBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
        }
        return false;
}


// throws Exception
void CollidableDestroyableDamageableBehavior_collide(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollidableDestroyableDamageableLayer* ownerCollidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) ownerLayer);
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) collidableInterfaceCompositeInterface);
        CollidableDestroyableDamageableLayer_damage(ownerCollidableDestroyableDamageableLayer, CollidableDestroyableDamageableLayer_getDamage(collidableDestroyableDamageableLayer, 0), 0);
}


bool CollidableDestroyableDamageableBehavior_isCollisionInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log("No Longer Used", this);
        return false;
}


// throws Exception
void CollidableDestroyableDamageableBehavior_collideInterface(CollidableDestroyableDamageableBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log("No Longer Used", this);
}

