// Generated Code Do Not Modify
#include "org/eclipse/swt/graphics/Resource.h"





void Resource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Resource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Resource", nullptr);
    java_register_method("Resource", "dispose", (void*) Resource_dispose);
    java_register_method("Resource", "isDisposed", (void*) Resource_isDisposed);
}

void Resource_init(Resource* this) {
    Resource_register();
}

Resource* Resource_new(void) {
    Resource* this = java_object_alloc(sizeof(Resource), "Resource");
    Resource_init(this);
    return this;
}


void Resource_dispose(Resource* this) {
}


bool Resource_isDisposed(Resource* this) {
        return false;
}

