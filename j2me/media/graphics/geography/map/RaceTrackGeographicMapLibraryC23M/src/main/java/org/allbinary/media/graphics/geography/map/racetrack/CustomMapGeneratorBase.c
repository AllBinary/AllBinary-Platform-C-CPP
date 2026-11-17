/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct CustomMapGeneratorBase CustomMapGeneratorBase;
struct CustomMapGeneratorBase {
    char unused;
};


CustomMapGeneratorBase* CustomMapGeneratorBase_new(void);
void CustomMapGeneratorBase_copyMapIntoCustomMap(CustomMapGeneratorBase* this);
int32_t** CustomMapGeneratorBase_getCustomMapArray(CustomMapGeneratorBase* this);
int32_t CustomMapGeneratorBase_getCustomType(CustomMapGeneratorBase* this, int32_t column, int32_t row, int32_t currentType);

void CustomMapGeneratorBase_init(CustomMapGeneratorBase* this) {
}

CustomMapGeneratorBase* CustomMapGeneratorBase_new(void) {
    CustomMapGeneratorBase* this = calloc(1, sizeof(CustomMapGeneratorBase));
    CustomMapGeneratorBase_init(this);
    return this;
}


// throws Exception
void CustomMapGeneratorBase_copyMapIntoCustomMap(CustomMapGeneratorBase* this) {
}


int32_t** CustomMapGeneratorBase_getCustomMapArray(CustomMapGeneratorBase* this) {
        return NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
}


// throws Exception
int32_t CustomMapGeneratorBase_getCustomType(CustomMapGeneratorBase* this, int32_t column, int32_t row, int32_t currentType) {
        return -1;
}

