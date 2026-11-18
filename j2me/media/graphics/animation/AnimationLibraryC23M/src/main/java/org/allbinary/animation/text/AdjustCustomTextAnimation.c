// Generated Code Do Not Modify
#include "org/allbinary/animation/text/AdjustCustomTextAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/text/CustomTextAnimation.h"









void AdjustCustomTextAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustCustomTextAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustCustomTextAnimation", "CustomTextAnimation");
    java_register_method("AdjustCustomTextAnimation", "getDx", (void*) AdjustCustomTextAnimation_getDx);
    java_register_method("AdjustCustomTextAnimation", "setDx", (void*) AdjustCustomTextAnimation_setDx);
    java_register_method("AdjustCustomTextAnimation", "getDy", (void*) AdjustCustomTextAnimation_getDy);
    java_register_method("AdjustCustomTextAnimation", "setDy", (void*) AdjustCustomTextAnimation_setDy);
    java_register_method("AdjustCustomTextAnimation", "paintXY", (void*) AdjustCustomTextAnimation_paintXY);
}

static void AdjustCustomTextAnimation_initFields(AdjustCustomTextAnimation* this) {
    
    
}


void AdjustCustomTextAnimation_init(AdjustCustomTextAnimation* this, const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustCustomTextAnimation_register();
        CustomTextAnimation_init(&this->base, text, fontSize, animationBehavior);
        AdjustCustomTextAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustCustomTextAnimation* AdjustCustomTextAnimation_new(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustCustomTextAnimation* this = java_object_alloc(sizeof(AdjustCustomTextAnimation), "AdjustCustomTextAnimation");
    AdjustCustomTextAnimation_init(this, text, fontSize, dx, dy, animationBehavior);
    return this;
}


int32_t AdjustCustomTextAnimation_getDx(AdjustCustomTextAnimation* this) {
        return this->dx;
}


void AdjustCustomTextAnimation_setDx(AdjustCustomTextAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustCustomTextAnimation_getDy(AdjustCustomTextAnimation* this) {
        return this->dy;
}


void AdjustCustomTextAnimation_setDy(AdjustCustomTextAnimation* this, int32_t dy) {
        this->dy = dy;
}


void AdjustCustomTextAnimation_paintXY(AdjustCustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        CustomTextAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

