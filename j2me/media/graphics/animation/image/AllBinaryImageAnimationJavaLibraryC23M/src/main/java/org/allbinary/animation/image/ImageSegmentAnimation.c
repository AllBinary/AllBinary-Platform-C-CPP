// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif




















void ImageSegmentAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageSegmentAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageSegmentAnimation", "ImageAnimation");
    java_register_method("ImageSegmentAnimation", "nextFrame", (void*) ImageSegmentAnimation_nextFrame);
    java_register_method("ImageSegmentAnimation", "previousFrame", (void*) ImageSegmentAnimation_previousFrame);
    java_register_method("ImageSegmentAnimation", "setFrame", (void*) ImageSegmentAnimation_setFrame);
    java_register_method("ImageSegmentAnimation", "getFrame", (void*) ImageSegmentAnimation_getFrame);
    java_register_method("ImageSegmentAnimation", "getSize", (void*) ImageSegmentAnimation_getSize);
    java_register_method("ImageSegmentAnimation", "setSequence", (void*) ImageSegmentAnimation_setSequence);
    java_register_method("ImageSegmentAnimation", "getSequence", (void*) ImageSegmentAnimation_getSequence);
    java_register_method("ImageSegmentAnimation", "paintXY", (void*) ImageSegmentAnimation_paintXY);
    java_register_method("ImageSegmentAnimation", "getStartX", (void*) ImageSegmentAnimation_getStartX);
    java_register_method("ImageSegmentAnimation", "setStartX", (void*) ImageSegmentAnimation_setStartX);
    java_register_method("ImageSegmentAnimation", "getStartY", (void*) ImageSegmentAnimation_getStartY);
    java_register_method("ImageSegmentAnimation", "setStartY", (void*) ImageSegmentAnimation_setStartY);
    java_register_method("ImageSegmentAnimation", "getDrawWidth", (void*) ImageSegmentAnimation_getDrawWidth);
    java_register_method("ImageSegmentAnimation", "setDrawWidth", (void*) ImageSegmentAnimation_setDrawWidth);
    java_register_method("ImageSegmentAnimation", "getDrawHeight", (void*) ImageSegmentAnimation_getDrawHeight);
    java_register_method("ImageSegmentAnimation", "setDrawHeight", (void*) ImageSegmentAnimation_setDrawHeight);
}

static void ImageSegmentAnimation_initFields(ImageSegmentAnimation* this) {
    
    
    
    
    
    
}


void ImageSegmentAnimation_init(ImageSegmentAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    ImageSegmentAnimation_register();
        ImageAnimation_init(&this->base, image, animationBehavior);
        ImageSegmentAnimation_initFields(this);
        this->startX = 0;
        this->startY = 0;
        this->drawWidth = Image_getWidth(ImageAnimation_getImage(this));
        this->drawHeight = Image_getHeight(ImageAnimation_getImage(this));
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->drawHeight);
        this->sequenceArray = sequenceArray;
}

ImageSegmentAnimation* ImageSegmentAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    ImageSegmentAnimation* this = java_object_alloc(sizeof(ImageSegmentAnimation), "ImageSegmentAnimation");
    ImageSegmentAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void ImageSegmentAnimation_nextFrame(ImageSegmentAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void ImageSegmentAnimation_previousFrame(ImageSegmentAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void ImageSegmentAnimation_setFrame(ImageSegmentAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t ImageSegmentAnimation_getFrame(ImageSegmentAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t ImageSegmentAnimation_getSize(ImageSegmentAnimation* this) {
        return CircularIndexUtil_getSize(this->circularIndexUtil);
}


void ImageSegmentAnimation_setSequence(ImageSegmentAnimation* this, int32_t* sequenceArray) {
        this->sequenceArray = sequenceArray;
}


int32_t* ImageSegmentAnimation_getSequence(ImageSegmentAnimation* this) {
        return this->sequenceArray;
}


void ImageSegmentAnimation_paintXY(ImageSegmentAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
}


int32_t ImageSegmentAnimation_getStartX(ImageSegmentAnimation* this) {
        return this->startX;
}


void ImageSegmentAnimation_setStartX(ImageSegmentAnimation* this, int32_t startX) {
        this->startX = startX;
}


int32_t ImageSegmentAnimation_getStartY(ImageSegmentAnimation* this) {
        return this->startY;
}


void ImageSegmentAnimation_setStartY(ImageSegmentAnimation* this, int32_t startY) {
        this->startY = startY;
}


int32_t ImageSegmentAnimation_getDrawWidth(ImageSegmentAnimation* this) {
        return this->drawWidth;
}


void ImageSegmentAnimation_setDrawWidth(ImageSegmentAnimation* this, int32_t drawWidth) {
        this->drawWidth = drawWidth;
}


int32_t ImageSegmentAnimation_getDrawHeight(ImageSegmentAnimation* this) {
        return this->drawHeight;
}


void ImageSegmentAnimation_setDrawHeight(ImageSegmentAnimation* this, int32_t drawHeight) {
        this->drawHeight = drawHeight;
}

