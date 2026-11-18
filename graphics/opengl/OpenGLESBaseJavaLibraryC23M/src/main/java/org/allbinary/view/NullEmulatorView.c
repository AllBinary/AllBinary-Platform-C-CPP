// Generated Code Do Not Modify
#include "org/allbinary/view/NullEmulatorView.h"
#include "javax/microedition/lcdui/Displayable.h"
#include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/view/EmulatorViewInterface.h"


NullEmulatorView* NullEmulatorView_NULL_EMULATOR_VIEW;




void NullEmulatorView_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullEmulatorView_NULL_EMULATOR_VIEW = NullEmulatorView_new();
}

void NullEmulatorView_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullEmulatorView", nullptr);
    java_register_method("NullEmulatorView", "setMidlet", (void*) NullEmulatorView_setMidlet);
    java_register_method("NullEmulatorView", "onEmulatorInitComplete", (void*) NullEmulatorView_onEmulatorInitComplete);
    java_register_method("NullEmulatorView", "onSetDisplayable", (void*) NullEmulatorView_onSetDisplayable);
}

void NullEmulatorView_init(NullEmulatorView* this) {
    NullEmulatorView_register();
}

NullEmulatorView* NullEmulatorView_new(void) {
    NullEmulatorView* this = java_object_alloc(sizeof(NullEmulatorView), "NullEmulatorView");
    NullEmulatorView_init(this);
    return this;
}


void NullEmulatorView_setMidlet(NullEmulatorView* this, MIDlet* midlet) {
}


void NullEmulatorView_onEmulatorInitComplete(NullEmulatorView* this, void* midletActivity) {
}


void NullEmulatorView_onSetDisplayable(NullEmulatorView* this, Displayable* displayable) {
}

