// Generated Code Do Not Modify
#include "org/allbinary/animation/NullIndexedAnimationInner.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/NullIndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"





void NullIndexedAnimationInner_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullIndexedAnimationInner_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullIndexedAnimationInner", "NullIndexedAnimation");
    java_register_method("NullIndexedAnimationInner", "paintXY", (void*) NullIndexedAnimationInner_paintXY);
}


void NullIndexedAnimationInner_init(NullIndexedAnimationInner* this) {
    NullIndexedAnimationInner_register();
        NullIndexedAnimation_init(&this->base, IndexedAnimationBehavior_new(1, 250));
}

NullIndexedAnimationInner* NullIndexedAnimationInner_new(void) {
    NullIndexedAnimationInner* this = java_object_alloc(sizeof(NullIndexedAnimationInner), "NullIndexedAnimationInner");
    NullIndexedAnimationInner_init(this);
    return this;
}


void NullIndexedAnimationInner_paintXY(NullIndexedAnimationInner* this, Graphics* graphics, int32_t x, int32_t y) {
}

