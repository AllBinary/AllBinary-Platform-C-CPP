#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
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
typedef struct TouchButtonLocationHelper TouchButtonLocationHelper;
typedef struct CommonButtons CommonButtons;
typedef struct TouchButton TouchButton;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchButtonBlankResource TouchButtonBlankResource;
typedef struct Graphics Graphics;
typedef struct CellPositionFactory CellPositionFactory;
typedef struct BasicColor BasicColor;
typedef struct Paintable Paintable;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonLocationHelper.h")
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#endif

typedef struct TouchButtonsMappingPaintable TouchButtonsMappingPaintable;
struct TouchButtonsMappingPaintable {
    Paintable base;
    LogUtil* logUtil;
    int32_t foregroundColor;
    Paintable*** paintableTable;
    TouchButtonLocationHelper* touchButtonLocationHelper;
};


TouchButtonsMappingPaintable* TouchButtonsMappingPaintable_new(BasicColor* basicColor);

void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this, BasicColor* basicColor);



void TouchButtonsMappingPaintable_paint(TouchButtonsMappingPaintable* this, Graphics* graphics);
#define TouchButtonsMappingPaintable_new1 TouchButtonsMappingPaintable_new
#define TouchButtonsMappingPaintable_init1 TouchButtonsMappingPaintable_init
#ifndef TouchButtonsMappingPaintable_setBasicColorP
#define TouchButtonsMappingPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef TouchButtonsMappingPaintable_paintThreed
#define TouchButtonsMappingPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonsMappingPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonsMappingPaintable_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
