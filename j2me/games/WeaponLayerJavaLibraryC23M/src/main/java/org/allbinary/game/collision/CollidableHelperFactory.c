// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableHelperFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/collision/SourceCollisionHelper.h"
#include "org/allbinary/game/collision/CollisionHelper.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif




void CollidableHelperFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableHelperFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableHelperFactory", nullptr);
}

void CollidableHelperFactory_init(CollidableHelperFactory* this) {
    CollidableHelperFactory_register();
}

CollidableHelperFactory* CollidableHelperFactory_new(void) {
    CollidableHelperFactory* this = java_object_alloc(sizeof(CollidableHelperFactory), "CollidableHelperFactory");
    CollidableHelperFactory_init(this);
    return this;
}


CollisionHelper* CollidableHelperFactory_getInstance(void) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->COLLISIONS_WITH_SOURCE)) {
            return CollisionHelper_new((AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER));
        } else {
            return SourceCollisionHelper_new((AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER));
        }
}

