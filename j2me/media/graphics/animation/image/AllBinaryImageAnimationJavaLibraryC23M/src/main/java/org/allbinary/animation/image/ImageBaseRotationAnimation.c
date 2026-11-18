// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#if __has_include("org/allbinary/animation/image/AngleIncrementInfo.h")
#include "org/allbinary/animation/image/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/AngleIncrementInfo.h")
#include "org/allbinary/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/graphics/AngleIncrementInfo.h")
#include "org/allbinary/graphics/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/math/AngleIncrementInfo.h")
#include "org/allbinary/logic/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif













void ImageBaseRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageBaseRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageBaseRotationAnimation", "RotationAnimation");
    java_register_method("ImageBaseRotationAnimation", "getAnimationSize", (void*) ImageBaseRotationAnimation_getAnimationSize);
    java_register_method("ImageBaseRotationAnimation", "setSequence", (void*) ImageBaseRotationAnimation_setSequence);
    java_register_method("ImageBaseRotationAnimation", "getSequence", (void*) ImageBaseRotationAnimation_getSequence);
    java_register_method("ImageBaseRotationAnimation", "paintXY", (void*) ImageBaseRotationAnimation_paintXY);
    java_register_method("ImageBaseRotationAnimation", "getImage", (void*) ImageBaseRotationAnimation_getImage);
    java_register_method("ImageBaseRotationAnimation", "getWidth", (void*) ImageBaseRotationAnimation_getWidth);
    java_register_method("ImageBaseRotationAnimation", "getHeight", (void*) ImageBaseRotationAnimation_getHeight);
    java_register_method("ImageBaseRotationAnimation", "close", (void*) ImageBaseRotationAnimation_close);
    java_register_method("ImageBaseRotationAnimation", "finalize", (void*) ImageBaseRotationAnimation_finalize);
}

static void ImageBaseRotationAnimation_initFields(ImageBaseRotationAnimation* this) {
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void ImageBaseRotationAnimation_init(ImageBaseRotationAnimation* this, Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageBaseRotationAnimation_register();
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(totalAngle / AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(angleInfo))), animationBehavior);
        ImageBaseRotationAnimation_initFields(this);
        this->image = image;
}

ImageBaseRotationAnimation* ImageBaseRotationAnimation_new(Image* image, AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageBaseRotationAnimation* this = java_object_alloc(sizeof(ImageBaseRotationAnimation), "ImageBaseRotationAnimation");
    ImageBaseRotationAnimation_init(this, image, angleInfo, totalAngle, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageBaseRotationAnimation_getAnimationSize(ImageBaseRotationAnimation* this) {
        return RotationAnimation_getSize(this);
}


void ImageBaseRotationAnimation_setSequence(ImageBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* ImageBaseRotationAnimation_getSequence(ImageBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageBaseRotationAnimation_paintXY(ImageBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->image, x, y, this->anchor);
}


Image* ImageBaseRotationAnimation_getImage(ImageBaseRotationAnimation* this) {
        return this->image;
}


int32_t ImageBaseRotationAnimation_getWidth(ImageBaseRotationAnimation* this) {
        return Image_getWidth(this->image);
}


int32_t ImageBaseRotationAnimation_getHeight(ImageBaseRotationAnimation* this) {
        return Image_getHeight(this->image);
}


// throws Exception
void ImageBaseRotationAnimation_close(ImageBaseRotationAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void ImageBaseRotationAnimation_finalize(ImageBaseRotationAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

