// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/CircleFilledAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"








void CircleFilledAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CircleFilledAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CircleFilledAnimation", "Animation");
    java_register_method("CircleFilledAnimation", "nextFrame", (void*) CircleFilledAnimation_nextFrame);
    java_register_method("CircleFilledAnimation", "paintXY", (void*) CircleFilledAnimation_paintXY);
    java_register_method("CircleFilledAnimation", "getBasicColorP", (void*) CircleFilledAnimation_getBasicColorP);
    java_register_method("CircleFilledAnimation", "setBasicColorP", (void*) CircleFilledAnimation_setBasicColorP);
}

static void CircleFilledAnimation_initFields(CircleFilledAnimation* this) {
    
    
}


void CircleFilledAnimation_init(CircleFilledAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    CircleFilledAnimation_register();
        Animation_init(&this->base);
        CircleFilledAnimation_initFields(this);
        this->width = width;
        this->height = height;
        CircleFilledAnimation_setBasicColorP(this, basicColor);
}

CircleFilledAnimation* CircleFilledAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    CircleFilledAnimation* this = java_object_alloc(sizeof(CircleFilledAnimation), "CircleFilledAnimation");
    CircleFilledAnimation_init(this, width, height, basicColor);
    return this;
}


void CircleFilledAnimation_nextFrame(CircleFilledAnimation* this) {
}


void CircleFilledAnimation_paintXY(CircleFilledAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, CircleFilledAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_fillRect(graphics, x, y, this->width, this->height);
}


BasicColor* CircleFilledAnimation_getBasicColorP(CircleFilledAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void CircleFilledAnimation_setBasicColorP(CircleFilledAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

