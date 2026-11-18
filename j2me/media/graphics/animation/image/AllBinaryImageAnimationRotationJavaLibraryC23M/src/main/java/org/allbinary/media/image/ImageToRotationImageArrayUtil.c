// Generated Code Do Not Modify
#include "org/allbinary/media/image/ImageToRotationImageArrayUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/media/image/ImageRotationUtil.h"


static ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_instance;




void ImageToRotationImageArrayUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageToRotationImageArrayUtil_instance = ImageToRotationImageArrayUtil_new();
}

void ImageToRotationImageArrayUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageToRotationImageArrayUtil", nullptr);
    java_register_method("ImageToRotationImageArrayUtil", "generate", (void*) ImageToRotationImageArrayUtil_generate);
}


ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_getInstance(void) {
        return (ImageToRotationImageArrayUtil_staticInit(), ImageToRotationImageArrayUtil_instance);
}


void ImageToRotationImageArrayUtil_init(ImageToRotationImageArrayUtil* this) {
    ImageToRotationImageArrayUtil_register();
}

ImageToRotationImageArrayUtil* ImageToRotationImageArrayUtil_new(void) {
    ImageToRotationImageArrayUtil* this = java_object_alloc(sizeof(ImageToRotationImageArrayUtil), "ImageToRotationImageArrayUtil");
    ImageToRotationImageArrayUtil_init(this);
    return this;
}


// throws Exception
Image** ImageToRotationImageArrayUtil_generate(ImageToRotationImageArrayUtil* this, Image* image, int32_t angleIncrement, int32_t totalAngle) {
        ImageRotationUtil* imageRotationUtil = ImageRotationUtil_getInstance();
        int32_t totalFrames = totalAngle / angleIncrement;
        Image** imageArray = ((Image**) java_array_new(sizeof(Image*), totalFrames));
        imageArray[0] = image;
        for (int32_t index = 1; index < totalFrames; index++) {
            imageArray[index] = ImageRotationUtil_createRotatedImage(imageRotationUtil, image, index * angleIncrement);
        }
        return imageArray;
}

