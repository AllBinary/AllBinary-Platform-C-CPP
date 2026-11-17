// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/ColorTemperatureUtil.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"


static ColorTemperatureUtil* ColorTemperatureUtil_instance;



void ColorTemperatureUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ColorTemperatureUtil_instance = ColorTemperatureUtil_new();
}

void ColorTemperatureUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorTemperatureUtil", nullptr);
    java_register_method("ColorTemperatureUtil", "getBasicColor", (void*) ColorTemperatureUtil_getBasicColor);
}

static void ColorTemperatureUtil_initFields(ColorTemperatureUtil* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
}

void ColorTemperatureUtil_init(ColorTemperatureUtil* this) {
    ColorTemperatureUtil_register();
    ColorTemperatureUtil_initFields(this);
}

ColorTemperatureUtil* ColorTemperatureUtil_new(void) {
    ColorTemperatureUtil* this = java_object_alloc(sizeof(ColorTemperatureUtil), "ColorTemperatureUtil");
    ColorTemperatureUtil_init(this);
    return this;
}


ColorTemperatureUtil* ColorTemperatureUtil_getInstance(void) {
        return (ColorTemperatureUtil_staticInit(), ColorTemperatureUtil_instance);
}


BasicColor* ColorTemperatureUtil_getBasicColor(ColorTemperatureUtil* this, int32_t thirdTemp) {
        BasicColor* basicColor = this->basicColorFactory->RED;
        if (thirdTemp > 3700) {
            basicColor = this->basicColorFactory->PURPLE;
        } else if (thirdTemp > 3200) {
            basicColor = this->basicColorFactory->BLUE;
        } else if (thirdTemp > 2700) {
            basicColor = this->basicColorFactory->PUCE;
        } else if (thirdTemp > 2200) {
            basicColor = this->basicColorFactory->WHITE;
        } else if (thirdTemp > 1700) {
            basicColor = this->basicColorFactory->GREEN;
        } else if (thirdTemp > 1200) {
            basicColor = this->basicColorFactory->YELLOW;
        } else if (thirdTemp > 700) {
            basicColor = this->basicColorFactory->ORANGE;
        }
        return basicColor;
}

