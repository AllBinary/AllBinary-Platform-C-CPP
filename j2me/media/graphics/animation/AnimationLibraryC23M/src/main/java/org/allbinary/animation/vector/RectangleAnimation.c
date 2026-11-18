// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/RectangleAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"










void RectangleAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleAnimation", "Animation");
    java_register_method("RectangleAnimation", "nextFrame", (void*) RectangleAnimation_nextFrame);
    java_register_method("RectangleAnimation", "paintXY", (void*) RectangleAnimation_paintXY);
    java_register_method("RectangleAnimation", "setWidth", (void*) RectangleAnimation_setWidth);
    java_register_method("RectangleAnimation", "setHeight", (void*) RectangleAnimation_setHeight);
    java_register_method("RectangleAnimation", "getBasicColorP", (void*) RectangleAnimation_getBasicColorP);
    java_register_method("RectangleAnimation", "setBasicColorP", (void*) RectangleAnimation_setBasicColorP);
}

static void RectangleAnimation_initFields(RectangleAnimation* this) {
    
    
}


void RectangleAnimation_init(RectangleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleAnimation_register();
    Animation_init(&this->base);
    RectangleAnimation_initFields(this);
        this->width = width;
        this->height = height;
        RectangleAnimation_setBasicColorP(this, basicColor);
}

RectangleAnimation* RectangleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleAnimation* this = java_object_alloc(sizeof(RectangleAnimation), "RectangleAnimation");
    RectangleAnimation_init(this, width, height, basicColor);
    return this;
}


void RectangleAnimation_nextFrame(RectangleAnimation* this) {
}


void RectangleAnimation_paintXY(RectangleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, RectangleAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_drawRect(graphics, x, y, this->width, this->height);
}


void RectangleAnimation_setWidth(RectangleAnimation* this, int32_t width) {
        this->width = width;
}


void RectangleAnimation_setHeight(RectangleAnimation* this, int32_t height) {
        this->height = height;
}


BasicColor* RectangleAnimation_getBasicColorP(RectangleAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleAnimation_setBasicColorP(RectangleAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

