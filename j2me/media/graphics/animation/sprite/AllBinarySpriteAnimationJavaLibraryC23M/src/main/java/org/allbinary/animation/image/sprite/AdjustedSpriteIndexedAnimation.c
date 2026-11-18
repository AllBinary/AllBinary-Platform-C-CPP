// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/AdjustedSpriteIndexedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"







void AdjustedSpriteIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedSpriteIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedSpriteIndexedAnimation", "SpriteIndexedAnimation");
    java_register_method("AdjustedSpriteIndexedAnimation", "paintFrame", (void*) AdjustedSpriteIndexedAnimation_paintFrame);
    java_register_method("AdjustedSpriteIndexedAnimation", "paintXY", (void*) AdjustedSpriteIndexedAnimation_paintXY);
    java_register_method("AdjustedSpriteIndexedAnimation", "paint", (void*) AdjustedSpriteIndexedAnimation_paint);
}

static void AdjustedSpriteIndexedAnimation_initFields(AdjustedSpriteIndexedAnimation* this) {
    
    
}


void AdjustedSpriteIndexedAnimation_init(AdjustedSpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedSpriteIndexedAnimation_register();
        SpriteIndexedAnimation_init(&this->base, sprite, image, basicColorArray, animationBehavior);
        AdjustedSpriteIndexedAnimation_initFields(this);
        this->dx = dx;
        this->dy = dy;
}

AdjustedSpriteIndexedAnimation* AdjustedSpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedSpriteIndexedAnimation* this = java_object_alloc(sizeof(AdjustedSpriteIndexedAnimation), "AdjustedSpriteIndexedAnimation");
    AdjustedSpriteIndexedAnimation_init(this, sprite, image, basicColorArray, dx, dy, animationBehavior);
    return this;
}


void AdjustedSpriteIndexedAnimation_paintFrame(AdjustedSpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        SpriteIndexedAnimation_setFrame(this, frame);
        Layer_setPosition(this->base.sprite, x + this->dx, y + this->dy);
        SpriteIndexedAnimation_paint((&this->base), graphics);
}


void AdjustedSpriteIndexedAnimation_paintXY(AdjustedSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Layer_setPosition(this->base.sprite, x + this->dx, y + this->dy);
        SpriteIndexedAnimation_paint((&this->base), g);
}


void AdjustedSpriteIndexedAnimation_paint(AdjustedSpriteIndexedAnimation* this, Graphics* g) {
        Layer_setPosition(this->base.sprite, this->dx, this->dy);
        SpriteIndexedAnimation_paint((&this->base), g);
}

