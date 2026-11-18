#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLEFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLEFACTORY_H
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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
typedef struct Paintable Paintable;

typedef struct TouchButtonsPaintableFactory TouchButtonsPaintableFactory;
struct TouchButtonsPaintableFactory {
    char unused;
};


TouchButtonsPaintableFactory* TouchButtonsPaintableFactory_new(void);
void TouchButtonsPaintableFactory_init(TouchButtonsPaintableFactory* this);

Paintable* TouchButtonsPaintableFactory_getInstance(BasicColor* basicColor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsPaintableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsPaintableFactory_register(void);

#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLEFACTORY_H
