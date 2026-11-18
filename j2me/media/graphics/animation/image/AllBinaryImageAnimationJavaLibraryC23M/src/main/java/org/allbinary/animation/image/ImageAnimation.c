// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif
















void ImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageAnimation", "IndexedAnimation");
    java_register_method("ImageAnimation", "getAnimationSize", (void*) ImageAnimation_getAnimationSize);
    java_register_method("ImageAnimation", "nextFrame", (void*) ImageAnimation_nextFrame);
    java_register_method("ImageAnimation", "previousFrame", (void*) ImageAnimation_previousFrame);
    java_register_method("ImageAnimation", "setFrame", (void*) ImageAnimation_setFrame);
    java_register_method("ImageAnimation", "getFrame", (void*) ImageAnimation_getFrame);
    java_register_method("ImageAnimation", "getSize", (void*) ImageAnimation_getSize);
    java_register_method("ImageAnimation", "setSequence", (void*) ImageAnimation_setSequence);
    java_register_method("ImageAnimation", "getSequence", (void*) ImageAnimation_getSequence);
    java_register_method("ImageAnimation", "paintXY", (void*) ImageAnimation_paintXY);
    java_register_method("ImageAnimation", "getImage", (void*) ImageAnimation_getImage);
    java_register_method("ImageAnimation", "close", (void*) ImageAnimation_close);
    java_register_method("ImageAnimation", "finalize", (void*) ImageAnimation_finalize);
}

static void ImageAnimation_initFields(ImageAnimation* this) {
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void ImageAnimation_init(ImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
    ImageAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        ImageAnimation_initFields(this);
        this->image = image;
}

ImageAnimation* ImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    ImageAnimation* this = java_object_alloc(sizeof(ImageAnimation), "ImageAnimation");
    ImageAnimation_init(this, image, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageAnimation_getAnimationSize(ImageAnimation* this) {
        return ImageAnimation_getSize(this);
}


void ImageAnimation_nextFrame(ImageAnimation* this) {
}


void ImageAnimation_previousFrame(ImageAnimation* this) {
}


void ImageAnimation_setFrame(ImageAnimation* this, int32_t index) {
}


int32_t ImageAnimation_getFrame(ImageAnimation* this) {
        return 0;
}


int32_t ImageAnimation_getSize(ImageAnimation* this) {
        return 1;
}


void ImageAnimation_setSequence(ImageAnimation* this, int32_t* sequence) {
}


int32_t* ImageAnimation_getSequence(ImageAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void ImageAnimation_paintXY(ImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->image, x, y, this->anchor);
}


Image* ImageAnimation_getImage(ImageAnimation* this) {
        return this->image;
}


// throws Exception
void ImageAnimation_close(ImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void ImageAnimation_finalize(ImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

