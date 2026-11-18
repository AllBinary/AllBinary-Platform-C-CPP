// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/image/ImageModifierUtil.h"
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
#if __has_include("org/allbinary/media/image/AngleIncrementInfo.h")
#include "org/allbinary/media/image/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif















void ImageArrayBaseRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayBaseRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayBaseRotationAnimation", "RotationAnimation");
    java_register_method("ImageArrayBaseRotationAnimation", "getAnimationSize", (void*) ImageArrayBaseRotationAnimation_getAnimationSize);
    java_register_method("ImageArrayBaseRotationAnimation", "setAlpha", (void*) ImageArrayBaseRotationAnimation_setAlpha);
    java_register_method("ImageArrayBaseRotationAnimation", "nextRotation", (void*) ImageArrayBaseRotationAnimation_nextRotation);
    java_register_method("ImageArrayBaseRotationAnimation", "previousRotation", (void*) ImageArrayBaseRotationAnimation_previousRotation);
    java_register_method("ImageArrayBaseRotationAnimation", "setFrame", (void*) ImageArrayBaseRotationAnimation_setFrame);
    java_register_method("ImageArrayBaseRotationAnimation", "setSequence", (void*) ImageArrayBaseRotationAnimation_setSequence);
    java_register_method("ImageArrayBaseRotationAnimation", "getSequence", (void*) ImageArrayBaseRotationAnimation_getSequence);
    java_register_method("ImageArrayBaseRotationAnimation", "setImageArray", (void*) ImageArrayBaseRotationAnimation_setImageArray);
    java_register_method("ImageArrayBaseRotationAnimation", "paintXY", (void*) ImageArrayBaseRotationAnimation_paintXY);
    java_register_method("ImageArrayBaseRotationAnimation", "close", (void*) ImageArrayBaseRotationAnimation_close);
    java_register_method("ImageArrayBaseRotationAnimation", "finalize", (void*) ImageArrayBaseRotationAnimation_finalize);
}

static void ImageArrayBaseRotationAnimation_initFields(ImageArrayBaseRotationAnimation* this) {
    this->imageModifierUtil = ImageModifierUtil_getInstanceOrCreate();
    
    this->imageArray = (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY);
    
    this->totalFrames = 0;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void ImageArrayBaseRotationAnimation_init(ImageArrayBaseRotationAnimation* this, Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    ImageArrayBaseRotationAnimation_register();
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(angleInfo)))), animationBehavior);
        ImageArrayBaseRotationAnimation_initFields(this);
        this->originalImageArray = originalImageArray;
        ImageArrayBaseRotationAnimation_setImageArray(this, ImageModifierUtil_getImageArray(this->imageModifierUtil, originalImageArray));
        this->currentImage = this->imageArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)];
}

ImageArrayBaseRotationAnimation* ImageArrayBaseRotationAnimation_new(Image** originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    ImageArrayBaseRotationAnimation* this = java_object_alloc(sizeof(ImageArrayBaseRotationAnimation), "ImageArrayBaseRotationAnimation");
    ImageArrayBaseRotationAnimation_init(this, originalImageArray, angleInfo, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageArrayBaseRotationAnimation_getAnimationSize(ImageArrayBaseRotationAnimation* this) {
        return RotationAnimation_getSize(this);
}


void ImageArrayBaseRotationAnimation_setAlpha(ImageArrayBaseRotationAnimation* this, int32_t alpha) {
        if (this->base.base.base.alphaP != alpha) {
            Animation_setAlpha((&this->base), alpha);
            ImageModifierUtil_reset(this->imageModifierUtil);
            int32_t index = CircularIndexUtil_getIndex(this->base.circularIndexUtil);
            ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->base.base.base.alphaP);
        }
}


void ImageArrayBaseRotationAnimation_nextRotation(ImageArrayBaseRotationAnimation* this) {
        RotationAnimation_nextRotation((&this->base));
        int32_t index = CircularIndexUtil_getIndex(this->base.circularIndexUtil);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->base.base.base.alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_previousRotation(ImageArrayBaseRotationAnimation* this) {
        RotationAnimation_previousRotation((&this->base));
        int32_t index = CircularIndexUtil_getIndex(this->base.circularIndexUtil);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->base.base.base.alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_setFrame(ImageArrayBaseRotationAnimation* this, int32_t index2) {
        RotationAnimation_setFrame((&this->base), index2);
        int32_t index = CircularIndexUtil_getIndex(this->base.circularIndexUtil);
        ImageModifierUtil_setAlpha(this->imageModifierUtil, this->originalImageArray[index], this->imageArray[index], index, this->base.base.base.alphaP);
        this->currentImage = this->imageArray[index];
}


void ImageArrayBaseRotationAnimation_setSequence(ImageArrayBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* ImageArrayBaseRotationAnimation_getSequence(ImageArrayBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageArrayBaseRotationAnimation_setImageArray(ImageArrayBaseRotationAnimation* this, Image** imageArray) {
        this->imageArray = imageArray;
        this->totalFrames = java_array_length(imageArray);
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}


void ImageArrayBaseRotationAnimation_paintXY(ImageArrayBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->currentImage, x, y, this->anchor);
}


// throws Exception
void ImageArrayBaseRotationAnimation_close(ImageArrayBaseRotationAnimation* this) {
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->imageArray);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->imageArray[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->currentImage);
}


// throws Throwable
void ImageArrayBaseRotationAnimation_finalize(ImageArrayBaseRotationAnimation* this) {
        DisposalUtil* disposalUtil = DisposalUtil_getInstance();
        int32_t size2 = java_array_length(this->imageArray);
        for (int32_t index = 0; index < size2; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->imageArray[index]);
        }
        int32_t size = java_array_length(this->originalImageArray);
        for (int32_t index = 0; index < size; index++) {
            DisposalUtil_disposeImage(disposalUtil, this->originalImageArray[index]);
        }
        DisposalUtil_disposeImage(disposalUtil, this->currentImage);
}

