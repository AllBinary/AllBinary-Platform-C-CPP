// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#include "org/allbinary/game/combat/destroy/event/DestroyEventFactory.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"


static DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_instance;





void DestroyEventCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DestroyEventCircularStaticPool_instance = DestroyEventCircularStaticPool_new();
}

void DestroyEventCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyEventCircularStaticPool", nullptr);
    java_register_method("DestroyEventCircularStaticPool", "init", (void*) DestroyEventCircularStaticPool_initMethod);
    java_register_method("DestroyEventCircularStaticPool", "getInstanceForLayer", (void*) DestroyEventCircularStaticPool_getInstanceForLayer);
}

static void DestroyEventCircularStaticPool_initFields(DestroyEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}


DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_getInstance(void) {
        return (DestroyEventCircularStaticPool_staticInit(), DestroyEventCircularStaticPool_instance);
}


void DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool* this) {
    DestroyEventCircularStaticPool_register();
    DestroyEventCircularStaticPool_initFields(this);
}

DestroyEventCircularStaticPool* DestroyEventCircularStaticPool_new(void) {
    DestroyEventCircularStaticPool* this = java_object_alloc(sizeof(DestroyEventCircularStaticPool), "DestroyEventCircularStaticPool");
    DestroyEventCircularStaticPool_init(this);
    return this;
}


void DestroyEventCircularStaticPool_initMethod(DestroyEventCircularStaticPool* this, AllBinaryGameCanvas* combatGameCanvas) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, DestroyEventFactory_new(combatGameCanvas));
}


// throws Exception
DestroyedEvent* DestroyEventCircularStaticPool_getInstanceForLayer(DestroyEventCircularStaticPool* this, AllBinaryLayer* layerInterface) {
        DestroyedEvent* destroyedEvent = ((DestroyedEvent*) BaseCircularPool_getNextInstance(this->EVENT_POOL));
        DestroyedEvent_setLayerInterfaceForCircularStaticPool(destroyedEvent, layerInterface);
        return destroyedEvent;
}

