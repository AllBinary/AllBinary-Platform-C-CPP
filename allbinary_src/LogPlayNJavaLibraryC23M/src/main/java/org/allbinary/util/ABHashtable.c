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
// #include "java/util/Hashtable.h"

typedef struct ABHashtable ABHashtable;
struct ABHashtable {
    Hashtable base;
};


ABHashtable* ABHashtable_new(int32_t initialCapacity);

void ABHashtable_init(ABHashtable* this, int32_t initialCapacity);

ABHashtable* ABHashtable_new0();
void ABHashtable_init0(ABHashtable* this);


void ABHashtable_init(ABHashtable* this, int32_t initialCapacity) {
        Hashtable_init(&this->base, initialCapacity);
}

ABHashtable* ABHashtable_new(int32_t initialCapacity) {
    ABHashtable* this = calloc(1, sizeof(ABHashtable));
    ABHashtable_init(this, initialCapacity);
    return this;
}


void ABHashtable_init0(ABHashtable* this) {
        Hashtable_init(&this->base);
}

ABHashtable* ABHashtable_new0(void) {
    ABHashtable* this = calloc(1, sizeof(ABHashtable));
    ABHashtable_init0(this);
    return this;
}

