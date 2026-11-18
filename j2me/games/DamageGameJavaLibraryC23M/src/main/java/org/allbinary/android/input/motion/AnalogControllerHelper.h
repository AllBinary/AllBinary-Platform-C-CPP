#ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
#define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
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
typedef struct AnalogControllerConfigurationFactory AnalogControllerConfigurationFactory;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

typedef struct AnalogControllerHelper AnalogControllerHelper;
struct AnalogControllerHelper {
    int32_t reduceTimeFactor;
    int32_t SCALE_VALUE;
    TimeDelayHelper* rightTimeElapsedHelper;
    TimeDelayHelper* leftTimeElapsedHelper;
    TimeDelayHelper* downTimeElapsedHelper;
    TimeDelayHelper* upTimeElapsedHelper;
};


AnalogControllerHelper* AnalogControllerHelper_new(int32_t reduceTimeFactor);

void AnalogControllerHelper_init(AnalogControllerHelper* this, int32_t reduceTimeFactor);

void AnalogControllerHelper_right(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

void AnalogControllerHelper_left(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

void AnalogControllerHelper_up(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

void AnalogControllerHelper_down(AnalogControllerHelper* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);
#define AnalogControllerHelper_new1 AnalogControllerHelper_new
#define AnalogControllerHelper_init1 AnalogControllerHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogControllerHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogControllerHelper_register(void);


#endif // ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
