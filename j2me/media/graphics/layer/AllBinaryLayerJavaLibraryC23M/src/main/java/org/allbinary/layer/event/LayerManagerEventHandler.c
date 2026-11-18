// Generated Code Do Not Modify
#include "org/allbinary/layer/event/LayerManagerEventHandler.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/layer/event/LayerManagerEventListener.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static LayerManagerEventHandler* LayerManagerEventHandler_instance;









void LayerManagerEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerManagerEventHandler_instance = LayerManagerEventHandler_new();
}

void LayerManagerEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerManagerEventHandler", "BasicEventHandler");
    java_register_method("LayerManagerEventHandler", "addListener", (void*) LayerManagerEventHandler_addListener);
    java_register_method("LayerManagerEventHandler", "removeAllListeners", (void*) LayerManagerEventHandler_removeAllListeners);
    java_register_method("LayerManagerEventHandler", "removeListener", (void*) LayerManagerEventHandler_removeListener);
    java_register_method("LayerManagerEventHandler", "fireEvent", (void*) LayerManagerEventHandler_fireEvent);
    java_register_method("LayerManagerEventHandler", "fireDeleteEvent", (void*) LayerManagerEventHandler_fireDeleteEvent);
    java_register_method("LayerManagerEventHandler", "process", (void*) LayerManagerEventHandler_process);
}

static void LayerManagerEventHandler_initFields(LayerManagerEventHandler* this) {
    this->list = BasicArrayListD_new();
    this->CREATE = "Create";
    this->DELETE = "Delete";
}


LayerManagerEventHandler* LayerManagerEventHandler_getInstance(void) {
        return (LayerManagerEventHandler_staticInit(), LayerManagerEventHandler_instance);
}


void LayerManagerEventHandler_init(LayerManagerEventHandler* this) {
    LayerManagerEventHandler_register();
    BasicEventHandler_init(&this->base);
    LayerManagerEventHandler_initFields(this);
}

LayerManagerEventHandler* LayerManagerEventHandler_new(void) {
    LayerManagerEventHandler* this = java_object_alloc(sizeof(LayerManagerEventHandler), "LayerManagerEventHandler");
    LayerManagerEventHandler_init(this);
    return this;
}


void LayerManagerEventHandler_addListener(LayerManagerEventHandler* this, LayerManagerEventListener* layerManagerEventListener) {
        if (!BasicArrayList_contains(this->list, layerManagerEventListener)) {
            BasicArrayList_add(this->list, layerManagerEventListener);
        }
}


void LayerManagerEventHandler_removeAllListeners(LayerManagerEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void LayerManagerEventHandler_removeListener(LayerManagerEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void LayerManagerEventHandler_fireEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                LayerManagerEventListener* layerManagerEventListener = ((LayerManagerEventListener*) this->list->objectArray[index]);
                LayerManagerEventListener_onCreateLayerManagerEvent(layerManagerEventListener, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
// synchronized
void LayerManagerEventHandler_fireDeleteEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                LayerManagerEventListener* layerManagerEventListener = ((LayerManagerEventListener*) this->list->objectArray[index]);
                LayerManagerEventListener_onDeleteLayerManagerEvent(layerManagerEventListener, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicArrayList* eventListenerInterfaceList = this->base.eventListenerInterfaceList;
        EventListenerInterface* eventListenerInterface = nullptr;
        LayerManagerEventListenerInterface* layerManagerEventListenerInterface = nullptr;
        int32_t listenerIndex = 0;
        while (listenerIndex < BasicArrayList_size(eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) eventListenerInterfaceList->objectArray[listenerIndex]);
                layerManagerEventListenerInterface = (((LayerManagerEventListenerInterface*) eventListenerInterface));
                LayerManagerEventListenerInterface_onDeleteLayerManagerEvent(layerManagerEventListenerInterface, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            listenerIndex++;
        }
}


// throws Exception
void LayerManagerEventHandler_process(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        LayerManagerEventListenerInterface* layerManagerEventListenerInterface = (((LayerManagerEventListenerInterface*) eventListenerInterface));
        LayerManagerEventListenerInterface_onCreateLayerManagerEvent(layerManagerEventListenerInterface, ((LayerManagerEvent*) eventObject));
}

