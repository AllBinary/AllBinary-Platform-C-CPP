// Generated Code Do Not Modify
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/input/event/VirtualKeyboardEvent.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif


static VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_gameKeyEventHandler;






void VirtualKeyboardEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VirtualKeyboardEventHandler_gameKeyEventHandler = VirtualKeyboardEventHandler_new();
}

void VirtualKeyboardEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VirtualKeyboardEventHandler", "BasicEventHandler");
    java_register_method("VirtualKeyboardEventHandler", "process", (void*) VirtualKeyboardEventHandler_process);
    java_register_method("VirtualKeyboardEventHandler", "open", (void*) VirtualKeyboardEventHandler_open);
    java_register_method("VirtualKeyboardEventHandler", "close", (void*) VirtualKeyboardEventHandler_close);
}

static void VirtualKeyboardEventHandler_initFields(VirtualKeyboardEventHandler* this) {
    this->SHOW_EVENT = VirtualKeyboardEvent_new(JAVA_BOX(BooleanFactory_getInstance()->TRUE));
    this->HIDE_EVENT = VirtualKeyboardEvent_new(JAVA_BOX(BooleanFactory_getInstance()->FALSE));
}


void VirtualKeyboardEventHandler_init(VirtualKeyboardEventHandler* this) {
    VirtualKeyboardEventHandler_register();
    BasicEventHandler_init(&this->base);
    VirtualKeyboardEventHandler_initFields(this);
}

VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_new(void) {
    VirtualKeyboardEventHandler* this = java_object_alloc(sizeof(VirtualKeyboardEventHandler), "VirtualKeyboardEventHandler");
    VirtualKeyboardEventHandler_init(this);
    return this;
}


VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_getInstance(void) {
        return (VirtualKeyboardEventHandler_staticInit(), VirtualKeyboardEventHandler_gameKeyEventHandler);
}


// throws Exception
void VirtualKeyboardEventHandler_process(VirtualKeyboardEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        VirtualKeyboardEventListenerInterface* virtualKeyboardEventListenerInterface = ((VirtualKeyboardEventListenerInterface*) eventListenerInterface);
        VirtualKeyboardEventListenerInterface_onVirtualKeyboardEvent(virtualKeyboardEventListenerInterface, ((VirtualKeyboardEvent*) eventObject));
}


void VirtualKeyboardEventHandler_open(VirtualKeyboardEventHandler* this) {
        JAVA_TRY {
            java_sleep(120);
            BasicEventHandler_fireEvent(this, this->SHOW_EVENT);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "open", e);
        } JAVA_END_TRY;
}


// throws Exception
void VirtualKeyboardEventHandler_close(VirtualKeyboardEventHandler* this) {
        JAVA_TRY {
            java_sleep(120);
            BasicEventHandler_fireEvent(this, this->HIDE_EVENT);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->CLOSE, e);
        } JAVA_END_TRY;
}

