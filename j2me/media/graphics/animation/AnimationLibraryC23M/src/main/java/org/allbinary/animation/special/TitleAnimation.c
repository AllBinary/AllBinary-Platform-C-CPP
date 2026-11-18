// Generated Code Do Not Modify
#include "org/allbinary/animation/special/TitleAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif

















void TitleAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TitleAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TitleAnimation", "SpecialAnimation");
    java_register_method("TitleAnimation", "nextFrame", (void*) TitleAnimation_nextFrame);
    java_register_method("TitleAnimation", "isComplete", (void*) TitleAnimation_isComplete);
    java_register_method("TitleAnimation", "setSequence", (void*) TitleAnimation_setSequence);
    java_register_method("TitleAnimation", "getSequence", (void*) TitleAnimation_getSequence);
    java_register_method("TitleAnimation", "getSize", (void*) TitleAnimation_getSize);
    java_register_method("TitleAnimation", "getFrame", (void*) TitleAnimation_getFrame);
    java_register_method("TitleAnimation", "setFrame", (void*) TitleAnimation_setFrame);
    java_register_method("TitleAnimation", "setLastFrame", (void*) TitleAnimation_setLastFrame);
    java_register_method("TitleAnimation", "reset", (void*) TitleAnimation_reset);
    java_register_method("TitleAnimation", "previousFrame", (void*) TitleAnimation_previousFrame);
    java_register_method("TitleAnimation", "paintFrameXY", (void*) TitleAnimation_paintFrameXY);
    java_register_method("TitleAnimation", "paintXY", (void*) TitleAnimation_paintXY);
}

static void TitleAnimation_initFields(TitleAnimation* this) {
    this->systemWrapper = ABSystemWrapper_getInstance();
    this->deltaX = 0.0f;
    this->deltaY = 0.0f;
    this->deltaZ = 0.0f;
    
    
    
    
    
    
    
    
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->CLEAR_COLOR = BasicColorFactory_getInstance()->CLEAR_COLOR;
}


TitleAnimation* TitleAnimation_createAnimation(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width) {
        return TitleAnimation_new(animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, IndexedAnimationBehavior_new(1, 250));
}


void TitleAnimation_init(TitleAnimation* this, IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) {
    TitleAnimation_register();
        SpecialAnimation_init(&this->base, animationBehavior);
        TitleAnimation_initFields(this);
        this->lastFrameStartTime = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
        this->animationInterfaceArray = animationInterfaceArray;
        this->sizeP = java_array_length(this->animationInterfaceArray);
        this->basicColorArray = basicColorArray;
        this->dxArray = dxArray;
        this->dyArray = dyArray;
        this->y = y;
        this->widthP = width;
        TitleAnimation_reset(this);
}

TitleAnimation* TitleAnimation_new(IndexedAnimation** animationInterfaceArray, BasicColor** basicColorArray, int32_t* dxArray, int32_t* dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) {
    TitleAnimation* this = java_object_alloc(sizeof(TitleAnimation), "TitleAnimation");
    TitleAnimation_init(this, animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, animationBehavior);
    return this;
}


void TitleAnimation_nextFrame(TitleAnimation* this) {
        int64_t currentTime = ABSystemWrapper_currentTimeMillis(this->systemWrapper);
        int64_t totalTimeElapsed = currentTime - this->lastFrameStartTime;
        IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) IndexedAnimation_getAnimationBehavior(this));
        if (totalTimeElapsed > indexedAnimationBehavior->frameDelayTime) {
            TitleAnimation_previousFrame(this);
            this->lastFrameStartTime = currentTime;
        }
        if (IndexedAnimation_getFrame(this->animationInterfaceArray[0]) == 0) {
            indexedAnimationBehavior->loopIndex++;
        }
}


bool TitleAnimation_isComplete(TitleAnimation* this) {
        IndexedAnimationBehavior* indexedAnimationBehavior = ((IndexedAnimationBehavior*) IndexedAnimation_getAnimationBehavior(this));
        if (indexedAnimationBehavior->loopTotal == -1 || indexedAnimationBehavior->loopIndex < indexedAnimationBehavior->loopTotal || TitleAnimation_getFrame(this) != 0) {
            return false;
        } else {
            return true;
        }
}


void TitleAnimation_setSequence(TitleAnimation* this, int32_t* sequence) {
}


int32_t* TitleAnimation_getSequence(TitleAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


int32_t TitleAnimation_getSize(TitleAnimation* this) {
        return IndexedAnimation_getSize(this->animationInterfaceArray[0]);
}


int32_t TitleAnimation_getFrame(TitleAnimation* this) {
        return IndexedAnimation_getFrame(this->animationInterfaceArray[0]);
}


void TitleAnimation_setFrame(TitleAnimation* this, int32_t frame) {
        for (int32_t index = 0; index < this->sizeP; index++) {
            IndexedAnimation_setFrame(this->animationInterfaceArray[index], frame);
        }
}


void TitleAnimation_setLastFrame(TitleAnimation* this) {
        TitleAnimation_setFrame(this, TitleAnimation_getSize(this) - 1);
}


void TitleAnimation_reset(TitleAnimation* this) {
        TitleAnimation_setLastFrame(this);
        IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) IndexedAnimation_getAnimationBehavior(this)));
        IndexedAnimationBehavior_reset(indexedAnimationBehavior);
}


void TitleAnimation_previousFrame(TitleAnimation* this) {
        for (int32_t index = 0; index < this->sizeP; index++) {
            IndexedAnimation_previousFrame(this->animationInterfaceArray[index]);
        }
}


void TitleAnimation_paintFrameXY(TitleAnimation* this, Graphics* graphics, int32_t frame, int32_t x, int32_t y) {
        TitleAnimation_setFrame(this, frame);
        TitleAnimation_paintXY(this, graphics, x, y);
}


void TitleAnimation_paintXY(TitleAnimation* this, Graphics* graphics, int32_t ax, int32_t ay) {
        int32_t x = 0;
        if (this->widthP != (Integer_staticInit(), Integer_MIN_VALUE)) {
            x = ((DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton) - this->widthP) / 2);
        }
        int32_t deltaX = 0;
        int32_t deltaY = 0;
        for (int32_t index = 0; index < this->sizeP; index++) {
            deltaX = this->dxArray[index] + x;
            deltaY = this->dyArray[index] + this->y;
            if (this->basicColorArray[index] != this->CLEAR_COLOR) {
                BasicColorSetUtil_setBasicColorP(this->base.base.base.basicSetColorUtil, graphics, this->basicColorArray[index]);
            }
            Animation_paintXY(this->animationInterfaceArray[index], graphics, deltaX, deltaY);
        }
}

