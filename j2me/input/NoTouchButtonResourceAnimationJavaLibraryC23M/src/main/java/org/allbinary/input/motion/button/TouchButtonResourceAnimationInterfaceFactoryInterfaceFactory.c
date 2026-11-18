// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif









void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory", "BaseResourceAnimationInterfaceFactoryInterfaceFactory");
    java_register_method("TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory", "init", (void*) TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initMethod);
    java_register_method("TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory", "initImageCache", (void*) TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache);
    java_register_method("TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory", "isLoadingLevel", (void*) TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel);
    java_register_method("TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory", "isFeature", (void*) TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature);
}


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_createFactory(void) {
        return TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new("TouchButton Animations");
}


void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name) {
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_register();
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(&this->base, name, StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()));
}

TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name) {
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this = java_object_alloc(sizeof(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory), "TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory");
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(this, name);
    return this;
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initMethod(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(this, ImageCacheFactory_getInstance(), level);
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level) {
        if (BaseResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(this)) {
            return;
        }
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_initMethod((&this->base), level);
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_TOUCH)) {
            return true;
        } else {
            return BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel((&this->base), level);
        }
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        if (!Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return true;
        } else {
            return false;
        }
}

