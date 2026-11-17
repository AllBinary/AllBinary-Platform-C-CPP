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
struct AllBinaryVibrationME {
    char unused;
};


AllBinaryVibrationME* AllBinaryVibrationME_new(void);
void AllBinaryVibrationME_vibrate(AllBinaryVibrationME* this, int32_t duration, int32_t type, int32_t volume);

void AllBinaryVibrationME_init(AllBinaryVibrationME* this) {
}

AllBinaryVibrationME* AllBinaryVibrationME_new(void) {
    AllBinaryVibrationME* this = calloc(1, sizeof(AllBinaryVibrationME));
    AllBinaryVibrationME_init(this);
    return this;
}


void AllBinaryVibrationME_vibrate(AllBinaryVibrationME* this, int32_t duration, int32_t type, int32_t volume) {
}

