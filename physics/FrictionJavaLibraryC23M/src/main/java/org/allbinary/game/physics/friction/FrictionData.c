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
// package org.allbinary.game.physics.friction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FrictionData FrictionData;
struct FrictionData {
    char unused;
};

static constexpr int32_t FrictionData_FRICTION_DENOMINATOR = 100;

FrictionData* FrictionData_new(void);

void FrictionData_init(FrictionData* this);
int32_t FrictionData_getFrictionDenominator(void);


void FrictionData_init(FrictionData* this) {
}

FrictionData* FrictionData_new(void) {
    FrictionData* this = calloc(1, sizeof(FrictionData));
    FrictionData_init(this);
    return this;
}


int32_t FrictionData_getFrictionDenominator(void) {
        return FrictionData_FRICTION_DENOMINATOR;
}

