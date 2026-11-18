#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H
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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnalogControllerConfigurationEvent AnalogControllerConfigurationEvent;
typedef struct AnalogControllerConfigurationEventHandler AnalogControllerConfigurationEventHandler;
typedef struct ScaleFactorFactory ScaleFactorFactory;
#if __has_include("org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h")
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"
#endif

typedef struct AnalogControllerConfigurationFactory AnalogControllerConfigurationFactory;
struct AnalogControllerConfigurationFactory {
    int32_t SCALE_FACTOR;
    int32_t SCALE_VALUE;
    bool available;
    AnalogControllerConfigurationEvent* analogControllerConfigurationEvent;
};


AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_new(void);

AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_getInstance(void);

void AnalogControllerConfigurationFactory_init(AnalogControllerConfigurationFactory* this);

bool AnalogControllerConfigurationFactory_isAvailable(AnalogControllerConfigurationFactory* this);

void AnalogControllerConfigurationFactory_setAvailable(AnalogControllerConfigurationFactory* this, bool available);
#define AnalogControllerConfigurationFactory_new0 AnalogControllerConfigurationFactory_new
#define AnalogControllerConfigurationFactory_init0 AnalogControllerConfigurationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogControllerConfigurationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogControllerConfigurationFactory_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H
