// Generated Code Do Not Modify
#include "org/allbinary/animation/image/BottomToTopImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"







static void BottomToTopImageAnimation_update(BottomToTopImageAnimation* this);


void BottomToTopImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BottomToTopImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BottomToTopImageAnimation", "ImageSegmentAnimation");
    java_register_method("BottomToTopImageAnimation", "nextFrame", (void*) BottomToTopImageAnimation_nextFrame);
    java_register_method("BottomToTopImageAnimation", "previousFrame", (void*) BottomToTopImageAnimation_previousFrame);
    java_register_method("BottomToTopImageAnimation", "setFrame", (void*) BottomToTopImageAnimation_setFrame);
    java_register_method("BottomToTopImageAnimation", "update", (void*) BottomToTopImageAnimation_update);
    java_register_method("BottomToTopImageAnimation", "paintXY", (void*) BottomToTopImageAnimation_paintXY);
}

static void BottomToTopImageAnimation_initFields(BottomToTopImageAnimation* this) {
    this->startHeight = 0;
    this->currentHeight = 0;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void BottomToTopImageAnimation_init(BottomToTopImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
    BottomToTopImageAnimation_register();
        ImageSegmentAnimation_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), animationBehavior);
        BottomToTopImageAnimation_initFields(this);
        BottomToTopImageAnimation_setFrame(this, ImageSegmentAnimation_getSize(this) - 1);
}

BottomToTopImageAnimation* BottomToTopImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    BottomToTopImageAnimation* this = java_object_alloc(sizeof(BottomToTopImageAnimation), "BottomToTopImageAnimation");
    BottomToTopImageAnimation_init(this, image, animationBehavior);
    return this;
}


void BottomToTopImageAnimation_nextFrame(BottomToTopImageAnimation* this) {
        ImageSegmentAnimation_previousFrame((&this->base));
        BottomToTopImageAnimation_update(this);
}


void BottomToTopImageAnimation_previousFrame(BottomToTopImageAnimation* this) {
        ImageSegmentAnimation_nextFrame((&this->base));
        BottomToTopImageAnimation_update(this);
}


void BottomToTopImageAnimation_setFrame(BottomToTopImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        BottomToTopImageAnimation_update(this);
}


static void BottomToTopImageAnimation_update(BottomToTopImageAnimation* this) {
        this->startHeight = ImageSegmentAnimation_getDrawHeight(this) * ImageSegmentAnimation_getFrame(this) / ImageSegmentAnimation_getSize(this);
        this->currentHeight = ImageSegmentAnimation_getDrawHeight(this) - this->startHeight;
}


void BottomToTopImageAnimation_paintXY(BottomToTopImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, ImageAnimation_getImage(this), ImageSegmentAnimation_getStartX(this), this->startHeight, ImageSegmentAnimation_getDrawWidth(this), this->currentHeight, (Sprite_staticInit(), Sprite_TRANS_NONE), x, y + this->startHeight, this->anchor);
}

