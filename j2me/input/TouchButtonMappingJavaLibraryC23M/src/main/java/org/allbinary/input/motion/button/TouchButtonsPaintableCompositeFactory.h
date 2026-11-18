#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITEFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITEFACTORY_H
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
typedef struct TouchButtonsPaintableComposite TouchButtonsPaintableComposite;
typedef struct InputMappingInterface InputMappingInterface;
typedef struct BasicColor BasicColor;
typedef struct ProcessPaintable ProcessPaintable;

typedef struct TouchButtonsPaintableCompositeFactory TouchButtonsPaintableCompositeFactory;
struct TouchButtonsPaintableCompositeFactory {
    char unused;
};


TouchButtonsPaintableCompositeFactory* TouchButtonsPaintableCompositeFactory_new(void);
void TouchButtonsPaintableCompositeFactory_init(TouchButtonsPaintableCompositeFactory* this);

ProcessPaintable* TouchButtonsPaintableCompositeFactory_getInstance(InputMappingInterface* inputMappingInterface, BasicColor* basicColor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsPaintableCompositeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsPaintableCompositeFactory_register(void);

#if __has_include("org/allbinary/graphics/paint/ProcessPaintable.h")
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLECOMPOSITEFACTORY_H
