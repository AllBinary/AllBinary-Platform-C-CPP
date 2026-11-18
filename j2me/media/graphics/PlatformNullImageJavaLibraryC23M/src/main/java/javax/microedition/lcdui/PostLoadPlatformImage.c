// Generated Code Do Not Modify
#include "javax/microedition/lcdui/PostLoadPlatformImage.h"
#include "javax/microedition/lcdui/PlatformImage.h"


static PostLoadPlatformImage* PostLoadPlatformImage_instance;


void PostLoadPlatformImage_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PostLoadPlatformImage_instance = PostLoadPlatformImage_new();
}

void PostLoadPlatformImage_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PostLoadPlatformImage", "PlatformImage");
}

void PostLoadPlatformImage_init(PostLoadPlatformImage* this) {
    PostLoadPlatformImage_register();
    PlatformImage_init(&this->base);
}

PostLoadPlatformImage* PostLoadPlatformImage_new(void) {
    PostLoadPlatformImage* this = java_object_alloc(sizeof(PostLoadPlatformImage), "PostLoadPlatformImage");
    PostLoadPlatformImage_init(this);
    return this;
}


PostLoadPlatformImage* PostLoadPlatformImage_getInstance(void) {
        return (PostLoadPlatformImage_staticInit(), PostLoadPlatformImage_instance);
}

