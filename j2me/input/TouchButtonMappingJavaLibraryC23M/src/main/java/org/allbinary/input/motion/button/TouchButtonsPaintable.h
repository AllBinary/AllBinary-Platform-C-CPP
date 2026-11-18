#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H
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
typedef struct TouchButtonFactory TouchButtonFactory;
typedef struct TouchButton TouchButton;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct Paintable Paintable;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/input/motion/button/TouchButtonFactory.h")
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#endif

typedef struct TouchButtonsPaintable TouchButtonsPaintable;
struct TouchButtonsPaintable {
    Paintable base;
    BasicColor* foregroundBasicColor;
    int32_t foregroundColor;
    BasicColorSetUtil* basicSetColorUtil;
    TouchButtonFactory* touchButtonFactory;
};


TouchButtonsPaintable* TouchButtonsPaintable_new(BasicColor* basicColor);

void TouchButtonsPaintable_init(TouchButtonsPaintable* this, BasicColor* basicColor);

void TouchButtonsPaintable_paint(TouchButtonsPaintable* this, Graphics* graphics);
#define TouchButtonsPaintable_new1 TouchButtonsPaintable_new
#define TouchButtonsPaintable_init1 TouchButtonsPaintable_init
#ifndef TouchButtonsPaintable_setBasicColorP
#define TouchButtonsPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef TouchButtonsPaintable_paintThreed
#define TouchButtonsPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsPaintable_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSPAINTABLE_H
