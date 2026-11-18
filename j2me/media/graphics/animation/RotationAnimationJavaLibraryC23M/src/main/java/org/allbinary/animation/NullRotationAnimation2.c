// Generated Code Do Not Modify
#include "org/allbinary/animation/NullRotationAnimation2.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/NullRotationAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif





void NullRotationAnimation2_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullRotationAnimation2_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRotationAnimation2", "NullRotationAnimation");
    java_register_method("NullRotationAnimation2", "paintXY", (void*) NullRotationAnimation2_paintXY);
}


void NullRotationAnimation2_init(NullRotationAnimation2* this) {
    NullRotationAnimation2_register();
        NullRotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), IndexedAnimationBehavior_new(1, 250));
}

NullRotationAnimation2* NullRotationAnimation2_new(void) {
    NullRotationAnimation2* this = java_object_alloc(sizeof(NullRotationAnimation2), "NullRotationAnimation2");
    NullRotationAnimation2_init(this);
    return this;
}


void NullRotationAnimation2_paintXY(NullRotationAnimation2* this, Graphics* graphics, int32_t x, int32_t y) {
}

