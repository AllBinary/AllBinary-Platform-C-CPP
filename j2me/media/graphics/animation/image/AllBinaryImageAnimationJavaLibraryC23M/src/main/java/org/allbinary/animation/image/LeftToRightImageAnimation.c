// Generated Code Do Not Modify
#include "org/allbinary/animation/image/LeftToRightImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"







static void LeftToRightImageAnimation_update(LeftToRightImageAnimation* this);


void LeftToRightImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LeftToRightImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LeftToRightImageAnimation", "ImageSegmentAnimation");
    java_register_method("LeftToRightImageAnimation", "nextFrame", (void*) LeftToRightImageAnimation_nextFrame);
    java_register_method("LeftToRightImageAnimation", "previousFrame", (void*) LeftToRightImageAnimation_previousFrame);
    java_register_method("LeftToRightImageAnimation", "setFrame", (void*) LeftToRightImageAnimation_setFrame);
    java_register_method("LeftToRightImageAnimation", "update", (void*) LeftToRightImageAnimation_update);
    java_register_method("LeftToRightImageAnimation", "paintXY", (void*) LeftToRightImageAnimation_paintXY);
}

static void LeftToRightImageAnimation_initFields(LeftToRightImageAnimation* this) {
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void LeftToRightImageAnimation_init(LeftToRightImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    LeftToRightImageAnimation_register();
        ImageSegmentAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        LeftToRightImageAnimation_initFields(this);
        this->currentWidth = 0;
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            LeftToRightImageAnimation_setFrame(this, ImageSegmentAnimation_getSize(this) - 1);
        }
}

LeftToRightImageAnimation* LeftToRightImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    LeftToRightImageAnimation* this = java_object_alloc(sizeof(LeftToRightImageAnimation), "LeftToRightImageAnimation");
    LeftToRightImageAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void LeftToRightImageAnimation_nextFrame(LeftToRightImageAnimation* this) {
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_previousFrame((&this->base));
        } else {
            ImageSegmentAnimation_nextFrame((&this->base));
        }
        LeftToRightImageAnimation_update(this);
}


void LeftToRightImageAnimation_previousFrame(LeftToRightImageAnimation* this) {
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_nextFrame((&this->base));
        } else {
            ImageSegmentAnimation_previousFrame((&this->base));
        }
        LeftToRightImageAnimation_update(this);
}


void LeftToRightImageAnimation_setFrame(LeftToRightImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        LeftToRightImageAnimation_update(this);
}


static void LeftToRightImageAnimation_update(LeftToRightImageAnimation* this) {
        this->currentWidth = ImageSegmentAnimation_getDrawWidth(this) * ImageSegmentAnimation_getFrame(this) / ImageSegmentAnimation_getSize(this);
}


void LeftToRightImageAnimation_paintXY(LeftToRightImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, ImageAnimation_getImage(this), ImageSegmentAnimation_getStartX(this), ImageSegmentAnimation_getStartY(this), this->currentWidth, ImageSegmentAnimation_getDrawHeight(this), (Sprite_staticInit(), Sprite_TRANS_NONE), x, y, this->anchor);
}

