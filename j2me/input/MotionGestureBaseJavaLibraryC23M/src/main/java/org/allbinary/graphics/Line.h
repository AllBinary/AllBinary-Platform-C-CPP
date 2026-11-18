#ifndef ORG_ALLBINARY_GRAPHICS_LINE_H
#define ORG_ALLBINARY_GRAPHICS_LINE_H
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
typedef struct PointFactory PointFactory;
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif

typedef struct Line Line;
struct Line {
    GPoint* p1;
    GPoint* p2;
    double deltaX;
    double deltaY;
};


Line* Line_new(GPoint* p1, GPoint* p2);

void Line_init(Line* this, GPoint* p1, GPoint* p2);

double Line_getGradient(Line* this);


double Line_getDeltaX(Line* this);

double Line_getDeltaY(Line* this);

GPoint* Line_getP1(Line* this);

GPoint* Line_getP2(Line* this);

void Line_setP1(Line* this, GPoint* p1);

void Line_setP2(Line* this, GPoint* p2);
#define Line_new2 Line_new
#define Line_init2 Line_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Line_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Line_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_LINE_H
