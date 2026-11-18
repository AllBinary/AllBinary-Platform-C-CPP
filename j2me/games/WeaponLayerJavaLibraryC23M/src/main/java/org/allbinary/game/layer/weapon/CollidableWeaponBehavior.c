// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
#include "org/allbinary/game/collision/CollidableHelperFactory.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionHelper.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/collision/CollisionTypeFactory.h")
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#endif


static void* CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR;










static void CollidableWeaponBehavior_setCollided(CollidableWeaponBehavior* this, bool collided);

void CollidableWeaponBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR = NullUtil_getInstance()->NULL_OBJECT;
}

void CollidableWeaponBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableWeaponBehavior", "CollidableDestroyableDamageableBehavior");
    java_register_method("CollidableWeaponBehavior", "init", (void*) CollidableWeaponBehavior_initMethod);
    java_register_method("CollidableWeaponBehavior", "isCollision", (void*) CollidableWeaponBehavior_isCollision);
    java_register_method("CollidableWeaponBehavior", "collide", (void*) CollidableWeaponBehavior_collide);
    java_register_method("CollidableWeaponBehavior", "isCollisionInterface", (void*) CollidableWeaponBehavior_isCollisionInterface);
    java_register_method("CollidableWeaponBehavior", "collideInterface", (void*) CollidableWeaponBehavior_collideInterface);
    java_register_method("CollidableWeaponBehavior", "getCollisionTypeWith", (void*) CollidableWeaponBehavior_getCollisionTypeWith);
    java_register_method("CollidableWeaponBehavior", "isCollided", (void*) CollidableWeaponBehavior_isCollided);
    java_register_method("CollidableWeaponBehavior", "setCollided", (void*) CollidableWeaponBehavior_setCollided);
}

static void CollidableWeaponBehavior_initFields(CollidableWeaponBehavior* this) {
    this->collided = false;
    
}


CollidableWeaponBehavior* CollidableWeaponBehavior_getNullInstance(void) {
        if ((CollidableWeaponBehavior_staticInit(), CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR) == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR = CollidableWeaponBehavior_new(false);
        }
        return ((CollidableWeaponBehavior*) (CollidableWeaponBehavior_staticInit(), CollidableWeaponBehavior_NULL_COLLIDABLE_WEAPON_BEHAVIOR));
}


void CollidableWeaponBehavior_init(CollidableWeaponBehavior* this, bool collidable) {
    CollidableWeaponBehavior_register();
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
        CollidableWeaponBehavior_initFields(this);
        CollidableWeaponBehavior_setCollided(this, false);
        CollidableBaseBehavior_setCollidable(this, true);
        this->collisionHelper = CollidableHelperFactory_getInstance();
}

CollidableWeaponBehavior* CollidableWeaponBehavior_new(bool collidable) {
    CollidableWeaponBehavior* this = java_object_alloc(sizeof(CollidableWeaponBehavior), "CollidableWeaponBehavior");
    CollidableWeaponBehavior_init(this, collidable);
    return this;
}


void CollidableWeaponBehavior_initMethod(CollidableWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface) {
        CollidableWeaponBehavior_setCollided(this, false);
        CollisionHelper_setOwnerLayerInterface(this->collisionHelper, sourceLayerInterface);
}


bool CollidableWeaponBehavior_isCollision(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (CollisionHelper_isCollidable(this->collisionHelper, collisionLayer)) {
            if (AllBinaryLayer_getGroupInterface(ownerLayer)[0] != AllBinaryLayer_getGroupInterface(collisionLayer)[0]) {
                return CollidableDestroyableDamageableBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
            }
        }
        return false;
}


// throws Exception
void CollidableWeaponBehavior_collide(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collisionLayer);
        this->collided = true;
}


bool CollidableWeaponBehavior_isCollisionInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        if (CollisionHelper_isCollidable(this->collisionHelper, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            AllBinaryLayer* layerInterface = ((AllBinaryLayer*) collidableInterfaceCompositeInterface);
            if (AllBinaryLayer_getGroupInterface(ownerLayer)[0] != AllBinaryLayer_getGroupInterface(layerInterface)[0]) {
                if (LayerCollisionUtil_isCollision(this->base.base.layerCollisionUtil, ownerLayer, layerInterface)) {
                    return true;
                }
            }
        }
        return false;
}


// throws Exception
void CollidableWeaponBehavior_collideInterface(CollidableWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        DamageableInterface* ownerDamageableInterface = ((DamageableInterface*) ownerLayer);
        DamageableInterface* damageableInterface = ((DamageableInterface*) collidableInterfaceCompositeInterface);
        DamageUtil_process(this->base.damageUtil, ownerDamageableInterface, damageableInterface);
        this->collided = true;
}


CollisionType* CollidableWeaponBehavior_getCollisionTypeWith(CollidableWeaponBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->COLLISION;
}


bool CollidableWeaponBehavior_isCollided(CollidableWeaponBehavior* this) {
        return this->collided;
}


static void CollidableWeaponBehavior_setCollided(CollidableWeaponBehavior* this, bool collided) {
        this->collided = collided;
}

