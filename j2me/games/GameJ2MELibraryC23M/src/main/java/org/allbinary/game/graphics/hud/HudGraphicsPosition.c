// Generated Code Do Not Modify
#include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif


HudGraphicsPosition* HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION;



static void HudGraphicsPosition_setAnchor(HudGraphicsPosition* this, int32_t anchor);



void HudGraphicsPosition_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION = HudGraphicsPosition_new(PointFactory_getInstance()->ZERO_ZERO, 9);
}

void HudGraphicsPosition_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HudGraphicsPosition", nullptr);
    java_register_method("HudGraphicsPosition", "getAnchor", (void*) HudGraphicsPosition_getAnchor);
    java_register_method("HudGraphicsPosition", "setAnchor", (void*) HudGraphicsPosition_setAnchor);
    java_register_method("HudGraphicsPosition", "getPoint", (void*) HudGraphicsPosition_getPoint);
    java_register_method("HudGraphicsPosition", "setPoint", (void*) HudGraphicsPosition_setPoint);
}

static void HudGraphicsPosition_initFields(HudGraphicsPosition* this) {
    this->anchor = 0;
    this->point = PointFactory_getInstance()->ZERO_ZERO;
}


void HudGraphicsPosition_init(HudGraphicsPosition* this, GPoint* point, int32_t anchor) {
    HudGraphicsPosition_register();
    HudGraphicsPosition_initFields(this);
        HudGraphicsPosition_setAnchor(this, anchor);
        HudGraphicsPosition_setPoint(this, point);
}

HudGraphicsPosition* HudGraphicsPosition_new(GPoint* point, int32_t anchor) {
    HudGraphicsPosition* this = java_object_alloc(sizeof(HudGraphicsPosition), "HudGraphicsPosition");
    HudGraphicsPosition_init(this, point, anchor);
    return this;
}


int32_t HudGraphicsPosition_getAnchor(HudGraphicsPosition* this) {
        return this->anchor;
}


static void HudGraphicsPosition_setAnchor(HudGraphicsPosition* this, int32_t anchor) {
        this->anchor = anchor;
}


GPoint* HudGraphicsPosition_getPoint(HudGraphicsPosition* this) {
        return this->point;
}


void HudGraphicsPosition_setPoint(HudGraphicsPosition* this, GPoint* point) {
        this->point = point;
}

