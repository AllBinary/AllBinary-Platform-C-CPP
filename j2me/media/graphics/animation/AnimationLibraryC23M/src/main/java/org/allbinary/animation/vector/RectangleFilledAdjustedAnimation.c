// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"










void RectangleFilledAdjustedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleFilledAdjustedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleFilledAdjustedAnimation", "RectangleFilledAnimation");
    java_register_method("RectangleFilledAdjustedAnimation", "nextFrame", (void*) RectangleFilledAdjustedAnimation_nextFrame);
    java_register_method("RectangleFilledAdjustedAnimation", "paintXY", (void*) RectangleFilledAdjustedAnimation_paintXY);
    java_register_method("RectangleFilledAdjustedAnimation", "setOffsetX", (void*) RectangleFilledAdjustedAnimation_setOffsetX);
    java_register_method("RectangleFilledAdjustedAnimation", "setOffsetY", (void*) RectangleFilledAdjustedAnimation_setOffsetY);
    java_register_method("RectangleFilledAdjustedAnimation", "getBasicColorP", (void*) RectangleFilledAdjustedAnimation_getBasicColorP);
    java_register_method("RectangleFilledAdjustedAnimation", "setBasicColorP", (void*) RectangleFilledAdjustedAnimation_setBasicColorP);
}

static void RectangleFilledAdjustedAnimation_initFields(RectangleFilledAdjustedAnimation* this) {
    
    
}


void RectangleFilledAdjustedAnimation_init(RectangleFilledAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleFilledAdjustedAnimation_register();
        RectangleFilledAnimation_init(&this->base, width, height, basicColor);
        RectangleFilledAdjustedAnimation_initFields(this);
        this->offsetX = offsetX;
        this->offsetY = offsetY;
        RectangleFilledAdjustedAnimation_setBasicColorP(this, basicColor);
}

RectangleFilledAdjustedAnimation* RectangleFilledAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleFilledAdjustedAnimation* this = java_object_alloc(sizeof(RectangleFilledAdjustedAnimation), "RectangleFilledAdjustedAnimation");
    RectangleFilledAdjustedAnimation_init(this, width, height, offsetX, offsetY, basicColor);
    return this;
}


void RectangleFilledAdjustedAnimation_nextFrame(RectangleFilledAdjustedAnimation* this) {
}


void RectangleFilledAdjustedAnimation_paintXY(RectangleFilledAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.base.basicSetColorUtil, graphics, RectangleFilledAdjustedAnimation_getBasicColorP(this), Animation_getColor(this));
        RectangleFilledAnimation_paintXY((&this->base), graphics, x + this->offsetX, y + this->offsetY);
}


void RectangleFilledAdjustedAnimation_setOffsetX(RectangleFilledAdjustedAnimation* this, int32_t offsetX) {
        this->offsetX = offsetX;
}


void RectangleFilledAdjustedAnimation_setOffsetY(RectangleFilledAdjustedAnimation* this, int32_t offsetY) {
        this->offsetY = offsetY;
}


BasicColor* RectangleFilledAdjustedAnimation_getBasicColorP(RectangleFilledAdjustedAnimation* this) {
        return RectangleFilledAnimation_getBasicColorP((&this->base));
}


void RectangleFilledAdjustedAnimation_setBasicColorP(RectangleFilledAdjustedAnimation* this, BasicColor* basicColor) {
        RectangleFilledAnimation_setBasicColorP((&this->base), basicColor);
}

