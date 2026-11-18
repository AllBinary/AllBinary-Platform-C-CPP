#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTLISTENERINTERFACE_H
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
typedef struct AnalogControllerConfigurationEvent AnalogControllerConfigurationEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct AnalogControllerConfigurationEventListenerInterface AnalogControllerConfigurationEventListenerInterface;
struct AnalogControllerConfigurationEventListenerInterface {
    void (*onAnalogControllerConfigurationEvent)(void* this, AnalogControllerConfigurationEvent* analogControllerConfigurationEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogControllerConfigurationEventListenerInterface_staticInit(void);

static inline void AnalogControllerConfigurationEventListenerInterface_onAnalogControllerConfigurationEvent(void* this, AnalogControllerConfigurationEvent* analogControllerConfigurationEvent) {
    ((__typeof__(((AnalogControllerConfigurationEventListenerInterface*) nullptr)->onAnalogControllerConfigurationEvent)) java_method_of(this, "onAnalogControllerConfigurationEvent"))(this, analogControllerConfigurationEvent);
}
#define AnalogControllerConfigurationEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTLISTENERINTERFACE_H
