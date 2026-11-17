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
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

typedef struct BaseAnimationInterfaceFactoryInterfaceComposite BaseAnimationInterfaceFactoryInterfaceComposite;
struct BaseAnimationInterfaceFactoryInterfaceComposite {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray;
};


BaseAnimationInterfaceFactoryInterfaceComposite* BaseAnimationInterfaceFactoryInterfaceComposite_new(BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

void BaseAnimationInterfaceFactoryInterfaceComposite_init(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);
Animation* BaseAnimationInterfaceFactoryInterfaceComposite_getInstance(BaseAnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId);
BasicAnimationInterfaceFactoryInterface** BaseAnimationInterfaceFactoryInterfaceComposite_getBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this);
void BaseAnimationInterfaceFactoryInterfaceComposite_setBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);
void BaseAnimationInterfaceFactoryInterfaceComposite_setInitialScale(BaseAnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties);

static void BaseAnimationInterfaceFactoryInterfaceComposite_initFields(BaseAnimationInterfaceFactoryInterfaceComposite* this) {
    
}


void BaseAnimationInterfaceFactoryInterfaceComposite_init(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    BaseAnimationInterfaceFactoryInterfaceComposite_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}

BaseAnimationInterfaceFactoryInterfaceComposite* BaseAnimationInterfaceFactoryInterfaceComposite_new(BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    BaseAnimationInterfaceFactoryInterfaceComposite* this = calloc(1, sizeof(BaseAnimationInterfaceFactoryInterfaceComposite));
    BaseAnimationInterfaceFactoryInterfaceComposite_init(this, basicAnimationInterfaceFactoryInterfaceArray);
    return this;
}


// throws Exception
Animation* BaseAnimationInterfaceFactoryInterfaceComposite_getInstance(BaseAnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId) {
        return JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


BasicAnimationInterfaceFactoryInterface** BaseAnimationInterfaceFactoryInterfaceComposite_getBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArray;
}


void BaseAnimationInterfaceFactoryInterfaceComposite_setBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}


void BaseAnimationInterfaceFactoryInterfaceComposite_setInitialScale(BaseAnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties) {
}

