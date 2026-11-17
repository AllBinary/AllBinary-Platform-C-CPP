/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.emulator.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TrueTypeFontUtilBase TrueTypeFontUtilBase;
struct TrueTypeFontUtilBase {
    char unused;
};


TrueTypeFontUtilBase* TrueTypeFontUtilBase_new(int32_t scale);

void TrueTypeFontUtilBase_init(TrueTypeFontUtilBase* this, int32_t scale);
int32_t TrueTypeFontUtilBase_getAsTextureSize(TrueTypeFontUtilBase* this, int32_t textureSize);
int32_t TrueTypeFontUtilBase_getCellSize(TrueTypeFontUtilBase* this, int32_t cellSize);


void TrueTypeFontUtilBase_init(TrueTypeFontUtilBase* this, int32_t scale) {
}

TrueTypeFontUtilBase* TrueTypeFontUtilBase_new(int32_t scale) {
    TrueTypeFontUtilBase* this = calloc(1, sizeof(TrueTypeFontUtilBase));
    TrueTypeFontUtilBase_init(this, scale);
    return this;
}


int32_t TrueTypeFontUtilBase_getAsTextureSize(TrueTypeFontUtilBase* this, int32_t textureSize) {
        return -1;
}


int32_t TrueTypeFontUtilBase_getCellSize(TrueTypeFontUtilBase* this, int32_t cellSize) {
        return -1;
}

