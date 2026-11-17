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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"

typedef struct TimedVectorAnimationFactory TimedVectorAnimationFactory;
struct TimedVectorAnimationFactory {
    VectorAnimationFactoryInterface VectorAnimationFactoryInterface_interface;
};


TimedVectorAnimationFactory* TimedVectorAnimationFactory_new(void);
VectorAnimation* TimedVectorAnimationFactory_getInstance(TimedVectorAnimationFactory* this, int32_t*** points, BasicColor* basicColor);

void TimedVectorAnimationFactory_init(TimedVectorAnimationFactory* this) {
}

TimedVectorAnimationFactory* TimedVectorAnimationFactory_new(void) {
    TimedVectorAnimationFactory* this = calloc(1, sizeof(TimedVectorAnimationFactory));
    TimedVectorAnimationFactory_init(this);
    return this;
}


VectorAnimation* TimedVectorAnimationFactory_getInstance(TimedVectorAnimationFactory* this, int32_t*** points, BasicColor* basicColor) {
        return TimedVectorAnimation_new(points, basicColor, AnimationBehavior_getInstance());
}

