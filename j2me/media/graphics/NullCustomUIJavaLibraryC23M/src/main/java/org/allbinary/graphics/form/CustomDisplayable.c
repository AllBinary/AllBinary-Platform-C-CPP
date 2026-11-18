// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/CustomDisplayable.h"




void CustomDisplayable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomDisplayable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomDisplayable", nullptr);
    java_register_method("CustomDisplayable", "setTitle", (void*) CustomDisplayable_setTitle);
}

void CustomDisplayable_init(CustomDisplayable* this) {
    CustomDisplayable_register();
}

CustomDisplayable* CustomDisplayable_new(void) {
    CustomDisplayable* this = java_object_alloc(sizeof(CustomDisplayable), "CustomDisplayable");
    CustomDisplayable_init(this);
    return this;
}


void CustomDisplayable_setTitle(CustomDisplayable* this, const char* title) {
}

