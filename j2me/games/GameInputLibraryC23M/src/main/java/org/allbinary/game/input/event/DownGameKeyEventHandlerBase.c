// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static const char* DownGameKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* DownGameKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";









void DownGameKeyEventHandlerBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DownGameKeyEventHandlerBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DownGameKeyEventHandlerBase", "BasicEventHandler");
    java_register_method("DownGameKeyEventHandlerBase", "addListener", (void*) DownGameKeyEventHandlerBase_addListener);
    java_register_method("DownGameKeyEventHandlerBase", "removeAllListeners", (void*) DownGameKeyEventHandlerBase_removeAllListeners);
    java_register_method("DownGameKeyEventHandlerBase", "removeListenerSingleThreaded", (void*) DownGameKeyEventHandlerBase_removeListenerSingleThreaded);
    java_register_method("DownGameKeyEventHandlerBase", "removeListener", (void*) DownGameKeyEventHandlerBase_removeListener);
    java_register_method("DownGameKeyEventHandlerBase", "fireEvent", (void*) DownGameKeyEventHandlerBase_fireEvent);
    java_register_method("DownGameKeyEventHandlerBase", "process", (void*) DownGameKeyEventHandlerBase_process);
    java_register_method("DownGameKeyEventHandlerBase", "toString", (void*) DownGameKeyEventHandlerBase_toString);
}

static void DownGameKeyEventHandlerBase_initFields(DownGameKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void DownGameKeyEventHandlerBase_init(DownGameKeyEventHandlerBase* this) {
    DownGameKeyEventHandlerBase_register();
    BasicEventHandler_init(&this->base);
    DownGameKeyEventHandlerBase_initFields(this);
}

DownGameKeyEventHandlerBase* DownGameKeyEventHandlerBase_new(void) {
    DownGameKeyEventHandlerBase* this = java_object_alloc(sizeof(DownGameKeyEventHandlerBase), "DownGameKeyEventHandlerBase");
    DownGameKeyEventHandlerBase_init(this);
    return this;
}


void DownGameKeyEventHandlerBase_addListener(DownGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void DownGameKeyEventHandlerBase_removeAllListeners(DownGameKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void DownGameKeyEventHandlerBase_removeListenerSingleThreaded(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void DownGameKeyEventHandlerBase_removeListener(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void DownGameKeyEventHandlerBase_process(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventListenerInterface* downGameKeyEventListenerInterface = ((DownGameKeyEventListenerInterface*) eventListenerInterface);
        DownGameKeyEventListenerInterface_onDownGameKeyEvent(downGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}


const char* DownGameKeyEventHandlerBase_toString(DownGameKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, DownGameKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(this->list);
        int32_t index = 0;
        while (index < size) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, DownGameKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return java_string_of(stringBuffer);
}

