// Generated Code Do Not Modify
#include "org/allbinary/graphics/paint/AnimationCompositePaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"






void AnimationCompositePaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnimationCompositePaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationCompositePaintable", "InitUpdatePaintable");
    java_register_method("AnimationCompositePaintable", "paint", (void*) AnimationCompositePaintable_paint);
    java_register_method("AnimationCompositePaintable", "paintThreed", (void*) AnimationCompositePaintable_paintThreed);
}

static void AnimationCompositePaintable_initFields(AnimationCompositePaintable* this) {
    
}


void AnimationCompositePaintable_init(AnimationCompositePaintable* this, Animation* animationInterface) {
    AnimationCompositePaintable_register();
    InitUpdatePaintable_init(&this->base);
    AnimationCompositePaintable_initFields(this);
        this->animationInterface = animationInterface;
}

AnimationCompositePaintable* AnimationCompositePaintable_new(Animation* animationInterface) {
    AnimationCompositePaintable* this = java_object_alloc(sizeof(AnimationCompositePaintable), "AnimationCompositePaintable");
    AnimationCompositePaintable_init(this, animationInterface);
    return this;
}


void AnimationCompositePaintable_paint(AnimationCompositePaintable* this, Graphics* graphics) {
        Animation_paintXY(this->animationInterface, graphics, 0, 0);
}


void AnimationCompositePaintable_paintThreed(AnimationCompositePaintable* this, Graphics* graphics) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

