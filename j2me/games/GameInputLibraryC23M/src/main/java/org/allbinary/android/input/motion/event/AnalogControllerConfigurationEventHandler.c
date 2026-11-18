// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventListenerInterface.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_instance;








void AnalogControllerConfigurationEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnalogControllerConfigurationEventHandler_instance = AnalogControllerConfigurationEventHandler_new();
}

void AnalogControllerConfigurationEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogControllerConfigurationEventHandler", "BasicEventHandler");
    java_register_method("AnalogControllerConfigurationEventHandler", "addListener", (void*) AnalogControllerConfigurationEventHandler_addListener);
    java_register_method("AnalogControllerConfigurationEventHandler", "removeAllListeners", (void*) AnalogControllerConfigurationEventHandler_removeAllListeners);
    java_register_method("AnalogControllerConfigurationEventHandler", "removeListener", (void*) AnalogControllerConfigurationEventHandler_removeListener);
    java_register_method("AnalogControllerConfigurationEventHandler", "fireEvent", (void*) AnalogControllerConfigurationEventHandler_fireEvent);
    java_register_method("AnalogControllerConfigurationEventHandler", "process", (void*) AnalogControllerConfigurationEventHandler_process);
}

static void AnalogControllerConfigurationEventHandler_initFields(AnalogControllerConfigurationEventHandler* this) {
    this->list = BasicArrayListD_new();
}


AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_getInstance(void) {
        return (AnalogControllerConfigurationEventHandler_staticInit(), AnalogControllerConfigurationEventHandler_instance);
}


void AnalogControllerConfigurationEventHandler_init(AnalogControllerConfigurationEventHandler* this) {
    AnalogControllerConfigurationEventHandler_register();
    BasicEventHandler_init(&this->base);
    AnalogControllerConfigurationEventHandler_initFields(this);
}

AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_new(void) {
    AnalogControllerConfigurationEventHandler* this = java_object_alloc(sizeof(AnalogControllerConfigurationEventHandler), "AnalogControllerConfigurationEventHandler");
    AnalogControllerConfigurationEventHandler_init(this);
    return this;
}


void AnalogControllerConfigurationEventHandler_addListener(AnalogControllerConfigurationEventHandler* this, AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface) {
        if (!BasicArrayList_contains(this->list, analogControllerConfigurationEventListenerInterface)) {
            BasicArrayList_add(this->list, analogControllerConfigurationEventListenerInterface);
        }
}


void AnalogControllerConfigurationEventHandler_removeAllListeners(AnalogControllerConfigurationEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void AnalogControllerConfigurationEventHandler_removeListener(AnalogControllerConfigurationEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                AnalogControllerConfigurationEventListenerInterface* playerGameInput = ((AnalogControllerConfigurationEventListenerInterface*) this->list->objectArray[index]);
                AnalogControllerConfigurationEventListenerInterface_onAnalogControllerConfigurationEvent(playerGameInput, ((AnalogControllerConfigurationEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void AnalogControllerConfigurationEventHandler_process(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface = (((AnalogControllerConfigurationEventListenerInterface*) eventListenerInterface));
        AnalogControllerConfigurationEventListenerInterface_onAnalogControllerConfigurationEvent(analogControllerConfigurationEventListenerInterface, ((AnalogControllerConfigurationEvent*) eventObject));
}

