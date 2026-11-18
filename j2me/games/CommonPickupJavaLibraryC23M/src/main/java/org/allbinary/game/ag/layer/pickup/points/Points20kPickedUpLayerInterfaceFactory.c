// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/Points20kPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerFactory.h"
#include "org/allbinary/game/ag/layer/pickup/points/PointsResources.h"
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/pickup/points/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/points/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/configuration/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/configuration/AnimationInterfaceFactoryInterface.h"
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
#if __has_include("org/allbinary/game/ag/layer/pickup/points/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/pickup/points/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/configuration/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/configuration/AnimationInterfaceFactoryInterface.h"
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


static PickedUpLayerInterfaceFactoryInterface* Points20kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;






void Points20kPickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Points20kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

void Points20kPickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Points20kPickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactory");
    java_register_method("Points20kPickedUpLayerInterfaceFactory", "getTotal", (void*) Points20kPickedUpLayerInterfaceFactory_getTotal);
    java_register_method("Points20kPickedUpLayerInterfaceFactory", "process", (void*) Points20kPickedUpLayerInterfaceFactory_process);
}

static void Points20kPickedUpLayerInterfaceFactory_initFields(Points20kPickedUpLayerInterfaceFactory* this) {
    this->pool = PointsLayerCircularStaticPool_new(PointsLayerFactory_new(GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil_getInstance()) * 20000), 1);
}


// throws Exception
void Points20kPickedUpLayerInterfaceFactory_initMethod(void) {
        Points20kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = Points20kPickedUpLayerInterfaceFactory_new();
}


void Points20kPickedUpLayerInterfaceFactory_init(Points20kPickedUpLayerInterfaceFactory* this) {
    Points20kPickedUpLayerInterfaceFactory_register();
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->POINTS, IconLayerFactory_getInstance(AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_2), 0), 10, 10), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_2), 0));
        Points20kPickedUpLayerInterfaceFactory_initFields(this);
}

Points20kPickedUpLayerInterfaceFactory* Points20kPickedUpLayerInterfaceFactory_new(void) {
    Points20kPickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(Points20kPickedUpLayerInterfaceFactory), "Points20kPickedUpLayerInterfaceFactory");
    Points20kPickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t Points20kPickedUpLayerInterfaceFactory_getTotal(Points20kPickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* Points20kPickedUpLayerInterfaceFactory_getInstance(void) {
        return (Points20kPickedUpLayerInterfaceFactory_staticInit(), Points20kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface);
}


// throws Exception
void Points20kPickedUpLayerInterfaceFactory_process(Points20kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        PointsLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

