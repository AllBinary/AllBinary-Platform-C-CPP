// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedImageBaseRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"






void AdjustedImageBaseRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedImageBaseRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedImageBaseRotationAnimation", "ImageBaseRotationAnimation");
    java_register_method("AdjustedImageBaseRotationAnimation", "init", (void*) AdjustedImageBaseRotationAnimation_initMethod);
    java_register_method("AdjustedImageBaseRotationAnimation", "paintXY", (void*) AdjustedImageBaseRotationAnimation_paintXY);
}

static void AdjustedImageBaseRotationAnimation_initFields(AdjustedImageBaseRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedImageBaseRotationAnimation_init(AdjustedImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageBaseRotationAnimation_register();
        ImageBaseRotationAnimation_init(&this->base, image, angleInfo, totalAngle, animationBehavior);
        AdjustedImageBaseRotationAnimation_initFields(this);
        AdjustedImageBaseRotationAnimation_initMethod(this, dx, dy);
}

AdjustedImageBaseRotationAnimation* AdjustedImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageBaseRotationAnimation* this = java_object_alloc(sizeof(AdjustedImageBaseRotationAnimation), "AdjustedImageBaseRotationAnimation");
    AdjustedImageBaseRotationAnimation_init(this, image, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageBaseRotationAnimation_initMethod(AdjustedImageBaseRotationAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedImageBaseRotationAnimation_paintXY(AdjustedImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageBaseRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

