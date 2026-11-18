// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexedAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif















void SimultaneousCompoundIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundIndexedAnimation", "IndexedAnimation");
    java_register_method("SimultaneousCompoundIndexedAnimation", "setFrame", (void*) SimultaneousCompoundIndexedAnimation_setFrame);
    java_register_method("SimultaneousCompoundIndexedAnimation", "getFrame", (void*) SimultaneousCompoundIndexedAnimation_getFrame);
    java_register_method("SimultaneousCompoundIndexedAnimation", "getSize", (void*) SimultaneousCompoundIndexedAnimation_getSize);
    java_register_method("SimultaneousCompoundIndexedAnimation", "previousFrame", (void*) SimultaneousCompoundIndexedAnimation_previousFrame);
    java_register_method("SimultaneousCompoundIndexedAnimation", "setSequence", (void*) SimultaneousCompoundIndexedAnimation_setSequence);
    java_register_method("SimultaneousCompoundIndexedAnimation", "getSequence", (void*) SimultaneousCompoundIndexedAnimation_getSequence);
    java_register_method("SimultaneousCompoundIndexedAnimation", "nextFrame", (void*) SimultaneousCompoundIndexedAnimation_nextFrame);
    java_register_method("SimultaneousCompoundIndexedAnimation", "paintXY", (void*) SimultaneousCompoundIndexedAnimation_paintXY);
    java_register_method("SimultaneousCompoundIndexedAnimation", "paintThreedXYZ", (void*) SimultaneousCompoundIndexedAnimation_paintThreedXYZ);
    java_register_method("SimultaneousCompoundIndexedAnimation", "getAnimationInterfaceArray", (void*) SimultaneousCompoundIndexedAnimation_getAnimationInterfaceArray);
    java_register_method("SimultaneousCompoundIndexedAnimation", "setAnimationInterfaceArray", (void*) SimultaneousCompoundIndexedAnimation_setAnimationInterfaceArray);
}

static void SimultaneousCompoundIndexedAnimation_initFields(SimultaneousCompoundIndexedAnimation* this) {
    
}


void SimultaneousCompoundIndexedAnimation_init(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexedAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        SimultaneousCompoundIndexedAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundIndexedAnimation* SimultaneousCompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundIndexedAnimation* this = java_object_alloc(sizeof(SimultaneousCompoundIndexedAnimation), "SimultaneousCompoundIndexedAnimation");
    SimultaneousCompoundIndexedAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundIndexedAnimation_setFrame(SimultaneousCompoundIndexedAnimation* this, int32_t frameIndex) {
        IndexedAnimation* indexedAnimation = nullptr;
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[index]);
            IndexedAnimation_setFrame(indexedAnimation, frameIndex);
        }
}


int32_t SimultaneousCompoundIndexedAnimation_getFrame(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[0]);
        return IndexedAnimation_getFrame(indexedAnimation);
}


int32_t SimultaneousCompoundIndexedAnimation_getSize(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[0]);
        return IndexedAnimation_getSize(indexedAnimation);
}


void SimultaneousCompoundIndexedAnimation_previousFrame(SimultaneousCompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = nullptr;
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[index]);
            IndexedAnimation_previousFrame(indexedAnimation);
        }
}


void SimultaneousCompoundIndexedAnimation_setSequence(SimultaneousCompoundIndexedAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundIndexedAnimation_getSequence(SimultaneousCompoundIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void SimultaneousCompoundIndexedAnimation_nextFrame(SimultaneousCompoundIndexedAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_nextFrame(this->animationInterfaceArray[index]);
        }
}


void SimultaneousCompoundIndexedAnimation_paintXY(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        int32_t size = java_array_length(this->animationInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            Animation_paintXY(this->animationInterfaceArray[index], graphics, x, y);
        }
}


void SimultaneousCompoundIndexedAnimation_paintThreedXYZ(SimultaneousCompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        int32_t size = java_array_length(this->animationInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            Animation_paintThreedXYZ(this->animationInterfaceArray[index], graphics, x, y, z);
        }
}


Animation** SimultaneousCompoundIndexedAnimation_getAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundIndexedAnimation_setAnimationInterfaceArray(SimultaneousCompoundIndexedAnimation* this, Animation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}

