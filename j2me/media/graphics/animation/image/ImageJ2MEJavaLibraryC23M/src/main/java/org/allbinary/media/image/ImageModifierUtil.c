// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageModifierUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/color/BasicColor.h"


static ImageModifierUtil* ImageModifierUtil_instance;








void ImageModifierUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageModifierUtil_instance = ImageModifierUtil_new();
}

void ImageModifierUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageModifierUtil", nullptr);
    java_register_method("ImageModifierUtil", "setColor", (void*) ImageModifierUtil_setColor);
    java_register_method("ImageModifierUtil", "changeColor", (void*) ImageModifierUtil_changeColor);
    java_register_method("ImageModifierUtil", "setAlpha", (void*) ImageModifierUtil_setAlpha);
    java_register_method("ImageModifierUtil", "getImageArray", (void*) ImageModifierUtil_getImageArray);
    java_register_method("ImageModifierUtil", "handleImage", (void*) ImageModifierUtil_handleImage);
    java_register_method("ImageModifierUtil", "reset", (void*) ImageModifierUtil_reset);
}

void ImageModifierUtil_init(ImageModifierUtil* this) {
    ImageModifierUtil_register();
}

ImageModifierUtil* ImageModifierUtil_new(void) {
    ImageModifierUtil* this = java_object_alloc(sizeof(ImageModifierUtil), "ImageModifierUtil");
    ImageModifierUtil_init(this);
    return this;
}


ImageModifierUtil* ImageModifierUtil_getInstanceOrCreate(void) {
        return (ImageModifierUtil_staticInit(), ImageModifierUtil_instance);
}


void ImageModifierUtil_setColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_changeColor(ImageModifierUtil* this, Image* unusedOriginalImage, Image* image, int32_t imageIndex, BasicColor* basicColor) {
}


void ImageModifierUtil_setAlpha(ImageModifierUtil* this, Image* originalImage, Image* image, int32_t imageIndex, int32_t alphaInt) {
}


Image** ImageModifierUtil_getImageArray(ImageModifierUtil* this, Image** originalImageArray) {
        return originalImageArray;
}


void ImageModifierUtil_handleImage(ImageModifierUtil* this, Image** imageArray, int32_t index, Image* image) {
}


void ImageModifierUtil_reset(ImageModifierUtil* this) {
}

