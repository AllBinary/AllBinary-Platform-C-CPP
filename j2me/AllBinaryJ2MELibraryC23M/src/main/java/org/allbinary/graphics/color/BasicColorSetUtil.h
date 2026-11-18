#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_H
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
typedef struct Graphics Graphics;

typedef struct BasicColorSetUtil BasicColorSetUtil;
struct BasicColorSetUtil {
    char unused;
};


BasicColorSetUtil* BasicColorSetUtil_new(void);

BasicColorSetUtil* BasicColorSetUtil_getInstance(void);

void BasicColorSetUtil_init(BasicColorSetUtil* this);

void BasicColorSetUtil_setBasicColorP(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor);

void BasicColorSetUtil_setBasicColorP3(BasicColorSetUtil* this, Graphics* graphics, BasicColor* basicColor, int32_t value);
#define BasicColorSetUtil_new0 BasicColorSetUtil_new
#define BasicColorSetUtil_init0 BasicColorSetUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorSetUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColorSetUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORSETUTIL_H
