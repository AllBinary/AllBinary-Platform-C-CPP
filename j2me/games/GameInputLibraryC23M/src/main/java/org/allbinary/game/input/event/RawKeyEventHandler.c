// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/RawKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static RawKeyEventHandler* RawKeyEventHandler_instance;
static const char* RawKeyEventHandler_TOTAL_LISTENERS = "Total Listeners: ";
static const char* RawKeyEventHandler_LISTENER_LABEL = " Listener: ";













void RawKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RawKeyEventHandler_instance = RawKeyEventHandler_new();
}

void RawKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RawKeyEventHandler", nullptr);
    java_register_method("RawKeyEventHandler", "removeAllListeners", (void*) RawKeyEventHandler_removeAllListeners);
    java_register_method("RawKeyEventHandler", "addListeners", (void*) RawKeyEventHandler_addListeners);
    java_register_method("RawKeyEventHandler", "addListenerSingleThreaded", (void*) RawKeyEventHandler_addListenerSingleThreaded);
    java_register_method("RawKeyEventHandler", "addListener", (void*) RawKeyEventHandler_addListener);
    java_register_method("RawKeyEventHandler", "removeListenerSingleThreaded", (void*) RawKeyEventHandler_removeListenerSingleThreaded);
    java_register_method("RawKeyEventHandler", "removeListener", (void*) RawKeyEventHandler_removeListener);
    java_register_method("RawKeyEventHandler", "fireEvent", (void*) RawKeyEventHandler_fireEvent);
    java_register_method("RawKeyEventHandler", "process", (void*) RawKeyEventHandler_process);
    java_register_method("RawKeyEventHandler", "getEventListenerInterfaceListP", (void*) RawKeyEventHandler_getEventListenerInterfaceListP);
    java_register_method("RawKeyEventHandler", "toString", (void*) RawKeyEventHandler_toString);
}

static void RawKeyEventHandler_initFields(RawKeyEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    
}


RawKeyEventHandler* RawKeyEventHandler_getInstance(void) {
        return (RawKeyEventHandler_staticInit(), RawKeyEventHandler_instance);
}


void RawKeyEventHandler_init(RawKeyEventHandler* this) {
    RawKeyEventHandler_register();
    RawKeyEventHandler_initFields(this);
        this->eventListenerInterfaceList = BasicArrayListD_new();
}

RawKeyEventHandler* RawKeyEventHandler_new(void) {
    RawKeyEventHandler* this = java_object_alloc(sizeof(RawKeyEventHandler), "RawKeyEventHandler");
    RawKeyEventHandler_init(this);
    return this;
}


void RawKeyEventHandler_removeAllListeners(RawKeyEventHandler* this) {
        this->eventListenerInterfaceList = BasicArrayListD_new();
}


void RawKeyEventHandler_addListeners(RawKeyEventHandler* this, BasicArrayList* vector) {
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(vector, index));
            RawKeyEventHandler_addListener(this, eventListenerInterface);
        }
}


void RawKeyEventHandler_addListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void RawKeyEventHandler_addListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void RawKeyEventHandler_removeListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


void RawKeyEventHandler_removeListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// throws Exception
void RawKeyEventHandler_fireEvent(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                RawKeyEventHandler_process(this, keyCode, deviceId, repeated, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void RawKeyEventHandler_process(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface) {
        RawKeyEventListener_onEventRaw(eventListenerInterface, keyCode, deviceId, repeated);
}


BasicArrayList* RawKeyEventHandler_getEventListenerInterfaceListP(RawKeyEventHandler* this) {
        return this->eventListenerInterfaceList;
}


const char* RawKeyEventHandler_toString(RawKeyEventHandler* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, RawKeyEventHandler_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->eventListenerInterfaceList));
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                StringMaker_append(stringBuffer, RawKeyEventHandler_LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return java_string_of(stringBuffer);
}

