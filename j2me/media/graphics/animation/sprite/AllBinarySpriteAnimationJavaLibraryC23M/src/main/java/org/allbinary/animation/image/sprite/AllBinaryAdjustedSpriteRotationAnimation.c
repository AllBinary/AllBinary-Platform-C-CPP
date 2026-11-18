// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/AllBinaryAdjustedSpriteRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"





void AllBinaryAdjustedSpriteRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryAdjustedSpriteRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryAdjustedSpriteRotationAnimation", "AllBinarySpriteRotationAnimation");
    java_register_method("AllBinaryAdjustedSpriteRotationAnimation", "paintXY", (void*) AllBinaryAdjustedSpriteRotationAnimation_paintXY);
}

static void AllBinaryAdjustedSpriteRotationAnimation_initFields(AllBinaryAdjustedSpriteRotationAnimation* this) {
    
    
}


void AllBinaryAdjustedSpriteRotationAnimation_init(AllBinaryAdjustedSpriteRotationAnimation* this, Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedSpriteRotationAnimation_register();
        AllBinarySpriteRotationAnimation_init(&this->base, sprite, image, animationBehavior);
        AllBinaryAdjustedSpriteRotationAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AllBinaryAdjustedSpriteRotationAnimation* AllBinaryAdjustedSpriteRotationAnimation_new(Sprite* sprite, Image* image, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AllBinaryAdjustedSpriteRotationAnimation* this = java_object_alloc(sizeof(AllBinaryAdjustedSpriteRotationAnimation), "AllBinaryAdjustedSpriteRotationAnimation");
    AllBinaryAdjustedSpriteRotationAnimation_init(this, sprite, image, dx, dy, animationBehavior);
    return this;
}


void AllBinaryAdjustedSpriteRotationAnimation_paintXY(AllBinaryAdjustedSpriteRotationAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Layer_setPosition(this->base.base.sprite, x + this->dx, y + this->dy);
        HackRotationSpriteIndexedAnimation_paint(this, g);
}

