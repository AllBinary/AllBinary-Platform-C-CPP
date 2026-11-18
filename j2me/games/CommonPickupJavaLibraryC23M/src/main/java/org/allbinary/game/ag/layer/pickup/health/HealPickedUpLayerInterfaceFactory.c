// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/health/HealPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/health/HealLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/pickup/health/HealLayerFactory.h"
#include "org/allbinary/game/ag/layer/pickup/health/HealthResources.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/health/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/health/AnimationInterfaceFactoryInterface.h"
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
#if __has_include("org/allbinary/game/ag/layer/pickup/health/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/health/AnimationInterfaceFactoryInterface.h"
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


static PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;






void HealPickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

void HealPickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealPickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactory");
    java_register_method("HealPickedUpLayerInterfaceFactory", "getTotal", (void*) HealPickedUpLayerInterfaceFactory_getTotal);
    java_register_method("HealPickedUpLayerInterfaceFactory", "process", (void*) HealPickedUpLayerInterfaceFactory_process);
}

static void HealPickedUpLayerInterfaceFactory_initFields(HealPickedUpLayerInterfaceFactory* this) {
    this->pool = HealLayerCircularStaticPool_new(HealLayerFactory_new(), 1);
}


// throws Exception
void HealPickedUpLayerInterfaceFactory_initMethod(void) {
        HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = HealPickedUpLayerInterfaceFactory_new();
}


void HealPickedUpLayerInterfaceFactory_init(HealPickedUpLayerInterfaceFactory* this) {
    HealPickedUpLayerInterfaceFactory_register();
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->HEAL, IconLayerFactory_getInstance(AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), HealthResources_getInstance()->RESOURCE), 0), 10, 10), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), HealthResources_getInstance()->RESOURCE), 0));
        HealPickedUpLayerInterfaceFactory_initFields(this);
}

HealPickedUpLayerInterfaceFactory* HealPickedUpLayerInterfaceFactory_new(void) {
    HealPickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(HealPickedUpLayerInterfaceFactory), "HealPickedUpLayerInterfaceFactory");
    HealPickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t HealPickedUpLayerInterfaceFactory_getTotal(HealPickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_getInstance(void) {
        return (HealPickedUpLayerInterfaceFactory_staticInit(), HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface);
}


// throws Exception
void HealPickedUpLayerInterfaceFactory_process(HealPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        HealLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

