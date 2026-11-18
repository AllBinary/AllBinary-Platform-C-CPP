// Generated Code Do Not Modify
#include "org/allbinary/animation/vector/AdjustedCircleAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/vector/CircleAnimation.h"






static void AdjustedCircleAnimation_initXY(AdjustedCircleAnimation* this, int32_t xAdjustment, int32_t yAdjustment);

static void AdjustedCircleAnimation_initMethod(AdjustedCircleAnimation* this, int32_t innerWidth);


void AdjustedCircleAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedCircleAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedCircleAnimation", "CircleAnimation");
    java_register_method("AdjustedCircleAnimation", "initXY", (void*) AdjustedCircleAnimation_initXY);
    java_register_method("AdjustedCircleAnimation", "init", (void*) AdjustedCircleAnimation_initMethod);
    java_register_method("AdjustedCircleAnimation", "paintXY", (void*) AdjustedCircleAnimation_paintXY);
}

static void AdjustedCircleAnimation_initFields(AdjustedCircleAnimation* this) {
    this->xAdjustment = 0;
    this->yAdjustment = 0;
}


AdjustedCircleAnimation* AdjustedCircleAnimation_createAnimation(int32_t width, int32_t height, int32_t xAdjustment, int32_t yAdjustment, BasicColor* basicColor) {
        AdjustedCircleAnimation* adjustedCircleAnimation = AdjustedCircleAnimation_new(width, height, basicColor);
        AdjustedCircleAnimation_initXY(adjustedCircleAnimation, xAdjustment, yAdjustment);
        return adjustedCircleAnimation;
}


AdjustedCircleAnimation* AdjustedCircleAnimation_createW(int32_t width, int32_t height, int32_t innerWidth, BasicColor* basicColor) {
        AdjustedCircleAnimation* adjustedCircleAnimation = AdjustedCircleAnimation_new(width, height, basicColor);
        AdjustedCircleAnimation_initMethod(adjustedCircleAnimation, innerWidth);
        return adjustedCircleAnimation;
}


void AdjustedCircleAnimation_init(AdjustedCircleAnimation* this, int32_t width, int32_t height, BasicColor* basicColor) {
    AdjustedCircleAnimation_register();
        CircleAnimation_init(&this->base, width, height, basicColor);
        AdjustedCircleAnimation_initFields(this);
}

AdjustedCircleAnimation* AdjustedCircleAnimation_new(int32_t width, int32_t height, BasicColor* basicColor) {
    AdjustedCircleAnimation* this = java_object_alloc(sizeof(AdjustedCircleAnimation), "AdjustedCircleAnimation");
    AdjustedCircleAnimation_init(this, width, height, basicColor);
    return this;
}


static void AdjustedCircleAnimation_initXY(AdjustedCircleAnimation* this, int32_t xAdjustment, int32_t yAdjustment) {
        this->xAdjustment = xAdjustment;
        this->yAdjustment = yAdjustment;
}


static void AdjustedCircleAnimation_initMethod(AdjustedCircleAnimation* this, int32_t innerWidth) {
        if (AndroidUtil_isAndroid()) {
            int32_t widthPortion = (((innerWidth / 3) * 10) / 7);
            this->xAdjustment = -((this->base.width >> 1) - widthPortion);
            this->yAdjustment = this->xAdjustment;
        } else {
            this->xAdjustment = -((this->base.width >> 1) - innerWidth);
            this->yAdjustment = this->xAdjustment;
        }
}


void AdjustedCircleAnimation_paintXY(AdjustedCircleAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.base.basicSetColorUtil, graphics, CircleAnimation_getBasicColorP(this), Animation_getColor(this));
        Graphics_drawArc(graphics, x + this->xAdjustment, y + this->yAdjustment, this->base.width, this->base.height, 0, this->base.TOTAL_ANGLE);
}

