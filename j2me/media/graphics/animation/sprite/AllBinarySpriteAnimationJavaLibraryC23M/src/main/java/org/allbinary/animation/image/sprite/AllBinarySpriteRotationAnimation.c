// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/AllBinarySpriteRotationAnimation.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/sprite/HackRotationSpriteIndexedAnimation.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/animation/image/sprite/AngleIncrementInfo.h")
#include "org/allbinary/animation/image/sprite/AngleIncrementInfo.h"
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
#if __has_include("org/allbinary/direction/AngleIncrementInfo.h")
#include "org/allbinary/direction/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif











void AllBinarySpriteRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinarySpriteRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinarySpriteRotationAnimation", "HackRotationSpriteIndexedAnimation");
    java_register_method("AllBinarySpriteRotationAnimation", "nextRotation", (void*) AllBinarySpriteRotationAnimation_nextRotation);
    java_register_method("AllBinarySpriteRotationAnimation", "previousRotation", (void*) AllBinarySpriteRotationAnimation_previousRotation);
    java_register_method("AllBinarySpriteRotationAnimation", "setFrameByDirection", (void*) AllBinarySpriteRotationAnimation_setFrameByDirection);
    java_register_method("AllBinarySpriteRotationAnimation", "setFrameToAngle", (void*) AllBinarySpriteRotationAnimation_setFrameToAngle);
    java_register_method("AllBinarySpriteRotationAnimation", "setFrame", (void*) AllBinarySpriteRotationAnimation_setFrame);
    java_register_method("AllBinarySpriteRotationAnimation", "adjustFrameToAngle", (void*) AllBinarySpriteRotationAnimation_adjustFrameToAngle);
    java_register_method("AllBinarySpriteRotationAnimation", "adjustFrame", (void*) AllBinarySpriteRotationAnimation_adjustFrame);
}


void AllBinarySpriteRotationAnimation_init(AllBinarySpriteRotationAnimation* this, Sprite* sprite, Image* image, AnimationBehavior* animationBehavior) {
    AllBinarySpriteRotationAnimation_register();
        HackRotationSpriteIndexedAnimation_init(&this->base, sprite, image, AngleInfo_getInstance(((int16_t) (((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE) / Sprite_getRawFrameCount(sprite)))), animationBehavior);
        AngleInfo_adjustAngle(this->base.base.angleInfo, Sprite_getFrame(this->base.sprite));
}

AllBinarySpriteRotationAnimation* AllBinarySpriteRotationAnimation_new(Sprite* sprite, Image* image, AnimationBehavior* animationBehavior) {
    AllBinarySpriteRotationAnimation* this = java_object_alloc(sizeof(AllBinarySpriteRotationAnimation), "AllBinarySpriteRotationAnimation");
    AllBinarySpriteRotationAnimation_init(this, sprite, image, animationBehavior);
    return this;
}


void AllBinarySpriteRotationAnimation_nextRotation(AllBinarySpriteRotationAnimation* this) {
        Sprite_nextFrame(this->base.sprite);
        AngleInfo_adjustAngle(this->base.base.angleInfo, Sprite_getFrame(this->base.sprite));
}


void AllBinarySpriteRotationAnimation_previousRotation(AllBinarySpriteRotationAnimation* this) {
        Sprite_prevFrame(this->base.sprite);
        AngleInfo_adjustAngle(this->base.base.angleInfo, Sprite_getFrame(this->base.sprite));
}


void AllBinarySpriteRotationAnimation_setFrameByDirection(AllBinarySpriteRotationAnimation* this, Direction* direction) {
        Angle* angle = DirectionUtil_getFrameAngle(this->base.base.directionUtil, direction);
        AllBinarySpriteRotationAnimation_adjustFrameToAngle(this, angle);
}


void AllBinarySpriteRotationAnimation_setFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle) {
        AllBinarySpriteRotationAnimation_adjustFrameToAngle(this, angle);
}


void AllBinarySpriteRotationAnimation_setFrame(AllBinarySpriteRotationAnimation* this, int32_t index) {
        Sprite_setFrame(this->base.sprite, index);
        AngleInfo_adjustAngle(this->base.base.angleInfo, HackRotationSpriteIndexedAnimation_getFrame(this));
}


void AllBinarySpriteRotationAnimation_adjustFrameToAngle(AllBinarySpriteRotationAnimation* this, Angle* angle) {
        AllBinarySpriteRotationAnimation_adjustFrame(this, Angle_getValue(angle));
}


void AllBinarySpriteRotationAnimation_adjustFrame(AllBinarySpriteRotationAnimation* this, int16_t angle) {
        AllBinarySpriteRotationAnimation_setFrame(this, FrameUtil_getFrameForAngle(this->base.base.frameUtil, angle, ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(this->base.base.angleInfo)))));
}

