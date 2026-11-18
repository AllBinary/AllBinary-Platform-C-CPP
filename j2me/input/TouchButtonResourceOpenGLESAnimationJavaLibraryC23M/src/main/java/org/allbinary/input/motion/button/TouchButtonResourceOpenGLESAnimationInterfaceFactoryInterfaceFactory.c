// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif






void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory", "TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory");
    java_register_method("TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory", "init", (void*) TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_initMethod);
    java_register_method("TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory", "isFeature", (void*) TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_isFeature);
}


void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this) {
    TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_register();
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(&this->base, "OpenGL TouchButton Animations");
}

TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_new(void) {
    TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this = java_object_alloc(sizeof(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory), "TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory");
    TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(this);
    return this;
}


// throws Exception
void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_initMethod(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache((&this->base), OpenGLImageCacheFactory_getInstance(), level);
}


bool TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this) {
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return true;
        } else {
            return false;
        }
}

