// Generated Code Do Not Modify
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"


CaptionAnimationHelperBase* CaptionAnimationHelperBase_INSTANCE;





void CaptionAnimationHelperBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CaptionAnimationHelperBase_INSTANCE = CaptionAnimationHelperBase_new();
}

void CaptionAnimationHelperBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CaptionAnimationHelperBase", "Animation");
    java_register_method("CaptionAnimationHelperBase", "isShowing", (void*) CaptionAnimationHelperBase_isShowing);
    java_register_method("CaptionAnimationHelperBase", "tick", (void*) CaptionAnimationHelperBase_tick);
    java_register_method("CaptionAnimationHelperBase", "update", (void*) CaptionAnimationHelperBase_update);
    java_register_method("CaptionAnimationHelperBase", "paintXY", (void*) CaptionAnimationHelperBase_paintXY);
}

void CaptionAnimationHelperBase_init(CaptionAnimationHelperBase* this) {
    CaptionAnimationHelperBase_register();
    Animation_init(&this->base);
}

CaptionAnimationHelperBase* CaptionAnimationHelperBase_new(void) {
    CaptionAnimationHelperBase* this = java_object_alloc(sizeof(CaptionAnimationHelperBase), "CaptionAnimationHelperBase");
    CaptionAnimationHelperBase_init(this);
    return this;
}


bool CaptionAnimationHelperBase_isShowing(CaptionAnimationHelperBase* this) {
        return false;
}


void CaptionAnimationHelperBase_tick(CaptionAnimationHelperBase* this) {
}


void CaptionAnimationHelperBase_update(CaptionAnimationHelperBase* this, const char* message, BasicColor* basicColor) {
}


void CaptionAnimationHelperBase_paintXY(CaptionAnimationHelperBase* this, Graphics* graphics, int32_t x, int32_t y) {
}

