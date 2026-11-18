// Generated Code Do Not Modify
#include "org/allbinary/view/event/ViewPositionEventHandler.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/view/event/ViewPositionEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static ViewPositionEventHandler* ViewPositionEventHandler_SINGLETON;








void ViewPositionEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ViewPositionEventHandler_SINGLETON = ViewPositionEventHandler_new();
}

void ViewPositionEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ViewPositionEventHandler", "BasicEventHandler");
    java_register_method("ViewPositionEventHandler", "addListener", (void*) ViewPositionEventHandler_addListener);
    java_register_method("ViewPositionEventHandler", "removeAllListeners", (void*) ViewPositionEventHandler_removeAllListeners);
    java_register_method("ViewPositionEventHandler", "removeListener", (void*) ViewPositionEventHandler_removeListener);
    java_register_method("ViewPositionEventHandler", "fireEvent", (void*) ViewPositionEventHandler_fireEvent);
    java_register_method("ViewPositionEventHandler", "process", (void*) ViewPositionEventHandler_process);
}

static void ViewPositionEventHandler_initFields(ViewPositionEventHandler* this) {
    this->list = BasicArrayListD_new();
}


ViewPositionEventHandler* ViewPositionEventHandler_getInstance(void) {
        return (ViewPositionEventHandler_staticInit(), ViewPositionEventHandler_SINGLETON);
}


void ViewPositionEventHandler_init(ViewPositionEventHandler* this) {
    ViewPositionEventHandler_register();
    BasicEventHandler_init(&this->base);
    ViewPositionEventHandler_initFields(this);
}

ViewPositionEventHandler* ViewPositionEventHandler_new(void) {
    ViewPositionEventHandler* this = java_object_alloc(sizeof(ViewPositionEventHandler), "ViewPositionEventHandler");
    ViewPositionEventHandler_init(this);
    return this;
}


void ViewPositionEventHandler_addListener(ViewPositionEventHandler* this, AllBinaryLayer* layerInterface) {
        if (!BasicArrayList_contains(this->list, layerInterface)) {
            BasicArrayList_add(this->list, layerInterface);
        }
}


void ViewPositionEventHandler_removeAllListeners(ViewPositionEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void ViewPositionEventHandler_removeListener(ViewPositionEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void ViewPositionEventHandler_fireEvent(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                AllBinaryLayer* layerInterface = ((AllBinaryLayer*) this->list->objectArray[index]);
                AllBinaryLayer_onChangeEvent(layerInterface, ((ViewPositionEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void ViewPositionEventHandler_process(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        ViewPositionEventListenerInterface* viewPositionEventListenerInterface = (((ViewPositionEventListenerInterface*) eventListenerInterface));
        ViewPositionEventListenerInterface_onChangeEvent(viewPositionEventListenerInterface, ((ViewPositionEvent*) eventObject));
}

