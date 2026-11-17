// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/ColorChangeEvent.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"






void ColorChangeEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ColorChangeEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorChangeEvent", "AllBinaryEventObject");
    java_register_method("ColorChangeEvent", "setBasicColorP", (void*) ColorChangeEvent_setBasicColorP);
    java_register_method("ColorChangeEvent", "getBasicColorP", (void*) ColorChangeEvent_getBasicColorP);
}

static void ColorChangeEvent_initFields(ColorChangeEvent* this) {
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
}


void ColorChangeEvent_init(ColorChangeEvent* this, void* anyType) {
    ColorChangeEvent_register();
        AllBinaryEventObject_init(&this->base, anyType);
        ColorChangeEvent_initFields(this);
}

ColorChangeEvent* ColorChangeEvent_new(void* anyType) {
    ColorChangeEvent* this = java_object_alloc(sizeof(ColorChangeEvent), "ColorChangeEvent");
    ColorChangeEvent_init(this, anyType);
    return this;
}


void ColorChangeEvent_setBasicColorP(ColorChangeEvent* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* ColorChangeEvent_getBasicColorP(ColorChangeEvent* this) {
        return this->basicColor;
}

