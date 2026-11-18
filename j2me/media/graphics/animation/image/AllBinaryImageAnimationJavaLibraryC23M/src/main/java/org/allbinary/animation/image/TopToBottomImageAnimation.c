// Generated Code Do Not Modify
#include "org/allbinary/animation/image/TopToBottomImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/animation/image/ImageSegmentAnimation.h"







static void TopToBottomImageAnimation_update(TopToBottomImageAnimation* this);


void TopToBottomImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TopToBottomImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TopToBottomImageAnimation", "ImageSegmentAnimation");
    java_register_method("TopToBottomImageAnimation", "nextFrame", (void*) TopToBottomImageAnimation_nextFrame);
    java_register_method("TopToBottomImageAnimation", "previousFrame", (void*) TopToBottomImageAnimation_previousFrame);
    java_register_method("TopToBottomImageAnimation", "setFrame", (void*) TopToBottomImageAnimation_setFrame);
    java_register_method("TopToBottomImageAnimation", "update", (void*) TopToBottomImageAnimation_update);
    java_register_method("TopToBottomImageAnimation", "paintXY", (void*) TopToBottomImageAnimation_paintXY);
}

static void TopToBottomImageAnimation_initFields(TopToBottomImageAnimation* this) {
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void TopToBottomImageAnimation_init(TopToBottomImageAnimation* this, Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    TopToBottomImageAnimation_register();
        ImageSegmentAnimation_init(&this->base, image, sequenceArray, animationBehavior);
        TopToBottomImageAnimation_initFields(this);
        this->currentHeight = 0;
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            TopToBottomImageAnimation_setFrame(this, ImageSegmentAnimation_getSize(this) - 1);
        }
}

TopToBottomImageAnimation* TopToBottomImageAnimation_new(Image* image, int32_t* sequenceArray, AnimationBehavior* animationBehavior) {
    TopToBottomImageAnimation* this = java_object_alloc(sizeof(TopToBottomImageAnimation), "TopToBottomImageAnimation");
    TopToBottomImageAnimation_init(this, image, sequenceArray, animationBehavior);
    return this;
}


void TopToBottomImageAnimation_nextFrame(TopToBottomImageAnimation* this) {
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_previousFrame((&this->base));
        } else {
            ImageSegmentAnimation_nextFrame((&this->base));
        }
        TopToBottomImageAnimation_update(this);
}


void TopToBottomImageAnimation_previousFrame(TopToBottomImageAnimation* this) {
        if (ImageSegmentAnimation_getSequence(this)[0] == -1) {
            ImageSegmentAnimation_nextFrame((&this->base));
        } else {
            ImageSegmentAnimation_previousFrame((&this->base));
        }
        TopToBottomImageAnimation_update(this);
}


void TopToBottomImageAnimation_setFrame(TopToBottomImageAnimation* this, int32_t index) {
        ImageSegmentAnimation_setFrame((&this->base), index);
        TopToBottomImageAnimation_update(this);
}


static void TopToBottomImageAnimation_update(TopToBottomImageAnimation* this) {
        this->currentHeight = ImageSegmentAnimation_getDrawHeight(this) * ImageSegmentAnimation_getFrame(this) / ImageSegmentAnimation_getSize(this);
}


void TopToBottomImageAnimation_paintXY(TopToBottomImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Graphics_drawRegion(graphics, ImageAnimation_getImage(this), ImageSegmentAnimation_getStartX(this), ImageSegmentAnimation_getStartY(this), ImageSegmentAnimation_getDrawWidth(this), this->currentHeight, (Sprite_staticInit(), Sprite_TRANS_NONE), x, y, this->anchor);
}

