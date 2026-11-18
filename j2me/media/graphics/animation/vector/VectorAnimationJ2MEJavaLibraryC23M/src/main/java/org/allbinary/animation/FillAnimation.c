// Generated Code Do Not Modify
#include "org/allbinary/animation/FillAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif









static void FillAnimation_updateModifiers(FillAnimation* this);


void FillAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FillAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FillAnimation", "IndexedAnimation");
    java_register_method("FillAnimation", "setBasicColorP", (void*) FillAnimation_setBasicColorP);
    java_register_method("FillAnimation", "changeBasicColor", (void*) FillAnimation_changeBasicColor);
    java_register_method("FillAnimation", "setAlpha", (void*) FillAnimation_setAlpha);
    java_register_method("FillAnimation", "setScale", (void*) FillAnimation_setScale);
    java_register_method("FillAnimation", "setMaxScale", (void*) FillAnimation_setMaxScale);
    java_register_method("FillAnimation", "updateModifiers", (void*) FillAnimation_updateModifiers);
    java_register_method("FillAnimation", "paint", (void*) FillAnimation_paint);
}

static void FillAnimation_initFields(FillAnimation* this) {
    
    
    
}


void FillAnimation_init(FillAnimation* this, int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior) {
    FillAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        FillAnimation_initFields(this);
        this->width = 100;
        this->height = 100;
        this->pixelBuffer = pixelBuffer;
}

FillAnimation* FillAnimation_new(int32_t* pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior) {
    FillAnimation* this = java_object_alloc(sizeof(FillAnimation), "FillAnimation");
    FillAnimation_init(this, pixelBuffer, width, height, animationBehavior);
    return this;
}


void FillAnimation_setBasicColorP(FillAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (Animation_getBasicColorP(this) == nullptr || BasicColor_intValue(Animation_getBasicColorP(this)) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        Animation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_changeBasicColor(FillAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (Animation_getChangeBasicColor(this) == nullptr || BasicColor_intValue(Animation_getChangeBasicColor(this)) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        Animation_changeBasicColor((&this->base), basicColor);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_setAlpha(FillAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->base.base.alphaP != alpha) {
            changed = true;
        }
        Animation_setAlpha((&this->base), alpha);
        if (changed) {
            FillAnimation_updateModifiers(this);
        }
}


void FillAnimation_setScale(FillAnimation* this, float scaleX, float scaleY) {
}


void FillAnimation_setMaxScale(FillAnimation* this, float maxScaleX, float maxScaleY) {
}


static void FillAnimation_updateModifiers(FillAnimation* this) {
}


void FillAnimation_paint(FillAnimation* this, Graphics* g) {
        Graphics_drawRGB(g, this->pixelBuffer, 0, this->width, 0, 0, this->width, this->height, true);
}

