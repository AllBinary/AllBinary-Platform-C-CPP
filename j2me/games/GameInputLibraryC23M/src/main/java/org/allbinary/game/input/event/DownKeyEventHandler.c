// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"


static DownKeyEventHandler* DownKeyEventHandler_instance;
static DownKeyEventHandlerBase** DownKeyEventHandler_instanceArray;








void DownKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DownKeyEventHandler_instance = DownKeyEventHandler_new();
    DownKeyEventHandler_instanceArray = ((DownKeyEventHandlerBase**) java_array_from(sizeof(DownKeyEventHandlerBase*), sizeof((DownKeyEventHandlerBase*[]){ DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new() }) / sizeof(DownKeyEventHandlerBase*), (DownKeyEventHandlerBase*[]){ DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new() }));
}

void DownKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DownKeyEventHandler", "DownKeyEventHandlerBase");
    java_register_method("DownKeyEventHandler", "getInstanceForDevice", (void*) DownKeyEventHandler_getInstanceForDevice);
    java_register_method("DownKeyEventHandler", "getInstanceForPlayer", (void*) DownKeyEventHandler_getInstanceForPlayer);
    java_register_method("DownKeyEventHandler", "removeAllListeners", (void*) DownKeyEventHandler_removeAllListeners);
    java_register_method("DownKeyEventHandler", "removeListenerSingleThreaded", (void*) DownKeyEventHandler_removeListenerSingleThreaded);
    java_register_method("DownKeyEventHandler", "removeListener", (void*) DownKeyEventHandler_removeListener);
}

static void DownKeyEventHandler_initFields(DownKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


DownKeyEventHandler* DownKeyEventHandler_getInstance(void) {
        return (DownKeyEventHandler_staticInit(), DownKeyEventHandler_instance);
}


DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForDevice(DownKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return (DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)[playerInputId];
}


DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForPlayer(DownKeyEventHandler* this, int32_t playerInputId) {
        return (DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)[playerInputId];
}


void DownKeyEventHandler_init(DownKeyEventHandler* this) {
    DownKeyEventHandler_register();
    DownKeyEventHandlerBase_init(&this->base);
    DownKeyEventHandler_initFields(this);
}

DownKeyEventHandler* DownKeyEventHandler_new(void) {
    DownKeyEventHandler* this = java_object_alloc(sizeof(DownKeyEventHandler), "DownKeyEventHandler");
    DownKeyEventHandler_init(this);
    return this;
}


void DownKeyEventHandler_removeAllListeners(DownKeyEventHandler* this) {
        DownKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)[index], removeAllListeners);
        }
}


void DownKeyEventHandler_removeListenerSingleThreaded(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


// synchronized
void DownKeyEventHandler_removeListener(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((DownKeyEventHandler_staticInit(), DownKeyEventHandler_instanceArray)[index], removeListener, eventListenerInterface);
        }
}

