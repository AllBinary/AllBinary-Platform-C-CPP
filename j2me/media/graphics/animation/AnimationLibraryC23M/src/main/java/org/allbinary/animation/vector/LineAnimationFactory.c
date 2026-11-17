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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct LineAnimationFactory LineAnimationFactory;
struct LineAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    BasicColor* basicColor;
};


LineAnimationFactory* LineAnimationFactory_new(BasicColor* basicColor);

void LineAnimationFactory_init(LineAnimationFactory* this, BasicColor* basicColor);
Animation* LineAnimationFactory_getInstance(LineAnimationFactory* this, int32_t instanceId);
void LineAnimationFactory_setInitialScale(LineAnimationFactory* this, ScaleProperties* scaleProperties);

static void LineAnimationFactory_initFields(LineAnimationFactory* this) {
    
}


void LineAnimationFactory_init(LineAnimationFactory* this, BasicColor* basicColor) {
    LineAnimationFactory_initFields(this);
        this->basicColor = basicColor;
}

LineAnimationFactory* LineAnimationFactory_new(BasicColor* basicColor) {
    LineAnimationFactory* this = calloc(1, sizeof(LineAnimationFactory));
    LineAnimationFactory_init(this, basicColor);
    return this;
}


// throws Exception
Animation* LineAnimationFactory_getInstance(LineAnimationFactory* this, int32_t instanceId) {
        return LineAnimation_new(this->basicColor);
}


void LineAnimationFactory_setInitialScale(LineAnimationFactory* this, ScaleProperties* scaleProperties) {
}

