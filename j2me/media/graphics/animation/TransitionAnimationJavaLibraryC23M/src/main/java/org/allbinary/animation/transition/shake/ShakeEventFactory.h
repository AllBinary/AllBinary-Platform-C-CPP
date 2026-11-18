#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
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
// package org.allbinary.animation.transition.shake

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ShakeEvent ShakeEvent;
#if __has_include("org/allbinary/animation/transition/shake/ShakeEvent.h")
#include "org/allbinary/animation/transition/shake/ShakeEvent.h"
#endif

typedef struct ShakeEventFactory ShakeEventFactory;
struct ShakeEventFactory {
    ShakeEvent* MICRO;
    ShakeEvent* SMALL;
    ShakeEvent* MEDIUM;
    ShakeEvent* LARGE;
};


ShakeEventFactory* ShakeEventFactory_new(void);
void ShakeEventFactory_init(ShakeEventFactory* this);

ShakeEventFactory* ShakeEventFactory_getInstance(void);

void ShakeEventFactory_initMethod(ShakeEventFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShakeEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShakeEventFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_H
