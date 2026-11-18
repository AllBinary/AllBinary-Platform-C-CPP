// Generated Code Do Not Modify
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"

















void IndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndexedAnimation", "Animation");
    java_register_method("IndexedAnimation", "getAnimationBehavior", (void*) IndexedAnimation_getAnimationBehavior);
    java_register_method("IndexedAnimation", "reset", (void*) IndexedAnimation_reset);
    java_register_method("IndexedAnimation", "setFrame", (void*) IndexedAnimation_setFrame);
    java_register_method("IndexedAnimation", "getFrame", (void*) IndexedAnimation_getFrame);
    java_register_method("IndexedAnimation", "getAnimationSize", (void*) IndexedAnimation_getAnimationSize);
    java_register_method("IndexedAnimation", "getSize", (void*) IndexedAnimation_getSize);
    java_register_method("IndexedAnimation", "previousFrame", (void*) IndexedAnimation_previousFrame);
    java_register_method("IndexedAnimation", "isLastFrame", (void*) IndexedAnimation_isLastFrame);
    java_register_method("IndexedAnimation", "setSequence", (void*) IndexedAnimation_setSequence);
    java_register_method("IndexedAnimation", "getSequence", (void*) IndexedAnimation_getSequence);
    java_register_method("IndexedAnimation", "setState", (void*) IndexedAnimation_setState);
    java_register_method("IndexedAnimation", "getWidth", (void*) IndexedAnimation_getWidth);
    java_register_method("IndexedAnimation", "getHeight", (void*) IndexedAnimation_getHeight);
}

static void IndexedAnimation_initFields(IndexedAnimation* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void IndexedAnimation_init(IndexedAnimation* this, AnimationBehavior* animationBehavior) {
    IndexedAnimation_register();
    Animation_init(&this->base);
    IndexedAnimation_initFields(this);
        this->animationBehaviorP = animationBehavior;
}

IndexedAnimation* IndexedAnimation_new(AnimationBehavior* animationBehavior) {
    IndexedAnimation* this = java_object_alloc(sizeof(IndexedAnimation), "IndexedAnimation");
    IndexedAnimation_init(this, animationBehavior);
    return this;
}


AnimationBehavior* IndexedAnimation_getAnimationBehavior(IndexedAnimation* this) {
        return this->animationBehaviorP;
}


void IndexedAnimation_reset(IndexedAnimation* this) {
        AnimationBehavior_reset(this->animationBehaviorP);
        IndexedAnimation_setFrame(this, 0);
}


void IndexedAnimation_setFrame(IndexedAnimation* this, int32_t index) {
}


int32_t IndexedAnimation_getFrame(IndexedAnimation* this) {
        return 0;
}


// throws Exception
int32_t IndexedAnimation_getAnimationSize(IndexedAnimation* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


int32_t IndexedAnimation_getSize(IndexedAnimation* this) {
        return 0;
}


void IndexedAnimation_previousFrame(IndexedAnimation* this) {
}


bool IndexedAnimation_isLastFrame(IndexedAnimation* this) {
        if (IndexedAnimation_getFrame(this) == IndexedAnimation_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


void IndexedAnimation_setSequence(IndexedAnimation* this, int32_t* sequence) {
}


int32_t* IndexedAnimation_getSequence(IndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void IndexedAnimation_setState(IndexedAnimation* this, IndexedAnimation* indexedAnimation) {
        IndexedAnimation_setFrame(this, IndexedAnimation_getFrame(indexedAnimation));
        Animation_setDx(this, Animation_getDx(indexedAnimation));
        Animation_setDy(this, Animation_getDy(indexedAnimation));
}


int32_t IndexedAnimation_getWidth(IndexedAnimation* this) {
        return 0;
}


int32_t IndexedAnimation_getHeight(IndexedAnimation* this) {
        return 0;
}

