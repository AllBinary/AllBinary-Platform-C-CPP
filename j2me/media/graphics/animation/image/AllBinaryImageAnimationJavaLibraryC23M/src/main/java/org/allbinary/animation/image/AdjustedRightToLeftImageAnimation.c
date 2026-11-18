// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedRightToLeftImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/RightToLeftImageAnimation.h"






void AdjustedRightToLeftImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedRightToLeftImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedRightToLeftImageAnimation", "RightToLeftImageAnimation");
    java_register_method("AdjustedRightToLeftImageAnimation", "init", (void*) AdjustedRightToLeftImageAnimation_initMethod);
    java_register_method("AdjustedRightToLeftImageAnimation", "paintXY", (void*) AdjustedRightToLeftImageAnimation_paintXY);
}

static void AdjustedRightToLeftImageAnimation_initFields(AdjustedRightToLeftImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedRightToLeftImageAnimation_init(AdjustedRightToLeftImageAnimation* this, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedRightToLeftImageAnimation_register();
        RightToLeftImageAnimation_init(&this->base, image, animationBehavior);
        AdjustedRightToLeftImageAnimation_initFields(this);
        AdjustedRightToLeftImageAnimation_initMethod(this, dx, dy);
}

AdjustedRightToLeftImageAnimation* AdjustedRightToLeftImageAnimation_new(Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedRightToLeftImageAnimation* this = java_object_alloc(sizeof(AdjustedRightToLeftImageAnimation), "AdjustedRightToLeftImageAnimation");
    AdjustedRightToLeftImageAnimation_init(this, image, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedRightToLeftImageAnimation_initMethod(AdjustedRightToLeftImageAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedRightToLeftImageAnimation_paintXY(AdjustedRightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        RightToLeftImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

