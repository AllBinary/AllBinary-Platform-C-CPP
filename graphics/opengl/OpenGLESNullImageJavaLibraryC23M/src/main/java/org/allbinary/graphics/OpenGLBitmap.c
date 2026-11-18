// Generated Code Do Not Modify
#include "org/allbinary/graphics/OpenGLBitmap.h"







void OpenGLBitmap_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLBitmap_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLBitmap", "PlatformBitmapBase");
    java_register_method("OpenGLBitmap", "getPixels", (void*) OpenGLBitmap_getPixels);
    java_register_method("OpenGLBitmap", "setPixels", (void*) OpenGLBitmap_setPixels);
    java_register_method("OpenGLBitmap", "recycle", (void*) OpenGLBitmap_recycle);
}

static void OpenGLBitmap_initFields(OpenGLBitmap* this) {
    
}


void OpenGLBitmap_init(OpenGLBitmap* this, void* bitmap) {
    OpenGLBitmap_register();
    PlatformBitmapBase_init(&this->base);
    OpenGLBitmap_initFields(this);
        this->bitmap = bitmap;
}

OpenGLBitmap* OpenGLBitmap_new(void* bitmap) {
    OpenGLBitmap* this = java_object_alloc(sizeof(OpenGLBitmap), "OpenGLBitmap");
    OpenGLBitmap_init(this, bitmap);
    return this;
}


void OpenGLBitmap_getPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
}


void OpenGLBitmap_setPixels(OpenGLBitmap* this, int32_t* pixels, int32_t offset, int32_t stride, int32_t x, int32_t y, int32_t width, int32_t height) {
}


void OpenGLBitmap_recycle(OpenGLBitmap* this) {
}

