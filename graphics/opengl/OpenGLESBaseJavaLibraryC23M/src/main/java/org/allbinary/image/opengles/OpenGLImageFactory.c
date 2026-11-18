// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLImageFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"


OpenGLImageFactory* OpenGLImageFactory_NULL_OPENGL_IMAGE_FACTORY;


void OpenGLImageFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLImageFactory_NULL_OPENGL_IMAGE_FACTORY = OpenGLImageFactory_new();
}

void OpenGLImageFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLImageFactory", nullptr);
    java_register_method("OpenGLImageFactory", "getInstance", (void*) OpenGLImageFactory_getInstance);
}

void OpenGLImageFactory_init(OpenGLImageFactory* this) {
    OpenGLImageFactory_register();
}

OpenGLImageFactory* OpenGLImageFactory_new(void) {
    OpenGLImageFactory* this = java_object_alloc(sizeof(OpenGLImageFactory), "OpenGLImageFactory");
    OpenGLImageFactory_init(this);
    return this;
}


Image* OpenGLImageFactory_getInstance(OpenGLImageFactory* this, Image* image, PlatformBitmapBaseFactory* bitmapFactory, PlatformTextureBaseFactory* textureFactory) {
        java_throw(java_exception_new("RuntimeException", ""));
}

