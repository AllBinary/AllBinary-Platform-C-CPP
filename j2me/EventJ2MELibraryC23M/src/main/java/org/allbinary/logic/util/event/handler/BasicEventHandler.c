// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"















void BasicEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicEventHandler", nullptr);
    java_register_method("BasicEventHandler", "removeAllListeners", (void*) BasicEventHandler_removeAllListeners);
    java_register_method("BasicEventHandler", "addListeners", (void*) BasicEventHandler_addListeners);
    java_register_method("BasicEventHandler", "removeListeners", (void*) BasicEventHandler_removeListeners);
    java_register_method("BasicEventHandler", "addListenerSingleThreaded", (void*) BasicEventHandler_addListenerSingleThreaded);
    java_register_method("BasicEventHandler", "addListenerInterface", (void*) BasicEventHandler_addListenerInterface);
    java_register_method("BasicEventHandler", "removeListenerSingleThreaded", (void*) BasicEventHandler_removeListenerSingleThreaded);
    java_register_method("BasicEventHandler", "removeListener", (void*) BasicEventHandler_removeListener);
    java_register_method("BasicEventHandler", "fireEvent", (void*) BasicEventHandler_fireEvent);
    java_register_method("BasicEventHandler", "process", (void*) BasicEventHandler_process);
    java_register_method("BasicEventHandler", "getEventListenerInterfaceListP", (void*) BasicEventHandler_getEventListenerInterfaceListP);
    java_register_method("BasicEventHandler", "toString", (void*) BasicEventHandler_toString);
}

static void BasicEventHandler_initFields(BasicEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->eventStrings = EventStrings_getInstance();
    
}


void BasicEventHandler_init(BasicEventHandler* this) {
    BasicEventHandler_register();
    BasicEventHandler_initFields(this);
        this->eventListenerInterfaceList = BasicArrayListD_new();
}

BasicEventHandler* BasicEventHandler_new(void) {
    BasicEventHandler* this = java_object_alloc(sizeof(BasicEventHandler), "BasicEventHandler");
    BasicEventHandler_init(this);
    return this;
}


void BasicEventHandler_removeAllListeners(BasicEventHandler* this) {
        this->eventListenerInterfaceList = BasicArrayListD_new();
}


void BasicEventHandler_addListeners(BasicEventHandler* this, BasicArrayList* vector) {
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(vector, index));
            BasicEventHandler_addListenerInterface(this, eventListenerInterface);
        }
}


void BasicEventHandler_removeListeners(BasicEventHandler* this, BasicArrayList* vector) {
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(vector, index));
            BasicEventHandler_removeListener(this, eventListenerInterface);
        }
}


void BasicEventHandler_addListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void BasicEventHandler_addListenerInterface(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void BasicEventHandler_removeListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


void BasicEventHandler_removeListener(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// throws Exception
void BasicEventHandler_fireEvent(BasicEventHandler* this, AllBinaryEventObject* eventObject) {
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                BasicEventHandler_process(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->eventStrings->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void BasicEventHandler_process(BasicEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        EventListenerInterface_onEvent(eventListenerInterface, eventObject);
}


BasicArrayList* BasicEventHandler_getEventListenerInterfaceListP(BasicEventHandler* this) {
        return this->eventListenerInterfaceList;
}


const char* BasicEventHandler_toString(BasicEventHandler* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->eventStrings->TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->eventListenerInterfaceList));
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                StringMaker_append(stringBuffer, this->eventStrings->LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return java_string_of(stringBuffer);
}

