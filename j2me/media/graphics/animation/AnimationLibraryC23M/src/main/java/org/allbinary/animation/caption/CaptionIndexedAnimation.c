// Generated Code Do Not Modify
#include "org/allbinary/animation/caption/CaptionIndexedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/AnimationEventHandler.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#if __has_include("org/allbinary/animation/caption/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/caption/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/media/GameTickTimeDelayHelper.h")
#include "javax/microedition/media/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/math/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/math/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/util/event/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/util/event/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/AnimationEventHandler.h")
#include "org/allbinary/animation/AnimationEventHandler.h"
#endif














void CaptionIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CaptionIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CaptionIndexedAnimation", "IndexedAnimation");
    java_register_method("CaptionIndexedAnimation", "nextFrame", (void*) CaptionIndexedAnimation_nextFrame);
    java_register_method("CaptionIndexedAnimation", "isLastFrame", (void*) CaptionIndexedAnimation_isLastFrame);
    java_register_method("CaptionIndexedAnimation", "previousFrame", (void*) CaptionIndexedAnimation_previousFrame);
    java_register_method("CaptionIndexedAnimation", "setFrame", (void*) CaptionIndexedAnimation_setFrame);
    java_register_method("CaptionIndexedAnimation", "getFrame", (void*) CaptionIndexedAnimation_getFrame);
    java_register_method("CaptionIndexedAnimation", "getSize", (void*) CaptionIndexedAnimation_getSize);
    java_register_method("CaptionIndexedAnimation", "setSequence", (void*) CaptionIndexedAnimation_setSequence);
    java_register_method("CaptionIndexedAnimation", "getSequence", (void*) CaptionIndexedAnimation_getSequence);
    java_register_method("CaptionIndexedAnimation", "paintXY", (void*) CaptionIndexedAnimation_paintXY);
    java_register_method("CaptionIndexedAnimation", "paintThreedXYZ", (void*) CaptionIndexedAnimation_paintThreedXYZ);
}

static void CaptionIndexedAnimation_initFields(CaptionIndexedAnimation* this) {
    
    
    
    
    
    
    
    
    
    
}


void CaptionIndexedAnimation_init(CaptionIndexedAnimation* this, Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior) {
    CaptionIndexedAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        CaptionIndexedAnimation_initFields(this);
        this->animationInterface = animationInterface;
        this->movieIndexedAnimationInterface = movieIndexedAnimationInterface;
        this->captionDx = captionDx;
        this->captionDy = captionDy;
        this->dx = dx;
        this->dy = dy;
        this->time = time;
        this->END_EVENT = AllBinaryEventObject_new(this);
        int32_t timePerFrame = this->time / CaptionIndexedAnimation_getSize(this);
        this->timeDelayHelper = TimeDelayHelper_new(timePerFrame);
        this->player = player;
        Player_start(this->player);
}

CaptionIndexedAnimation* CaptionIndexedAnimation_new(Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior) {
    CaptionIndexedAnimation* this = java_object_alloc(sizeof(CaptionIndexedAnimation), "CaptionIndexedAnimation");
    CaptionIndexedAnimation_init(this, animationInterface, movieIndexedAnimationInterface, player, captionDx, captionDy, dx, dy, time, animationBehavior);
    return this;
}


// throws Exception
void CaptionIndexedAnimation_nextFrame(CaptionIndexedAnimation* this) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            Animation_nextFrame(this->movieIndexedAnimationInterface);
        }
        if (CaptionIndexedAnimation_isLastFrame(this)) {
            BasicEventHandler_fireEvent(AnimationEventHandler_getInstance(), this->END_EVENT);
        }
}


bool CaptionIndexedAnimation_isLastFrame(CaptionIndexedAnimation* this) {
        if (IndexedAnimation_getFrame(this->movieIndexedAnimationInterface) == CaptionIndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


void CaptionIndexedAnimation_previousFrame(CaptionIndexedAnimation* this) {
        IndexedAnimation_previousFrame(this->movieIndexedAnimationInterface);
}


void CaptionIndexedAnimation_setFrame(CaptionIndexedAnimation* this, int32_t index) {
        IndexedAnimation_setFrame(this->movieIndexedAnimationInterface, index);
}


int32_t CaptionIndexedAnimation_getFrame(CaptionIndexedAnimation* this) {
        return IndexedAnimation_getFrame(this->movieIndexedAnimationInterface);
}


int32_t CaptionIndexedAnimation_getSize(CaptionIndexedAnimation* this) {
        return IndexedAnimation_getSize(this->movieIndexedAnimationInterface);
}


void CaptionIndexedAnimation_setSequence(CaptionIndexedAnimation* this, int32_t* sequence) {
}


int32_t* CaptionIndexedAnimation_getSequence(CaptionIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void CaptionIndexedAnimation_paintXY(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy);
        Animation_paintXY(this->movieIndexedAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy);
}


void CaptionIndexedAnimation_paintThreedXYZ(CaptionIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterface, graphics, x + this->captionDx, y + this->captionDy, z);
        Animation_paintThreedXYZ(this->movieIndexedAnimationInterface, graphics, x + this->captionDx + this->dx, y + this->captionDy + this->dy, z);
}

