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
// package org.allbinary.business

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DynamicObjectData DynamicObjectData;
struct DynamicObjectData {
    char unused;
};

const char* DynamicObjectData_NAME = "DYNAMICCOMPONENT_NAME";

DynamicObjectData* DynamicObjectData_new(void);

void DynamicObjectData_init(DynamicObjectData* this);


void DynamicObjectData_init(DynamicObjectData* this) {
}

DynamicObjectData* DynamicObjectData_new(void) {
    DynamicObjectData* this = calloc(1, sizeof(DynamicObjectData));
    DynamicObjectData_init(this);
    return this;
}

