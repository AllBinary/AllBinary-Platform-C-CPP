// Generated Code Do Not Modify
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/game/paint/ColorFillPaintable.h"
#include "org/allbinary/game/paint/OverScanColorFillPaintable.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif


static ColorFillPaintableFactory* ColorFillPaintableFactory_instance;



void ColorFillPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ColorFillPaintableFactory_instance = ColorFillPaintableFactory_new();
}

void ColorFillPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorFillPaintableFactory", nullptr);
    java_register_method("ColorFillPaintableFactory", "getInstance@3", (void*) ColorFillPaintableFactory_getInstance3);
}

void ColorFillPaintableFactory_init(ColorFillPaintableFactory* this) {
    ColorFillPaintableFactory_register();
}

ColorFillPaintableFactory* ColorFillPaintableFactory_new(void) {
    ColorFillPaintableFactory* this = java_object_alloc(sizeof(ColorFillPaintableFactory), "ColorFillPaintableFactory");
    ColorFillPaintableFactory_init(this);
    return this;
}


ColorFillPaintableFactory* ColorFillPaintableFactory_getInstance0(void) {
        return (ColorFillPaintableFactory_staticInit(), ColorFillPaintableFactory_instance);
}


// Java overloaded method: C needs a different name
ColorFillBasePaintable* ColorFillPaintableFactory_getInstance3(ColorFillPaintableFactory* this, BasicColor* basicColor, bool forThreedCanvas) {
        GenericOperatingSystem* operatingSystem = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        if (GenericOperatingSystem_isOverScan(operatingSystem)) {
            return OverScanColorFillPaintable_new(basicColor);
        } else {
            return ColorFillPaintable_new(basicColor);
        }
}

