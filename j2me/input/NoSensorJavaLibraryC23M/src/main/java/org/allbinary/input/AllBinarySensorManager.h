#ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H
#define ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H
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
typedef struct AccelerometerSensorFactory AccelerometerSensorFactory;
typedef struct GyroSensorFactory GyroSensorFactory;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct AllBinarySensorManager AllBinarySensorManager;
struct AllBinarySensorManager {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* ORIENTATION_SENSOR_INPUT;
    const char* ORIENTATION_TYPE;
    BasicArrayList* list;
};


AllBinarySensorManager* AllBinarySensorManager_new(void);

AllBinarySensorManager* AllBinarySensorManager_getInstance(void);

void AllBinarySensorManager_init(AllBinarySensorManager* this);

void AllBinarySensorManager_initMethod(AllBinarySensorManager* this);

BasicArrayList* AllBinarySensorManager_getSensorNamesList(AllBinarySensorManager* this);

void AllBinarySensorManager_shutdown(AllBinarySensorManager* this);
#define AllBinarySensorManager_new0 AllBinarySensorManager_new
#define AllBinarySensorManager_init0 AllBinarySensorManager_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinarySensorManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinarySensorManager_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H
