#ifndef ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H
#define ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H
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
// package org.allbinary.input.magnetic.field

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryMagneticFieldSensor AllBinaryMagneticFieldSensor;
typedef struct AllBinarySensorListener AllBinarySensorListener;
typedef struct Orientation Orientation;
#include "org/allbinary/input/AllBinarySensorListener.h"
#include "org/allbinary/input/magnetic/field/AllBinaryMagneticFieldSensor.h"

typedef struct NoMagneticFieldSensor NoMagneticFieldSensor;
struct NoMagneticFieldSensor {
    AllBinaryMagneticFieldSensor base;
    AllBinarySensorListener AllBinarySensorListener_interface;
};


NoMagneticFieldSensor* NoMagneticFieldSensor_new(void);
void NoMagneticFieldSensor_init(NoMagneticFieldSensor* this);

Orientation* NoMagneticFieldSensor_getOrientation(NoMagneticFieldSensor* this);

void NoMagneticFieldSensor_onSensorChange(NoMagneticFieldSensor* this);
#ifndef NoMagneticFieldSensor_update
#define NoMagneticFieldSensor_update AllBinarySensor_update
#endif
#ifndef NoMagneticFieldSensor_setMax
#define NoMagneticFieldSensor_setMax AllBinarySensor_setMax
#endif
#ifndef NoMagneticFieldSensor_getMax
#define NoMagneticFieldSensor_getMax AllBinarySensor_getMax
#endif
#ifndef NoMagneticFieldSensor_getId
#define NoMagneticFieldSensor_getId AllBinarySensor_getId
#endif
#ifndef NoMagneticFieldSensor_shutdown
#define NoMagneticFieldSensor_shutdown AllBinarySensor_shutdown
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoMagneticFieldSensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoMagneticFieldSensor_register(void);

#if __has_include("org/allbinary/logic/math/Orientation.h")
#include "org/allbinary/logic/math/Orientation.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_NOMAGNETICFIELDSENSOR_H
