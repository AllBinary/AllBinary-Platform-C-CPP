#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENT_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENT_H
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
struct ShakeEvent {
    char unused;
};


ShakeEvent* ShakeEvent_new(void);

void ShakeEvent_init(ShakeEvent* this);
#define ShakeEvent_new0 ShakeEvent_new
#define ShakeEvent_init0 ShakeEvent_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShakeEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShakeEvent_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENT_H
