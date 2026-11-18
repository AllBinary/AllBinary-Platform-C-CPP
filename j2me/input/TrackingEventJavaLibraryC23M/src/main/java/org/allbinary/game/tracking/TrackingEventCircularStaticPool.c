// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/TrackingEventCircularStaticPool.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#include "org/allbinary/game/tracking/TrackingEventFactory.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"


static TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_instance;




void TrackingEventCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TrackingEventCircularStaticPool_instance = TrackingEventCircularStaticPool_new();
}

void TrackingEventCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrackingEventCircularStaticPool", nullptr);
    java_register_method("TrackingEventCircularStaticPool", "init", (void*) TrackingEventCircularStaticPool_initMethod);
    java_register_method("TrackingEventCircularStaticPool", "getNextInstance", (void*) TrackingEventCircularStaticPool_getNextInstance);
}

static void TrackingEventCircularStaticPool_initFields(TrackingEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}

void TrackingEventCircularStaticPool_init(TrackingEventCircularStaticPool* this) {
    TrackingEventCircularStaticPool_register();
    TrackingEventCircularStaticPool_initFields(this);
}

TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_new(void) {
    TrackingEventCircularStaticPool* this = java_object_alloc(sizeof(TrackingEventCircularStaticPool), "TrackingEventCircularStaticPool");
    TrackingEventCircularStaticPool_init(this);
    return this;
}


TrackingEventCircularStaticPool* TrackingEventCircularStaticPool_getInstance(void) {
        return (TrackingEventCircularStaticPool_staticInit(), TrackingEventCircularStaticPool_instance);
}


void TrackingEventCircularStaticPool_initMethod(TrackingEventCircularStaticPool* this) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, TrackingEventFactory_new());
}


// throws Exception
// synchronized
TrackingEvent* TrackingEventCircularStaticPool_getNextInstance(TrackingEventCircularStaticPool* this, AllBinaryLayer* layerInterface) {
        TrackingEvent* trackingEvent = ((TrackingEvent*) BaseCircularPool_getNextInstance(this->EVENT_POOL));
        TrackingEvent_setLayerInterfaceForCircularStaticPool(trackingEvent, layerInterface);
        return trackingEvent;
}

