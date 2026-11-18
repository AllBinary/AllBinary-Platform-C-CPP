// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/RectangleAdjustedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"












void RectangleAdjustedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleAdjustedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleAdjustedAnimation", "Animation");
    java_register_method("RectangleAdjustedAnimation", "nextFrame", (void*) RectangleAdjustedAnimation_nextFrame);
    java_register_method("RectangleAdjustedAnimation", "paintXY", (void*) RectangleAdjustedAnimation_paintXY);
    java_register_method("RectangleAdjustedAnimation", "setWidth", (void*) RectangleAdjustedAnimation_setWidth);
    java_register_method("RectangleAdjustedAnimation", "setHeight", (void*) RectangleAdjustedAnimation_setHeight);
    java_register_method("RectangleAdjustedAnimation", "setOffsetX", (void*) RectangleAdjustedAnimation_setOffsetX);
    java_register_method("RectangleAdjustedAnimation", "setOffsetY", (void*) RectangleAdjustedAnimation_setOffsetY);
    java_register_method("RectangleAdjustedAnimation", "getBasicColorP", (void*) RectangleAdjustedAnimation_getBasicColorP);
    java_register_method("RectangleAdjustedAnimation", "setBasicColorP", (void*) RectangleAdjustedAnimation_setBasicColorP);
}

static void RectangleAdjustedAnimation_initFields(RectangleAdjustedAnimation* this) {
    
    
    
    
}


void RectangleAdjustedAnimation_init(RectangleAdjustedAnimation* this, int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleAdjustedAnimation_register();
    Animation_init(&this->base);
    RectangleAdjustedAnimation_initFields(this);
        this->width = width;
        this->height = height;
        this->offsetX = offsetX;
        this->offsetY = offsetY;
        RectangleAdjustedAnimation_setBasicColorP(this, basicColor);
}

RectangleAdjustedAnimation* RectangleAdjustedAnimation_new(int32_t width, int32_t height, int32_t offsetX, int32_t offsetY, BasicColor* basicColor) {
    RectangleAdjustedAnimation* this = java_object_alloc(sizeof(RectangleAdjustedAnimation), "RectangleAdjustedAnimation");
    RectangleAdjustedAnimation_init(this, width, height, offsetX, offsetY, basicColor);
    return this;
}


void RectangleAdjustedAnimation_nextFrame(RectangleAdjustedAnimation* this) {
}


void RectangleAdjustedAnimation_paintXY(RectangleAdjustedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, RectangleAdjustedAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_drawRect(graphics, x + this->offsetX, y + this->offsetY, this->width, this->height);
}


void RectangleAdjustedAnimation_setWidth(RectangleAdjustedAnimation* this, int32_t width) {
        this->width = width;
}


void RectangleAdjustedAnimation_setHeight(RectangleAdjustedAnimation* this, int32_t height) {
        this->height = height;
}


void RectangleAdjustedAnimation_setOffsetX(RectangleAdjustedAnimation* this, int32_t offsetX) {
        this->offsetX = offsetX;
}


void RectangleAdjustedAnimation_setOffsetY(RectangleAdjustedAnimation* this, int32_t offsetY) {
        this->offsetY = offsetY;
}


BasicColor* RectangleAdjustedAnimation_getBasicColorP(RectangleAdjustedAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleAdjustedAnimation_setBasicColorP(RectangleAdjustedAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

