// Generated Code Do Not Modify
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


PlatformBitmapBase* PlatformBitmapBase_NULL_PLATFORM_BITMAP_BASE;




void PlatformBitmapBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformBitmapBase_NULL_PLATFORM_BITMAP_BASE = PlatformBitmapBase_new();
}

void PlatformBitmapBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformBitmapBase", nullptr);
    java_register_method("PlatformBitmapBase", "getWidth", (void*) PlatformBitmapBase_getWidth);
    java_register_method("PlatformBitmapBase", "getHeight", (void*) PlatformBitmapBase_getHeight);
    java_register_method("PlatformBitmapBase", "getImage", (void*) PlatformBitmapBase_getImage);
}

static void PlatformBitmapBase_initFields(PlatformBitmapBase* this) {
    this->alpha = 255;
    this->basicColor = BasicColorFactory_getInstance()->NULL_COLOR;
}

void PlatformBitmapBase_init(PlatformBitmapBase* this) {
    PlatformBitmapBase_register();
    PlatformBitmapBase_initFields(this);
}

PlatformBitmapBase* PlatformBitmapBase_new(void) {
    PlatformBitmapBase* this = java_object_alloc(sizeof(PlatformBitmapBase), "PlatformBitmapBase");
    PlatformBitmapBase_init(this);
    return this;
}


int32_t PlatformBitmapBase_getWidth(PlatformBitmapBase* this) {
        return 0;
}


int32_t PlatformBitmapBase_getHeight(PlatformBitmapBase* this) {
        return 0;
}


Image* PlatformBitmapBase_getImage(PlatformBitmapBase* this) {
        return (NullImage_staticInit(), NullImage_NULL_IMAGE);
}

