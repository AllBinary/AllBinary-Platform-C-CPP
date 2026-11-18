#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H
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
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColor BasicColor;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct ColorChangeEvent ColorChangeEvent;
struct ColorChangeEvent {
    AllBinaryEventObject base;
    BasicColor* basicColor;
};


ColorChangeEvent* ColorChangeEvent_new(void* anyType);

void ColorChangeEvent_init(ColorChangeEvent* this, void* anyType);

void ColorChangeEvent_setBasicColorP(ColorChangeEvent* this, BasicColor* basicColor);

BasicColor* ColorChangeEvent_getBasicColorP(ColorChangeEvent* this);
#define ColorChangeEvent_new1 ColorChangeEvent_new
#define ColorChangeEvent_init1 ColorChangeEvent_init
#ifndef ColorChangeEvent_getSource
#define ColorChangeEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef ColorChangeEvent_setSource
#define ColorChangeEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorChangeEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorChangeEvent_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENT_H
