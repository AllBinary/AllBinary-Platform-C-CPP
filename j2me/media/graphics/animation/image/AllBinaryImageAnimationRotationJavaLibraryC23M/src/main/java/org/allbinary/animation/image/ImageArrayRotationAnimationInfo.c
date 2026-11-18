// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/math/AngleInfo.h"













void ImageArrayRotationAnimationInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayRotationAnimationInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayRotationAnimationInfo", nullptr);
    java_register_method("ImageArrayRotationAnimationInfo", "setImageArray", (void*) ImageArrayRotationAnimationInfo_setImageArray);
    java_register_method("ImageArrayRotationAnimationInfo", "getImageArray", (void*) ImageArrayRotationAnimationInfo_getImageArray);
    java_register_method("ImageArrayRotationAnimationInfo", "getAngleInfoP", (void*) ImageArrayRotationAnimationInfo_getAngleInfoP);
    java_register_method("ImageArrayRotationAnimationInfo", "setTotalAngle", (void*) ImageArrayRotationAnimationInfo_setTotalAngle);
    java_register_method("ImageArrayRotationAnimationInfo", "getTotalAngle", (void*) ImageArrayRotationAnimationInfo_getTotalAngle);
    java_register_method("ImageArrayRotationAnimationInfo", "setDx", (void*) ImageArrayRotationAnimationInfo_setDx);
    java_register_method("ImageArrayRotationAnimationInfo", "getDx", (void*) ImageArrayRotationAnimationInfo_getDx);
    java_register_method("ImageArrayRotationAnimationInfo", "setDy", (void*) ImageArrayRotationAnimationInfo_setDy);
    java_register_method("ImageArrayRotationAnimationInfo", "getDy", (void*) ImageArrayRotationAnimationInfo_getDy);
}

static void ImageArrayRotationAnimationInfo_initFields(ImageArrayRotationAnimationInfo* this) {
    
    
    
    
    
}


void ImageArrayRotationAnimationInfo_init(ImageArrayRotationAnimationInfo* this, Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy) {
    ImageArrayRotationAnimationInfo_register();
    ImageArrayRotationAnimationInfo_initFields(this);
        this->imageArray = imageArray;
        this->angleIncrement = angleIncrement;
        this->totalAngle = totalAngle;
        this->dx = dx;
        this->dy = dy;
}

ImageArrayRotationAnimationInfo* ImageArrayRotationAnimationInfo_new(Image** imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy) {
    ImageArrayRotationAnimationInfo* this = java_object_alloc(sizeof(ImageArrayRotationAnimationInfo), "ImageArrayRotationAnimationInfo");
    ImageArrayRotationAnimationInfo_init(this, imageArray, angleIncrement, totalAngle, dx, dy);
    return this;
}


void ImageArrayRotationAnimationInfo_setImageArray(ImageArrayRotationAnimationInfo* this, Image** imageArray) {
        this->imageArray = imageArray;
}


Image** ImageArrayRotationAnimationInfo_getImageArray(ImageArrayRotationAnimationInfo* this) {
        return this->imageArray;
}


AngleInfo* ImageArrayRotationAnimationInfo_getAngleInfoP(ImageArrayRotationAnimationInfo* this) {
        return AngleInfo_getInstance(((int16_t) this->angleIncrement));
}


void ImageArrayRotationAnimationInfo_setTotalAngle(ImageArrayRotationAnimationInfo* this, int32_t totalAngle) {
        this->totalAngle = totalAngle;
}


int32_t ImageArrayRotationAnimationInfo_getTotalAngle(ImageArrayRotationAnimationInfo* this) {
        return this->totalAngle;
}


void ImageArrayRotationAnimationInfo_setDx(ImageArrayRotationAnimationInfo* this, int32_t dx) {
        this->dx = dx;
}


int32_t ImageArrayRotationAnimationInfo_getDx(ImageArrayRotationAnimationInfo* this) {
        return this->dx;
}


void ImageArrayRotationAnimationInfo_setDy(ImageArrayRotationAnimationInfo* this, int32_t dy) {
        this->dy = dy;
}


int32_t ImageArrayRotationAnimationInfo_getDy(ImageArrayRotationAnimationInfo* this) {
        return this->dy;
}

