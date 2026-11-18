// Generated Code Do Not Modify
#include "org/eclipse/swt/widgets/Display.h"




void Display_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Display_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Display", nullptr);
    java_register_method("Display", "sleep", (void*) Display_sleep);
}

void Display_init(Display* this) {
    Display_register();
}

Display* Display_new(void) {
    Display* this = java_object_alloc(sizeof(Display), "Display");
    Display_init(this);
    return this;
}


void Display_sleep(Display* this) {
}

