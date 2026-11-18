// Generated Code Do Not Modify
#include "org/allbinary/image/AnimationFrameToImageUtil.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
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
#if __has_include("org/allbinary/animation/ImageCache.h")
#include "org/allbinary/animation/ImageCache.h"
#endif
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("javax/microedition/lcdui/ImageCache.h")
#include "javax/microedition/lcdui/ImageCache.h"
#endif
#if __has_include("org/allbinary/animation/ImageCache.h")
#include "org/allbinary/animation/ImageCache.h"
#endif


static AnimationFrameToImageUtil* AnimationFrameToImageUtil_instance;




void AnimationFrameToImageUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnimationFrameToImageUtil_instance = AnimationFrameToImageUtil_new();
}

void AnimationFrameToImageUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationFrameToImageUtil", nullptr);
    java_register_method("AnimationFrameToImageUtil", "getInstanceTranslate", (void*) AnimationFrameToImageUtil_getInstanceTranslate);
    java_register_method("AnimationFrameToImageUtil", "getInstanceWH", (void*) AnimationFrameToImageUtil_getInstanceWH);
}

void AnimationFrameToImageUtil_init(AnimationFrameToImageUtil* this) {
    AnimationFrameToImageUtil_register();
}

AnimationFrameToImageUtil* AnimationFrameToImageUtil_new(void) {
    AnimationFrameToImageUtil* this = java_object_alloc(sizeof(AnimationFrameToImageUtil), "AnimationFrameToImageUtil");
    AnimationFrameToImageUtil_init(this);
    return this;
}


AnimationFrameToImageUtil* AnimationFrameToImageUtil_getInstance(void) {
        return (AnimationFrameToImageUtil_staticInit(), AnimationFrameToImageUtil_instance);
}


// throws Exception
Image* AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface) {
        Image* image = ImageCache_get(GameFeatureImageCacheFactory_getInstance(), java_class_of((AnimationFrameToImageUtil_staticInit(), AnimationFrameToImageUtil_instance)), ((width * 3) >> 1), ((height * 3) >> 1));
        Graphics* graphics = Image_getGraphics(image);
        int32_t tranlateX = (width >> 2);
        int32_t tranlateY = (height >> 2);
        Graphics_translate(graphics, tranlateX, tranlateY);
        Animation_paintXY(animationInterface, graphics, 0, 0);
        Graphics_translate(graphics, -tranlateX, -tranlateY);
        return image;
}


// throws Exception
Image* AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface) {
        Image* image = ImageCache_get(GameFeatureImageCacheFactory_getInstance(), java_class_of((AnimationFrameToImageUtil_staticInit(), AnimationFrameToImageUtil_instance)), width, height);
        Graphics* graphics = Image_getGraphics(image);
        Animation_paintXY(animationInterface, graphics, 0, 0);
        return image;
}

