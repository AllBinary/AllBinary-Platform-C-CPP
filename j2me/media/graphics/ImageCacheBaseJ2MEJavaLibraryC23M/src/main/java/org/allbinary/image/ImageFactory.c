// Generated Code Do Not Modify
#include "org/allbinary/image/ImageFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/MIDPUtil.h"
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif


static ImageFactory* ImageFactory_instance;






void ImageFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageFactory_instance = ImageFactory_new();
}

void ImageFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageFactory", nullptr);
    java_register_method("ImageFactory", "createImageUrl", (void*) ImageFactory_createImageUrl);
    java_register_method("ImageFactory", "createImage", (void*) ImageFactory_createImage);
    java_register_method("ImageFactory", "createImageFromInputStream", (void*) ImageFactory_createImageFromInputStream3);
    java_register_method("ImageFactory", "createImageFromInputStream@3", (void*) ImageFactory_createImageFromInputStream3);
    java_register_method("ImageFactory", "createImageFromInputStream@2", (void*) ImageFactory_createImageFromInputStream2);
}

void ImageFactory_init(ImageFactory* this) {
    ImageFactory_register();
}

ImageFactory* ImageFactory_new(void) {
    ImageFactory* this = java_object_alloc(sizeof(ImageFactory), "ImageFactory");
    ImageFactory_init(this);
    return this;
}


ImageFactory* ImageFactory_getInstance(void) {
        return (ImageFactory_staticInit(), ImageFactory_instance);
}


// throws Exception
Image* ImageFactory_createImageUrl(ImageFactory* this, const char* url) {
        return Image_createImage(url);
}


// throws Exception
Image* ImageFactory_createImage(ImageFactory* this, const char* caller, int32_t width, int32_t height) {
        return MIDPUtil_createImageWH(MIDPUtil_getInstance(), width, height);
}


// throws Exception
Image* ImageFactory_createImageFromInputStream3(ImageFactory* this, void* key, InputStream* inputStream) {
        Image* image = MIDPUtil_createImageFromInputStream(MIDPUtil_getInstance(), inputStream);
        return image;
}


// throws Exception
// Java overloaded method: C needs a different name
Image* ImageFactory_createImageFromInputStream2(ImageFactory* this, InputStream* inputStream) {
        return MIDPUtil_createImageFromInputStream(MIDPUtil_getInstance(), inputStream);
}

