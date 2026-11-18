// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchScreenType.h"






void TouchScreenType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchScreenType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchScreenType", nullptr);
    java_register_method("TouchScreenType", "getName", (void*) TouchScreenType_getName);
    java_register_method("TouchScreenType", "toString", (void*) TouchScreenType_toString);
}

static void TouchScreenType_initFields(TouchScreenType* this) {
    
}


void TouchScreenType_init(TouchScreenType* this, const char* name) {
    TouchScreenType_register();
    TouchScreenType_initFields(this);
        this->name = name;
}

TouchScreenType* TouchScreenType_new(const char* name) {
    TouchScreenType* this = java_object_alloc(sizeof(TouchScreenType), "TouchScreenType");
    TouchScreenType_init(this, name);
    return this;
}


const char* TouchScreenType_getName(TouchScreenType* this) {
        return this->name;
}


const char* TouchScreenType_toString(TouchScreenType* this) {
        return TouchScreenType_getName(this);
}

