/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct NullAnimationFactory NullAnimationFactory;
struct NullAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* NULL_ANIMATION;
    Animation** EMPTY_ARRAY;
};

NullAnimationFactory* NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY;
static NullAnimationFactory* NullAnimationFactory_NULL_ANIMATION_FACTORY;

NullAnimationFactory* NullAnimationFactory_new(void);

void NullAnimationFactory_init(NullAnimationFactory* this);
NullAnimationFactory* NullAnimationFactory_getFactoryInstance(void);
Animation* NullAnimationFactory_getInstance(NullAnimationFactory* this, int32_t instanceId);
Animation* NullAnimationFactory_getInstanceAnimation(NullAnimationFactory* this, Animation* animationInterface);
void NullAnimationFactory_setInitialScale(NullAnimationFactory* this, ScaleProperties* scaleProperties);

// Static fields with runtime initializers: call this once at startup
void NullAnimationFactory_staticInit(void) {
    NullAnimationFactory_NULL_NOT_FOR_USE_ANIMATION_FACTORY = NullAnimationFactory_new();
    NullAnimationFactory_NULL_ANIMATION_FACTORY = NullAnimationFactory_new();
}

static void NullAnimationFactory_initFields(NullAnimationFactory* this) {
    this->NULL_ANIMATION = Animation_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void NullAnimationFactory_paintXY(NullAnimationFactory* this, Graphics* graphics, int32_t x, int32_t y) {
    }
#endif
;
    this->EMPTY_ARRAY = ((Animation**) java_array_new(sizeof(Animation*), 0));
}


void NullAnimationFactory_init(NullAnimationFactory* this) {
    NullAnimationFactory_initFields(this);
}

NullAnimationFactory* NullAnimationFactory_new(void) {
    NullAnimationFactory* this = calloc(1, sizeof(NullAnimationFactory));
    NullAnimationFactory_init(this);
    return this;
}


NullAnimationFactory* NullAnimationFactory_getFactoryInstance(void) {
        return NullAnimationFactory_NULL_ANIMATION_FACTORY;
}


Animation* NullAnimationFactory_getInstance(NullAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullAnimationFactory_getInstanceAnimation(NullAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullAnimationFactory_setInitialScale(NullAnimationFactory* this, ScaleProperties* scaleProperties) {
}

