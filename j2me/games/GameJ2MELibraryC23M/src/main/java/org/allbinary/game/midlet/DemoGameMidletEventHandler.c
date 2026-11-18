// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/DemoGameMidletEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventListener.h"
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"


static DemoGameMidletEventHandler* DemoGameMidletEventHandler_gameKeyEventHandler;




void DemoGameMidletEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DemoGameMidletEventHandler_gameKeyEventHandler = DemoGameMidletEventHandler_new();
}

void DemoGameMidletEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoGameMidletEventHandler", "BasicEventHandler");
    java_register_method("DemoGameMidletEventHandler", "process", (void*) DemoGameMidletEventHandler_process);
}


void DemoGameMidletEventHandler_init(DemoGameMidletEventHandler* this) {
    DemoGameMidletEventHandler_register();
    BasicEventHandler_init(&this->base);
}

DemoGameMidletEventHandler* DemoGameMidletEventHandler_new(void) {
    DemoGameMidletEventHandler* this = java_object_alloc(sizeof(DemoGameMidletEventHandler), "DemoGameMidletEventHandler");
    DemoGameMidletEventHandler_init(this);
    return this;
}


DemoGameMidletEventHandler* DemoGameMidletEventHandler_getInstance(void) {
        return (DemoGameMidletEventHandler_staticInit(), DemoGameMidletEventHandler_gameKeyEventHandler);
}


// throws Exception
void DemoGameMidletEventHandler_process(DemoGameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DemoGameMidletEventListener* demoGameMidletEventListener = ((DemoGameMidletEventListener*) eventListenerInterface);
        DemoGameMidletEventListener_onDemoGameMidletEvent(demoGameMidletEventListener, ((DemoGameMidletEvent*) eventObject));
}

