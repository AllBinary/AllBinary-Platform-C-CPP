#ifndef ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H
#define ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H
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
// package org.allbinary.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryVibrationME AllBinaryVibrationME;
typedef struct AllBinaryNoVibration AllBinaryNoVibration;
typedef struct GameConfigurationCentral GameConfigurationCentral;
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AllBinaryVibration AllBinaryVibration;
struct AllBinaryVibration {
    AllBinaryVibrationME base;
};


AllBinaryVibration* AllBinaryVibration_new(void);

void AllBinaryVibration_init(AllBinaryVibration* this);

AllBinaryVibrationME* AllBinaryVibration_getInstance(void);

void AllBinaryVibration_initMethod(void);

void AllBinaryVibration_vibrate(AllBinaryVibration* this, int32_t duration, int32_t type, int32_t volume);
#define AllBinaryVibration_new0 AllBinaryVibration_new
#define AllBinaryVibration_init0 AllBinaryVibration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryVibration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryVibration_register(void);


#endif // ORG_ALLBINARY_MEDIA_ALLBINARYVIBRATION_H
