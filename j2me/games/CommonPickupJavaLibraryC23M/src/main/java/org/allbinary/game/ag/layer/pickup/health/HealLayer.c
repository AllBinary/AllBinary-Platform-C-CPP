// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/health/HealLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif






void HealLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealLayer", "AllBinaryLayer");
    java_register_method("HealLayer", "paint", (void*) HealLayer_paint);
    java_register_method("HealLayer", "visit", (void*) HealLayer_visit);
}


void HealLayer_init(HealLayer* this) {
    HealLayer_register();
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

HealLayer* HealLayer_new(void) {
    HealLayer* this = java_object_alloc(sizeof(HealLayer), "HealLayer");
    HealLayer_init(this);
    return this;
}


void HealLayer_paint(HealLayer* this, Graphics* graphics) {
}


void HealLayer_visit(HealLayer* this, HealthInterface* healthInterface) {
        if (HealthInterface_isAlive(healthInterface)) {
            HealthInterface_healMax(healthInterface);
        } else {
            LogUtil_putF(this->base.base.logUtil, "Heal attempt on dead: Does not currently occur", this, "visit");
        }
}

