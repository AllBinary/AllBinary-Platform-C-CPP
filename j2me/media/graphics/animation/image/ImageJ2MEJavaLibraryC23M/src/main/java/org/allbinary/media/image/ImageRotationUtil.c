// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageRotationUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/Anchor.h"


static ImageRotationUtil* ImageRotationUtil_instance;




void ImageRotationUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageRotationUtil_instance = ImageRotationUtil_new();
}

void ImageRotationUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageRotationUtil", nullptr);
    java_register_method("ImageRotationUtil", "createRotatedImage", (void*) ImageRotationUtil_createRotatedImage);
}

static void ImageRotationUtil_initFields(ImageRotationUtil* this) {
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


ImageRotationUtil* ImageRotationUtil_getInstance(void) {
        return (ImageRotationUtil_staticInit(), ImageRotationUtil_instance);
}


void ImageRotationUtil_init(ImageRotationUtil* this) {
    ImageRotationUtil_register();
    ImageRotationUtil_initFields(this);
}

ImageRotationUtil* ImageRotationUtil_new(void) {
    ImageRotationUtil* this = java_object_alloc(sizeof(ImageRotationUtil), "ImageRotationUtil");
    ImageRotationUtil_init(this);
    return this;
}


// throws Exception
Image* ImageRotationUtil_createRotatedImage(ImageRotationUtil* this, Image* originalImage, int32_t rotationInDegrees) {
        return originalImage;
}

