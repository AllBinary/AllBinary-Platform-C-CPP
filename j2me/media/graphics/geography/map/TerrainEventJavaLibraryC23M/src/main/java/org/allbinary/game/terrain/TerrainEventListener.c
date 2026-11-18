// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/TerrainEventListener.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif






void TerrainEventListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TerrainEventListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainEventListener", nullptr);
    java_register_method("TerrainEventListener", "onEvent", (void*) TerrainEventListener_onEvent);
    java_register_method("TerrainEventListener", "onTerrainEvent", (void*) TerrainEventListener_onTerrainEvent);
    java_register_method("TerrainEventListener", "getList", (void*) TerrainEventListener_getList);
}

static void TerrainEventListener_initFields(TerrainEventListener* this) {
    this->list = BasicArrayListD_new();
}

void TerrainEventListener_init(TerrainEventListener* this) {
    TerrainEventListener_register();
    TerrainEventListener_initFields(this);
}

TerrainEventListener* TerrainEventListener_new(void) {
    TerrainEventListener* this = java_object_alloc(sizeof(TerrainEventListener), "TerrainEventListener");
    TerrainEventListener_init(this);
    return this;
}


void TerrainEventListener_onEvent(TerrainEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void TerrainEventListener_onTerrainEvent(TerrainEventListener* this, TerrainEvent* terrainEvent) {
        BasicArrayList_clear(this->list);
        BasicArrayList_add(this->list, terrainEvent);
}


BasicArrayList* TerrainEventListener_getList(TerrainEventListener* this) {
        return this->list;
}

