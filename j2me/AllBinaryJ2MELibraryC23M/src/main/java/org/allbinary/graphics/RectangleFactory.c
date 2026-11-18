// Generated Code Do Not Modify
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/PointFactory.h"


Rectangle* RectangleFactory_SINGLETON;
Rectangle*** RectangleFactory_ARRAY_OF_ARRAYS;

void RectangleFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RectangleFactory_SINGLETON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0);
    RectangleFactory_ARRAY_OF_ARRAYS = ((Rectangle***) java_array_new2(sizeof(Rectangle*), 0, 0));
}

void RectangleFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleFactory", nullptr);
}

void RectangleFactory_init(RectangleFactory* this) {
    RectangleFactory_register();
}

RectangleFactory* RectangleFactory_new(void) {
    RectangleFactory* this = java_object_alloc(sizeof(RectangleFactory), "RectangleFactory");
    RectangleFactory_init(this);
    return this;
}

