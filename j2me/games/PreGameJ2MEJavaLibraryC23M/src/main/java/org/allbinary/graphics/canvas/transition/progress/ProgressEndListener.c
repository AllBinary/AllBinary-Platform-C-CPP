// Generated Code Do Not Modify
#include "org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h"


ProgressEndListener* ProgressEndListener_instance;


void ProgressEndListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ProgressEndListener_instance = ProgressEndListener_new();
}

void ProgressEndListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProgressEndListener", nullptr);
    java_register_method("ProgressEndListener", "onEndEvent", (void*) ProgressEndListener_onEndEvent);
}

void ProgressEndListener_init(ProgressEndListener* this) {
    ProgressEndListener_register();
}

ProgressEndListener* ProgressEndListener_new(void) {
    ProgressEndListener* this = java_object_alloc(sizeof(ProgressEndListener), "ProgressEndListener");
    ProgressEndListener_init(this);
    return this;
}


void ProgressEndListener_onEndEvent(ProgressEndListener* this) {
}

