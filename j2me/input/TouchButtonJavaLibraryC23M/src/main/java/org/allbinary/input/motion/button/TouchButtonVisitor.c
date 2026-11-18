// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonVisitor.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"




void TouchButtonVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonVisitor", nullptr);
    java_register_method("TouchButtonVisitor", "process", (void*) TouchButtonVisitor_process);
}

void TouchButtonVisitor_init(TouchButtonVisitor* this) {
    TouchButtonVisitor_register();
}

TouchButtonVisitor* TouchButtonVisitor_new(void) {
    TouchButtonVisitor* this = java_object_alloc(sizeof(TouchButtonVisitor), "TouchButtonVisitor");
    TouchButtonVisitor_init(this);
    return this;
}


// throws Exception
void TouchButtonVisitor_process(TouchButtonVisitor* this, TouchButtonInput* touchButtonInput, const char* string) {
}

