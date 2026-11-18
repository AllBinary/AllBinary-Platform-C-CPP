// Generated Code Do Not Modify
#include "org/allbinary/animation/image/TweenedImageAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/DisposalUtil.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif
#if __has_include("org/allbinary/DisposalUtil.h")
#include "org/allbinary/DisposalUtil.h"
#endif















void TweenedImageAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TweenedImageAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TweenedImageAnimation", "IndexedAnimation");
    java_register_method("TweenedImageAnimation", "getAnimationSize", (void*) TweenedImageAnimation_getAnimationSize);
    java_register_method("TweenedImageAnimation", "nextFrame", (void*) TweenedImageAnimation_nextFrame);
    java_register_method("TweenedImageAnimation", "previousFrame", (void*) TweenedImageAnimation_previousFrame);
    java_register_method("TweenedImageAnimation", "setFrame", (void*) TweenedImageAnimation_setFrame);
    java_register_method("TweenedImageAnimation", "getFrame", (void*) TweenedImageAnimation_getFrame);
    java_register_method("TweenedImageAnimation", "getSize", (void*) TweenedImageAnimation_getSize);
    java_register_method("TweenedImageAnimation", "setSequence", (void*) TweenedImageAnimation_setSequence);
    java_register_method("TweenedImageAnimation", "getSequence", (void*) TweenedImageAnimation_getSequence);
    java_register_method("TweenedImageAnimation", "paintXY", (void*) TweenedImageAnimation_paintXY);
    java_register_method("TweenedImageAnimation", "close", (void*) TweenedImageAnimation_close);
    java_register_method("TweenedImageAnimation", "finalize", (void*) TweenedImageAnimation_finalize);
}

static void TweenedImageAnimation_initFields(TweenedImageAnimation* this) {
    
    
    
    
    
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void TweenedImageAnimation_init(TweenedImageAnimation* this, Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior) {
    TweenedImageAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        TweenedImageAnimation_initFields(this);
        this->image = image;
        this->dx = dx;
        this->dy = dy;
        this->totalFrames = totalFrames;
        this->circularIndexUtil = CircularIndexUtil_createInstance(this->totalFrames);
}

TweenedImageAnimation* TweenedImageAnimation_new(Image* image, int32_t dx, int32_t dy, int32_t totalFrames, AnimationBehavior* animationBehavior) {
    TweenedImageAnimation* this = java_object_alloc(sizeof(TweenedImageAnimation), "TweenedImageAnimation");
    TweenedImageAnimation_init(this, image, dx, dy, totalFrames, animationBehavior);
    return this;
}


// throws Exception
int32_t TweenedImageAnimation_getAnimationSize(TweenedImageAnimation* this) {
        return TweenedImageAnimation_getSize(this);
}


void TweenedImageAnimation_nextFrame(TweenedImageAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void TweenedImageAnimation_previousFrame(TweenedImageAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void TweenedImageAnimation_setFrame(TweenedImageAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t TweenedImageAnimation_getFrame(TweenedImageAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t TweenedImageAnimation_getSize(TweenedImageAnimation* this) {
        return this->totalFrames;
}


void TweenedImageAnimation_setSequence(TweenedImageAnimation* this, int32_t* sequence) {
}


int32_t* TweenedImageAnimation_getSequence(TweenedImageAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void TweenedImageAnimation_paintXY(TweenedImageAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t frame = TweenedImageAnimation_getFrame(this);
        int32_t currentX = this->dx * frame;
        int32_t currentY = this->dy * frame;
        Graphics_drawImage(graphics, this->image, x + currentX, y + currentY, this->anchor);
}


// throws Exception
void TweenedImageAnimation_close(TweenedImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}


// throws Throwable
void TweenedImageAnimation_finalize(TweenedImageAnimation* this) {
        DisposalUtil_disposeImage(DisposalUtil_getInstance(), this->image);
}

