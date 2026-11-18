// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"


static BasicColorSetUtil* BasicColorSetUtil_instance;





void BasicColorSetUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicColorSetUtil_instance = BasicColorSetUtil_new();
}

void BasicColorSetUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorSetUtil", nullptr);
    java_register_method("BasicColorSetUtil", "setBasicColorP", (void*) BasicColorSetUtil_setBasicColorP);
    java_register_method("BasicColorSetUtil", "setBasicColorP3", (void*) BasicColorSetUtil_setBasicColorP3);
}


BasicColorSetUtil* BasicColorSetUtil_getInstance(void) {
        return (BasicColorSetUtil_staticInit(), BasicColorSetUtil_instance);
}


void BasicColorSetUtil_init(BasicColorSetUtil* this) {
    BasicColorSetUtil_register();
}

BasicColorSetUtil* BasicColorSetUtil_new(void) {
    BasicColorSetUtil* this = java_object_alloc(sizeof(BasicColorSetUtil), "BasicColorSetUtil");
    BasicColorSetUtil_init(this);
    return this;
}


void BasicColorSetUtil_setBasicColorP(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor) {
        Graphics_setColor(graphics, BasicColor_intValue(basicColor));
}


void BasicColorSetUtil_setBasicColorP3(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor, int32_t value) {
        Graphics_setColor(graphics, value);
}

