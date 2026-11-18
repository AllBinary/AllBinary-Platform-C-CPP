// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/CircleAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/math/AngleFactory.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif








void CircleAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CircleAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CircleAnimation", "Animation");
    java_register_method("CircleAnimation", "nextFrame", (void*) CircleAnimation_nextFrame);
    java_register_method("CircleAnimation", "paintXY", (void*) CircleAnimation_paintXY);
    java_register_method("CircleAnimation", "getBasicColorP", (void*) CircleAnimation_getBasicColorP);
    java_register_method("CircleAnimation", "setBasicColorP", (void*) CircleAnimation_setBasicColorP);
}

static void CircleAnimation_initFields(CircleAnimation* this) {
    this->TOTAL_ANGLE = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
    
    
}


void CircleAnimation_init(CircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    CircleAnimation_register();
    Animation_init(&this->base);
    CircleAnimation_initFields(this);
        this->width = width;
        this->height = height;
        CircleAnimation_setBasicColorP(this, basicColor);
}

CircleAnimation* CircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    CircleAnimation* this = java_object_alloc(sizeof(CircleAnimation), "CircleAnimation");
    CircleAnimation_init(this, width, height, basicColor);
    return this;
}


void CircleAnimation_nextFrame(CircleAnimation* this) {
}


void CircleAnimation_paintXY(CircleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.basicSetColorUtil, graphics, CircleAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_drawArc(graphics, x, y, this->width, this->height, 0, this->TOTAL_ANGLE);
}


BasicColor* CircleAnimation_getBasicColorP(CircleAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void CircleAnimation_setBasicColorP(CircleAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

