// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/media/image/ImageCompleteUtil.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"
#include "org/allbinary/input/motion/button/TouchButtonGenericActionResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStartResource.h"
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/image/sprite/GenericOperatingSystem.h")
#include "org/allbinary/animation/image/sprite/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/resource/GenericOperatingSystem.h")
#include "org/allbinary/animation/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/resource/GenericOperatingSystem.h")
#include "org/allbinary/game/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/image/GenericOperatingSystem.h")
#include "org/allbinary/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/image/GenericOperatingSystem.h")
#include "org/allbinary/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/GenericOperatingSystem.h")
#include "org/allbinary/logic/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/string/GenericOperatingSystem.h")
#include "org/allbinary/logic/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/image/GenericOperatingSystem.h")
#include "org/allbinary/media/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/GenericOperatingSystem.h")
#include "org/allbinary/input/motion/button/GenericOperatingSystem.h"
#endif
#if __has_include("javax/microedition/lcdui/GenericOperatingSystem.h")
#include "javax/microedition/lcdui/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/GenericOperatingSystem.h")
#include "org/allbinary/animation/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/image/sprite/GenericOperatingSystem.h")
#include "org/allbinary/animation/image/sprite/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/animation/resource/GenericOperatingSystem.h")
#include "org/allbinary/animation/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GenericOperatingSystem.h")
#include "org/allbinary/game/configuration/feature/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/game/resource/GenericOperatingSystem.h")
#include "org/allbinary/game/resource/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h")
#include "org/allbinary/graphics/canvas/transition/progress/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/GenericOperatingSystem.h")
#include "org/allbinary/graphics/opengles/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/image/GenericOperatingSystem.h")
#include "org/allbinary/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/image/GenericOperatingSystem.h")
#include "org/allbinary/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/GenericOperatingSystem.h")
#include "org/allbinary/logic/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/string/GenericOperatingSystem.h")
#include "org/allbinary/logic/string/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/media/image/GenericOperatingSystem.h")
#include "org/allbinary/media/image/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/logic/system/os/OperatingSystemFactory.h")
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
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
        int32_t portion = 140;
        const char* loadingString = java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), BaseResourceAnimationInterfaceFactoryInterfaceFactory_toString(this)), " Loading: "));
        int32_t index = 0;
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        TouchButtonResource* touchButtonBlankResource = TouchButtonBlankResource_getInstance();
        TouchButtonResource* touchButtonGenericActionResource = TouchButtonGenericActionResource_getInstance();
        TouchButtonResource* touchButtonStartResource = TouchButtonStartResource_getInstance();
        TouchButtonResource* touchButtonUpResource = TouchButtonUpResource_getInstance();
        TouchButtonResource* touchButtonDownResource = TouchButtonDownResource_getInstance();
        TouchButtonResource* touchButtonTurnLeftResource = TouchButtonTurnLeftResource_getInstance();
        TouchButtonResource* touchButtonTurnRightResource = TouchButtonTurnRightResource_getInstance();
        TouchButtonResource* touchButtonStrafeLeftResource = TouchButtonStrafeLeftResource_getInstance();
        TouchButtonResource* touchButtonStrafeRightResource = TouchButtonStrafeRightResource_getInstance();
        Image* touchButtonBlankResourceImage = ImageCache_getWithKey(imageCache, touchButtonBlankResource->RESOURCE);
        Image* touchButtonGenericActionResourceImage = ImageCache_getWithKey(imageCache, touchButtonGenericActionResource->RESOURCE);
        Image* touchButtonStartResourceImage = ImageCache_getWithKey(imageCache, touchButtonStartResource->RESOURCE);
        Image* touchButtonUpResourceImage = ImageCache_getWithKey(imageCache, touchButtonUpResource->RESOURCE);
        Image* touchButtonDownResourceImage = ImageCache_getWithKey(imageCache, touchButtonDownResource->RESOURCE);
        Image* touchButtonTurnLeftResourceImage = ImageCache_getWithKey(imageCache, touchButtonTurnLeftResource->RESOURCE);
        Image* touchButtonTurnRightResourceImage = ImageCache_getWithKey(imageCache, touchButtonTurnRightResource->RESOURCE);
        Image* touchButtonStrafeLeftResourceImage = ImageCache_getWithKey(imageCache, touchButtonStrafeLeftResource->RESOURCE);
        Image* touchButtonStrafeRightResourceImage = ImageCache_getWithKey(imageCache, touchButtonStrafeRightResource->RESOURCE);
        NullAnimationFactory* nullAnimationFactory = NullAnimationFactory_getFactoryInstance();
        if (GenericOperatingSystem_isOverScan(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()))) {
            ImageCache_getWithKey(imageCache, TouchButtonStartResource_getInstance()->HINT);
        }
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil* imageCompleteUtil = ImageCompleteUtil_getInstance();
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonBlankResourceImage, touchButtonBlankResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonBlankResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonBlankResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonBlankResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonGenericActionResourceImage, touchButtonGenericActionResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonGenericActionResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonGenericActionResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonGenericActionResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStartResourceImage, touchButtonStartResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStartResourceImage, AnimationBehaviorFactory_getInstance()));
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonUpResourceImage, touchButtonUpResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonUpResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonUpResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonUpResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonDownResourceImage, touchButtonDownResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonDownResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonDownResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonDownResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonTurnLeftResourceImage, touchButtonTurnLeftResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnLeftResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonTurnLeftResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnLeftResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonTurnRightResourceImage, touchButtonTurnRightResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnRightResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonTurnRightResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonTurnRightResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStrafeLeftResourceImage, touchButtonStrafeLeftResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeLeftResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStrafeLeftResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeLeftResource->HINT, nullAnimationFactory);
        ProgressCanvas_addPortion(progressCanvas, portion, loadingString, index++);
        ImageCompleteUtil_waitForImage(imageCompleteUtil, touchButtonStrafeRightResourceImage, touchButtonStrafeRightResource->RESOURCE);
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeRightResource->RESOURCE, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStrafeRightResourceImage, AnimationBehaviorFactory_getInstance()));
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStrafeRightResource->HINT, nullAnimationFactory);
        if (GenericOperatingSystem_isOverScan(OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()))) {
            Image* touchButtonStartHintResource = ImageCache_getWithKey(imageCache, TouchButtonStartResource_getInstance()->HINT);
            BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->HINT, OneRowSpriteIndexedAnimationFactory_createFactory(touchButtonStartHintResource, AnimationBehaviorFactory_getInstance()));
        } else {
            BaseResourceAnimationInterfaceFactoryInterfaceFactory_add(this, touchButtonStartResource->HINT, nullAnimationFactory);
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

