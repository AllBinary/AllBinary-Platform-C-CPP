// Generated Code Do Not Modify
#include "org/allbinary/game/collision/LayerCollisionUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/CollisionProcessor.h"
#include "org/allbinary/game/collision/Collision2DProcessor.h"
#include "org/allbinary/game/collision/CollisionThreedProcessor.h"
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif


static LayerCollisionUtil* LayerCollisionUtil_instance;




void LayerCollisionUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerCollisionUtil_instance = LayerCollisionUtil_new();
}

void LayerCollisionUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerCollisionUtil", nullptr);
    java_register_method("LayerCollisionUtil", "isCollision", (void*) LayerCollisionUtil_isCollision);
}

static void LayerCollisionUtil_initFields(LayerCollisionUtil* this) {
    this->collisionProcessor = nullptr;
}


LayerCollisionUtil* LayerCollisionUtil_getInstance(void) {
        return (LayerCollisionUtil_staticInit(), LayerCollisionUtil_instance);
}


void LayerCollisionUtil_init(LayerCollisionUtil* this) {
    LayerCollisionUtil_register();
    LayerCollisionUtil_initFields(this);
        Features* features = Features_getInstance();
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) && !Features_isFeature(features, gameFeatureFactory->COLLISIONS_FORCED_TWO_DIMENSIONAL)) {
            this->collisionProcessor = CollisionThreedProcessor_new();
        } else {
            this->collisionProcessor = Collision2DProcessor_new();
        }
}

LayerCollisionUtil* LayerCollisionUtil_new(void) {
    LayerCollisionUtil* this = java_object_alloc(sizeof(LayerCollisionUtil), "LayerCollisionUtil");
    LayerCollisionUtil_init(this);
    return this;
}


bool LayerCollisionUtil_isCollision(LayerCollisionUtil* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        return CollisionProcessor_isCollision(this->collisionProcessor, myLayer, myLayer2);
}

