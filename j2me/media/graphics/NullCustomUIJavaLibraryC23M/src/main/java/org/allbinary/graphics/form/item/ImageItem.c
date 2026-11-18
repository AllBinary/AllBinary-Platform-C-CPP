// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ImageItem.h"



void ImageItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageItem", nullptr);
}

void ImageItem_init(ImageItem* this) {
    ImageItem_register();
}

ImageItem* ImageItem_new(void) {
    ImageItem* this = java_object_alloc(sizeof(ImageItem), "ImageItem");
    ImageItem_init(this);
    return this;
}

