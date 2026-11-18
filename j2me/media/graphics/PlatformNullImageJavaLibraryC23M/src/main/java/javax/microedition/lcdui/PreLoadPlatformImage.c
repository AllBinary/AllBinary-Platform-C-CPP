// Generated Code Do Not Modify
#include "javax/microedition/lcdui/PreLoadPlatformImage.h"
#include "javax/microedition/lcdui/PlatformImage.h"


static PreLoadPlatformImage* PreLoadPlatformImage_instance;


void PreLoadPlatformImage_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PreLoadPlatformImage_instance = PreLoadPlatformImage_new();
}

void PreLoadPlatformImage_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PreLoadPlatformImage", "PlatformImage");
}

void PreLoadPlatformImage_init(PreLoadPlatformImage* this) {
    PreLoadPlatformImage_register();
    PlatformImage_init(&this->base);
}

PreLoadPlatformImage* PreLoadPlatformImage_new(void) {
    PreLoadPlatformImage* this = java_object_alloc(sizeof(PreLoadPlatformImage), "PreLoadPlatformImage");
    PreLoadPlatformImage_init(this);
    return this;
}


PreLoadPlatformImage* PreLoadPlatformImage_getInstance(void) {
        return (PreLoadPlatformImage_staticInit(), PreLoadPlatformImage_instance);
}

