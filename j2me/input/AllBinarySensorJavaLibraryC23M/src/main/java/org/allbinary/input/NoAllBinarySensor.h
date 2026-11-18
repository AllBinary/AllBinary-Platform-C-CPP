#ifndef ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H
#define ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H
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
typedef struct AllBinarySensor AllBinarySensor;
#include "org/allbinary/input/AllBinarySensor.h"

typedef struct NoAllBinarySensor NoAllBinarySensor;
struct NoAllBinarySensor {
    AllBinarySensor base;
};


NoAllBinarySensor* NoAllBinarySensor_new(void);

NoAllBinarySensor* NoAllBinarySensor_getInstance(void);

void NoAllBinarySensor_init(NoAllBinarySensor* this);
#define NoAllBinarySensor_new0 NoAllBinarySensor_new
#define NoAllBinarySensor_init0 NoAllBinarySensor_init
#ifndef NoAllBinarySensor_update
#define NoAllBinarySensor_update AllBinarySensor_update
#endif
#ifndef NoAllBinarySensor_setMax
#define NoAllBinarySensor_setMax AllBinarySensor_setMax
#endif
#ifndef NoAllBinarySensor_getMax
#define NoAllBinarySensor_getMax AllBinarySensor_getMax
#endif
#ifndef NoAllBinarySensor_getId
#define NoAllBinarySensor_getId AllBinarySensor_getId
#endif
#ifndef NoAllBinarySensor_shutdown
#define NoAllBinarySensor_shutdown AllBinarySensor_shutdown
#endif
#ifndef NoAllBinarySensor_onSensorChange
#define NoAllBinarySensor_onSensorChange AllBinarySensor_onSensorChange
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoAllBinarySensor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoAllBinarySensor_register(void);


#endif // ORG_ALLBINARY_INPUT_NOALLBINARYSENSOR_H
