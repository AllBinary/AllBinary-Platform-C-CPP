// Generated Code Do Not Modify
#include "org/allbinary/platform/graphics/PlatformBitmapBase.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"




void PlatformBitmapBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlatformBitmapBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformBitmapBase", nullptr);
    java_register_method("PlatformBitmapBase", "getImage", (void*) PlatformBitmapBase_getImage);
}

void PlatformBitmapBase_init(PlatformBitmapBase* this) {
    PlatformBitmapBase_register();
}

PlatformBitmapBase* PlatformBitmapBase_new(void) {
    PlatformBitmapBase* this = java_object_alloc(sizeof(PlatformBitmapBase), "PlatformBitmapBase");
    PlatformBitmapBase_init(this);
    return this;
}


Image* PlatformBitmapBase_getImage(PlatformBitmapBase* this) {
        return (NullImage_staticInit(), NullImage_NULL_IMAGE);
}

