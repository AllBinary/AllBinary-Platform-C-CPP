// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"


static DownGameKeyEventHandler* DownGameKeyEventHandler_instance;
static DownGameKeyEventHandlerBase** DownGameKeyEventHandler_instanceArray;








void DownGameKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DownGameKeyEventHandler_instance = DownGameKeyEventHandler_new();
    DownGameKeyEventHandler_instanceArray = ((DownGameKeyEventHandlerBase**) java_array_from(sizeof(DownGameKeyEventHandlerBase*), sizeof((DownGameKeyEventHandlerBase*[]){ DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new() }) / sizeof(DownGameKeyEventHandlerBase*), (DownGameKeyEventHandlerBase*[]){ DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new() }));
}

void DownGameKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DownGameKeyEventHandler", "DownGameKeyEventHandlerBase");
    java_register_method("DownGameKeyEventHandler", "getInstanceForDevice", (void*) DownGameKeyEventHandler_getInstanceForDevice);
    java_register_method("DownGameKeyEventHandler", "getInstanceForPlayer", (void*) DownGameKeyEventHandler_getInstanceForPlayer);
    java_register_method("DownGameKeyEventHandler", "removeAllListeners", (void*) DownGameKeyEventHandler_removeAllListeners);
    java_register_method("DownGameKeyEventHandler", "removeListenerSingleThreaded", (void*) DownGameKeyEventHandler_removeListenerSingleThreaded);
    java_register_method("DownGameKeyEventHandler", "removeListener", (void*) DownGameKeyEventHandler_removeListener);
}

static void DownGameKeyEventHandler_initFields(DownGameKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


DownGameKeyEventHandler* DownGameKeyEventHandler_getInstance(void) {
        return (DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instance);
}


DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForDevice(DownGameKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return (DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)[playerInputId];
}


DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForPlayer(DownGameKeyEventHandler* this, int32_t playerInputId) {
        return (DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)[playerInputId];
}


void DownGameKeyEventHandler_init(DownGameKeyEventHandler* this) {
    DownGameKeyEventHandler_register();
    DownGameKeyEventHandlerBase_init(&this->base);
    DownGameKeyEventHandler_initFields(this);
}

DownGameKeyEventHandler* DownGameKeyEventHandler_new(void) {
    DownGameKeyEventHandler* this = java_object_alloc(sizeof(DownGameKeyEventHandler), "DownGameKeyEventHandler");
    DownGameKeyEventHandler_init(this);
    return this;
}


void DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler* this) {
        DownGameKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)[index], removeAllListeners);
        }
}


void DownGameKeyEventHandler_removeListenerSingleThreaded(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


// synchronized
void DownGameKeyEventHandler_removeListener(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownGameKeyEventHandler_staticInit(), DownGameKeyEventHandler_instanceArray)[index], removeListener, eventListenerInterface);
        }
}

