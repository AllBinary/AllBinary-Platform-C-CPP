// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;





void CountedPickedUpLayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY = CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerTypeFactory_getInstance()->NONE, (IconLayer_staticInit(), IconLayer_NULL_ICON_LAYER), NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0));
}

void CountedPickedUpLayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CountedPickedUpLayerInterfaceFactory", "PickedUpLayerInterfaceFactory");
    java_register_method("CountedPickedUpLayerInterfaceFactory", "getNextInstance", (void*) CountedPickedUpLayerInterfaceFactory_getNextInstance);
    java_register_method("CountedPickedUpLayerInterfaceFactory", "getTotal", (void*) CountedPickedUpLayerInterfaceFactory_getTotal);
    java_register_method("CountedPickedUpLayerInterfaceFactory", "getId", (void*) CountedPickedUpLayerInterfaceFactory_getId);
}

static void CountedPickedUpLayerInterfaceFactory_initFields(CountedPickedUpLayerInterfaceFactory* this) {
    
}


void CountedPickedUpLayerInterfaceFactory_init(CountedPickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    CountedPickedUpLayerInterfaceFactory_register();
        PickedUpLayerInterfaceFactory_init(&this->base, pickeUpLayerType, iconLayer, animationInterface);
        CountedPickedUpLayerInterfaceFactory_initFields(this);
        BasicArrayList* list = CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool_getInstance());
        this->id = BasicArrayList_size(list);
        BasicArrayList_add(list, this);
}

CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    CountedPickedUpLayerInterfaceFactory* this = java_object_alloc(sizeof(CountedPickedUpLayerInterfaceFactory), "CountedPickedUpLayerInterfaceFactory");
    CountedPickedUpLayerInterfaceFactory_init(this, pickeUpLayerType, iconLayer, animationInterface);
    return this;
}


// throws Exception
AllBinaryLayer* CountedPickedUpLayerInterfaceFactory_getNextInstance(CountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


int32_t CountedPickedUpLayerInterfaceFactory_getTotal(CountedPickedUpLayerInterfaceFactory* this) {
        return -1;
}


int32_t CountedPickedUpLayerInterfaceFactory_getId(CountedPickedUpLayerInterfaceFactory* this) {
        return this->id;
}

