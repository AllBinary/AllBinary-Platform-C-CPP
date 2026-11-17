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

typedef struct CustomizerTransformInfoData CustomizerTransformInfoData;
struct CustomizerTransformInfoData {
    char unused;
};

const char* CustomizerTransformInfoData_NAME = "CUSTOMIZER_TRANSFORM_INFO_NAME";

CustomizerTransformInfoData* CustomizerTransformInfoData_new(void);

void CustomizerTransformInfoData_init(CustomizerTransformInfoData* this);


void CustomizerTransformInfoData_init(CustomizerTransformInfoData* this) {
}

CustomizerTransformInfoData* CustomizerTransformInfoData_new(void) {
    CustomizerTransformInfoData* this = calloc(1, sizeof(CustomizerTransformInfoData));
    CustomizerTransformInfoData_init(this);
    return this;
}

