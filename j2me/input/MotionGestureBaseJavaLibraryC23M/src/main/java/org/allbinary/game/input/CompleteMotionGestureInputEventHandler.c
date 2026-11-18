// Generated Code Do Not Modify
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListener.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_SINGLETON;








void CompleteMotionGestureInputEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CompleteMotionGestureInputEventHandler_SINGLETON = CompleteMotionGestureInputEventHandler_new();
}

void CompleteMotionGestureInputEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompleteMotionGestureInputEventHandler", "BasicEventHandler");
    java_register_method("CompleteMotionGestureInputEventHandler", "addListener", (void*) CompleteMotionGestureInputEventHandler_addListener);
    java_register_method("CompleteMotionGestureInputEventHandler", "removeAllListeners", (void*) CompleteMotionGestureInputEventHandler_removeAllListeners);
    java_register_method("CompleteMotionGestureInputEventHandler", "removeListener", (void*) CompleteMotionGestureInputEventHandler_removeListener);
    java_register_method("CompleteMotionGestureInputEventHandler", "fireEvent", (void*) CompleteMotionGestureInputEventHandler_fireEvent);
    java_register_method("CompleteMotionGestureInputEventHandler", "process", (void*) CompleteMotionGestureInputEventHandler_process);
}

static void CompleteMotionGestureInputEventHandler_initFields(CompleteMotionGestureInputEventHandler* this) {
    this->list = BasicArrayListD_new();
}


CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_getInstance(void) {
        return (CompleteMotionGestureInputEventHandler_staticInit(), CompleteMotionGestureInputEventHandler_SINGLETON);
}


void CompleteMotionGestureInputEventHandler_init(CompleteMotionGestureInputEventHandler* this) {
    CompleteMotionGestureInputEventHandler_register();
    BasicEventHandler_init(&this->base);
    CompleteMotionGestureInputEventHandler_initFields(this);
}

CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_new(void) {
    CompleteMotionGestureInputEventHandler* this = java_object_alloc(sizeof(CompleteMotionGestureInputEventHandler), "CompleteMotionGestureInputEventHandler");
    CompleteMotionGestureInputEventHandler_init(this);
    return this;
}


void CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler* this, CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener) {
        if (!BasicArrayList_contains(this->list, completeMotionGestureInputEventListener)) {
            BasicArrayList_add(this->list, completeMotionGestureInputEventListener);
        }
}


void CompleteMotionGestureInputEventHandler_removeAllListeners(CompleteMotionGestureInputEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener = ((CompleteMotionGestureInputEventListener*) this->list->objectArray[index]);
                CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(completeMotionGestureInputEventListener, ((CompleteMotionGestureInputEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void CompleteMotionGestureInputEventHandler_process(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface = ((CompleteMotionGestureInputEventListenerInterface*) eventListenerInterface);
        CompleteMotionGestureInputEventListenerInterface_onCompleteMotionGestureInputEvent(completeMotionGestureInputEventListenerInterface, ((CompleteMotionGestureInputEvent*) eventObject));
}

