#ifndef ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H
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
typedef struct VectorAnimationFactoryInterface VectorAnimationFactoryInterface;
typedef struct TimedVectorAnimation TimedVectorAnimation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct VectorAnimation VectorAnimation;
typedef struct BasicColor BasicColor;
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"

typedef struct TimedVectorAnimationFactory TimedVectorAnimationFactory;
struct TimedVectorAnimationFactory {
    VectorAnimationFactoryInterface VectorAnimationFactoryInterface_interface;
};


TimedVectorAnimationFactory* TimedVectorAnimationFactory_new(void);
void TimedVectorAnimationFactory_init(TimedVectorAnimationFactory* this);

VectorAnimation* TimedVectorAnimationFactory_getInstance(TimedVectorAnimationFactory* this, int32_t*** points, BasicColor* basicColor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimedVectorAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TimedVectorAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H
