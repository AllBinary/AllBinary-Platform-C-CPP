// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/UpKeyEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static const char* UpKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* UpKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";









void UpKeyEventHandlerBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpKeyEventHandlerBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpKeyEventHandlerBase", "BasicEventHandler");
    java_register_method("UpKeyEventHandlerBase", "addListener", (void*) UpKeyEventHandlerBase_addListener);
    java_register_method("UpKeyEventHandlerBase", "removeAllListeners", (void*) UpKeyEventHandlerBase_removeAllListeners);
    java_register_method("UpKeyEventHandlerBase", "removeListenerSingleThreaded", (void*) UpKeyEventHandlerBase_removeListenerSingleThreaded);
    java_register_method("UpKeyEventHandlerBase", "removeListener", (void*) UpKeyEventHandlerBase_removeListener);
    java_register_method("UpKeyEventHandlerBase", "fireEventForInteger", (void*) UpKeyEventHandlerBase_fireEventForInteger);
    java_register_method("UpKeyEventHandlerBase", "processForInteger", (void*) UpKeyEventHandlerBase_processForInteger);
    java_register_method("UpKeyEventHandlerBase", "toString", (void*) UpKeyEventHandlerBase_toString);
}

static void UpKeyEventHandlerBase_initFields(UpKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void UpKeyEventHandlerBase_init(UpKeyEventHandlerBase* this) {
    UpKeyEventHandlerBase_register();
    BasicEventHandler_init(&this->base);
    UpKeyEventHandlerBase_initFields(this);
}

UpKeyEventHandlerBase* UpKeyEventHandlerBase_new(void) {
    UpKeyEventHandlerBase* this = java_object_alloc(sizeof(UpKeyEventHandlerBase), "UpKeyEventHandlerBase");
    UpKeyEventHandlerBase_init(this);
    return this;
}


void UpKeyEventHandlerBase_addListener(UpKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void UpKeyEventHandlerBase_removeAllListeners(UpKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void UpKeyEventHandlerBase_removeListenerSingleThreaded(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void UpKeyEventHandlerBase_removeListener(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void UpKeyEventHandlerBase_fireEventForInteger(UpKeyEventHandlerBase* this, int32_t eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onUpKeyEvent(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < BasicArrayList_size(this->base.eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->base.eventListenerInterfaceList, index));
                UpKeyEventHandlerBase_processForInteger(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void UpKeyEventHandlerBase_processForInteger(UpKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface) {
        UpKeyEventListenerInterface* upKeyEventListenerInterface = ((UpKeyEventListenerInterface*) eventListenerInterface);
        UpKeyEventListenerInterface_onUpKeyEvent(upKeyEventListenerInterface, eventObject);
}


const char* UpKeyEventHandlerBase_toString(UpKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, UpKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        for (int32_t index = 0; index < BasicArrayList_size(this->list); index++) {
            JAVA_TRY {
                EventListenerInterface* eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, UpKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return java_string_of(stringBuffer);
}

