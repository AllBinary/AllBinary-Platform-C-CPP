#ifndef ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_H
#define ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_H
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
// package org.allbinary.bounds.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Rectangle Rectangle;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct BoundsChangeEvent BoundsChangeEvent;
struct BoundsChangeEvent {
    AllBinaryEventObject base;
};


BoundsChangeEvent* BoundsChangeEvent_new(Rectangle* rectangle);

void BoundsChangeEvent_init(BoundsChangeEvent* this, Rectangle* rectangle);

Rectangle* BoundsChangeEvent_getRectangle(BoundsChangeEvent* this);
#define BoundsChangeEvent_new1 BoundsChangeEvent_new
#define BoundsChangeEvent_init1 BoundsChangeEvent_init
#ifndef BoundsChangeEvent_getSource
#define BoundsChangeEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef BoundsChangeEvent_setSource
#define BoundsChangeEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BoundsChangeEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BoundsChangeEvent_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_H
