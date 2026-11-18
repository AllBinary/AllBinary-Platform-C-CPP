// Generated Code Do Not Modify
#include "javax/microedition/lcdui/NullCommandListener.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Displayable.h"


NullCommandListener* NullCommandListener_NULL_COMMAND_LISTENER;


void NullCommandListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullCommandListener_NULL_COMMAND_LISTENER = NullCommandListener_new();
}

void NullCommandListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullCommandListener", nullptr);
    java_register_method("NullCommandListener", "commandAction", (void*) NullCommandListener_commandAction);
}

void NullCommandListener_init(NullCommandListener* this) {
    NullCommandListener_register();
}

NullCommandListener* NullCommandListener_new(void) {
    NullCommandListener* this = java_object_alloc(sizeof(NullCommandListener), "NullCommandListener");
    NullCommandListener_init(this);
    return this;
}


void NullCommandListener_commandAction(NullCommandListener* this, Command* c, Displayable* d) {
}

