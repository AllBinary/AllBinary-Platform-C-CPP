// Generated Code Do Not Modify
#include "org/allbinary/bounds/event/BoundsChangeEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/bounds/event/BoundsChangeEventListener.h"
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"


static BasicEventHandler* BoundsChangeEventHandler_SINGLETON;




void BoundsChangeEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BoundsChangeEventHandler_SINGLETON = BoundsChangeEventHandler_new();
}

void BoundsChangeEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BoundsChangeEventHandler", "BasicEventHandler");
    java_register_method("BoundsChangeEventHandler", "process", (void*) BoundsChangeEventHandler_process);
}


void BoundsChangeEventHandler_init(BoundsChangeEventHandler* this) {
    BoundsChangeEventHandler_register();
    BasicEventHandler_init(&this->base);
}

BoundsChangeEventHandler* BoundsChangeEventHandler_new(void) {
    BoundsChangeEventHandler* this = java_object_alloc(sizeof(BoundsChangeEventHandler), "BoundsChangeEventHandler");
    BoundsChangeEventHandler_init(this);
    return this;
}


BasicEventHandler* BoundsChangeEventHandler_getInstance(void) {
        return (BoundsChangeEventHandler_staticInit(), BoundsChangeEventHandler_SINGLETON);
}


// throws Exception
void BoundsChangeEventHandler_process(BoundsChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BoundsChangeEventListener* boundsChangeEventListener = ((BoundsChangeEventListener*) eventListenerInterface);
        BoundsChangeEventListener_onBoundsChangeEvent(boundsChangeEventListener, ((BoundsChangeEvent*) eventObject));
}

