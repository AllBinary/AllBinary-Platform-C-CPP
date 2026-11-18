// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/life/LifePickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerFactory.h"
#include "org/allbinary/game/ag/layer/pickup/life/LifeResources.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/life/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/life/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/life/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/life/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif


static PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;






void LifePickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

void LifePickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LifePickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactory");
    java_register_method("LifePickedUpLayerInterfaceFactory", "getTotal", (void*) LifePickedUpLayerInterfaceFactory_getTotal);
    java_register_method("LifePickedUpLayerInterfaceFactory", "process", (void*) LifePickedUpLayerInterfaceFactory_process);
}

static void LifePickedUpLayerInterfaceFactory_initFields(LifePickedUpLayerInterfaceFactory* this) {
    this->pool = LifeLayerCircularStaticPool_new(LifeLayerFactory_new(), 1);
}


// throws Exception
void LifePickedUpLayerInterfaceFactory_initMethod(void) {
        LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = LifePickedUpLayerInterfaceFactory_new();
}


void LifePickedUpLayerInterfaceFactory_init(LifePickedUpLayerInterfaceFactory* this) {
    LifePickedUpLayerInterfaceFactory_register();
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->LIFE, IconLayerFactory_getInstance(AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LifeResources_getInstance()->RESOURCE), 0), 10, 10), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LifeResources_getInstance()->RESOURCE), 0));
        LifePickedUpLayerInterfaceFactory_initFields(this);
}

LifePickedUpLayerInterfaceFactory* LifePickedUpLayerInterfaceFactory_new(void) {
    LifePickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(LifePickedUpLayerInterfaceFactory), "LifePickedUpLayerInterfaceFactory");
    LifePickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t LifePickedUpLayerInterfaceFactory_getTotal(LifePickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_getInstance(void) {
        return (LifePickedUpLayerInterfaceFactory_staticInit(), LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface);
}


// throws Exception
void LifePickedUpLayerInterfaceFactory_process(LifePickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        LifeLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

