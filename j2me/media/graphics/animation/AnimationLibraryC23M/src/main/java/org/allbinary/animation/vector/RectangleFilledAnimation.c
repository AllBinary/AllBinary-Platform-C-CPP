// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"










void RectangleFilledAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleFilledAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleFilledAnimation", "Animation");
    java_register_method("RectangleFilledAnimation", "nextFrame", (void*) RectangleFilledAnimation_nextFrame);
    java_register_method("RectangleFilledAnimation", "paintXY", (void*) RectangleFilledAnimation_paintXY);
    java_register_method("RectangleFilledAnimation", "setWidth", (void*) RectangleFilledAnimation_setWidth);
    java_register_method("RectangleFilledAnimation", "setHeight", (void*) RectangleFilledAnimation_setHeight);
    java_register_method("RectangleFilledAnimation", "getBasicColorP", (void*) RectangleFilledAnimation_getBasicColorP);
    java_register_method("RectangleFilledAnimation", "setBasicColorP", (void*) RectangleFilledAnimation_setBasicColorP);
}

static void RectangleFilledAnimation_initFields(RectangleFilledAnimation* this) {
    
    
}


void RectangleFilledAnimation_init(RectangleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleFilledAnimation_register();
    Animation_init(&this->base);
    RectangleFilledAnimation_initFields(this);
        this->widthP = width;
        this->heightP = height;
        RectangleFilledAnimation_setBasicColorP(this, basicColor);
}

RectangleFilledAnimation* RectangleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    RectangleFilledAnimation* this = java_object_alloc(sizeof(RectangleFilledAnimation), "RectangleFilledAnimation");
    RectangleFilledAnimation_init(this, width, height, basicColor);
    return this;
}


void RectangleFilledAnimation_nextFrame(RectangleFilledAnimation* this) {
}


void RectangleFilledAnimation_paintXY(RectangleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, RectangleFilledAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_fillRect(graphics, x, y, this->widthP, this->heightP);
}


void RectangleFilledAnimation_setWidth(RectangleFilledAnimation* this, int32_t width) {
        this->widthP = width;
}


void RectangleFilledAnimation_setHeight(RectangleFilledAnimation* this, int32_t height) {
        this->heightP = height;
}


BasicColor* RectangleFilledAnimation_getBasicColorP(RectangleFilledAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void RectangleFilledAnimation_setBasicColorP(RectangleFilledAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

