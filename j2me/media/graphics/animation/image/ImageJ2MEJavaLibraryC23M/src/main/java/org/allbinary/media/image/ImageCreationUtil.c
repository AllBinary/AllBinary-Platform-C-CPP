// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageCreationUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#if __has_include("org/allbinary/media/image/ImageCache.h")
#include "org/allbinary/media/image/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif
#if __has_include("org/allbinary/media/image/ImageCache.h")
#include "org/allbinary/media/image/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif


static ImageCreationUtil* ImageCreationUtil_instance;





void ImageCreationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageCreationUtil_instance = ImageCreationUtil_new();
}

void ImageCreationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCreationUtil", nullptr);
    java_register_method("ImageCreationUtil", "createImageWH", (void*) ImageCreationUtil_createImageWH);
    java_register_method("ImageCreationUtil", "createImage", (void*) ImageCreationUtil_createImage);
}


ImageCreationUtil* ImageCreationUtil_getInstance(void) {
        return (ImageCreationUtil_staticInit(), ImageCreationUtil_instance);
}


void ImageCreationUtil_init(ImageCreationUtil* this) {
    ImageCreationUtil_register();
}

ImageCreationUtil* ImageCreationUtil_new(void) {
    ImageCreationUtil* this = java_object_alloc(sizeof(ImageCreationUtil), "ImageCreationUtil");
    ImageCreationUtil_init(this);
    return this;
}


// throws Exception
Image* ImageCreationUtil_createImageWH(ImageCreationUtil* this, int32_t width, int32_t height) {
        Image* image = ImageCache_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(this), width, height);
        return image;
}


// throws Exception
Image* ImageCreationUtil_createImage(ImageCreationUtil* this, int32_t width, int32_t height, float maxScaleX, float maxScaleY) {
        Image* image = ImageCache_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(this), ((int32_t) (((float) width) * maxScaleX)) + 1, ((int32_t) (((float) height) * maxScaleY)) + 1);
        return image;
}

