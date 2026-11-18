// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif





















void SpriteIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpriteIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpriteIndexedAnimation", "IndexedAnimation");
    java_register_method("SpriteIndexedAnimation", "getAnimationSize", (void*) SpriteIndexedAnimation_getAnimationSize);
    java_register_method("SpriteIndexedAnimation", "setBasicColorP", (void*) SpriteIndexedAnimation_setBasicColorP);
    java_register_method("SpriteIndexedAnimation", "getBasicColorP", (void*) SpriteIndexedAnimation_getBasicColorP);
    java_register_method("SpriteIndexedAnimation", "paintFrame", (void*) SpriteIndexedAnimation_paintFrame);
    java_register_method("SpriteIndexedAnimation", "paintXY", (void*) SpriteIndexedAnimation_paintXY);
    java_register_method("SpriteIndexedAnimation", "paint", (void*) SpriteIndexedAnimation_paint);
    java_register_method("SpriteIndexedAnimation", "nextFrame", (void*) SpriteIndexedAnimation_nextFrame);
    java_register_method("SpriteIndexedAnimation", "previousFrame", (void*) SpriteIndexedAnimation_previousFrame);
    java_register_method("SpriteIndexedAnimation", "getSize", (void*) SpriteIndexedAnimation_getSize);
    java_register_method("SpriteIndexedAnimation", "setFrame", (void*) SpriteIndexedAnimation_setFrame);
    java_register_method("SpriteIndexedAnimation", "getFrame", (void*) SpriteIndexedAnimation_getFrame);
    java_register_method("SpriteIndexedAnimation", "isLastFrame", (void*) SpriteIndexedAnimation_isLastFrame);
    java_register_method("SpriteIndexedAnimation", "getLastFrame", (void*) SpriteIndexedAnimation_getLastFrame);
    java_register_method("SpriteIndexedAnimation", "setSequence", (void*) SpriteIndexedAnimation_setSequence);
    java_register_method("SpriteIndexedAnimation", "getSequence", (void*) SpriteIndexedAnimation_getSequence);
    java_register_method("SpriteIndexedAnimation", "close", (void*) SpriteIndexedAnimation_close);
    java_register_method("SpriteIndexedAnimation", "finalize", (void*) SpriteIndexedAnimation_finalize);
}

static void SpriteIndexedAnimation_initFields(SpriteIndexedAnimation* this) {
    
    
    
}


void SpriteIndexedAnimation_init(SpriteIndexedAnimation* this, Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior) {
    SpriteIndexedAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        SpriteIndexedAnimation_initFields(this);
        this->sprite = sprite;
        this->image = image;
        this->basicColorArray = basicColorArray;
        if (java_array_length(this->basicColorArray) != 0 && SpriteIndexedAnimation_getSize(this) != java_array_length(this->basicColorArray)) {
            java_throw(java_exception_new("Exception", java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->TOTAL_LABEL), SpriteIndexedAnimation_getSize(this)), "!="), java_array_length(this->basicColorArray)))));
        }
}

SpriteIndexedAnimation* SpriteIndexedAnimation_new(Sprite* sprite, Image* image, BasicColor** basicColorArray, AnimationBehavior* animationBehavior) {
    SpriteIndexedAnimation* this = java_object_alloc(sizeof(SpriteIndexedAnimation), "SpriteIndexedAnimation");
    SpriteIndexedAnimation_init(this, sprite, image, basicColorArray, animationBehavior);
    return this;
}


// throws Exception
int32_t SpriteIndexedAnimation_getAnimationSize(SpriteIndexedAnimation* this) {
        return SpriteIndexedAnimation_getSize(this);
}


void SpriteIndexedAnimation_setBasicColorP(SpriteIndexedAnimation* this, BasicColor* basicColor) {
        for (int32_t index = 0; index < java_array_length(this->basicColorArray); index++) {
            if (basicColor == this->basicColorArray[index]) {
                SpriteIndexedAnimation_setFrame(this, index);
                break;
            }
        }
}


BasicColor* SpriteIndexedAnimation_getBasicColorP(SpriteIndexedAnimation* this) {
        if (java_array_length(this->basicColorArray) < SpriteIndexedAnimation_getFrame(this)) {
            return this->basicColorArray[SpriteIndexedAnimation_getFrame(this)];
        } else {
            return BasicColorFactory_getInstance()->WHITE;
        }
}


void SpriteIndexedAnimation_paintFrame(SpriteIndexedAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        SpriteIndexedAnimation_setFrame(this, frame);
        Layer_setPosition(this->sprite, x, y);
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_paintXY(SpriteIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Layer_setPosition(this->sprite, x, y);
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_paint(SpriteIndexedAnimation* this, Graphics* graphics) {
        Sprite_paint(this->sprite, graphics);
}


void SpriteIndexedAnimation_nextFrame(SpriteIndexedAnimation* this) {
        Sprite_nextFrame(this->sprite);
}


void SpriteIndexedAnimation_previousFrame(SpriteIndexedAnimation* this) {
        Sprite_prevFrame(this->sprite);
}


int32_t SpriteIndexedAnimation_getSize(SpriteIndexedAnimation* this) {
        return Sprite_getRawFrameCount(this->sprite);
}


void SpriteIndexedAnimation_setFrame(SpriteIndexedAnimation* this, int32_t frame) {
        Sprite_setFrame(this->sprite, frame);
}


int32_t SpriteIndexedAnimation_getFrame(SpriteIndexedAnimation* this) {
        return Sprite_getFrame(this->sprite);
}


bool SpriteIndexedAnimation_isLastFrame(SpriteIndexedAnimation* this) {
        if (Sprite_getFrame(this->sprite) == SpriteIndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


int32_t SpriteIndexedAnimation_getLastFrame(SpriteIndexedAnimation* this) {
        return SpriteIndexedAnimation_getSize(this);
}


void SpriteIndexedAnimation_setSequence(SpriteIndexedAnimation* this, int32_t* sequence) {
}


int32_t* SpriteIndexedAnimation_getSequence(SpriteIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void SpriteIndexedAnimation_close(SpriteIndexedAnimation* this) {
}


// throws Throwable
void SpriteIndexedAnimation_finalize(SpriteIndexedAnimation* this) {
}

