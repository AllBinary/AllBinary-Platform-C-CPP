#ifndef ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENT_H
#define ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENT_H
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
// package org.allbinary.view.event

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

typedef struct ViewPositionEvent ViewPositionEvent;
struct ViewPositionEvent {
    AllBinaryEventObject base;
};


ViewPositionEvent* ViewPositionEvent_new(void* anyType);

void ViewPositionEvent_init(ViewPositionEvent* this, void* anyType);
#define ViewPositionEvent_new1 ViewPositionEvent_new
#define ViewPositionEvent_init1 ViewPositionEvent_init
#ifndef ViewPositionEvent_getSource
#define ViewPositionEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef ViewPositionEvent_setSource
#define ViewPositionEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPositionEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ViewPositionEvent_register(void);


#endif // ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENT_H
