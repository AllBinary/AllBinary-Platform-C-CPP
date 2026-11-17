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
// package org.allbinary.layer

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

typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
struct AllBinaryLayerCircularPool {
    BaseCircularPool base;
};


AllBinaryLayerCircularPool* AllBinaryLayerCircularPool_new(void);

void AllBinaryLayerCircularPool_init(AllBinaryLayerCircularPool* this);
void AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool(AllBinaryLayerCircularPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);


void AllBinaryLayerCircularPool_init(AllBinaryLayerCircularPool* this) {
    BaseCircularPool_init(&this->base);
}

AllBinaryLayerCircularPool* AllBinaryLayerCircularPool_new(void) {
    AllBinaryLayerCircularPool* this = calloc(1, sizeof(AllBinaryLayerCircularPool));
    AllBinaryLayerCircularPool_init(this);
    return this;
}


// throws Exception
void AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool(AllBinaryLayerCircularPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
        this->circularIndexUtil = CircularIndexUtil_createInstance(total);
        this->OBJECT_ARRAY = ((Any**) java_array_new(sizeof(Any*), total));
        for (int32_t localIndex = 0; localIndex < total; localIndex++) {
            this->OBJECT_ARRAY[localIndex] = AllBinaryLayerFactoryInterface_getInstance(allbinaryLayerFactoryInterface);
        }
}

