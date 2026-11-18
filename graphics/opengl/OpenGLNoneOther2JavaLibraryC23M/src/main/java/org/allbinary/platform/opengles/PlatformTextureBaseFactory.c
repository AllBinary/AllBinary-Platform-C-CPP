// Generated Code Do Not Modify
#include "org/allbinary/platform/opengles/PlatformTextureBaseFactory.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/string/CommonStrings.h"


PlatformTextureBaseFactory* PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY;


void PlatformTextureBaseFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformTextureBaseFactory_NULL_PLATFORM_TEXTURE_BASE_FACTORY = PlatformTextureBaseFactory_new();
}

void PlatformTextureBaseFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformTextureBaseFactory", nullptr);
    java_register_method("PlatformTextureBaseFactory", "load", (void*) PlatformTextureBaseFactory_load);
}

static void PlatformTextureBaseFactory_initFields(PlatformTextureBaseFactory* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void PlatformTextureBaseFactory_init(PlatformTextureBaseFactory* this) {
    PlatformTextureBaseFactory_register();
    PlatformTextureBaseFactory_initFields(this);
}

PlatformTextureBaseFactory* PlatformTextureBaseFactory_new(void) {
    PlatformTextureBaseFactory* this = java_object_alloc(sizeof(PlatformTextureBaseFactory), "PlatformTextureBaseFactory");
    PlatformTextureBaseFactory_init(this);
    return this;
}


void PlatformTextureBaseFactory_load(PlatformTextureBaseFactory* this, GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip) {
}

