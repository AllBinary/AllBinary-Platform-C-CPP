#ifndef ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_ALLBINARYMAGNETICFIELDSENSOR_H
#define ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_ALLBINARYMAGNETICFIELDSENSOR_H
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
typedef struct AllBinarySensor AllBinarySensor;
#include "org/allbinary/input/AllBinarySensor.h"

typedef struct AllBinaryMagneticFieldSensor AllBinaryMagneticFieldSensor;
struct AllBinaryMagneticFieldSensor {
    AllBinarySensor base;
};


AllBinaryMagneticFieldSensor* AllBinaryMagneticFieldSensor_new(void);

void AllBinaryMagneticFieldSensor_init(AllBinaryMagneticFieldSensor* this);
#ifndef AllBinaryMagneticFieldSensor_update
#define AllBinaryMagneticFieldSensor_update AllBinarySensor_update
#endif
#ifndef AllBinaryMagneticFieldSensor_setMax
#define AllBinaryMagneticFieldSensor_setMax AllBinarySensor_setMax
#endif
#ifndef AllBinaryMagneticFieldSensor_getMax
#define AllBinaryMagneticFieldSensor_getMax AllBinarySensor_getMax
#endif
#ifndef AllBinaryMagneticFieldSensor_getId
#define AllBinaryMagneticFieldSensor_getId AllBinarySensor_getId
#endif
#ifndef AllBinaryMagneticFieldSensor_shutdown
#define AllBinaryMagneticFieldSensor_shutdown AllBinarySensor_shutdown
#endif
#ifndef AllBinaryMagneticFieldSensor_onSensorChange
#define AllBinaryMagneticFieldSensor_onSensorChange AllBinarySensor_onSensorChange
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryMagneticFieldSensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryMagneticFieldSensor_register(void);


#endif // ORG_ALLBINARY_INPUT_MAGNETIC_FIELD_ALLBINARYMAGNETICFIELDSENSOR_H
