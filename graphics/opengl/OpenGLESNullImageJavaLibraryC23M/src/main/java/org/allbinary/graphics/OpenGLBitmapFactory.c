// Generated Code Do Not Modify
#include "org/allbinary/graphics/OpenGLBitmapFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "org/allbinary/graphics/OpenGLBitmapConfig.h"
#include "org/allbinary/graphics/OpenGLBitmap.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static OpenGLBitmapFactory* OpenGLBitmapFactory_instance;





void OpenGLBitmapFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLBitmapFactory_instance = OpenGLBitmapFactory_new();
}

void OpenGLBitmapFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLBitmapFactory", "PlatformBitmapBaseFactory");
    java_register_method("OpenGLBitmapFactory", "createBitmap", (void*) OpenGLBitmapFactory_createBitmap4);
    java_register_method("OpenGLBitmapFactory", "createBitmap@4", (void*) OpenGLBitmapFactory_createBitmap4);
    java_register_method("OpenGLBitmapFactory", "decodeStream", (void*) OpenGLBitmapFactory_decodeStream);
    java_register_method("OpenGLBitmapFactory", "createBitmap@2", (void*) OpenGLBitmapFactory_createBitmap2);
}

static void OpenGLBitmapFactory_initFields(OpenGLBitmapFactory* this) {
    this->ARGB_8888 = OpenGLBitmapConfig_new(NullUtil_getInstance()->NULL_OBJECT);
}

void OpenGLBitmapFactory_init(OpenGLBitmapFactory* this) {
    OpenGLBitmapFactory_register();
    PlatformBitmapBaseFactory_init(&this->base);
    OpenGLBitmapFactory_initFields(this);
}

OpenGLBitmapFactory* OpenGLBitmapFactory_new(void) {
    OpenGLBitmapFactory* this = java_object_alloc(sizeof(OpenGLBitmapFactory), "OpenGLBitmapFactory");
    OpenGLBitmapFactory_init(this);
    return this;
}


OpenGLBitmapFactory* OpenGLBitmapFactory_getInstance(void) {
        return (OpenGLBitmapFactory_staticInit(), OpenGLBitmapFactory_instance);
}


OpenGLBitmap* OpenGLBitmapFactory_createBitmap4(OpenGLBitmapFactory* this, int32_t width, int32_t height, OpenGLBitmapConfig* config) {
        return OpenGLBitmap_new(NullUtil_getInstance()->NULL_OBJECT);
}


// throws IOException
OpenGLBitmap* OpenGLBitmapFactory_decodeStream(OpenGLBitmapFactory* this, InputStream* inputStream) {
        return OpenGLBitmap_new(NullUtil_getInstance()->NULL_OBJECT);
}


// Java overloaded method: C needs a different name
PlatformBitmapBase* OpenGLBitmapFactory_createBitmap2(OpenGLBitmapFactory* this, Image* image) {
        return OpenGLBitmap_new(NullUtil_getInstance()->NULL_OBJECT);
}

