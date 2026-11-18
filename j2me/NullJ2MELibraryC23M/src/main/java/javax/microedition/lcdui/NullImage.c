// Generated Code Do Not Modify
#include "javax/microedition/lcdui/NullImage.h"
#include "javax/microedition/lcdui/Image.h"


Image** NullImage_NULL_IMAGE_ARRAY;
Image* NullImage_NULL_IMAGE;

void NullImage_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullImage_NULL_IMAGE_ARRAY = ((Image**) java_array_new(sizeof(Image*), 0));
    NullImage_NULL_IMAGE = Image_new();
}

void NullImage_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullImage", nullptr);
}

void NullImage_init(NullImage* this) {
    NullImage_register();
}

NullImage* NullImage_new(void) {
    NullImage* this = java_object_alloc(sizeof(NullImage), "NullImage");
    NullImage_init(this);
    return this;
}

