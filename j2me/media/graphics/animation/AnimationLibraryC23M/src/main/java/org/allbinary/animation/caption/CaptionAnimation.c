// Generated Code Do Not Modify
#include "org/allbinary/animation/caption/CaptionAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"







void CaptionAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CaptionAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CaptionAnimation", "Animation");
    java_register_method("CaptionAnimation", "nextFrame", (void*) CaptionAnimation_nextFrame);
    java_register_method("CaptionAnimation", "paintXY", (void*) CaptionAnimation_paintXY);
    java_register_method("CaptionAnimation", "paintThreedXYZ", (void*) CaptionAnimation_paintThreedXYZ);
}

static void CaptionAnimation_initFields(CaptionAnimation* this) {
    
    
    
    
    
    
}


void CaptionAnimation_init(CaptionAnimation* this, Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimation_register();
    Animation_init(&this->base);
    CaptionAnimation_initFields(this);
        this->animationInterface = animationInterface;
        this->overlayAnimationInterface = overlayAnimationInterface;
        this->captionDx = captionDx;
        this->captionDy = captionDy;
        this->dx = dx;
        this->dy = dy;
}

CaptionAnimation* CaptionAnimation_new(Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimation* this = java_object_alloc(sizeof(CaptionAnimation), "CaptionAnimation");
    CaptionAnimation_init(this, animationInterface, overlayAnimationInterface, captionDx, captionDy, dx, dy);
    return this;
}


// throws Exception
void CaptionAnimation_nextFrame(CaptionAnimation* this) {
}


void CaptionAnimation_paintXY(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy);
        Animation_paintXY(this->overlayAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy);
}


void CaptionAnimation_paintThreedXYZ(CaptionAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy, z);
        Animation_paintThreedXYZ(this->overlayAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy, z);
}

