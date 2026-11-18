// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/CustomScreen.h"
#include "org/allbinary/graphics/form/CustomDisplayable.h"



void CustomScreen_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomScreen_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomScreen", "CustomDisplayable");
}

void CustomScreen_init(CustomScreen* this) {
    CustomScreen_register();
    CustomDisplayable_init(&this->base);
}

CustomScreen* CustomScreen_new(void) {
    CustomScreen* this = java_object_alloc(sizeof(CustomScreen), "CustomScreen");
    CustomScreen_init(this);
    return this;
}

