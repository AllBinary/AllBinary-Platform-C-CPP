#ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
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
typedef struct Rectangle Rectangle;
typedef struct PointFactory PointFactory;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

typedef struct RectangleFactory RectangleFactory;
struct RectangleFactory {
    char unused;
};

extern Rectangle* RectangleFactory_SINGLETON;
extern Rectangle*** RectangleFactory_ARRAY_OF_ARRAYS;

RectangleFactory* RectangleFactory_new(void);
void RectangleFactory_init(RectangleFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RectangleFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
