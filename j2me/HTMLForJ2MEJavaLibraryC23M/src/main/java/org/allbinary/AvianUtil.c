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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AvianUtil AvianUtil;
struct AvianUtil {
    char unused;
};


AvianUtil* AvianUtil_new(void);
bool AvianUtil_isAvian(void);

void AvianUtil_init(AvianUtil* this) {
}

AvianUtil* AvianUtil_new(void) {
    AvianUtil* this = calloc(1, sizeof(AvianUtil));
    AvianUtil_init(this);
    return this;
}


bool AvianUtil_isAvian(void) {
        return false;
}

