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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"

typedef struct Portion Portion;
struct Portion {
    int32_t current;
    int32_t total;
};


Portion* Portion_new(HashMap* hashMap);

void Portion_init(Portion* this, HashMap* hashMap);
int32_t Portion_getCurrent(Portion* this);
int32_t Portion_getTotal(Portion* this);

static void Portion_initFields(Portion* this) {
    
    
}


void Portion_init(Portion* this, HashMap* hashMap) {
    Portion_initFields(this);
        this->current = ((int32_t) HashMap_get(hashMap, "current"));
        this->total = ((int32_t) HashMap_get(hashMap, "total"));
}

Portion* Portion_new(HashMap* hashMap) {
    Portion* this = calloc(1, sizeof(Portion));
    Portion_init(this, hashMap);
    return this;
}


int32_t Portion_getCurrent(Portion* this) {
        return this->current;
}


int32_t Portion_getTotal(Portion* this) {
        return this->total;
}

