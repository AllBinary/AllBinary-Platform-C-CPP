// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


ABStringComponent* ABStringComponent_NULL_STRING_COMPONENT;





void ABStringComponent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABStringComponent_NULL_STRING_COMPONENT = ABStringComponent_new(BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
}

void ABStringComponent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABStringComponent", nullptr);
    java_register_method("ABStringComponent", "getBackgroundBasicColor", (void*) ABStringComponent_getBackgroundBasicColor);
    java_register_method("ABStringComponent", "getForegroundBasicColor", (void*) ABStringComponent_getForegroundBasicColor);
    java_register_method("ABStringComponent", "setForegroundBasicColor", (void*) ABStringComponent_setForegroundBasicColor);
}


BasicColor* ABStringComponent_getBackgroundBasicColor(ABStringComponent* this) {
        return BasicColorFactory_getInstance()->WHITE;
}


void ABStringComponent_init(ABStringComponent* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABStringComponent_register();
}

ABStringComponent* ABStringComponent_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABStringComponent* this = java_object_alloc(sizeof(ABStringComponent), "ABStringComponent");
    ABStringComponent_init(this, backgroundBasicColor, foregroundBasicColor);
    return this;
}


BasicColor* ABStringComponent_getForegroundBasicColor(ABStringComponent* this) {
        return BasicColorFactory_getInstance()->WHITE;
}


void ABStringComponent_setForegroundBasicColor(ABStringComponent* this, BasicColor* foregroundBasicColor) {
}

