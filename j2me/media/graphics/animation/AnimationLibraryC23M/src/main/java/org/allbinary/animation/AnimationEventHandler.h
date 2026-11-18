#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H
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
typedef struct BasicEventHandler BasicEventHandler;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct AnimationEventHandler AnimationEventHandler;
struct AnimationEventHandler {
    BasicEventHandler base;
};


AnimationEventHandler* AnimationEventHandler_new(void);

void AnimationEventHandler_init(AnimationEventHandler* this);

AnimationEventHandler* AnimationEventHandler_getInstance(void);
#define AnimationEventHandler_new0 AnimationEventHandler_new
#define AnimationEventHandler_init0 AnimationEventHandler_init
#ifndef AnimationEventHandler_toString
#define AnimationEventHandler_toString BasicEventHandler_toString
#endif
#ifndef AnimationEventHandler_removeAllListeners
#define AnimationEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef AnimationEventHandler_addListenerSingleThreaded
#define AnimationEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef AnimationEventHandler_addListenerInterface
#define AnimationEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef AnimationEventHandler_removeListenerSingleThreaded
#define AnimationEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef AnimationEventHandler_removeListener
#define AnimationEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef AnimationEventHandler_fireEvent
#define AnimationEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef AnimationEventHandler_process
#define AnimationEventHandler_process BasicEventHandler_process
#endif
#ifndef AnimationEventHandler_getEventListenerInterfaceListP
#define AnimationEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef AnimationEventHandler_addListeners
#define AnimationEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef AnimationEventHandler_removeListeners
#define AnimationEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationEventHandler_register(void);


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONEVENTHANDLER_H
