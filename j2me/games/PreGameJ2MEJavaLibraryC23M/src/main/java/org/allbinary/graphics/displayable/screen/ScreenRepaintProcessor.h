#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
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
typedef struct ScreenRepaintUtil ScreenRepaintUtil;
typedef struct Displayable Displayable;
typedef struct Processor Processor;
#if __has_include("javax/microedition/lcdui/Displayable.h")
#include "javax/microedition/lcdui/Displayable.h"
#endif
#include "org/allbinary/canvas/Processor.h"

typedef struct ScreenRepaintProcessor ScreenRepaintProcessor;
struct ScreenRepaintProcessor {
    Processor base;
    Displayable* displayable;
};


ScreenRepaintProcessor* ScreenRepaintProcessor_new(Displayable* displayable);

void ScreenRepaintProcessor_init(ScreenRepaintProcessor* this, Displayable* displayable);

void ScreenRepaintProcessor_process(ScreenRepaintProcessor* this);
#define ScreenRepaintProcessor_new1 ScreenRepaintProcessor_new
#define ScreenRepaintProcessor_init1 ScreenRepaintProcessor_init
#ifndef ScreenRepaintProcessor_getInstance
#define ScreenRepaintProcessor_getInstance Processor_getInstance
#endif
#ifndef ScreenRepaintProcessor_processt
#define ScreenRepaintProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenRepaintProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScreenRepaintProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
