#ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLE_H
#define ORG_ALLBINARY_GRAPHICS_RECTANGLE_H
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
typedef struct GPoint GPoint;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

typedef struct Rectangle Rectangle;
struct Rectangle {
    GPoint* point;
    int32_t width;
    int32_t height;
};


Rectangle* Rectangle_new(GPoint* point, int32_t width, int32_t height);

void Rectangle_init(Rectangle* this, GPoint* point, int32_t width, int32_t height);

GPoint* Rectangle_getPoint(Rectangle* this);

void Rectangle_setPoint(Rectangle* this, GPoint* point);

int32_t Rectangle_getMaxX(Rectangle* this);

int32_t Rectangle_getMaxY(Rectangle* this);

int32_t Rectangle_getWidth(Rectangle* this);

void Rectangle_setWidth(Rectangle* this, int32_t width);

int32_t Rectangle_getHeight(Rectangle* this);

void Rectangle_setHeight(Rectangle* this, int32_t height);

const char* Rectangle_toString(Rectangle* this);
#define Rectangle_new3 Rectangle_new
#define Rectangle_init3 Rectangle_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Rectangle_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Rectangle_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_RECTANGLE_H
