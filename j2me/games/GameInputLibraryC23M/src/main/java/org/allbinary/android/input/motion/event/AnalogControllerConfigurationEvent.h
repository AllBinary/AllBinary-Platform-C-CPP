#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H
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
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct AnalogControllerConfigurationEvent AnalogControllerConfigurationEvent;
struct AnalogControllerConfigurationEvent {
    AllBinaryEventObject base;
};


AnalogControllerConfigurationEvent* AnalogControllerConfigurationEvent_new(void* anyType);

void AnalogControllerConfigurationEvent_init(AnalogControllerConfigurationEvent* this, void* anyType);
#define AnalogControllerConfigurationEvent_new1 AnalogControllerConfigurationEvent_new
#define AnalogControllerConfigurationEvent_init1 AnalogControllerConfigurationEvent_init
#ifndef AnalogControllerConfigurationEvent_getSource
#define AnalogControllerConfigurationEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef AnalogControllerConfigurationEvent_setSource
#define AnalogControllerConfigurationEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogControllerConfigurationEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogControllerConfigurationEvent_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H
