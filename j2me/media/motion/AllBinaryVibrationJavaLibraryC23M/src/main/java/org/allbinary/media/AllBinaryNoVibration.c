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
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AllBinaryNoVibration AllBinaryNoVibration;
struct AllBinaryNoVibration {
    AllBinaryVibrationME base;
};

AllBinaryVibrationME* AllBinaryNoVibration_NO_VIBRATION;

AllBinaryNoVibration* AllBinaryNoVibration_new(void);
void AllBinaryNoVibration_vibrate(AllBinaryNoVibration* this, int32_t duration, int32_t type, int32_t volume);

// Static fields with runtime initializers: call this once at startup
void AllBinaryNoVibration_staticInit(void) {
    AllBinaryNoVibration_NO_VIBRATION = AllBinaryNoVibration_new();
}

void AllBinaryNoVibration_init(AllBinaryNoVibration* this) {
    AllBinaryVibrationME_init(&this->base);
}

AllBinaryNoVibration* AllBinaryNoVibration_new(void) {
    AllBinaryNoVibration* this = calloc(1, sizeof(AllBinaryNoVibration));
    AllBinaryNoVibration_init(this);
    return this;
}


void AllBinaryNoVibration_vibrate(AllBinaryNoVibration* this, int32_t duration, int32_t type, int32_t volume) {
}

