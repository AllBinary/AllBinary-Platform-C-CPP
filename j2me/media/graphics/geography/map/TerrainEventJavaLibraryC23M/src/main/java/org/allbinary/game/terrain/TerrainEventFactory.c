// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/TerrainEventFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif





void TerrainEventFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TerrainEventFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainEventFactory", nullptr);
    java_register_method("TerrainEventFactory", "getInstance", (void*) TerrainEventFactory_getInstance);
}


void TerrainEventFactory_init(TerrainEventFactory* this) {
    TerrainEventFactory_register();
}

TerrainEventFactory* TerrainEventFactory_new(void) {
    TerrainEventFactory* this = java_object_alloc(sizeof(TerrainEventFactory), "TerrainEventFactory");
    TerrainEventFactory_init(this);
    return this;
}


AllBinaryEventObject* TerrainEventFactory_getInstance(TerrainEventFactory* this) {
        return TerrainEvent_new(NullUtil_getInstance()->NULL_OBJECT);
}

