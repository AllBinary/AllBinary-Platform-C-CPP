// Generated Code Do Not Modify
#include "org/allbinary/animation/image/PooledImageArrayRotationAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/media/image/ImageToRotationImageArrayUtil.h")
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#endif








void PooledImageArrayRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PooledImageArrayRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PooledImageArrayRotationAnimationFactory", nullptr);
    java_register_method("PooledImageArrayRotationAnimationFactory", "getInstance", (void*) PooledImageArrayRotationAnimationFactory_getInstance);
    java_register_method("PooledImageArrayRotationAnimationFactory", "setInitialScale", (void*) PooledImageArrayRotationAnimationFactory_setInitialScale);
}

static void PooledImageArrayRotationAnimationFactory_initFields(PooledImageArrayRotationAnimationFactory* this) {
    this->allBinaryImageRotationAnimationInfo = NullUtil_getInstance()->NULL_OBJECT;
    
}


// throws Exception
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) {
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        int32_t angleIncrement = (totalAngle / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()));
        return PooledImageArrayRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), -(Image_getWidth(image) >> 2), -(Image_getHeight(image) >> 2), angleIncrement, animationBehaviorFactory);
}


// throws Exception
PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        int32_t angleIncrement = (totalAngle / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()));
        return PooledImageArrayRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), dx, dy, angleIncrement, animationBehaviorFactory);
}


void PooledImageArrayRotationAnimationFactory_init(PooledImageArrayRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    PooledImageArrayRotationAnimationFactory_register();
    PooledImageArrayRotationAnimationFactory_initFields(this);
        this->animationBehaviorFactory = animationBehaviorFactory;
        int32_t totalAngle = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        Image** imageArray = ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), image, angleIncrement, totalAngle);
        this->allBinaryImageRotationAnimationInfo = ImageArrayRotationAnimationInfo_new(imageArray, angleIncrement, totalAngle, dx, dy);
}

PooledImageArrayRotationAnimationFactory* PooledImageArrayRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    PooledImageArrayRotationAnimationFactory* this = java_object_alloc(sizeof(PooledImageArrayRotationAnimationFactory), "PooledImageArrayRotationAnimationFactory");
    PooledImageArrayRotationAnimationFactory_init(this, image, width, height, dx, dy, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* PooledImageArrayRotationAnimationFactory_getInstance(PooledImageArrayRotationAnimationFactory* this, int32_t instanceId) {
        return AdjustedImageArrayRotationAnimation_createAdjustedImageArrayRotationAnimationInfo(this->allBinaryImageRotationAnimationInfo, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void PooledImageArrayRotationAnimationFactory_setInitialScale(PooledImageArrayRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

