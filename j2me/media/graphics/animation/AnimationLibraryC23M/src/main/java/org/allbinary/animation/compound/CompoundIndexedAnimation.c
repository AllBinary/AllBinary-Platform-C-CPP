// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/CompoundIndexedAnimation.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif




















void CompoundIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompoundIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompoundIndexedAnimation", "IndexedAnimation");
    java_register_method("CompoundIndexedAnimation", "setFrame", (void*) CompoundIndexedAnimation_setFrame);
    java_register_method("CompoundIndexedAnimation", "getFrame", (void*) CompoundIndexedAnimation_getFrame);
    java_register_method("CompoundIndexedAnimation", "getSize", (void*) CompoundIndexedAnimation_getSize);
    java_register_method("CompoundIndexedAnimation", "previousFrame", (void*) CompoundIndexedAnimation_previousFrame);
    java_register_method("CompoundIndexedAnimation", "setSequence", (void*) CompoundIndexedAnimation_setSequence);
    java_register_method("CompoundIndexedAnimation", "getSequence", (void*) CompoundIndexedAnimation_getSequence);
    java_register_method("CompoundIndexedAnimation", "nextFrame", (void*) CompoundIndexedAnimation_nextFrame);
    java_register_method("CompoundIndexedAnimation", "paintXY", (void*) CompoundIndexedAnimation_paintXY);
    java_register_method("CompoundIndexedAnimation", "paintThreedXYZ", (void*) CompoundIndexedAnimation_paintThreedXYZ);
    java_register_method("CompoundIndexedAnimation", "getCurrentAnimation", (void*) CompoundIndexedAnimation_getCurrentAnimation);
    java_register_method("CompoundIndexedAnimation", "nextAnimation", (void*) CompoundIndexedAnimation_nextAnimation);
    java_register_method("CompoundIndexedAnimation", "previousAnimation", (void*) CompoundIndexedAnimation_previousAnimation);
    java_register_method("CompoundIndexedAnimation", "setAnimation", (void*) CompoundIndexedAnimation_setAnimation);
    java_register_method("CompoundIndexedAnimation", "getAnimationInterfaceArray", (void*) CompoundIndexedAnimation_getAnimationInterfaceArray);
    java_register_method("CompoundIndexedAnimation", "setAnimationInterfaceArray", (void*) CompoundIndexedAnimation_setAnimationInterfaceArray);
    java_register_method("CompoundIndexedAnimation", "set", (void*) CompoundIndexedAnimation_set);
}

static void CompoundIndexedAnimation_initFields(CompoundIndexedAnimation* this) {
    
    
}


void CompoundIndexedAnimation_init(CompoundIndexedAnimation* this, Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundIndexedAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        CompoundIndexedAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

CompoundIndexedAnimation* CompoundIndexedAnimation_new(Animation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundIndexedAnimation* this = java_object_alloc(sizeof(CompoundIndexedAnimation), "CompoundIndexedAnimation");
    CompoundIndexedAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void CompoundIndexedAnimation_setFrame(CompoundIndexedAnimation* this, int32_t index) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        IndexedAnimation_setFrame(indexedAnimation, index);
}


int32_t CompoundIndexedAnimation_getFrame(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        return IndexedAnimation_getFrame(indexedAnimation);
}


int32_t CompoundIndexedAnimation_getSize(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        return IndexedAnimation_getSize(indexedAnimation);
}


void CompoundIndexedAnimation_previousFrame(CompoundIndexedAnimation* this) {
        IndexedAnimation* indexedAnimation = ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
        IndexedAnimation_previousFrame(indexedAnimation);
}


void CompoundIndexedAnimation_setSequence(CompoundIndexedAnimation* this, int32_t* sequence) {
}


int32_t* CompoundIndexedAnimation_getSequence(CompoundIndexedAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


// throws Exception
void CompoundIndexedAnimation_nextFrame(CompoundIndexedAnimation* this) {
        Animation_nextFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
}


void CompoundIndexedAnimation_paintXY(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], graphics, x, y);
}


void CompoundIndexedAnimation_paintThreedXYZ(CompoundIndexedAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)], graphics, x, y, z);
}


IndexedAnimation* CompoundIndexedAnimation_getCurrentAnimation(CompoundIndexedAnimation* this) {
        return ((IndexedAnimation*) this->animationInterfaceArray[CircularIndexUtil_getIndex(this->circularIndexUtil)]);
}


void CompoundIndexedAnimation_nextAnimation(CompoundIndexedAnimation* this) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_next(this->circularIndexUtil);
        CompoundIndexedAnimation_setFrame(this, frame);
}


void CompoundIndexedAnimation_previousAnimation(CompoundIndexedAnimation* this) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_previous(this->circularIndexUtil);
        CompoundIndexedAnimation_setFrame(this, frame);
}


void CompoundIndexedAnimation_setAnimation(CompoundIndexedAnimation* this, int32_t index) {
        int32_t frame = CompoundIndexedAnimation_getFrame(this);
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
        CompoundIndexedAnimation_setFrame(this, frame);
}


Animation** CompoundIndexedAnimation_getAnimationInterfaceArray(CompoundIndexedAnimation* this) {
        return this->animationInterfaceArray;
}


void CompoundIndexedAnimation_setAnimationInterfaceArray(CompoundIndexedAnimation* this, Animation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void CompoundIndexedAnimation_set(CompoundIndexedAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_set(this->animationInterfaceArray[index], gl);
        }
}

