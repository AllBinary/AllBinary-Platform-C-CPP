#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
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
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct SmallBasicColorCacheFactory SmallBasicColorCacheFactory;
struct SmallBasicColorCacheFactory {
    int32_t SIZE;
    int32_t* INDEX_TO_COLOR;
    BasicColor** BASIC_COLOR_ARRAY;
    int32_t colorIndex;
};


SmallBasicColorCacheFactory* SmallBasicColorCacheFactory_new(void);

SmallBasicColorCacheFactory* SmallBasicColorCacheFactory_getInstance(void);

void SmallBasicColorCacheFactory_init(SmallBasicColorCacheFactory* this);

void SmallBasicColorCacheFactory_add(SmallBasicColorCacheFactory* this, BasicColor* basicDefaultColor);

BasicColor* SmallBasicColorCacheFactory_getAndOrCreate(SmallBasicColorCacheFactory* this, int32_t colorAsInt);
#define SmallBasicColorCacheFactory_new0 SmallBasicColorCacheFactory_new
#define SmallBasicColorCacheFactory_init0 SmallBasicColorCacheFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SmallBasicColorCacheFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SmallBasicColorCacheFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_SMALLBASICCOLORCACHEFACTORY_H
