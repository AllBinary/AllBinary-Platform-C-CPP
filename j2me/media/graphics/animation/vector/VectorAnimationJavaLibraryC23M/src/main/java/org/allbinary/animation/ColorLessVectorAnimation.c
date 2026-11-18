// Generated Code Do Not Modify
#include "org/allbinary/animation/ColorLessVectorAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif





void ColorLessVectorAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ColorLessVectorAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorLessVectorAnimation", "VectorAnimation");
    java_register_method("ColorLessVectorAnimation", "paintXY", (void*) ColorLessVectorAnimation_paintXY);
}


void ColorLessVectorAnimation_init(ColorLessVectorAnimation* this, int32_t*** currentPoints, AnimationBehavior* animationBehavior) {
    ColorLessVectorAnimation_register();
        VectorAnimation_init(&this->base, currentPoints, BasicColorFactory_getInstance()->WHITE, animationBehavior);
}

ColorLessVectorAnimation* ColorLessVectorAnimation_new(int32_t*** currentPoints, AnimationBehavior* animationBehavior) {
    ColorLessVectorAnimation* this = java_object_alloc(sizeof(ColorLessVectorAnimation), "ColorLessVectorAnimation");
    ColorLessVectorAnimation_init(this, currentPoints, animationBehavior);
    return this;
}


void ColorLessVectorAnimation_paintXY(ColorLessVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        VectorAnimation_paintVectors(this, graphics, x, y);
}

