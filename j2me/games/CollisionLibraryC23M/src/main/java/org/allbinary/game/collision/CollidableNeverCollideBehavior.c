// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableNeverCollideBehavior.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"








void CollidableNeverCollideBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableNeverCollideBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableNeverCollideBehavior", "CollidableBaseBehavior");
    java_register_method("CollidableNeverCollideBehavior", "isCollision", (void*) CollidableNeverCollideBehavior_isCollision);
    java_register_method("CollidableNeverCollideBehavior", "collide", (void*) CollidableNeverCollideBehavior_collide);
    java_register_method("CollidableNeverCollideBehavior", "collideInterface", (void*) CollidableNeverCollideBehavior_collideInterface);
    java_register_method("CollidableNeverCollideBehavior", "isCollisionInterface", (void*) CollidableNeverCollideBehavior_isCollisionInterface);
}


void CollidableNeverCollideBehavior_init(CollidableNeverCollideBehavior* this, bool isCollidable) {
    CollidableNeverCollideBehavior_register();
        CollidableBaseBehavior_init(&this->base, isCollidable);
}

CollidableNeverCollideBehavior* CollidableNeverCollideBehavior_new(bool isCollidable) {
    CollidableNeverCollideBehavior* this = java_object_alloc(sizeof(CollidableNeverCollideBehavior), "CollidableNeverCollideBehavior");
    CollidableNeverCollideBehavior_init(this, isCollidable);
    return this;
}


bool CollidableNeverCollideBehavior_isCollision(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) {
        return false;
}


// throws Exception
void CollidableNeverCollideBehavior_collide(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) {
}


void CollidableNeverCollideBehavior_collideInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
}


bool CollidableNeverCollideBehavior_isCollisionInterface(CollidableNeverCollideBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        return false;
}

