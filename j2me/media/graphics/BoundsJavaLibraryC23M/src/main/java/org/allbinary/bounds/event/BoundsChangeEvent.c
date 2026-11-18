// Generated Code Do Not Modify
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"
#include "org/allbinary/graphics/Rectangle.h"





void BoundsChangeEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BoundsChangeEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BoundsChangeEvent", "AllBinaryEventObject");
    java_register_method("BoundsChangeEvent", "getRectangle", (void*) BoundsChangeEvent_getRectangle);
}


void BoundsChangeEvent_init(BoundsChangeEvent* this, Rectangle* rectangle) {
    BoundsChangeEvent_register();
        AllBinaryEventObject_init(&this->base, rectangle);
}

BoundsChangeEvent* BoundsChangeEvent_new(Rectangle* rectangle) {
    BoundsChangeEvent* this = java_object_alloc(sizeof(BoundsChangeEvent), "BoundsChangeEvent");
    BoundsChangeEvent_init(this, rectangle);
    return this;
}


Rectangle* BoundsChangeEvent_getRectangle(BoundsChangeEvent* this) {
        return ((Rectangle*) AllBinaryEventObject_getSource(this));
}

