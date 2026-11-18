#ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERCIRCULARPOOL_H
#define ORG_ALLBINARY_LAYER_ALLBINARYLAYERCIRCULARPOOL_H
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
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
typedef struct BaseCircularPool BaseCircularPool;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/logic/util/cache/BaseCircularPool.h"

typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
struct AllBinaryLayerCircularPool {
    BaseCircularPool base;
};


AllBinaryLayerCircularPool* AllBinaryLayerCircularPool_new(void);

void AllBinaryLayerCircularPool_init(AllBinaryLayerCircularPool* this);

void AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool(AllBinaryLayerCircularPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);
#define AllBinaryLayerCircularPool_new0 AllBinaryLayerCircularPool_new
#define AllBinaryLayerCircularPool_init0 AllBinaryLayerCircularPool_init
#ifndef AllBinaryLayerCircularPool_getNextInstance
#define AllBinaryLayerCircularPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef AllBinaryLayerCircularPool_getInstance
#define AllBinaryLayerCircularPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryLayerCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryLayerCircularPool_register(void);


#endif // ORG_ALLBINARY_LAYER_ALLBINARYLAYERCIRCULARPOOL_H
