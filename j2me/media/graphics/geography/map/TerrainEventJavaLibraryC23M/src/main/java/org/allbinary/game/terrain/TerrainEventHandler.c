// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/TerrainEventHandler.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/terrain/TerrainEventListener.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static ABHashtable* TerrainEventHandler_hashtable;









void TerrainEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TerrainEventHandler_hashtable = StdUtil_getInstance()->NULL_TABLE;
}

void TerrainEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainEventHandler", "BasicEventHandler");
    java_register_method("TerrainEventHandler", "addListener", (void*) TerrainEventHandler_addListener);
    java_register_method("TerrainEventHandler", "removeAllListeners", (void*) TerrainEventHandler_removeAllListeners);
    java_register_method("TerrainEventHandler", "removeListener", (void*) TerrainEventHandler_removeListener);
    java_register_method("TerrainEventHandler", "fireEvent", (void*) TerrainEventHandler_fireEvent);
    java_register_method("TerrainEventHandler", "process", (void*) TerrainEventHandler_process);
}

static void TerrainEventHandler_initFields(TerrainEventHandler* this) {
    this->list = BasicArrayListD_new();
}


void TerrainEventHandler_initMethod(void) {
        TerrainEventHandler_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


TerrainEventHandler* TerrainEventHandler_getInstance(void* anyType) {
        void* eventHandlerCanBeNull = Hashtable_get((TerrainEventHandler_staticInit(), TerrainEventHandler_hashtable), anyType);
        if (eventHandlerCanBeNull == nullptr) {
            eventHandlerCanBeNull = TerrainEventHandler_new();
            Hashtable_put((TerrainEventHandler_staticInit(), TerrainEventHandler_hashtable), anyType, eventHandlerCanBeNull);
        }
        return ((TerrainEventHandler*) eventHandlerCanBeNull);
}


void TerrainEventHandler_init(TerrainEventHandler* this) {
    TerrainEventHandler_register();
    BasicEventHandler_init(&this->base);
    TerrainEventHandler_initFields(this);
}

TerrainEventHandler* TerrainEventHandler_new(void) {
    TerrainEventHandler* this = java_object_alloc(sizeof(TerrainEventHandler), "TerrainEventHandler");
    TerrainEventHandler_init(this);
    return this;
}


void TerrainEventHandler_addListener(TerrainEventHandler* this, TerrainEventListener* terrainEventListener) {
        if (!BasicArrayList_contains(this->list, terrainEventListener)) {
            BasicArrayList_add(this->list, terrainEventListener);
        }
}


void TerrainEventHandler_removeAllListeners(TerrainEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void TerrainEventHandler_removeListener(TerrainEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void TerrainEventHandler_fireEvent(TerrainEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                TerrainEventListener* terrainEventListener = ((TerrainEventListener*) BasicArrayList_get(this->list, index));
                TerrainEventListener_onTerrainEvent(terrainEventListener, ((TerrainEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void TerrainEventHandler_process(TerrainEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        TerrainEventListenerInterface* terrainEventListenerInterface = ((TerrainEventListenerInterface*) eventListenerInterface);
        TerrainEventListenerInterface_onTerrainEvent(terrainEventListenerInterface, ((TerrainEvent*) eventObject));
}

