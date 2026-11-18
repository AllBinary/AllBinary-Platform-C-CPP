// Generated Code Do Not Modify
#include "org/allbinary/game/input/event/PressGameKeyEventHandler.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static PressGameKeyEventHandler* PressGameKeyEventHandler_instance;








void PressGameKeyEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PressGameKeyEventHandler_instance = PressGameKeyEventHandler_new();
}

void PressGameKeyEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PressGameKeyEventHandler", "BasicEventHandler");
    java_register_method("PressGameKeyEventHandler", "addListener", (void*) PressGameKeyEventHandler_addListener);
    java_register_method("PressGameKeyEventHandler", "removeAllListeners", (void*) PressGameKeyEventHandler_removeAllListeners);
    java_register_method("PressGameKeyEventHandler", "removeListener", (void*) PressGameKeyEventHandler_removeListener);
    java_register_method("PressGameKeyEventHandler", "fireEvent", (void*) PressGameKeyEventHandler_fireEvent);
    java_register_method("PressGameKeyEventHandler", "process", (void*) PressGameKeyEventHandler_process);
}

static void PressGameKeyEventHandler_initFields(PressGameKeyEventHandler* this) {
    this->list = BasicArrayListD_new();
}


PressGameKeyEventHandler* PressGameKeyEventHandler_getInstance(void) {
        return (PressGameKeyEventHandler_staticInit(), PressGameKeyEventHandler_instance);
}


void PressGameKeyEventHandler_init(PressGameKeyEventHandler* this) {
    PressGameKeyEventHandler_register();
    BasicEventHandler_init(&this->base);
    PressGameKeyEventHandler_initFields(this);
}

PressGameKeyEventHandler* PressGameKeyEventHandler_new(void) {
    PressGameKeyEventHandler* this = java_object_alloc(sizeof(PressGameKeyEventHandler), "PressGameKeyEventHandler");
    PressGameKeyEventHandler_init(this);
    return this;
}


void PressGameKeyEventHandler_addListener(PressGameKeyEventHandler* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void PressGameKeyEventHandler_removeAllListeners(PressGameKeyEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void PressGameKeyEventHandler_removeListener(PressGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onPressGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void PressGameKeyEventHandler_process(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        PressGameKeyEventListenerInterface* pressGameKeyEventListenerInterface = (((PressGameKeyEventListenerInterface*) eventListenerInterface));
        PressGameKeyEventListenerInterface_onPressGameKeyEvent(pressGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}

