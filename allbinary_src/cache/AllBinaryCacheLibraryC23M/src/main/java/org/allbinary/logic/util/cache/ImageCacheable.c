// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/ImageCacheable.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






void ImageCacheable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageCacheable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCacheable", nullptr);
    java_register_method("ImageCacheable", "getKey", (void*) ImageCacheable_getKey);
    java_register_method("ImageCacheable", "toString", (void*) ImageCacheable_toString);
}

static void ImageCacheable_initFields(ImageCacheable* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void ImageCacheable_init(ImageCacheable* this, const char* name, void* anyType) {
    ImageCacheable_register();
    ImageCacheable_initFields(this);
}

ImageCacheable* ImageCacheable_new(const char* name, void* anyType) {
    ImageCacheable* this = java_object_alloc(sizeof(ImageCacheable), "ImageCacheable");
    ImageCacheable_init(this, name, anyType);
    return this;
}


void* ImageCacheable_getKey(ImageCacheable* this) {
        return this->name;
}


const char* ImageCacheable_toString(ImageCacheable* this) {
        return this->name;
}

