// Generated Code Do Not Modify
#include "org/allbinary/platform/graphics/PlatformBitmapBaseFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"


PlatformBitmapBaseFactory* PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY;


void PlatformBitmapBaseFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformBitmapBaseFactory_NULL_PLATFORM_BITMAP_BASE_FACTORY = PlatformBitmapBaseFactory_new();
}

void PlatformBitmapBaseFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformBitmapBaseFactory", nullptr);
    java_register_method("PlatformBitmapBaseFactory", "createBitmap", (void*) PlatformBitmapBaseFactory_createBitmap);
}

void PlatformBitmapBaseFactory_init(PlatformBitmapBaseFactory* this) {
    PlatformBitmapBaseFactory_register();
}

PlatformBitmapBaseFactory* PlatformBitmapBaseFactory_new(void) {
    PlatformBitmapBaseFactory* this = java_object_alloc(sizeof(PlatformBitmapBaseFactory), "PlatformBitmapBaseFactory");
    PlatformBitmapBaseFactory_init(this);
    return this;
}


PlatformBitmapBase* PlatformBitmapBaseFactory_createBitmap(PlatformBitmapBaseFactory* this, Image* image) {
        java_throw(java_exception_new("RuntimeException", ""));
}

