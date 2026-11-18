// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/TerrainEventCircularStaticPool.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#include "org/allbinary/game/terrain/TerrainEventFactory.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"


static TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_instance;




void TerrainEventCircularStaticPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TerrainEventCircularStaticPool_instance = TerrainEventCircularStaticPool_new();
}

void TerrainEventCircularStaticPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainEventCircularStaticPool", nullptr);
    java_register_method("TerrainEventCircularStaticPool", "init", (void*) TerrainEventCircularStaticPool_initMethod);
    java_register_method("TerrainEventCircularStaticPool", "getNext", (void*) TerrainEventCircularStaticPool_getNext);
}

static void TerrainEventCircularStaticPool_initFields(TerrainEventCircularStaticPool* this) {
    this->EVENT_POOL = AllBinaryEventCircularPool_new(20);
}

void TerrainEventCircularStaticPool_init(TerrainEventCircularStaticPool* this) {
    TerrainEventCircularStaticPool_register();
    TerrainEventCircularStaticPool_initFields(this);
}

TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_new(void) {
    TerrainEventCircularStaticPool* this = java_object_alloc(sizeof(TerrainEventCircularStaticPool), "TerrainEventCircularStaticPool");
    TerrainEventCircularStaticPool_init(this);
    return this;
}


TerrainEventCircularStaticPool* TerrainEventCircularStaticPool_getInstance(void) {
        return (TerrainEventCircularStaticPool_staticInit(), TerrainEventCircularStaticPool_instance);
}


void TerrainEventCircularStaticPool_initMethod(TerrainEventCircularStaticPool* this) {
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->EVENT_POOL, TerrainEventFactory_new());
}


// throws Exception
// synchronized
TerrainEvent* TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool* this, BasicTerrainInfo* basicTerrainInfo) {
        TerrainEvent* trackingEvent = ((TerrainEvent*) BaseCircularPool_getNextInstance(this->EVENT_POOL));
        TerrainEvent_setBasicTerrainInfoForCircularStaticPool(trackingEvent, basicTerrainInfo);
        return trackingEvent;
}

