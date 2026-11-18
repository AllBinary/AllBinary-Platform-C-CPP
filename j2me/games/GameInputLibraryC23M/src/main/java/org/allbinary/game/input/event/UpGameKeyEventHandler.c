// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"


static UpGameKeyEventHandler* UpGameKeyEventHandler_instance;
static UpGameKeyEventHandlerBase** UpGameKeyEventHandler_instanceArray;








void UpGameKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    UpGameKeyEventHandler_instance = UpGameKeyEventHandler_new();
    UpGameKeyEventHandler_instanceArray = ((UpGameKeyEventHandlerBase**) java_array_from(sizeof(UpGameKeyEventHandlerBase*), sizeof((UpGameKeyEventHandlerBase*[]){ UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new() }) / sizeof(UpGameKeyEventHandlerBase*), (UpGameKeyEventHandlerBase*[]){ UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new() }));
}

void UpGameKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpGameKeyEventHandler", "UpGameKeyEventHandlerBase");
    java_register_method("UpGameKeyEventHandler", "getInstanceForDevice", (void*) UpGameKeyEventHandler_getInstanceForDevice);
    java_register_method("UpGameKeyEventHandler", "getInstanceForPlayer", (void*) UpGameKeyEventHandler_getInstanceForPlayer);
    java_register_method("UpGameKeyEventHandler", "removeAllListeners", (void*) UpGameKeyEventHandler_removeAllListeners);
    java_register_method("UpGameKeyEventHandler", "removeListenerSingleThreaded", (void*) UpGameKeyEventHandler_removeListenerSingleThreaded);
    java_register_method("UpGameKeyEventHandler", "removeListener", (void*) UpGameKeyEventHandler_removeListener);
}

static void UpGameKeyEventHandler_initFields(UpGameKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


UpGameKeyEventHandler* UpGameKeyEventHandler_getInstance(void) {
        return (UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instance);
}


UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForDevice(UpGameKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return (UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)[playerInputId];
}


UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForPlayer(UpGameKeyEventHandler* this, int32_t playerInputId) {
        return (UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)[playerInputId];
}


void UpGameKeyEventHandler_init(UpGameKeyEventHandler* this) {
    UpGameKeyEventHandler_register();
    UpGameKeyEventHandlerBase_init(&this->base);
    UpGameKeyEventHandler_initFields(this);
}

UpGameKeyEventHandler* UpGameKeyEventHandler_new(void) {
    UpGameKeyEventHandler* this = java_object_alloc(sizeof(UpGameKeyEventHandler), "UpGameKeyEventHandler");
    UpGameKeyEventHandler_init(this);
    return this;
}


void UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler* this) {
        UpGameKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)[index], removeAllListeners);
        }
}


void UpGameKeyEventHandler_removeListenerSingleThreaded(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


void UpGameKeyEventHandler_removeListener(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)) - 1; index >= 0; index--) {
            JAVA_CALL((UpGameKeyEventHandler_staticInit(), UpGameKeyEventHandler_instanceArray)[index], removeListener, eventListenerInterface);
        }
}

