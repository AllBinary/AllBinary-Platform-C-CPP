// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
















void ImageArrayAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayAnimation", "IndexedAnimation");
    java_register_method("ImageArrayAnimation", "getAnimationSize", (void*) ImageArrayAnimation_getAnimationSize);
    java_register_method("ImageArrayAnimation", "nextFrame", (void*) ImageArrayAnimation_nextFrame);
    java_register_method("ImageArrayAnimation", "previousFrame", (void*) ImageArrayAnimation_previousFrame);
    java_register_method("ImageArrayAnimation", "setFrame", (void*) ImageArrayAnimation_setFrame);
    java_register_method("ImageArrayAnimation", "getFrame", (void*) ImageArrayAnimation_getFrame);
    java_register_method("ImageArrayAnimation", "getSize", (void*) ImageArrayAnimation_getSize);
    java_register_method("ImageArrayAnimation", "setSequence", (void*) ImageArrayAnimation_setSequence);
    java_register_method("ImageArrayAnimation", "getSequence", (void*) ImageArrayAnimation_getSequence);
    java_register_method("ImageArrayAnimation", "getImage", (void*) ImageArrayAnimation_getImage);
    java_register_method("ImageArrayAnimation", "getImageArray", (void*) ImageArrayAnimation_getImageArray);
    java_register_method("ImageArrayAnimation", "setImageArray", (void*) ImageArrayAnimation_setImageArray);
    java_register_method("ImageArrayAnimation", "paintXY", (void*) ImageArrayAnimation_paintXY);
}

static void ImageArrayAnimation_initFields(ImageArrayAnimation* this) {
    this->imageArray = (NullImage_staticInit(), NullImage_NULL_IMAGE_ARRAY);
    this->totalFrames = 0;
    this->circularIndexUtil = (CircularIndexUtil_staticInit(), CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL);
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void ImageArrayAnimation_init(ImageArrayAnimation* this, Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArrayAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        ImageArrayAnimation_initFields(this);
        ImageArrayAnimation_setImageArray(this, imageArray);
}

ImageArrayAnimation* ImageArrayAnimation_new(Image** imageArray, AnimationBehavior* animationBehavior) {
    ImageArrayAnimation* this = java_object_alloc(sizeof(ImageArrayAnimation), "ImageArrayAnimation");
    ImageArrayAnimation_init(this, imageArray, animationBehavior);
    return this;
}


// throws Exception
int32_t ImageArrayAnimation_getAnimationSize(ImageArrayAnimation* this) {
        return ImageArrayAnimation_getSize(this);
}


void ImageArrayAnimation_nextFrame(ImageArrayAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void ImageArrayAnimation_previousFrame(ImageArrayAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void ImageArrayAnimation_setFrame(ImageArrayAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t ImageArrayAnimation_getFrame(ImageArrayAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t ImageArrayAnimation_getSize(ImageArrayAnimation* this) {
        return this->totalFrames;
}


void ImageArrayAnimation_setSequence(ImageArrayAnimation* this, int32_t* sequence) {
}


int32_t* ImageArrayAnimation_getSequence(ImageArrayAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


Image* ImageArrayAnimation_getImage(ImageArrayAnimation* this, int32_t index) {
        return this->imageArray[index];
}


Image** ImageArrayAnimation_getImageArray(ImageArrayAnimation* this) {
        return this->imageArray;
}


void ImageArrayAnimation_setImageArray(ImageArrayAnimation* this, Image** imageArray) {
        this->imageArray = imageArray;
        this->totalFrames = java_array_length(imageArray);
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}


void ImageArrayAnimation_paintXY(ImageArrayAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawImage(graphics, this->imageArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], x, y, this->anchor);
}

