// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/UpKeyEventHandler.h"
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"


static UpKeyEventHandler* UpKeyEventHandler_instance;
static UpKeyEventHandlerBase** UpKeyEventHandler_instanceArray;








void UpKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    UpKeyEventHandler_instance = UpKeyEventHandler_new();
    UpKeyEventHandler_instanceArray = ((UpKeyEventHandlerBase**) java_array_from(sizeof(UpKeyEventHandlerBase*), sizeof((UpKeyEventHandlerBase*[]){ UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new() }) / sizeof(UpKeyEventHandlerBase*), (UpKeyEventHandlerBase*[]){ UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new() }));
}

void UpKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpKeyEventHandler", "UpKeyEventHandlerBase");
    java_register_method("UpKeyEventHandler", "getInstanceForDevice", (void*) UpKeyEventHandler_getInstanceForDevice);
    java_register_method("UpKeyEventHandler", "getInstanceForPlayer", (void*) UpKeyEventHandler_getInstanceForPlayer);
    java_register_method("UpKeyEventHandler", "removeAllListeners", (void*) UpKeyEventHandler_removeAllListeners);
    java_register_method("UpKeyEventHandler", "removeListenerSingleThreaded", (void*) UpKeyEventHandler_removeListenerSingleThreaded);
    java_register_method("UpKeyEventHandler", "removeListener", (void*) UpKeyEventHandler_removeListener);
}

static void UpKeyEventHandler_initFields(UpKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


UpKeyEventHandler* UpKeyEventHandler_getInstance(void) {
        return (UpKeyEventHandler_staticInit(), UpKeyEventHandler_instance);
}


UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForDevice(UpKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return (UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)[playerInputId];
}


UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForPlayer(UpKeyEventHandler* this, int32_t playerInputId) {
        return (UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)[playerInputId];
}


void UpKeyEventHandler_init(UpKeyEventHandler* this) {
    UpKeyEventHandler_register();
    UpKeyEventHandlerBase_init(&this->base);
    UpKeyEventHandler_initFields(this);
}

UpKeyEventHandler* UpKeyEventHandler_new(void) {
    UpKeyEventHandler* this = java_object_alloc(sizeof(UpKeyEventHandler), "UpKeyEventHandler");
    UpKeyEventHandler_init(this);
    return this;
}


void UpKeyEventHandler_removeAllListeners(UpKeyEventHandler* this) {
        UpKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)[index], removeAllListeners);
        }
}


void UpKeyEventHandler_removeListenerSingleThreaded(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


void UpKeyEventHandler_removeListener(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpKeyEventHandler_staticInit(), UpKeyEventHandler_instanceArray)[index], removeListener, eventListenerInterface);
        }
}

