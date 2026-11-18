// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/ImageAnimation.h"










void AdjustedImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedImageAnimation", "ImageAnimation");
    java_register_method("AdjustedImageAnimation", "init", (void*) AdjustedImageAnimation_initMethod);
    java_register_method("AdjustedImageAnimation", "paintXY", (void*) AdjustedImageAnimation_paintXY);
    java_register_method("AdjustedImageAnimation", "setDx", (void*) AdjustedImageAnimation_setDx);
    java_register_method("AdjustedImageAnimation", "getDx", (void*) AdjustedImageAnimation_getDx);
    java_register_method("AdjustedImageAnimation", "setDy", (void*) AdjustedImageAnimation_setDy);
    java_register_method("AdjustedImageAnimation", "getDy", (void*) AdjustedImageAnimation_getDy);
}

static void AdjustedImageAnimation_initFields(AdjustedImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageAnimation_init(AdjustedImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageAnimation_register();
        ImageAnimation_init(&this->base, image, animationBehavior);
        AdjustedImageAnimation_initFields(this);
        AdjustedImageAnimation_initMethod(this, dx, dy);
}

AdjustedImageAnimation* AdjustedImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageAnimation* this = java_object_alloc(sizeof(AdjustedImageAnimation), "AdjustedImageAnimation");
    AdjustedImageAnimation_init(this, image, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageAnimation_initMethod(AdjustedImageAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageAnimation_setDx(this, dx);
        AdjustedImageAnimation_setDy(this, dy);
}


void AdjustedImageAnimation_paintXY(AdjustedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageAnimation_setDx(AdjustedImageAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageAnimation_getDx(AdjustedImageAnimation* this) {
        return this->dx;
}


void AdjustedImageAnimation_setDy(AdjustedImageAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageAnimation_getDy(AdjustedImageAnimation* this) {
        return this->dy;
}

