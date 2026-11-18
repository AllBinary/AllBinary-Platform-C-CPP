// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static const char* UpGameKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* UpGameKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";









void UpGameKeyEventHandlerBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpGameKeyEventHandlerBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpGameKeyEventHandlerBase", "BasicEventHandler");
    java_register_method("UpGameKeyEventHandlerBase", "addListener", (void*) UpGameKeyEventHandlerBase_addListener);
    java_register_method("UpGameKeyEventHandlerBase", "removeAllListeners", (void*) UpGameKeyEventHandlerBase_removeAllListeners);
    java_register_method("UpGameKeyEventHandlerBase", "removeListenerSingleThreaded", (void*) UpGameKeyEventHandlerBase_removeListenerSingleThreaded);
    java_register_method("UpGameKeyEventHandlerBase", "removeListener", (void*) UpGameKeyEventHandlerBase_removeListener);
    java_register_method("UpGameKeyEventHandlerBase", "fireEvent", (void*) UpGameKeyEventHandlerBase_fireEvent);
    java_register_method("UpGameKeyEventHandlerBase", "process", (void*) UpGameKeyEventHandlerBase_process);
    java_register_method("UpGameKeyEventHandlerBase", "toString", (void*) UpGameKeyEventHandlerBase_toString);
}

static void UpGameKeyEventHandlerBase_initFields(UpGameKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void UpGameKeyEventHandlerBase_init(UpGameKeyEventHandlerBase* this) {
    UpGameKeyEventHandlerBase_register();
    BasicEventHandler_init(&this->base);
    UpGameKeyEventHandlerBase_initFields(this);
}

UpGameKeyEventHandlerBase* UpGameKeyEventHandlerBase_new(void) {
    UpGameKeyEventHandlerBase* this = java_object_alloc(sizeof(UpGameKeyEventHandlerBase), "UpGameKeyEventHandlerBase");
    UpGameKeyEventHandlerBase_init(this);
    return this;
}


void UpGameKeyEventHandlerBase_addListener(UpGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void UpGameKeyEventHandlerBase_removeAllListeners(UpGameKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void UpGameKeyEventHandlerBase_removeListenerSingleThreaded(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void UpGameKeyEventHandlerBase_removeListener(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onUpGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void UpGameKeyEventHandlerBase_process(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventListenerInterface* upGameKeyEventListenerInterface = ((UpGameKeyEventListenerInterface*) eventListenerInterface);
        UpGameKeyEventListenerInterface_onUpGameKeyEvent(upGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}


const char* UpGameKeyEventHandlerBase_toString(UpGameKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->list);
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, UpGameKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, size);
        for (int32_t index = 0; index < size; index++) {
            JAVA_TRY {
                EventListenerInterface* eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, UpGameKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, java_string_of(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return java_string_of(stringBuffer);
}

