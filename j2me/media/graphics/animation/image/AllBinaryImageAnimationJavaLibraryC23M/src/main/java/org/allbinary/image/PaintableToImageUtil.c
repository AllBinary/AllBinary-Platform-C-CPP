// Generated Code Do Not Modify
#include "org/allbinary/image/PaintableToImageUtil.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/image/GameFeatureImageCacheFactory.h"
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("org/allbinary/graphics/paint/ImageCache.h")
#include "org/allbinary/graphics/paint/ImageCache.h"
#endif


static PaintableToImageUtil* PaintableToImageUtil_instance;


void PaintableToImageUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PaintableToImageUtil_instance = PaintableToImageUtil_new();
}

void PaintableToImageUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PaintableToImageUtil", nullptr);
}

void PaintableToImageUtil_init(PaintableToImageUtil* this) {
    PaintableToImageUtil_register();
}

PaintableToImageUtil* PaintableToImageUtil_new(void) {
    PaintableToImageUtil* this = java_object_alloc(sizeof(PaintableToImageUtil), "PaintableToImageUtil");
    PaintableToImageUtil_init(this);
    return this;
}


// throws Exception
Image* PaintableToImageUtil_getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height) {
        Image* image = ImageCache_get(GameFeatureImageCacheFactory_getInstance(), java_class_of((PaintableToImageUtil_staticInit(), PaintableToImageUtil_instance)), width, height);
        Graphics* graphics = Image_getGraphics(image);
        PaintableInterface_paint(paintableInterface, graphics);
        return image;
}

