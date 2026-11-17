// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/components/Component.h"





void Component_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Component_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Component", nullptr);
    java_register_method("Component", "toString", (void*) Component_toString);
}

static void Component_initFields(Component* this) {
    
}


void Component_init(Component* this, const char* componentName) {
    Component_register();
    Component_initFields(this);
        this->name = componentName;
}

Component* Component_new(const char* componentName) {
    Component* this = java_object_alloc(sizeof(Component), "Component");
    Component_init(this, componentName);
    return this;
}


const char* Component_toString(Component* this) {
        return this->name;
}

