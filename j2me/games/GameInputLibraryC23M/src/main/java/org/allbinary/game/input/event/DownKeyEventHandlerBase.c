// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/DownKeyEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static const char* DownKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* DownKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";











void DownKeyEventHandlerBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DownKeyEventHandlerBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DownKeyEventHandlerBase", "BasicEventHandler");
    java_register_method("DownKeyEventHandlerBase", "addListener", (void*) DownKeyEventHandlerBase_addListener);
    java_register_method("DownKeyEventHandlerBase", "removeAllListeners", (void*) DownKeyEventHandlerBase_removeAllListeners);
    java_register_method("DownKeyEventHandlerBase", "removeListenerSingleThreaded", (void*) DownKeyEventHandlerBase_removeListenerSingleThreaded);
    java_register_method("DownKeyEventHandlerBase", "removeListener", (void*) DownKeyEventHandlerBase_removeListener);
    java_register_method("DownKeyEventHandlerBase", "fireEventI", (void*) DownKeyEventHandlerBase_fireEventI);
    java_register_method("DownKeyEventHandlerBase", "fireEventForGameKeyEvent", (void*) DownKeyEventHandlerBase_fireEventForGameKeyEvent);
    java_register_method("DownKeyEventHandlerBase", "processI", (void*) DownKeyEventHandlerBase_processI);
    java_register_method("DownKeyEventHandlerBase", "processEvent", (void*) DownKeyEventHandlerBase_processEvent);
    java_register_method("DownKeyEventHandlerBase", "toString", (void*) DownKeyEventHandlerBase_toString);
}

static void DownKeyEventHandlerBase_initFields(DownKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void DownKeyEventHandlerBase_init(DownKeyEventHandlerBase* this) {
    DownKeyEventHandlerBase_register();
    BasicEventHandler_init(&this->base);
    DownKeyEventHandlerBase_initFields(this);
}

DownKeyEventHandlerBase* DownKeyEventHandlerBase_new(void) {
    DownKeyEventHandlerBase* this = java_object_alloc(sizeof(DownKeyEventHandlerBase), "DownKeyEventHandlerBase");
    DownKeyEventHandlerBase_init(this);
    return this;
}


void DownKeyEventHandlerBase_addListener(DownKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void DownKeyEventHandlerBase_removeAllListeners(DownKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void DownKeyEventHandlerBase_removeListenerSingleThreaded(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void DownKeyEventHandlerBase_removeListener(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void DownKeyEventHandlerBase_fireEventI(DownKeyEventHandlerBase* this, int32_t eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownKey(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < BasicArrayList_size(this->base.eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->base.eventListenerInterfaceList, index));
                DownKeyEventHandlerBase_processI(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void DownKeyEventHandlerBase_fireEventForGameKeyEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject) {
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size; --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownKeyEvent(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < BasicArrayList_size(this->base.eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->base.eventListenerInterfaceList, index));
                DownKeyEventHandlerBase_processEvent(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void DownKeyEventHandlerBase_processI(DownKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface) {
        DownKeyEventListenerInterface* downKeyEventListenerInterface = ((DownKeyEventListenerInterface*) eventListenerInterface);
        DownKeyEventListenerInterface_onDownKey(downKeyEventListenerInterface, eventObject);
}


// throws Exception
void DownKeyEventHandlerBase_processEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject, EventListenerInterface* eventListenerInterface) {
        DownKeyEventListenerInterface* downKeyEventListenerInterface = ((DownKeyEventListenerInterface*) eventListenerInterface);
        DownKeyEventListenerInterface_onDownKeyEvent(downKeyEventListenerInterface, eventObject);
}


const char* DownKeyEventHandlerBase_toString(DownKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, DownKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        EventListenerInterface* eventListenerInterface = nullptr;
        for (int32_t index = 0; index < BasicArrayList_size(this->list); index++) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, DownKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return java_string_of(stringBuffer);
}

