// Generated Code Do Not Modify
#include "org/allbinary/image/ImageTypeUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static ImageTypeUtil* ImageTypeUtil_SINGLETON;




void ImageTypeUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ImageTypeUtil_SINGLETON = ImageTypeUtil_new();
}

void ImageTypeUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageTypeUtil", nullptr);
    java_register_method("ImageTypeUtil", "isSupported", (void*) ImageTypeUtil_isSupported);
}

static void ImageTypeUtil_initFields(ImageTypeUtil* this) {
    this->PNG = "png";
    this->JPG = "jpg";
    this->GIF = "gif";
    this->list = BasicArrayListD_new();
}


void ImageTypeUtil_init(ImageTypeUtil* this) {
    ImageTypeUtil_register();
    ImageTypeUtil_initFields(this);
        BasicArrayList_add(this->list, this->JPG);
        BasicArrayList_add(this->list, this->GIF);
        BasicArrayList_add(this->list, this->PNG);
}

ImageTypeUtil* ImageTypeUtil_new(void) {
    ImageTypeUtil* this = java_object_alloc(sizeof(ImageTypeUtil), "ImageTypeUtil");
    ImageTypeUtil_init(this);
    return this;
}


bool ImageTypeUtil_isSupported(ImageTypeUtil* this, const char* mediaFileType) {
        mediaFileType = java_string_toLowerCase(mediaFileType);
        for (int32_t index = BasicArrayList_size(this->list) - 1; index >= 0; index--) {
            const char* name = ((const char*) BasicArrayList_get(this->list, index));
            if (strcmp(mediaFileType, name) == 0) {
                return true;
            }
        }
        return false;
}


ImageTypeUtil* ImageTypeUtil_getInstance(void) {
        return (ImageTypeUtil_staticInit(), ImageTypeUtil_SINGLETON);
}

