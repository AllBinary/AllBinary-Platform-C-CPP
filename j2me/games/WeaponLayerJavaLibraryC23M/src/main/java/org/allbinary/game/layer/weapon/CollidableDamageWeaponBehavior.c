// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/CollidableDamageWeaponBehavior.h"
#include "org/allbinary/game/collision/CollidableHelperFactory.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionHelper.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#if __has_include("org/allbinary/game/collision/CollisionTypeFactory.h")
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#endif











static void CollidableDamageWeaponBehavior_setCollided(CollidableDamageWeaponBehavior* this, bool collided);

void CollidableDamageWeaponBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableDamageWeaponBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableDamageWeaponBehavior", "CollidableDestroyableDamageableBehavior");
    java_register_method("CollidableDamageWeaponBehavior", "init", (void*) CollidableDamageWeaponBehavior_initMethod);
    java_register_method("CollidableDamageWeaponBehavior", "isCollision", (void*) CollidableDamageWeaponBehavior_isCollision);
    java_register_method("CollidableDamageWeaponBehavior", "collide", (void*) CollidableDamageWeaponBehavior_collide);
    java_register_method("CollidableDamageWeaponBehavior", "isCollisionInterface", (void*) CollidableDamageWeaponBehavior_isCollisionInterface);
    java_register_method("CollidableDamageWeaponBehavior", "collideInterface", (void*) CollidableDamageWeaponBehavior_collideInterface);
    java_register_method("CollidableDamageWeaponBehavior", "getCollisionTypeWith", (void*) CollidableDamageWeaponBehavior_getCollisionTypeWith);
    java_register_method("CollidableDamageWeaponBehavior", "isCollided", (void*) CollidableDamageWeaponBehavior_isCollided);
    java_register_method("CollidableDamageWeaponBehavior", "setCollided", (void*) CollidableDamageWeaponBehavior_setCollided);
}

static void CollidableDamageWeaponBehavior_initFields(CollidableDamageWeaponBehavior* this) {
    this->collided = false;
    
}


void CollidableDamageWeaponBehavior_init(CollidableDamageWeaponBehavior* this, bool collidable) {
    CollidableDamageWeaponBehavior_register();
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
        CollidableDamageWeaponBehavior_initFields(this);
        CollidableDamageWeaponBehavior_setCollided(this, false);
        CollidableBaseBehavior_setCollidable(this, true);
        this->collisionHelper = CollidableHelperFactory_getInstance();
}

CollidableDamageWeaponBehavior* CollidableDamageWeaponBehavior_new(bool collidable) {
    CollidableDamageWeaponBehavior* this = java_object_alloc(sizeof(CollidableDamageWeaponBehavior), "CollidableDamageWeaponBehavior");
    CollidableDamageWeaponBehavior_init(this, collidable);
    return this;
}


void CollidableDamageWeaponBehavior_initMethod(CollidableDamageWeaponBehavior* this, AllBinaryLayer* sourceLayerInterface) {
        CollidableDamageWeaponBehavior_setCollided(this, false);
        CollisionHelper_setOwnerLayerInterface(this->collisionHelper, sourceLayerInterface);
}


bool CollidableDamageWeaponBehavior_isCollision(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        if (CollisionHelper_isCollidable(this->collisionHelper, collisionLayer)) {
            if (AllBinaryLayer_getGroupInterface(ownerLayer)[0] != AllBinaryLayer_getGroupInterface(collisionLayer)[0]) {
                return CollidableDestroyableDamageableBehavior_isCollision((&this->base), ownerLayer, collisionLayer);
            }
        }
        return false;
}


// throws Exception
void CollidableDamageWeaponBehavior_collide(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collisionLayer);
        this->collided = true;
}


bool CollidableDamageWeaponBehavior_isCollisionInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
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
void CollidableDamageWeaponBehavior_collideInterface(CollidableDamageWeaponBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        DamageUtil_process(this->base.damageUtil, ((DamageableInterface*) ownerLayer), ((DamageableInterface*) collidableInterfaceCompositeInterface));
        this->collided = true;
}


CollisionType* CollidableDamageWeaponBehavior_getCollisionTypeWith(CollidableDamageWeaponBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->COLLISION;
}


bool CollidableDamageWeaponBehavior_isCollided(CollidableDamageWeaponBehavior* this) {
        return this->collided;
}


static void CollidableDamageWeaponBehavior_setCollided(CollidableDamageWeaponBehavior* this, bool collided) {
        this->collided = collided;
}

