// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


const char* BasicEventHandler_PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";











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
    java_register_method("BasicEventHandler", "toString", (void*) BasicEventHandler_toString);
    java_register_method("BasicEventHandler", "removeAllListeners", (void*) BasicEventHandler_removeAllListeners);
    java_register_method("BasicEventHandler", "addListenerSingleThreaded", (void*) BasicEventHandler_addListenerSingleThreaded);
    java_register_method("BasicEventHandler", "addListenerInterface", (void*) BasicEventHandler_addListenerInterface);
    java_register_method("BasicEventHandler", "removeListenerSingleThreaded", (void*) BasicEventHandler_removeListenerSingleThreaded);
    java_register_method("BasicEventHandler", "removeListener", (void*) BasicEventHandler_removeListener);
    java_register_method("BasicEventHandler", "fireEvent", (void*) BasicEventHandler_fireEvent);
    java_register_method("BasicEventHandler", "process", (void*) BasicEventHandler_process);
    java_register_method("BasicEventHandler", "getEventListenerInterfaceListP", (void*) BasicEventHandler_getEventListenerInterfaceListP);
}

static void BasicEventHandler_initFields(BasicEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    
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


const char* BasicEventHandler_toString(BasicEventHandler* this) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* LISTENER = " Listener: ";
        StringMaker_append(stringBuffer, "Total Listeners: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->eventListenerInterfaceList));
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) this->eventListenerInterfaceList->objectArray[index]);
                StringMaker_append(stringBuffer, LISTENER);
                StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return java_string_of(stringBuffer);
}


// synchronized
void BasicEventHandler_removeAllListeners(BasicEventHandler* this) {
        this->eventListenerInterfaceList = BasicArrayListD_new();
}


void BasicEventHandler_addListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


// synchronized
void BasicEventHandler_addListenerInterface(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void BasicEventHandler_removeListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// synchronized
void BasicEventHandler_removeListener(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// throws Exception
// synchronized
void BasicEventHandler_fireEvent(BasicEventHandler* this, AllBinaryEventObject* eventObject) {
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) this->eventListenerInterfaceList->objectArray[index]);
                BasicEventHandler_process(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
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

