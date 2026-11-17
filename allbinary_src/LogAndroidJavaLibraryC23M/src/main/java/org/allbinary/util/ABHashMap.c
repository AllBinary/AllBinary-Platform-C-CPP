/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"

typedef struct ABHashMap ABHashMap;
struct ABHashMap {
    HashMap base;
};


ABHashMap* ABHashMap_new(void);

void ABHashMap_init(ABHashMap* this) {
    HashMap_init(&this->base);
}

ABHashMap* ABHashMap_new(void) {
    ABHashMap* this = calloc(1, sizeof(ABHashMap));
    ABHashMap_init(this);
    return this;
}

