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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct RootTransformInfoData RootTransformInfoData;
struct RootTransformInfoData {
    char unused;
};

const char* RootTransformInfoData_NAME = "ROOT_TRANSFORM_INFO_NAME";

RootTransformInfoData* RootTransformInfoData_new(void);

void RootTransformInfoData_init(RootTransformInfoData* this);


void RootTransformInfoData_init(RootTransformInfoData* this) {
}

RootTransformInfoData* RootTransformInfoData_new(void) {
    RootTransformInfoData* this = calloc(1, sizeof(RootTransformInfoData));
    RootTransformInfoData_init(this);
    return this;
}

