// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/ScreenRelationalUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


static ScreenRelationalUtil* ScreenRelationalUtil_instance;







void ScreenRelationalUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenRelationalUtil_instance = ScreenRelationalUtil_new();
}

void ScreenRelationalUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenRelationalUtil", nullptr);
    java_register_method("ScreenRelationalUtil", "getScaleImage", (void*) ScreenRelationalUtil_getScaleImage);
    java_register_method("ScreenRelationalUtil", "getScaleWH", (void*) ScreenRelationalUtil_getScaleWH);
    java_register_method("ScreenRelationalUtil", "getScaleWHA", (void*) ScreenRelationalUtil_getScaleWHA);
    java_register_method("ScreenRelationalUtil", "getScaledHeight", (void*) ScreenRelationalUtil_getScaledHeight);
    java_register_method("ScreenRelationalUtil", "getScaledHeightAdd", (void*) ScreenRelationalUtil_getScaledHeightAdd);
}

void ScreenRelationalUtil_init(ScreenRelationalUtil* this) {
    ScreenRelationalUtil_register();
}

ScreenRelationalUtil* ScreenRelationalUtil_new(void) {
    ScreenRelationalUtil* this = java_object_alloc(sizeof(ScreenRelationalUtil), "ScreenRelationalUtil");
    ScreenRelationalUtil_init(this);
    return this;
}


ScreenRelationalUtil* ScreenRelationalUtil_getInstance(void) {
        return (ScreenRelationalUtil_staticInit(), ScreenRelationalUtil_instance);
}


float ScreenRelationalUtil_getScaleImage(ScreenRelationalUtil* this, Image* image) {
        return ScreenRelationalUtil_getScaleWH(this, Image_getWidth(image), Image_getHeight(image));
}


float ScreenRelationalUtil_getScaleWH(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight) {
        return ScreenRelationalUtil_getScaleWHA(this, aWidth, aHeight, 20);
}


float ScreenRelationalUtil_getScaleWHA(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add) {
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        int32_t* last = DisplayInfoSingleton_getLast(displayInfoSingleton);
        float width = ((float) last[displayInfoSingleton->WIDTH]);
        float height = ((float) last[displayInfoSingleton->HEIGHT]);
        float largestSize = width;
        if (largestSize < height) {
            largestSize = height;
        }
        float scale = (largestSize) / ((float) aWidth);
        return scale;
}


int32_t ScreenRelationalUtil_getScaledHeight(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight) {
        return ((int32_t) (ScreenRelationalUtil_getScaleWH(this, aWidth, aHeight) * ((float) aHeight)));
}


int32_t ScreenRelationalUtil_getScaledHeightAdd(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add) {
        return ((int32_t) (ScreenRelationalUtil_getScaleWHA(this, aWidth, aHeight, add) * ((float) aHeight)));
}

