#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENT_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENT_H
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
// package org.allbinary.graphics.displayable.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct DisplayChangeEvent DisplayChangeEvent;
struct DisplayChangeEvent {
    AllBinaryEventObject base;
};


DisplayChangeEvent* DisplayChangeEvent_new(void* anyType);

void DisplayChangeEvent_init(DisplayChangeEvent* this, void* anyType);
#define DisplayChangeEvent_new1 DisplayChangeEvent_new
#define DisplayChangeEvent_init1 DisplayChangeEvent_init
#ifndef DisplayChangeEvent_getSource
#define DisplayChangeEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef DisplayChangeEvent_setSource
#define DisplayChangeEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DisplayChangeEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DisplayChangeEvent_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_EVENT_DISPLAYCHANGEEVENT_H
