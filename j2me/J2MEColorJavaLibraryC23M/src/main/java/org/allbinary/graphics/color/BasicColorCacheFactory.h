#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#include "java/lang/Integer.h"

typedef struct BasicColorCacheFactory BasicColorCacheFactory;
struct BasicColorCacheFactory {
    ABHashtable* hashtable;
};


BasicColorCacheFactory* BasicColorCacheFactory_new(void);

BasicColorCacheFactory* BasicColorCacheFactory_getInstance(void);

void BasicColorCacheFactory_init(BasicColorCacheFactory* this);

void BasicColorCacheFactory_add(BasicColorCacheFactory* this, BasicColor* basicDefaultColor);

BasicColor* BasicColorCacheFactory_getAndOrCreate(BasicColorCacheFactory* this, int32_t integer);
#define BasicColorCacheFactory_new0 BasicColorCacheFactory_new
#define BasicColorCacheFactory_init0 BasicColorCacheFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorCacheFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColorCacheFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORCACHEFACTORY_H
