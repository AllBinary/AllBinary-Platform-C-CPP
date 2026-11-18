// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedLeftToRightImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/LeftToRightImageAnimation.h"






void AdjustedLeftToRightImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedLeftToRightImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedLeftToRightImageAnimation", "LeftToRightImageAnimation");
    java_register_method("AdjustedLeftToRightImageAnimation", "init", (void*) AdjustedLeftToRightImageAnimation_initMethod);
    java_register_method("AdjustedLeftToRightImageAnimation", "paintXY", (void*) AdjustedLeftToRightImageAnimation_paintXY);
}

static void AdjustedLeftToRightImageAnimation_initFields(AdjustedLeftToRightImageAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


void AdjustedLeftToRightImageAnimation_init(AdjustedLeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedLeftToRightImageAnimation_register();
        LeftToRightImageAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        AdjustedLeftToRightImageAnimation_initFields(this);
        AdjustedLeftToRightImageAnimation_initMethod(this, dx, dy);
}

AdjustedLeftToRightImageAnimation* AdjustedLeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedLeftToRightImageAnimation* this = java_object_alloc(sizeof(AdjustedLeftToRightImageAnimation), "AdjustedLeftToRightImageAnimation");
    AdjustedLeftToRightImageAnimation_init(this, image, sequenceArray, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedLeftToRightImageAnimation_initMethod(AdjustedLeftToRightImageAnimation* this, int32_t dx, int32_t dy) {
        this->dx = dx;
        this->dy = dy;
}


void AdjustedLeftToRightImageAnimation_paintXY(AdjustedLeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        LeftToRightImageAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

