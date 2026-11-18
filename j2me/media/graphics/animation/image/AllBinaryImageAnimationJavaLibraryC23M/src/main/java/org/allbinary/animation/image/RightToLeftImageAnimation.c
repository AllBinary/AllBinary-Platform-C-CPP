// Generated Code Do Not Modify
#include "org/allbinary/animation/image/RightToLeftImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"







static void RightToLeftImageAnimation_update(RightToLeftImageAnimation* this);


void RightToLeftImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RightToLeftImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RightToLeftImageAnimation", "ImageSegmentAnimation");
    java_register_method("RightToLeftImageAnimation", "nextFrame", (void*) RightToLeftImageAnimation_nextFrame);
    java_register_method("RightToLeftImageAnimation", "previousFrame", (void*) RightToLeftImageAnimation_previousFrame);
    java_register_method("RightToLeftImageAnimation", "setFrame", (void*) RightToLeftImageAnimation_setFrame);
    java_register_method("RightToLeftImageAnimation", "update", (void*) RightToLeftImageAnimation_update);
    java_register_method("RightToLeftImageAnimation", "paintXY", (void*) RightToLeftImageAnimation_paintXY);
}

static void RightToLeftImageAnimation_initFields(RightToLeftImageAnimation* this) {
    this->startWidth = 0;
    this->currentWidth = 0;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void RightToLeftImageAnimation_init(RightToLeftImageAnimation* this, Image* image, AnimationBehavior* animationBehavior) {
    RightToLeftImageAnimation_register();
        ImageSegmentAnimation_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), animationBehavior);
        RightToLeftImageAnimation_initFields(this);
        RightToLeftImageAnimation_setFrame(this, ImageSegmentAnimation_getSize(this) - 1);
}

RightToLeftImageAnimation* RightToLeftImageAnimation_new(Image* image, AnimationBehavior* animationBehavior) {
    RightToLeftImageAnimation* this = java_object_alloc(sizeof(RightToLeftImageAnimation), "RightToLeftImageAnimation");
    RightToLeftImageAnimation_init(this, image, animationBehavior);
    return this;
}


void RightToLeftImageAnimation_nextFrame(RightToLeftImageAnimation* this) {
        ImageSegmentAnimation_previousFrame((&this->base));
        RightToLeftImageAnimation_update(this);
}


void RightToLeftImageAnimation_previousFrame(RightToLeftImageAnimation* this) {
        ImageSegmentAnimation_nextFrame((&this->base));
        RightToLeftImageAnimation_update(this);
}


void RightToLeftImageAnimation_setFrame(RightToLeftImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        RightToLeftImageAnimation_update(this);
}


static void RightToLeftImageAnimation_update(RightToLeftImageAnimation* this) {
        this->startWidth = ImageSegmentAnimation_getDrawWidth(this) * ImageSegmentAnimation_getFrame(this) / ImageSegmentAnimation_getSize(this);
        this->currentWidth = ImageSegmentAnimation_getDrawWidth(this) - this->startWidth;
}


void RightToLeftImageAnimation_paintXY(RightToLeftImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, ImageAnimation_getImage(this), this->startWidth, ImageSegmentAnimation_getStartY(this), this->currentWidth, ImageSegmentAnimation_getDrawHeight(this), (Sprite_staticInit(), Sprite_TRANS_NONE), x + this->startWidth, y, this->anchor);
}

