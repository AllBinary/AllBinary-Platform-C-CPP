// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageCompleteUtil.h"
#include "javax/microedition/lcdui/Image.h"


static ImageCompleteUtil* ImageCompleteUtil_instance;



void ImageCompleteUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageCompleteUtil_instance = ImageCompleteUtil_new();
}

void ImageCompleteUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCompleteUtil", nullptr);
    java_register_method("ImageCompleteUtil", "waitForImage", (void*) ImageCompleteUtil_waitForImage);
}

void ImageCompleteUtil_init(ImageCompleteUtil* this) {
    ImageCompleteUtil_register();
}

ImageCompleteUtil* ImageCompleteUtil_new(void) {
    ImageCompleteUtil* this = java_object_alloc(sizeof(ImageCompleteUtil), "ImageCompleteUtil");
    ImageCompleteUtil_init(this);
    return this;
}


ImageCompleteUtil* ImageCompleteUtil_getInstance(void) {
        return (ImageCompleteUtil_staticInit(), ImageCompleteUtil_instance);
}


// throws Exception
void ImageCompleteUtil_waitForImage(ImageCompleteUtil* this, Image* image, const char* name) {
}

