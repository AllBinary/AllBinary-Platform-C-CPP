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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/cache/BaseCircularPool.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct GPointCircularPool GPointCircularPool;
struct GPointCircularPool {
    BaseCircularPool base;
};


GPointCircularPool* GPointCircularPool_new(int32_t size);

void GPointCircularPool_init(GPointCircularPool* this, int32_t size);


void GPointCircularPool_init(GPointCircularPool* this, int32_t size) {
    BaseCircularPool_init(&this->base);
        this->circularIndexUtil = CircularIndexUtil_createInstance(size);
        this->OBJECT_ARRAY = ((Any**) java_array_new(sizeof(Any*), size));
        for (int32_t index = size - 1; index >= 0; index--) {
            this->OBJECT_ARRAY[index] = CustomGPoint_getInstance3(0, 0);
        }
}

GPointCircularPool* GPointCircularPool_new(int32_t size) {
    GPointCircularPool* this = calloc(1, sizeof(GPointCircularPool));
    GPointCircularPool_init(this, size);
    return this;
}

