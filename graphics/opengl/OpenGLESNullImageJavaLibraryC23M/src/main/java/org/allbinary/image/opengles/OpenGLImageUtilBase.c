// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLImageUtilBase.h"
#include "org/allbinary/graphics/OpenGLBitmap.h"
#include "org/allbinary/graphics/color/BasicColor.h"







void OpenGLImageUtilBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLImageUtilBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLImageUtilBase", nullptr);
    java_register_method("OpenGLImageUtilBase", "paint", (void*) OpenGLImageUtilBase_paint4);
    java_register_method("OpenGLImageUtilBase", "paint@4", (void*) OpenGLImageUtilBase_paint4);
    java_register_method("OpenGLImageUtilBase", "paint@5", (void*) OpenGLImageUtilBase_paint5);
    java_register_method("OpenGLImageUtilBase", "createImage", (void*) OpenGLImageUtilBase_createImage);
    java_register_method("OpenGLImageUtilBase", "createImageFromInputStream", (void*) OpenGLImageUtilBase_createImageFromInputStream);
}

void OpenGLImageUtilBase_init(OpenGLImageUtilBase* this) {
    OpenGLImageUtilBase_register();
}

OpenGLImageUtilBase* OpenGLImageUtilBase_new(void) {
    OpenGLImageUtilBase* this = java_object_alloc(sizeof(OpenGLImageUtilBase), "OpenGLImageUtilBase");
    OpenGLImageUtilBase_init(this);
    return this;
}


OpenGLBitmap* OpenGLImageUtilBase_paint4(OpenGLImageUtilBase* this, OpenGLBitmap* alphaBitmap, OpenGLBitmap* originalBitmap, int32_t index) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// Java overloaded method: C needs a different name
OpenGLBitmap* OpenGLImageUtilBase_paint5(OpenGLImageUtilBase* this, OpenGLBitmap* colorBitmap, OpenGLBitmap* originalBitmap, int32_t alpha, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws IOException
OpenGLBitmap* OpenGLImageUtilBase_createImage(OpenGLImageUtilBase* this, const char* name) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws IOException
OpenGLBitmap* OpenGLImageUtilBase_createImageFromInputStream(OpenGLImageUtilBase* this, InputStream* inputStream) {
        java_throw(java_exception_new("RuntimeException", ""));
}

