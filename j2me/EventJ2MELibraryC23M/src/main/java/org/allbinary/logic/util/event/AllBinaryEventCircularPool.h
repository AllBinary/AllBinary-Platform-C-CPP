#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H
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
// package org.allbinary.logic.util.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface;
typedef struct BaseCircularPool BaseCircularPool;
typedef struct CircularIndexUtil CircularIndexUtil;
#include "org/allbinary/logic/util/cache/BaseCircularPool.h"

typedef struct AllBinaryEventCircularPool AllBinaryEventCircularPool;
struct AllBinaryEventCircularPool {
    BaseCircularPool base;
};


AllBinaryEventCircularPool* AllBinaryEventCircularPool_new(int32_t max);

void AllBinaryEventCircularPool_init(AllBinaryEventCircularPool* this, int32_t max);

void AllBinaryEventCircularPool_initAllBinaryEventCircularPool(AllBinaryEventCircularPool* this, AllBinaryEventObjectFactoryInterface* allBinaryEventObjectFactoryInterface);
#define AllBinaryEventCircularPool_new1 AllBinaryEventCircularPool_new
#define AllBinaryEventCircularPool_init1 AllBinaryEventCircularPool_init
#ifndef AllBinaryEventCircularPool_getNextInstance
#define AllBinaryEventCircularPool_getNextInstance BaseCircularPool_getNextInstance
#endif
#ifndef AllBinaryEventCircularPool_getInstance
#define AllBinaryEventCircularPool_getInstance BaseCircularPool_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryEventCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryEventCircularPool_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_ALLBINARYEVENTCIRCULARPOOL_H
