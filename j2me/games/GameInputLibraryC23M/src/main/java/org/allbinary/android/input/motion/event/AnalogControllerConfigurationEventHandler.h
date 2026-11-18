#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_H
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
// package org.allbinary.android.input.motion.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnalogControllerConfigurationEventListenerInterface AnalogControllerConfigurationEventListenerInterface;
typedef struct AnalogControllerConfigurationEvent AnalogControllerConfigurationEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventListenerInterface EventListenerInterface;
typedef struct EventStrings EventStrings;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct AnalogControllerConfigurationEventHandler AnalogControllerConfigurationEventHandler;
struct AnalogControllerConfigurationEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};


AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_new(void);

AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_getInstance(void);

void AnalogControllerConfigurationEventHandler_init(AnalogControllerConfigurationEventHandler* this);

void AnalogControllerConfigurationEventHandler_addListener(AnalogControllerConfigurationEventHandler* this, AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface);

void AnalogControllerConfigurationEventHandler_removeAllListeners(AnalogControllerConfigurationEventHandler* this);

void AnalogControllerConfigurationEventHandler_removeListener(AnalogControllerConfigurationEventHandler* this, EventListenerInterface* eventListenerInterface);

void AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject);

void AnalogControllerConfigurationEventHandler_process(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
#define AnalogControllerConfigurationEventHandler_new0 AnalogControllerConfigurationEventHandler_new
#define AnalogControllerConfigurationEventHandler_init0 AnalogControllerConfigurationEventHandler_init
#ifndef AnalogControllerConfigurationEventHandler_toString
#define AnalogControllerConfigurationEventHandler_toString BasicEventHandler_toString
#endif
#ifndef AnalogControllerConfigurationEventHandler_addListenerSingleThreaded
#define AnalogControllerConfigurationEventHandler_addListenerSingleThreaded BasicEventHandler_addListenerSingleThreaded
#endif
#ifndef AnalogControllerConfigurationEventHandler_addListenerInterface
#define AnalogControllerConfigurationEventHandler_addListenerInterface BasicEventHandler_addListenerInterface
#endif
#ifndef AnalogControllerConfigurationEventHandler_removeListenerSingleThreaded
#define AnalogControllerConfigurationEventHandler_removeListenerSingleThreaded BasicEventHandler_removeListenerSingleThreaded
#endif
#ifndef AnalogControllerConfigurationEventHandler_getEventListenerInterfaceListP
#define AnalogControllerConfigurationEventHandler_getEventListenerInterfaceListP BasicEventHandler_getEventListenerInterfaceListP
#endif
#ifndef AnalogControllerConfigurationEventHandler_addListeners
#define AnalogControllerConfigurationEventHandler_addListeners BasicEventHandler_addListeners
#endif
#ifndef AnalogControllerConfigurationEventHandler_removeListeners
#define AnalogControllerConfigurationEventHandler_removeListeners BasicEventHandler_removeListeners
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogControllerConfigurationEventHandler_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogControllerConfigurationEventHandler_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_H
