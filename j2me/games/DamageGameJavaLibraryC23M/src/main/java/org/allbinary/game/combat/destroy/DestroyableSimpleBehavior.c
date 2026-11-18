// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/DestroyableSimpleBehavior.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/combat/destroy/DestroyableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#if __has_include("org/allbinary/game/combat/destroy/BasicLayerProcessor.h")
#include "org/allbinary/game/combat/destroy/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/BasicLayerProcessor.h")
#include "org/allbinary/game/layer/BasicLayerProcessor.h"
#endif






void DestroyableSimpleBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DestroyableSimpleBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyableSimpleBehavior", "DestroyableBaseBehavior");
    java_register_method("DestroyableSimpleBehavior", "isDestroyed", (void*) DestroyableSimpleBehavior_isDestroyed);
    java_register_method("DestroyableSimpleBehavior", "setDestroyed", (void*) DestroyableSimpleBehavior_setDestroyed);
}

static void DestroyableSimpleBehavior_initFields(DestroyableSimpleBehavior* this) {
    
    this->destroyed = false;
}


void DestroyableSimpleBehavior_init(DestroyableSimpleBehavior* this, CollidableCompositeLayer* ownerLayer) {
    DestroyableSimpleBehavior_register();
    DestroyableBaseBehavior_init(&this->base);
    DestroyableSimpleBehavior_initFields(this);
        this->ownerLayer = ownerLayer;
}

DestroyableSimpleBehavior* DestroyableSimpleBehavior_new(CollidableCompositeLayer* ownerLayer) {
    DestroyableSimpleBehavior* this = java_object_alloc(sizeof(DestroyableSimpleBehavior), "DestroyableSimpleBehavior");
    DestroyableSimpleBehavior_init(this, ownerLayer);
    return this;
}


bool DestroyableSimpleBehavior_isDestroyed(DestroyableSimpleBehavior* this) {
        return this->destroyed;
}


void DestroyableSimpleBehavior_setDestroyed(DestroyableSimpleBehavior* this, bool destroyed) {
        this->destroyed = destroyed;
        if (DestroyableSimpleBehavior_isDestroyed(this)) {
            BasicLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this->ownerLayer);
        }
}

