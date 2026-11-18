// Generated Code Do Not Modify
#include "javax/microedition/lcdui/PlatformImage.h"
#include "org/allbinary/logic/NullUtil.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/Graphics.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif














void PlatformImage_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlatformImage_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformImage", nullptr);
    java_register_method("PlatformImage", "getImage", (void*) PlatformImage_getImage);
    java_register_method("PlatformImage", "getSurfaceWidth", (void*) PlatformImage_getSurfaceWidth);
    java_register_method("PlatformImage", "getSurfaceHeight", (void*) PlatformImage_getSurfaceHeight);
    java_register_method("PlatformImage", "getWidth", (void*) PlatformImage_getWidth);
    java_register_method("PlatformImage", "getHeight", (void*) PlatformImage_getHeight);
    java_register_method("PlatformImage", "getGraphics", (void*) PlatformImage_getGraphics);
    java_register_method("PlatformImage", "drawImage", (void*) PlatformImage_drawImage);
    java_register_method("PlatformImage", "drawRegion", (void*) PlatformImage_drawRegion);
    java_register_method("PlatformImage", "getRGB", (void*) PlatformImage_getRGB);
    java_register_method("PlatformImage", "setRGB", (void*) PlatformImage_setRGB);
    java_register_method("PlatformImage", "getData", (void*) PlatformImage_getData);
}

void PlatformImage_init(PlatformImage* this) {
    PlatformImage_register();
}

PlatformImage* PlatformImage_new(void) {
    PlatformImage* this = java_object_alloc(sizeof(PlatformImage), "PlatformImage");
    PlatformImage_init(this);
    return this;
}


void* PlatformImage_getImage(PlatformImage* this, void* graphicsSurface2) {
        return (NullImage_staticInit(), NullImage_NULL_IMAGE);
}


int32_t PlatformImage_getSurfaceWidth(PlatformImage* this, void* graphicsSurface2, int32_t width) {
        return width;
}


int32_t PlatformImage_getSurfaceHeight(PlatformImage* this, void* graphicsSurface2, int32_t height) {
        return height;
}


int32_t PlatformImage_getWidth(PlatformImage* this, Image* image, int32_t width) {
        return width;
}


int32_t PlatformImage_getHeight(PlatformImage* this, Image* image, int32_t height) {
        return height;
}


Graphics* PlatformImage_getGraphics(PlatformImage* this, void* graphicsSurface, int32_t width, int32_t height, Image* image) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void PlatformImage_drawImage(PlatformImage* this, Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, void* g) {
}


void PlatformImage_drawRegion(PlatformImage* this, Image* image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, Graphics* g) {
}


void PlatformImage_getRGB(PlatformImage* this, int32_t* argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image) {
}


void PlatformImage_setRGB(PlatformImage* this, int32_t* argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image) {
}


int32_t* PlatformImage_getData(PlatformImage* this, Image* image) {
        return NullUtil_getInstance()->NULL_INT_ARRAY;
}

