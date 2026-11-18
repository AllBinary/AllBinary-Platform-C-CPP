// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/weapon/mine/MineCountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/weapon/WeaponLayerCircularPool.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayerCircularStaticPool.h"
#include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/combat/weapon/AnimationInterfaceFactoryInterface.h"
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
#if __has_include("org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/score/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/math/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/logic/math/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/util/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/util/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/ag/layer/weapon/mine/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/combat/weapon/AnimationInterfaceFactoryInterface.h"
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
#if __has_include("org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/weapon/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/game/score/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/layer/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/layer/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/math/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/logic/math/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/util/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/util/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif


static PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;






void MineCountedPickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
}

void MineCountedPickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MineCountedPickedUpLayerInterfaceFactory", "CountedPickedUpLayerInterfaceFactory");
    java_register_method("MineCountedPickedUpLayerInterfaceFactory", "getTotal", (void*) MineCountedPickedUpLayerInterfaceFactory_getTotal);
    java_register_method("MineCountedPickedUpLayerInterfaceFactory", "getNextInstance", (void*) MineCountedPickedUpLayerInterfaceFactory_getNextInstance);
}

static void MineCountedPickedUpLayerInterfaceFactory_initFields(MineCountedPickedUpLayerInterfaceFactory* this) {
    this->weaponLayerCircularStaticPool = MineLayerCircularStaticPool_getInstance();
    this->weaponProperties = WeaponProperties_new(-1LL, -1LL, 0, 8000, ((int16_t) 10));
    this->smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
}


// throws Exception
void MineCountedPickedUpLayerInterfaceFactory_initMethod(void) {
        MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = MineCountedPickedUpLayerInterfaceFactory_new();
}


void MineCountedPickedUpLayerInterfaceFactory_init(MineCountedPickedUpLayerInterfaceFactory* this) {
    MineCountedPickedUpLayerInterfaceFactory_register();
        CountedPickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->MINE, IconLayerFactory_getInstance(AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->DROP_ICON_RESOURCE), 0), 10, 10), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), MineWeaponResources_getInstance()->DROP_RESOURCE), 0));
        MineCountedPickedUpLayerInterfaceFactory_initFields(this);
}

MineCountedPickedUpLayerInterfaceFactory* MineCountedPickedUpLayerInterfaceFactory_new(void) {
    MineCountedPickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(MineCountedPickedUpLayerInterfaceFactory), "MineCountedPickedUpLayerInterfaceFactory");
    MineCountedPickedUpLayerInterfaceFactory_init(this);
    return this;
}


PickedUpLayerInterfaceFactoryInterface* MineCountedPickedUpLayerInterfaceFactory_getInstance(void) {
        return (MineCountedPickedUpLayerInterfaceFactory_staticInit(), MineCountedPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface);
}


int32_t MineCountedPickedUpLayerInterfaceFactory_getTotal(MineCountedPickedUpLayerInterfaceFactory* this) {
        return 3;
}


// throws Exception
AllBinaryLayer* MineCountedPickedUpLayerInterfaceFactory_getNextInstance(MineCountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        AllBinaryLayer* sourceLayerInterface = ((AllBinaryLayer*) Hashtable_get(hashtable, ((void*) SmallIntegerSingletonFactory_getAt(this->smallIntegerSingletonFactory, 0))));
        int32_t angle = ((int32_t) Hashtable_get(hashtable, ((void*) SmallIntegerSingletonFactory_getAt(this->smallIntegerSingletonFactory, 1))));
        ScoreableInterface* scoreableInterface = ((ScoreableInterface*) sourceLayerInterface);
        return WeaponLayerCircularPool_getInstanceWeaponLayer(this->weaponLayerCircularStaticPool, sourceLayerInterface, x, y, z, ((int32_t) Integer_intValue(angle)), 0, this->weaponProperties, scoreableInterface);
}

