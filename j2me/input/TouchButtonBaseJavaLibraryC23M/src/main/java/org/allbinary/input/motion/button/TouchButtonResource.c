// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonResource.h"




void TouchButtonResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonResource", nullptr);
}

static void TouchButtonResource_initFields(TouchButtonResource* this) {
    
    
}


void TouchButtonResource_init(TouchButtonResource* this, const char* resource, const char* hint) {
    TouchButtonResource_register();
    TouchButtonResource_initFields(this);
        this->RESOURCE = resource;
        this->HINT = hint;
}

TouchButtonResource* TouchButtonResource_new(const char* resource, const char* hint) {
    TouchButtonResource* this = java_object_alloc(sizeof(TouchButtonResource), "TouchButtonResource");
    TouchButtonResource_init(this, resource, hint);
    return this;
}

