// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/LockablePaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedResources.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/graphics/form/ItemPaintable.h"
#if __has_include("org/allbinary/graphics/form/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/form/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("javax/microedition/lcdui/AnimationInterfaceFactoryInterface.h")
#include "javax/microedition/lcdui/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/logic/system/security/licensing/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/logic/system/security/licensing/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockedResources.h")
#include "org/allbinary/logic/system/security/licensing/LockedResources.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/LockedUtil.h")
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif







void LockablePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LockablePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockablePaintable", "ItemPaintable");
    java_register_method("LockablePaintable", "paint", (void*) LockablePaintable_paint);
    java_register_method("LockablePaintable", "getLockedIndex", (void*) LockablePaintable_getLockedIndex);
    java_register_method("LockablePaintable", "getAnimation", (void*) LockablePaintable_getAnimation);
}

static void LockablePaintable_initFields(LockablePaintable* this) {
    this->animation = AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LockedResources_getInstance()->LOCKED_DEMO_GAME_FEATURE_RESOURCE), 0);
    
}


void LockablePaintable_init(LockablePaintable* this, int32_t lockedIndex) {
    LockablePaintable_register();
    ItemPaintable_init(&this->base);
    LockablePaintable_initFields(this);
        this->lockedIndex = lockedIndex;
}

LockablePaintable* LockablePaintable_new(int32_t lockedIndex) {
    LockablePaintable* this = java_object_alloc(sizeof(LockablePaintable), "LockablePaintable");
    LockablePaintable_init(this, lockedIndex);
    return this;
}


void LockablePaintable_paint(LockablePaintable* this, Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) {
        if (LockedUtil_isLocked(LockedUtil_getInstance()) && currentIndex >= LockablePaintable_getLockedIndex(this)) {
            Animation_paintXY(LockablePaintable_getAnimation(this), graphics, x, y);
        }
}


int32_t LockablePaintable_getLockedIndex(LockablePaintable* this) {
        return this->lockedIndex;
}


Animation* LockablePaintable_getAnimation(LockablePaintable* this) {
        return this->animation;
}

