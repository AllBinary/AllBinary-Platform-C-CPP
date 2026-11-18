// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedImageArrayAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/ImageArrayAnimation.h"










void AdjustedImageArrayAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedImageArrayAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedImageArrayAnimation", "ImageArrayAnimation");
    java_register_method("AdjustedImageArrayAnimation", "init", (void*) AdjustedImageArrayAnimation_initMethod);
    java_register_method("AdjustedImageArrayAnimation", "paintXY", (void*) AdjustedImageArrayAnimation_paintXY);
    java_register_method("AdjustedImageArrayAnimation", "setDx", (void*) AdjustedImageArrayAnimation_setDx);
    java_register_method("AdjustedImageArrayAnimation", "getDx", (void*) AdjustedImageArrayAnimation_getDx);
    java_register_method("AdjustedImageArrayAnimation", "setDy", (void*) AdjustedImageArrayAnimation_setDy);
    java_register_method("AdjustedImageArrayAnimation", "getDy", (void*) AdjustedImageArrayAnimation_getDy);
}

static void AdjustedImageArrayAnimation_initFields(AdjustedImageArrayAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageArrayAnimation_init(AdjustedImageArrayAnimation* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayAnimation_register();
        ImageArrayAnimation_init(&this->base, imageArray, animationBehavior);
        AdjustedImageArrayAnimation_initFields(this);
        AdjustedImageArrayAnimation_initMethod(this, dx, dy);
}

AdjustedImageArrayAnimation* AdjustedImageArrayAnimation_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayAnimation* this = java_object_alloc(sizeof(AdjustedImageArrayAnimation), "AdjustedImageArrayAnimation");
    AdjustedImageArrayAnimation_init(this, imageArray, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageArrayAnimation_initMethod(AdjustedImageArrayAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageArrayAnimation_setDx(this, dx);
        AdjustedImageArrayAnimation_setDy(this, dy);
}


void AdjustedImageArrayAnimation_paintXY(AdjustedImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageArrayAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageArrayAnimation_setDx(AdjustedImageArrayAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageArrayAnimation_getDx(AdjustedImageArrayAnimation* this) {
        return this->dx;
}


void AdjustedImageArrayAnimation_setDy(AdjustedImageArrayAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageArrayAnimation_getDy(AdjustedImageArrayAnimation* this) {
        return this->dy;
}

