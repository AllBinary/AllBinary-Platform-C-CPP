// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"


static BasicColorUtil* BasicColorUtil_instance;






void BasicColorUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicColorUtil_instance = BasicColorUtil_new();
}

void BasicColorUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorUtil", nullptr);
    java_register_method("BasicColorUtil", "getRGB", (void*) BasicColorUtil_getRGB);
    java_register_method("BasicColorUtil", "getARGB", (void*) BasicColorUtil_getARGB);
    java_register_method("BasicColorUtil", "get", (void*) BasicColorUtil_get);
    java_register_method("BasicColorUtil", "invert", (void*) BasicColorUtil_invert);
}

static void BasicColorUtil_initFields(BasicColorUtil* this) {
    this->ZERO_ARRAY = ((BasicColor**) java_array_new(sizeof(BasicColor*), 0));
    this->ALPHA = 0xFF000000;
    this->isAlpha = true;
    this->ffOpaque = true;
}

void BasicColorUtil_init(BasicColorUtil* this) {
    BasicColorUtil_register();
    BasicColorUtil_initFields(this);
}

BasicColorUtil* BasicColorUtil_new(void) {
    BasicColorUtil* this = java_object_alloc(sizeof(BasicColorUtil), "BasicColorUtil");
    BasicColorUtil_init(this);
    return this;
}


BasicColorUtil* BasicColorUtil_getInstance(void) {
        return (BasicColorUtil_staticInit(), BasicColorUtil_instance);
}


int32_t BasicColorUtil_getRGB(BasicColorUtil* this, int32_t red, int32_t green, int32_t blue) {
        int32_t value = 0;
        if (this->isAlpha) {
            if (this->ffOpaque) {
                value = this->ALPHA;
            }
        }
        value = (red << 16) | value;
        value = (green << 8) | value;
        value = blue | value;
        return value;
}


int32_t BasicColorUtil_getARGB(BasicColorUtil* this, int32_t alphaValue, int32_t r, int32_t g, int32_t b) {
        return ((alphaValue << 24) & this->ALPHA) + ((r << 16) & 0x00FF0000) + ((g << 8) & 0x0000FF00) + (b & 0x000000FF);
}


int32_t BasicColorUtil_get(BasicColorUtil* this, int32_t alphaValue, int32_t color) {
        return ((alphaValue << 24) & this->ALPHA) + color;
}


int32_t BasicColorUtil_invert(BasicColorUtil* this, int32_t color) {
        return (0xFFFFFF - color) | this->ALPHA;
}

