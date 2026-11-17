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
// #include "java/util/HashSet.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABHashSet ABHashSet;
struct ABHashSet {
    HashSet base;
};


ABHashSet* ABHashSet_new(void);

void ABHashSet_init(ABHashSet* this) {
    HashSet_init(&this->base);
}

ABHashSet* ABHashSet_new(void) {
    ABHashSet* this = calloc(1, sizeof(ABHashSet));
    ABHashSet_init(this);
    return this;
}

