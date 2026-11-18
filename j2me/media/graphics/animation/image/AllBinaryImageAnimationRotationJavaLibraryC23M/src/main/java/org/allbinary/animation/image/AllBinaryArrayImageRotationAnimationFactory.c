// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AllBinaryArrayImageRotationAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
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
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif






static void AllBinaryArrayImageRotationAnimationFactory_initMethod(AllBinaryArrayImageRotationAnimationFactory* this);

static void AllBinaryArrayImageRotationAnimationFactory_initDXY(AllBinaryArrayImageRotationAnimationFactory* this, int32_t dx, int32_t dy);




void AllBinaryArrayImageRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryArrayImageRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryArrayImageRotationAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("AllBinaryArrayImageRotationAnimationFactory", "init", (void*) AllBinaryArrayImageRotationAnimationFactory_initMethod);
    java_register_method("AllBinaryArrayImageRotationAnimationFactory", "initDXY", (void*) AllBinaryArrayImageRotationAnimationFactory_initDXY);
    java_register_method("AllBinaryArrayImageRotationAnimationFactory", "getInstance", (void*) AllBinaryArrayImageRotationAnimationFactory_getInstance);
    java_register_method("AllBinaryArrayImageRotationAnimationFactory", "setImageArray", (void*) AllBinaryArrayImageRotationAnimationFactory_setImageArray);
    java_register_method("AllBinaryArrayImageRotationAnimationFactory", "getAngleIncrement", (void*) AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement);
}

static void AllBinaryArrayImageRotationAnimationFactory_initFields(AllBinaryArrayImageRotationAnimationFactory* this) {
    this->imageArray = (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY);
    
}


// throws Exception
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactory(Image* image, int32_t dx, int32_t dy) {
        AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE) / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()), AnimationBehaviorFactory_getInstance());
        AllBinaryArrayImageRotationAnimationFactory_initDXY(arrayImageRotationAnimationFactory, dx, dy);
        return arrayImageRotationAnimationFactory;
}


// throws Exception
AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement) {
        AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), angleIncrement, AnimationBehaviorFactory_getInstance());
        AllBinaryArrayImageRotationAnimationFactory_initDXY(arrayImageRotationAnimationFactory, dx, dy);
        return arrayImageRotationAnimationFactory;
}


void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryArrayImageRotationAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        AllBinaryArrayImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
        AllBinaryArrayImageRotationAnimationFactory_initMethod(this);
}

AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    AllBinaryArrayImageRotationAnimationFactory* this = java_object_alloc(sizeof(AllBinaryArrayImageRotationAnimationFactory), "AllBinaryArrayImageRotationAnimationFactory");
    AllBinaryArrayImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
static void AllBinaryArrayImageRotationAnimationFactory_initMethod(AllBinaryArrayImageRotationAnimationFactory* this) {
        AllBinaryArrayImageRotationAnimationFactory_setImageArray(this, ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil_getInstance(), BaseImageAnimationFactory_getImage(this), AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE)));
}


static void AllBinaryArrayImageRotationAnimationFactory_initDXY(AllBinaryArrayImageRotationAnimationFactory* this, int32_t dx, int32_t dy) {
        this->base.animationFactoryInitializationVisitor->dx = dx;
        this->base.animationFactoryInitializationVisitor->dy = dy;
        this->base.animationFactoryInitializationVisitor->originalDx = dx;
        this->base.animationFactoryInitializationVisitor->originalDy = dy;
}


// throws Exception
Animation* AllBinaryArrayImageRotationAnimationFactory_getInstance(AllBinaryArrayImageRotationAnimationFactory* this, int32_t instanceId) {
        Image** scaledImageArray = ((Image**) java_array_new(sizeof(Image*), java_array_length(this->imageArray)));
        int32_t size = java_array_length(scaledImageArray);
        Image* image = BaseImageAnimationFactory_getImage(this);
        for (int32_t index = 0; index < size; index++) {
            scaledImageArray[index] = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, image, Image_getWidth(image), Image_getHeight(image), this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        }
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            AnimationFactoryImageScaleUtil_processAdjust(this->base.animationFactoryImageScaleUtil, this);
            return AdjustedImageArrayRotationAnimation_new(scaledImageArray, AngleInfo_getInstance(((int16_t) AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return ImageArrayRotationAnimation_new(scaledImageArray, AngleInfo_getInstance(((int16_t) AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(this))), ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}


void AllBinaryArrayImageRotationAnimationFactory_setImageArray(AllBinaryArrayImageRotationAnimationFactory* this, Image** imageArray) {
        this->imageArray = imageArray;
}


int32_t AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(AllBinaryArrayImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}

