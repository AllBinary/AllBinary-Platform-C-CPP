/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.geological.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GeologicalResource GeologicalResource;
struct GeologicalResource {
    int32_t total;
    int32_t initTotal;
};


GeologicalResource* GeologicalResource_new(int32_t initTotal);

void GeologicalResource_init(GeologicalResource* this, int32_t initTotal);
void GeologicalResource_init(GeologicalResource* this);
void GeologicalResource_add(GeologicalResource* this, int32_t value);
void GeologicalResource_remove(GeologicalResource* this, int32_t value);
int32_t GeologicalResource_getTotal(GeologicalResource* this);
void GeologicalResource_setTotal(GeologicalResource* this, int32_t total);

static void GeologicalResource_initFields(GeologicalResource* this) {
    this->total = 0;
    
}


void GeologicalResource_init(GeologicalResource* this, int32_t initTotal) {
    GeologicalResource_initFields(this);
        this->initTotal = initTotal;
        GeologicalResource_init(this);
}

GeologicalResource* GeologicalResource_new(int32_t initTotal) {
    GeologicalResource* this = calloc(1, sizeof(GeologicalResource));
    GeologicalResource_init(this, initTotal);
    return this;
}


void GeologicalResource_init(GeologicalResource* this) {
        GeologicalResource_setTotal(this, this->initTotal);
}


void GeologicalResource_add(GeologicalResource* this, int32_t value) {
        int32_t max = Integer_MAX_VALUE;
        if (GeologicalResource_getTotal(this) + value > max) {
            GeologicalResource_setTotal(this, max);
        } else {
            GeologicalResource_setTotal(this, GeologicalResource_getTotal(this) + value);
        }
}


void GeologicalResource_remove(GeologicalResource* this, int32_t value) {
        if (GeologicalResource_getTotal(this) - value < 0) {
            GeologicalResource_setTotal(this, 0);
        } else {
            GeologicalResource_setTotal(this, GeologicalResource_getTotal(this) - value);
        }
}


int32_t GeologicalResource_getTotal(GeologicalResource* this) {
        return this->total;
}


void GeologicalResource_setTotal(GeologicalResource* this, int32_t total) {
        this->total = total;
}

