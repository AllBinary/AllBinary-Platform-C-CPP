// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#if __has_include("org/allbinary/animation/image/sprite/AngleIncrementInfo.h")
#include "org/allbinary/animation/image/sprite/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/game/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/game/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/math/AngleIncrementInfo.h")
#include "org/allbinary/logic/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif















void HackRotationSpriteIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HackRotationSpriteIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HackRotationSpriteIndexedAnimation", "RotationAnimation");
    java_register_method("HackRotationSpriteIndexedAnimation", "getAnimationSize", (void*) HackRotationSpriteIndexedAnimation_getAnimationSize);
    java_register_method("HackRotationSpriteIndexedAnimation", "paintFrame", (void*) HackRotationSpriteIndexedAnimation_paintFrame);
    java_register_method("HackRotationSpriteIndexedAnimation", "paintXY", (void*) HackRotationSpriteIndexedAnimation_paintXY);
    java_register_method("HackRotationSpriteIndexedAnimation", "paint", (void*) HackRotationSpriteIndexedAnimation_paint);
    java_register_method("HackRotationSpriteIndexedAnimation", "nextRotation", (void*) HackRotationSpriteIndexedAnimation_nextRotation);
    java_register_method("HackRotationSpriteIndexedAnimation", "previousRotation", (void*) HackRotationSpriteIndexedAnimation_previousRotation);
    java_register_method("HackRotationSpriteIndexedAnimation", "getSize", (void*) HackRotationSpriteIndexedAnimation_getSize);
    java_register_method("HackRotationSpriteIndexedAnimation", "setFrame", (void*) HackRotationSpriteIndexedAnimation_setFrame);
    java_register_method("HackRotationSpriteIndexedAnimation", "getFrame", (void*) HackRotationSpriteIndexedAnimation_getFrame);
    java_register_method("HackRotationSpriteIndexedAnimation", "setSequence", (void*) HackRotationSpriteIndexedAnimation_setSequence);
    java_register_method("HackRotationSpriteIndexedAnimation", "getSequence", (void*) HackRotationSpriteIndexedAnimation_getSequence);
}

static void HackRotationSpriteIndexedAnimation_initFields(HackRotationSpriteIndexedAnimation* this) {
    
    
}


void HackRotationSpriteIndexedAnimation_init(HackRotationSpriteIndexedAnimation* this, Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    HackRotationSpriteIndexedAnimation_register();
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(angleInfo)))), animationBehavior);
        HackRotationSpriteIndexedAnimation_initFields(this);
        this->sprite = sprite;
        this->image = image;
}

HackRotationSpriteIndexedAnimation* HackRotationSpriteIndexedAnimation_new(Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) {
    HackRotationSpriteIndexedAnimation* this = java_object_alloc(sizeof(HackRotationSpriteIndexedAnimation), "HackRotationSpriteIndexedAnimation");
    HackRotationSpriteIndexedAnimation_init(this, sprite, image, angleInfo, animationBehavior);
    return this;
}


// throws Exception
int32_t HackRotationSpriteIndexedAnimation_getAnimationSize(HackRotationSpriteIndexedAnimation* this) {
        return HackRotationSpriteIndexedAnimation_getSize(this);
}


void HackRotationSpriteIndexedAnimation_paintFrame(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t frame, int32_t x, int32_t y) {
        HackRotationSpriteIndexedAnimation_setFrame(this, frame);
        HackRotationSpriteIndexedAnimation_paintXY(this, g, x, y);
}


void HackRotationSpriteIndexedAnimation_paintXY(HackRotationSpriteIndexedAnimation* this, Graphics* g, int32_t x, int32_t y) {
        Layer_setPosition(this->sprite, x, y);
        HackRotationSpriteIndexedAnimation_paint(this, g);
}


void HackRotationSpriteIndexedAnimation_paint(HackRotationSpriteIndexedAnimation* this, Graphics* g) {
        Sprite_paint(this->sprite, g);
}


void HackRotationSpriteIndexedAnimation_nextRotation(HackRotationSpriteIndexedAnimation* this) {
        Sprite_nextFrame(this->sprite);
}


void HackRotationSpriteIndexedAnimation_previousRotation(HackRotationSpriteIndexedAnimation* this) {
        Sprite_prevFrame(this->sprite);
}


int32_t HackRotationSpriteIndexedAnimation_getSize(HackRotationSpriteIndexedAnimation* this) {
        return Sprite_getRawFrameCount(this->sprite);
}


void HackRotationSpriteIndexedAnimation_setFrame(HackRotationSpriteIndexedAnimation* this, int32_t frame) {
        Sprite_setFrame(this->sprite, frame);
}


int32_t HackRotationSpriteIndexedAnimation_getFrame(HackRotationSpriteIndexedAnimation* this) {
        return Sprite_getFrame(this->sprite);
}


void HackRotationSpriteIndexedAnimation_setSequence(HackRotationSpriteIndexedAnimation* this, int32_t* sequence) {
}


int32_t* HackRotationSpriteIndexedAnimation_getSequence(HackRotationSpriteIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}

