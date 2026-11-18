#ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
#define ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinarySensorListener AllBinarySensorListener;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/input/AllBinarySensorListener.h"

typedef struct AllBinarySensor AllBinarySensor;
struct AllBinarySensor {
    AllBinarySensorListener AllBinarySensorListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

extern AllBinarySensor* AllBinarySensor_NULL_ALLBINARY_SENSOR;

AllBinarySensor* AllBinarySensor_new(void);

void AllBinarySensor_init(AllBinarySensor* this);

void AllBinarySensor_initMethod(AllBinarySensor* this);

void AllBinarySensor_update(AllBinarySensor* this);

void AllBinarySensor_setMax(int32_t max);

int32_t AllBinarySensor_getMax(void);

int32_t AllBinarySensor_getId(AllBinarySensor* this);

void AllBinarySensor_shutdown(AllBinarySensor* this);

void AllBinarySensor_onSensorChange(AllBinarySensor* this);
#define AllBinarySensor_new0 AllBinarySensor_new
#define AllBinarySensor_init0 AllBinarySensor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinarySensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinarySensor_register(void);


#endif // ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
