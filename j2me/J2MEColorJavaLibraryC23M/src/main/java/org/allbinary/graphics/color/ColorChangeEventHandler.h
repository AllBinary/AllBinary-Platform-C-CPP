#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H
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
// package org.allbinary.graphics.color

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

typedef struct ColorChangeEventHandler ColorChangeEventHandler;
struct ColorChangeEventHandler {
    BasicEventHandler base;
};


ColorChangeEventHandler* ColorChangeEventHandler_new(void);

void ColorChangeEventHandler_init(ColorChangeEventHandler* this);

ColorChangeEventHandler* ColorChangeEventHandler_getInstance(void);
#define ColorChangeEventHandler_new0 ColorChangeEventHandler_new
#define ColorChangeEventHandler_init0 ColorChangeEventHandler_init
#ifndef ColorChangeEventHandler_toString
#define ColorChangeEventHandler_toString BasicEventHandler_toString
#endif
#ifndef ColorChangeEventHandler_removeAllListeners
#define ColorChangeEventHandler_removeAllListeners BasicEventHandler_removeAllListeners
#endif
#ifndef ColorChangeEventHandler_addListenerSingleThreaded
#define ColorChangeEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef ColorChangeEventHandler_addListenerInterface
#define ColorChangeEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef ColorChangeEventHandler_removeListenerSingleThreaded
#define ColorChangeEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef ColorChangeEventHandler_removeListener
#define ColorChangeEventHandler_removeListener BasicEventHandler_removeListener
#endif
#ifndef ColorChangeEventHandler_fireEvent
#define ColorChangeEventHandler_fireEvent BasicEventHandler_fireEvent
#endif
#ifndef ColorChangeEventHandler_process
#define ColorChangeEventHandler_process BasicEventHandler_process
#endif
#ifndef ColorChangeEventHandler_getEventListenerInterfaceListP
#define ColorChangeEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef ColorChangeEventHandler_addListeners
#define ColorChangeEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef ColorChangeEventHandler_removeListeners
#define ColorChangeEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorChangeEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorChangeEventHandler_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H
