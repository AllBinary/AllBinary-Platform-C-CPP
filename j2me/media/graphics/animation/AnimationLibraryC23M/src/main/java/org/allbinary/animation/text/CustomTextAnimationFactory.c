// Generated Code Do Not Modify
#include "org/allbinary/animation/text/CustomTextAnimationFactory.h"
#include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/text/CustomTextAnimation.h"
#include "org/allbinary/animation/text/AdjustCustomTextAnimation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif









void CustomTextAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextAnimationFactory", nullptr);
    java_register_method("CustomTextAnimationFactory", "getInstance", (void*) CustomTextAnimationFactory_getInstance);
    java_register_method("CustomTextAnimationFactory", "setInitialScale", (void*) CustomTextAnimationFactory_setInitialScale);
    java_register_method("CustomTextAnimationFactory", "getWidth", (void*) CustomTextAnimationFactory_getWidth);
    java_register_method("CustomTextAnimationFactory", "getHeight", (void*) CustomTextAnimationFactory_getHeight);
}

static void CustomTextAnimationFactory_initFields(CustomTextAnimationFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    
    this->dx = 0;
    this->dy = 0;
    
    
}


CustomTextAnimationFactory* CustomTextAnimationFactory_createDXY(const char* text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        CustomTextAnimationFactory* customTextAnimationFactory = CustomTextAnimationFactory_new(text, fontSize, animationBehaviorFactory);
        customTextAnimationFactory->dx = dx;
        customTextAnimationFactory->dy = dy;
        return customTextAnimationFactory;
}


void CustomTextAnimationFactory_init(CustomTextAnimationFactory* this, const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory) {
    CustomTextAnimationFactory_register();
    CustomTextAnimationFactory_initFields(this);
        this->scaleProperties = ScaleProperties_new();
        this->text = text;
        this->scaleProperties->scaleHeight = fontSize - (fontSize / 4);
        this->initScaleHeight = this->scaleProperties->scaleHeight;
        this->animationBehaviorFactory = animationBehaviorFactory;
        this->font = Font_getFont((Font_staticInit(), Font_FACE_SYSTEM), (Font_staticInit(), Font_STYLE_PLAIN), this->initScaleHeight);
}

CustomTextAnimationFactory* CustomTextAnimationFactory_new(const char* text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory) {
    CustomTextAnimationFactory* this = java_object_alloc(sizeof(CustomTextAnimationFactory), "CustomTextAnimationFactory");
    CustomTextAnimationFactory_init(this, text, fontSize, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* CustomTextAnimationFactory_getInstance(CustomTextAnimationFactory* this, int32_t instanceId) {
        CustomTextAnimation* customTextAnimation = nullptr;
        if (this->dx != 0 || this->dy != 0) {
            customTextAnimation = AdjustCustomTextAnimation_new(this->text, this->scaleProperties->scaleHeight, this->dx, this->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            customTextAnimation = CustomTextAnimation_new(this->text, this->scaleProperties->scaleHeight, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        }
        Animation_setBasicColorP(customTextAnimation, this->basicColor);
        return customTextAnimation;
}


void CustomTextAnimationFactory_setInitialScale(CustomTextAnimationFactory* this, ScaleProperties* scaleProperties) {
}


int32_t CustomTextAnimationFactory_getWidth(CustomTextAnimationFactory* this) {
        return Font_stringWidth(this->font, this->text);
}


int32_t CustomTextAnimationFactory_getHeight(CustomTextAnimationFactory* this) {
        return Font_getHeight(this->font);
}

