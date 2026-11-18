// Generated Code Do Not Modify
#include "org/allbinary/animation/image/VectorToImageArrayRotationAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "org/allbinary/vector/VectorInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#if __has_include("org/allbinary/image/AnimationFrameToImageUtil.h")
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif
#if __has_include("org/allbinary/media/image/ImageToRotationImageArrayUtil.h")
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif








void VectorToImageArrayRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorToImageArrayRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorToImageArrayRotationAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("VectorToImageArrayRotationAnimationFactory", "init", (void*) VectorToImageArrayRotationAnimationFactory_initMethod);
    java_register_method("VectorToImageArrayRotationAnimationFactory", "getInstance", (void*) VectorToImageArrayRotationAnimationFactory_getInstance);
    java_register_method("VectorToImageArrayRotationAnimationFactory", "getAngleIncrement", (void*) VectorToImageArrayRotationAnimationFactory_getAngleIncrement);
    java_register_method("VectorToImageArrayRotationAnimationFactory", "setInitialScale", (void*) VectorToImageArrayRotationAnimationFactory_setInitialScale);
}

static void VectorToImageArrayRotationAnimationFactory_initFields(VectorToImageArrayRotationAnimationFactory* this) {
    this->imageArray = (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY);
    this->angleIncrement = 0;
}


void VectorToImageArrayRotationAnimationFactory_init(VectorToImageArrayRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorToImageArrayRotationAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil_getInstance(), VectorInfo_getWidth(vectorInfo), VectorInfo_getHeight(vectorInfo), VectorAnimation_createVectorAnimation(VectorInfo_getPoints(vectorInfo), basicColor, AnimationBehaviorFactory_getOrCreateInstance(animationBehaviorFactory))), PrimitiveIntUtil_getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory);
        VectorToImageArrayRotationAnimationFactory_initFields(this);
        VectorToImageArrayRotationAnimationFactory_initMethod(this);
}

VectorToImageArrayRotationAnimationFactory* VectorToImageArrayRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorToImageArrayRotationAnimationFactory* this = java_object_alloc(sizeof(VectorToImageArrayRotationAnimationFactory), "VectorToImageArrayRotationAnimationFactory");
    VectorToImageArrayRotationAnimationFactory_init(this, vectorInfo, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
void VectorToImageArrayRotationAnimationFactory_initMethod(VectorToImageArrayRotationAnimationFactory* this) {
        AngleFactory* angleFactory = AngleFactory_getInstance();
        this->angleIncrement = ((int32_t) angleFactory->TOTAL_ANGLE) / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance());
        this->imageArray = ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), BaseImageAnimationFactory_getImage(this), VectorToImageArrayRotationAnimationFactory_getAngleIncrement(this), ((int32_t) angleFactory->TOTAL_ANGLE));
}


// throws Exception
Animation* VectorToImageArrayRotationAnimationFactory_getInstance(VectorToImageArrayRotationAnimationFactory* this, int32_t instanceId) {
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            return AdjustedImageArrayRotationAnimation_new(this->imageArray, AngleInfo_getInstance(((int16_t) VectorToImageArrayRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return AdjustedImageArrayRotationAnimation_createAnimation(this->imageArray, AngleInfo_getInstance(((int16_t) this->angleIncrement)), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}


int32_t VectorToImageArrayRotationAnimationFactory_getAngleIncrement(VectorToImageArrayRotationAnimationFactory* this) {
        return this->angleIncrement;
}


void VectorToImageArrayRotationAnimationFactory_setInitialScale(VectorToImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

