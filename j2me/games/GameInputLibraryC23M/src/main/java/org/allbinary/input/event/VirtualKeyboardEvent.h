#ifndef ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENT_H
#define ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENT_H
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
// package org.allbinary.input.event

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

typedef struct VirtualKeyboardEvent VirtualKeyboardEvent;
struct VirtualKeyboardEvent {
    AllBinaryEventObject base;
};


VirtualKeyboardEvent* VirtualKeyboardEvent_new(void* anyType);

void VirtualKeyboardEvent_init(VirtualKeyboardEvent* this, void* anyType);
#define VirtualKeyboardEvent_new1 VirtualKeyboardEvent_new
#define VirtualKeyboardEvent_init1 VirtualKeyboardEvent_init
#ifndef VirtualKeyboardEvent_getSource
#define VirtualKeyboardEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef VirtualKeyboardEvent_setSource
#define VirtualKeyboardEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VirtualKeyboardEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VirtualKeyboardEvent_register(void);


#endif // ORG_ALLBINARY_INPUT_EVENT_VIRTUALKEYBOARDEVENT_H
