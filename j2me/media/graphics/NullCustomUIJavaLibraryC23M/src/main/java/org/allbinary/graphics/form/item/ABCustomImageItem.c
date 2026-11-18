// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABCustomImageItem.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"





void ABCustomImageItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABCustomImageItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABCustomImageItem", "ABCustomItem");
    java_register_method("ABCustomImageItem", "getImage", (void*) ABCustomImageItem_getImage);
}

static void ABCustomImageItem_initFields(ABCustomImageItem* this) {
    this->yOffset = 0;
}


void ABCustomImageItem_init(ABCustomImageItem* this, const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset) {
    ABCustomImageItem_register();
        ABCustomItem_init(&this->base, label, basicColor, basicColor);
        ABCustomImageItem_initFields(this);
}

ABCustomImageItem* ABCustomImageItem_new(const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset) {
    ABCustomImageItem* this = java_object_alloc(sizeof(ABCustomImageItem), "ABCustomImageItem");
    ABCustomImageItem_init(this, label, image, layout, altText, basicColor, yOffset);
    return this;
}


Image* ABCustomImageItem_getImage(ABCustomImageItem* this) {
        return (NullImage_staticInit(), NullImage_NULL_IMAGE);
}

