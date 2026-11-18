// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimation.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
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

















void SimultaneousCompoundIndexAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundIndexAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundIndexAnimation", "IndexedAnimation");
    java_register_method("SimultaneousCompoundIndexAnimation", "setFrame", (void*) SimultaneousCompoundIndexAnimation_setFrame);
    java_register_method("SimultaneousCompoundIndexAnimation", "getFrame", (void*) SimultaneousCompoundIndexAnimation_getFrame);
    java_register_method("SimultaneousCompoundIndexAnimation", "getAnimationSize", (void*) SimultaneousCompoundIndexAnimation_getAnimationSize);
    java_register_method("SimultaneousCompoundIndexAnimation", "getSize", (void*) SimultaneousCompoundIndexAnimation_getSize);
    java_register_method("SimultaneousCompoundIndexAnimation", "previousFrame", (void*) SimultaneousCompoundIndexAnimation_previousFrame);
    java_register_method("SimultaneousCompoundIndexAnimation", "nextFrame", (void*) SimultaneousCompoundIndexAnimation_nextFrame);
    java_register_method("SimultaneousCompoundIndexAnimation", "setSequence", (void*) SimultaneousCompoundIndexAnimation_setSequence);
    java_register_method("SimultaneousCompoundIndexAnimation", "getSequence", (void*) SimultaneousCompoundIndexAnimation_getSequence);
    java_register_method("SimultaneousCompoundIndexAnimation", "paintXY", (void*) SimultaneousCompoundIndexAnimation_paintXY);
    java_register_method("SimultaneousCompoundIndexAnimation", "paintThreedXYZ", (void*) SimultaneousCompoundIndexAnimation_paintThreedXYZ);
    java_register_method("SimultaneousCompoundIndexAnimation", "set", (void*) SimultaneousCompoundIndexAnimation_set);
    java_register_method("SimultaneousCompoundIndexAnimation", "getAnimationInterfaceArray", (void*) SimultaneousCompoundIndexAnimation_getAnimationInterfaceArray);
    java_register_method("SimultaneousCompoundIndexAnimation", "setAnimationInterfaceArray", (void*) SimultaneousCompoundIndexAnimation_setAnimationInterfaceArray);
}

static void SimultaneousCompoundIndexAnimation_initFields(SimultaneousCompoundIndexAnimation* this) {
    
}


void SimultaneousCompoundIndexAnimation_init(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        SimultaneousCompoundIndexAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundIndexAnimation* SimultaneousCompoundIndexAnimation_new(IndexedAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexAnimation* this = java_object_alloc(sizeof(SimultaneousCompoundIndexAnimation), "SimultaneousCompoundIndexAnimation");
    SimultaneousCompoundIndexAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundIndexAnimation_setFrame(SimultaneousCompoundIndexAnimation* this, int32_t frameIndex) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            IndexedAnimation_setFrame(this->animationInterfaceArray[index], frameIndex);
        }
}


int32_t SimultaneousCompoundIndexAnimation_getFrame(SimultaneousCompoundIndexAnimation* this) {
        return IndexedAnimation_getFrame(this->animationInterfaceArray[0]);
}


// throws Exception
int32_t SimultaneousCompoundIndexAnimation_getAnimationSize(SimultaneousCompoundIndexAnimation* this) {
        return IndexedAnimation_getAnimationSize(this->animationInterfaceArray[0]);
}


int32_t SimultaneousCompoundIndexAnimation_getSize(SimultaneousCompoundIndexAnimation* this) {
        return IndexedAnimation_getSize(this->animationInterfaceArray[0]);
}


void SimultaneousCompoundIndexAnimation_previousFrame(SimultaneousCompoundIndexAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            IndexedAnimation_previousFrame(this->animationInterfaceArray[index]);
        }
}


// throws Exception
void SimultaneousCompoundIndexAnimation_nextFrame(SimultaneousCompoundIndexAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_nextFrame(this->animationInterfaceArray[index]);
        }
}


void SimultaneousCompoundIndexAnimation_setSequence(SimultaneousCompoundIndexAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundIndexAnimation_getSequence(SimultaneousCompoundIndexAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void SimultaneousCompoundIndexAnimation_paintXY(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_paintXY(this->animationInterfaceArray[index], graphics, x, y);
        }
}


void SimultaneousCompoundIndexAnimation_paintThreedXYZ(SimultaneousCompoundIndexAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_paintThreedXYZ(this->animationInterfaceArray[index], graphics, x, y, z);
        }
}


// throws Exception
void SimultaneousCompoundIndexAnimation_set(SimultaneousCompoundIndexAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_set(this->animationInterfaceArray[index], gl);
        }
}


IndexedAnimation** SimultaneousCompoundIndexAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundIndexAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexAnimation* this, IndexedAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}

