// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageScaleUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/ImageCache.h"


static ImageScaleUtil* ImageScaleUtil_instance;





void ImageScaleUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageScaleUtil_instance = ImageScaleUtil_new();
}

void ImageScaleUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageScaleUtil", nullptr);
    java_register_method("ImageScaleUtil", "createImage2", (void*) ImageScaleUtil_createImage2);
    java_register_method("ImageScaleUtil", "createImage3", (void*) ImageScaleUtil_createImage3);
}


ImageScaleUtil* ImageScaleUtil_getInstance(void) {
        return (ImageScaleUtil_staticInit(), ImageScaleUtil_instance);
}


void ImageScaleUtil_init(ImageScaleUtil* this) {
    ImageScaleUtil_register();
}

ImageScaleUtil* ImageScaleUtil_new(void) {
    ImageScaleUtil* this = java_object_alloc(sizeof(ImageScaleUtil), "ImageScaleUtil");
    ImageScaleUtil_init(this);
    return this;
}


// throws Exception
Image* ImageScaleUtil_createImage2(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached) {
        return ImageScaleUtil_createImage3(this, imageCache, originalImage, scaleNominatorX, scaleDenominatorX, scaleNominatorY, scaleDenominatorY, cached, true);
}


// throws Exception
Image* ImageScaleUtil_createImage3(ImageScaleUtil* this, ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable) {
        return originalImage;
}

