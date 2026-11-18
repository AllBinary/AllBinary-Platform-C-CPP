// Generated Code Do Not Modify
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"
#if __has_include("org/allbinary/game/health/ViewPositionBase.h")
#include "org/allbinary/game/health/ViewPositionBase.h"
#endif
#if __has_include("javax/microedition/lcdui/ViewPositionBase.h")
#include "javax/microedition/lcdui/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/layer/ViewPositionBase.h")
#include "org/allbinary/layer/ViewPositionBase.h"
#endif





void HealthBarTwodAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealthBarTwodAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthBarTwodAnimation", "HealthBarAnimation");
    java_register_method("HealthBarTwodAnimation", "paintXY", (void*) HealthBarTwodAnimation_paintXY);
}


void HealthBarTwodAnimation_init(HealthBarTwodAnimation* this, AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarTwodAnimation_register();
        HealthBarAnimation_init(&this->base, layerInterface, location);
}

HealthBarTwodAnimation* HealthBarTwodAnimation_new(AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarTwodAnimation* this = java_object_alloc(sizeof(HealthBarTwodAnimation), "HealthBarTwodAnimation");
    HealthBarTwodAnimation_init(this, layerInterface, location);
    return this;
}


void HealthBarTwodAnimation_paintXY(HealthBarTwodAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t ax = GPoint_getX(AllBinaryLayer_getViewPosition(this->base.allbinaryLayer));
        BasicColorSetUtil_setBasicColorP3(this->base.base.basicSetColorUtil, graphics, this->base.base.basicColor, this->base.base.colorP);
        Graphics_fillRect(graphics, ax, HealthBarAnimation_getY(this) - 1, this->base.x2, this->base.thickness);
}

