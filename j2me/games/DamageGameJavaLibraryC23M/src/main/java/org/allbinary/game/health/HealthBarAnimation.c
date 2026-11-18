// Generated Code Do Not Modify
#include "org/allbinary/game/health/HealthBarAnimation.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#if __has_include("org/allbinary/game/health/ViewPositionBase.h")
#include "org/allbinary/game/health/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/animation/ViewPositionBase.h")
#include "org/allbinary/animation/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/ViewPositionBase.h")
#include "org/allbinary/game/graphics/hud/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/graphics/color/ViewPositionBase.h")
#include "org/allbinary/graphics/color/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/layer/ViewPositionBase.h")
#include "org/allbinary/layer/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/game/health/ViewPositionBase.h")
#include "org/allbinary/game/health/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/animation/ViewPositionBase.h")
#include "org/allbinary/animation/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/game/graphics/hud/ViewPositionBase.h")
#include "org/allbinary/game/graphics/hud/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/graphics/color/ViewPositionBase.h")
#include "org/allbinary/graphics/color/ViewPositionBase.h"
#endif
#if __has_include("org/allbinary/layer/ViewPositionBase.h")
#include "org/allbinary/layer/ViewPositionBase.h"
#endif






void HealthBarAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HealthBarAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HealthBarAnimation", "Animation");
    java_register_method("HealthBarAnimation", "onHealthChange", (void*) HealthBarAnimation_onHealthChange);
    java_register_method("HealthBarAnimation", "getY", (void*) HealthBarAnimation_getY);
}

static void HealthBarAnimation_initFields(HealthBarAnimation* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->x2 = 0;
    this->thickness = 0;
    
    
}


void HealthBarAnimation_init(HealthBarAnimation* this, AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarAnimation_register();
    Animation_init(&this->base);
    HealthBarAnimation_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->location = location;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (this->location != basicHudFactory->TOPLEFT && this->location != basicHudFactory->BOTTOMLEFT) {
            java_throw(java_exception_new("Exception", "Location Not Valid"));
        }
        if (AllBinaryLayer_getWidth(layerInterface) > 40) {
            this->thickness = 3;
        } else if (AllBinaryLayer_getWidth(layerInterface) > 20) {
            this->thickness = 2;
        } else {
            this->thickness = 1;
        }
}

HealthBarAnimation* HealthBarAnimation_new(AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarAnimation* this = java_object_alloc(sizeof(HealthBarAnimation), "HealthBarAnimation");
    HealthBarAnimation_init(this, layerInterface, location);
    return this;
}


void HealthBarAnimation_onHealthChange(HealthBarAnimation* this, int32_t newX2) {
        this->x2 = newX2;
        int32_t quarter = (AllBinaryLayer_getWidth(this->allbinaryLayer) >> 2);
        if (this->x2 > quarter * 3) {
            this->base.basicColor = this->basicColorFactory->GREEN;
            this->base.colorP = BasicColor_intValue(this->base.basicColor);
        } else if (this->x2 > quarter * 2) {
            this->base.basicColor = this->basicColorFactory->YELLOW;
            this->base.colorP = BasicColor_intValue(this->base.basicColor);
        } else if (this->x2 > quarter) {
            this->base.basicColor = this->basicColorFactory->ORANGE;
            this->base.colorP = BasicColor_intValue(this->base.basicColor);
        } else {
            this->base.basicColor = this->basicColorFactory->RED;
            this->base.colorP = BasicColor_intValue(this->base.basicColor);
        }
}


int32_t HealthBarAnimation_getY(HealthBarAnimation* this) {
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (this->location == basicHudFactory->TOPLEFT) {
            return GPoint_getY(AllBinaryLayer_getViewPosition(this->allbinaryLayer)) - 4;
        } else if (this->location == basicHudFactory->BOTTOMLEFT) {
            return ViewPositionBase_getY2(AllBinaryLayer_getViewPosition(this->allbinaryLayer)) + 4;
        }
        return -1;
}

