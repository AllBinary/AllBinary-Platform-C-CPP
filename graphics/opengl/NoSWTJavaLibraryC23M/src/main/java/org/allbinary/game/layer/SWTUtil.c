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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SWTUtil SWTUtil;
struct SWTUtil {
    char unused;
};

bool SWTUtil_isSWT = false;
const char* SWTUtil_SWT = "SWT";

SWTUtil* SWTUtil_new(void);

void SWTUtil_init(SWTUtil* this) {
}

SWTUtil* SWTUtil_new(void) {
    SWTUtil* this = calloc(1, sizeof(SWTUtil));
    SWTUtil_init(this);
    return this;
}

