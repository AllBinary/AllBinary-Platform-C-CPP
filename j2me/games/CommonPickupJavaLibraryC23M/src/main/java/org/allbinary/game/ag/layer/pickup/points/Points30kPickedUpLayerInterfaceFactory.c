// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/Points30kPickedUpLayerInterfaceFactory.h"
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


static PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;






void Points30kPickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

void Points30kPickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Points30kPickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactory");
    java_register_method("Points30kPickedUpLayerInterfaceFactory", "getTotal", (void*) Points30kPickedUpLayerInterfaceFactory_getTotal);
    java_register_method("Points30kPickedUpLayerInterfaceFactory", "process", (void*) Points30kPickedUpLayerInterfaceFactory_process);
}

static void Points30kPickedUpLayerInterfaceFactory_initFields(Points30kPickedUpLayerInterfaceFactory* this) {
    this->pool = PointsLayerCircularStaticPool_new(PointsLayerFactory_new(GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil_getInstance()) * 30000), 1);
}


// throws Exception
void Points30kPickedUpLayerInterfaceFactory_initMethod(void) {
        Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = Points30kPickedUpLayerInterfaceFactory_new();
}


void Points30kPickedUpLayerInterfaceFactory_init(Points30kPickedUpLayerInterfaceFactory* this) {
    Points30kPickedUpLayerInterfaceFactory_register();
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->POINTS, IconLayerFactory_getInstance(AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_3), 0), 10, 10), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_3), 0));
        Points30kPickedUpLayerInterfaceFactory_initFields(this);
}

Points30kPickedUpLayerInterfaceFactory* Points30kPickedUpLayerInterfaceFactory_new(void) {
    Points30kPickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(Points30kPickedUpLayerInterfaceFactory), "Points30kPickedUpLayerInterfaceFactory");
    Points30kPickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t Points30kPickedUpLayerInterfaceFactory_getTotal(Points30kPickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_getInstance(void) {
        return (Points30kPickedUpLayerInterfaceFactory_staticInit(), Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface);
}


// throws Exception
void Points30kPickedUpLayerInterfaceFactory_process(Points30kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        PointsLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

