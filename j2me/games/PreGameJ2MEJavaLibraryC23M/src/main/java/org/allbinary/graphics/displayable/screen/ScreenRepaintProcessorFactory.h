#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H
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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ScreenRepaintProcessor ScreenRepaintProcessor;
typedef struct Displayable Displayable;
typedef struct J2MEUtil J2MEUtil;
typedef struct Processor Processor;

typedef struct ScreenRepaintProcessorFactory ScreenRepaintProcessorFactory;
struct ScreenRepaintProcessorFactory {
    char unused;
};


ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_new(void);

ScreenRepaintProcessorFactory* ScreenRepaintProcessorFactory_getInstance(void);

void ScreenRepaintProcessorFactory_init(ScreenRepaintProcessorFactory* this);

Processor* ScreenRepaintProcessorFactory_create(ScreenRepaintProcessorFactory* this, Displayable* displayable);
#define ScreenRepaintProcessorFactory_new0 ScreenRepaintProcessorFactory_new
#define ScreenRepaintProcessorFactory_init0 ScreenRepaintProcessorFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenRepaintProcessorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScreenRepaintProcessorFactory_register(void);

#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSORFACTORY_H
