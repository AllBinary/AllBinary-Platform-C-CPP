// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArraySpecialAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#if __has_include("org/allbinary/animation/image/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/image/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/special/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/special/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GameTickTimeDelayHelper.h")
#include "org/allbinary/graphics/displayable/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif










void ImageArraySpecialAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArraySpecialAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArraySpecialAnimation", "ImageArrayAnimation");
    java_register_method("ImageArraySpecialAnimation", "getLoopCount", (void*) ImageArraySpecialAnimation_getLoopCount);
    java_register_method("ImageArraySpecialAnimation", "setLastFrame", (void*) ImageArraySpecialAnimation_setLastFrame);
    java_register_method("ImageArraySpecialAnimation", "reset", (void*) ImageArraySpecialAnimation_reset);
    java_register_method("ImageArraySpecialAnimation", "nextFrame", (void*) ImageArraySpecialAnimation_nextFrame);
    java_register_method("ImageArraySpecialAnimation", "isComplete", (void*) ImageArraySpecialAnimation_isComplete);
    java_register_method("ImageArraySpecialAnimation", "paintXY", (void*) ImageArraySpecialAnimation_paintXY);
}

static void ImageArraySpecialAnimation_initFields(ImageArraySpecialAnimation* this) {
    this->timeDelayHelper = TimeDelayHelper_new(270);
    this->loopCount = 0;
    this->loopCountTotal = 1;
}


void ImageArraySpecialAnimation_init(ImageArraySpecialAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArraySpecialAnimation_register();
        ImageArrayAnimation_init(&this->base, imageArray, animationBehavior);
        ImageArraySpecialAnimation_initFields(this);
        ImageArraySpecialAnimation_reset(this);
}

ImageArraySpecialAnimation* ImageArraySpecialAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArraySpecialAnimation* this = java_object_alloc(sizeof(ImageArraySpecialAnimation), "ImageArraySpecialAnimation");
    ImageArraySpecialAnimation_init(this, imageArray, animationBehavior);
    return this;
}


int32_t ImageArraySpecialAnimation_getLoopCount(ImageArraySpecialAnimation* this) {
        return this->loopCount;
}


void ImageArraySpecialAnimation_setLastFrame(ImageArraySpecialAnimation* this) {
        CircularIndexUtil_setIndex(this->base.circularIndexUtil, CircularIndexUtil_getSize(this->base.circularIndexUtil) - 1);
}


void ImageArraySpecialAnimation_reset(ImageArraySpecialAnimation* this) {
        ImageArrayAnimation_setFrame(this, ImageArrayAnimation_getSize(this) - 1);
        this->loopCount = 0;
}


void ImageArraySpecialAnimation_nextFrame(ImageArraySpecialAnimation* this) {
        if (ImageArrayAnimation_getFrame(this) > 0) {
            if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
                ImageArrayAnimation_previousFrame(this);
                if (ImageArrayAnimation_getFrame(this) == 0) {
                    this->loopCount++;
                }
            }
        }
}


bool ImageArraySpecialAnimation_isComplete(ImageArraySpecialAnimation* this) {
        if (this->loopCount < this->loopCountTotal || ImageArrayAnimation_getFrame(this) != 0) {
            return false;
        } else {
            return true;
        }
}


void ImageArraySpecialAnimation_paintXY(ImageArraySpecialAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        x = DisplayInfoSingleton_getLastHalfWidth(DisplayInfoSingleton_getInstance()) - (Image_getWidth(ImageArrayAnimation_getImage(this, CircularIndexUtil_getIndex(this->base.circularIndexUtil))) >> 1);
        y = 5;
        ImageArrayAnimation_paintXY((&this->base), graphics, x, y);
}

