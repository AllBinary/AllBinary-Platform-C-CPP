// Generated Code Do Not Modify
#include "org/allbinary/animation/AdjustedVectorAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"





void AdjustedVectorAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedVectorAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedVectorAnimation", "VectorAnimation");
    java_register_method("AdjustedVectorAnimation", "paintXY", (void*) AdjustedVectorAnimation_paintXY);
}

static void AdjustedVectorAnimation_initFields(AdjustedVectorAnimation* this) {
    
    
}


void AdjustedVectorAnimation_init(AdjustedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedVectorAnimation_register();
        VectorAnimation_init(&this->base, currentPoints, basicColor, animationBehavior);
        AdjustedVectorAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustedVectorAnimation* AdjustedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedVectorAnimation* this = java_object_alloc(sizeof(AdjustedVectorAnimation), "AdjustedVectorAnimation");
    AdjustedVectorAnimation_init(this, currentPoints, basicColor, dx, dy, animationBehavior);
    return this;
}


void AdjustedVectorAnimation_paintXY(AdjustedVectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        VectorAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}

