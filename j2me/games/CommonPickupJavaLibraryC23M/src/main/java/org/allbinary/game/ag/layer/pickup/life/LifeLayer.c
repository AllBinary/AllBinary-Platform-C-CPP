// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/ag/life/Life.h"
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






void LifeLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LifeLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LifeLayer", "AllBinaryLayer");
    java_register_method("LifeLayer", "paint", (void*) LifeLayer_paint);
    java_register_method("LifeLayer", "visit", (void*) LifeLayer_visit);
}


void LifeLayer_init(LifeLayer* this) {
    LifeLayer_register();
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

LifeLayer* LifeLayer_new(void) {
    LifeLayer* this = java_object_alloc(sizeof(LifeLayer), "LifeLayer");
    LifeLayer_init(this);
    return this;
}


void LifeLayer_paint(LifeLayer* this, Graphics* graphics) {
}


void LifeLayer_visit(LifeLayer* this, Life* lifeInterface) {
        Life_add(lifeInterface, ((int16_t) 1));
}

