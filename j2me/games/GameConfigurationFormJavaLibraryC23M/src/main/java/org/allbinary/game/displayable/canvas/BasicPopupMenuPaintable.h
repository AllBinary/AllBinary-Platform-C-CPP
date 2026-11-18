#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct AndroidUtil AndroidUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct Animation Animation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct RectangleFilledAnimation RectangleFilledAnimation;
typedef struct Features Features;
typedef struct SWTUtil SWTUtil;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct DrawVerticalStringUtil DrawVerticalStringUtil;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct Paintable Paintable;
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/graphics/draw/DrawVerticalStringUtil.h")
#include "org/allbinary/graphics/draw/DrawVerticalStringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct BasicPopupMenuPaintable BasicPopupMenuPaintable;
struct BasicPopupMenuPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    BasicColorSetUtil* basicSetColorUtil;
    DrawVerticalStringUtil* drawStringUtil;
    const char* label;
    BasicColor* foregroundBasicColor;
    MyFontProcessor* myFontProcessor;
    Rectangle* rectangle;
    int32_t BORDER;
    int32_t heightOffset;
    int32_t offset;
    Animation* animationInterface;
};


BasicPopupMenuPaintable* BasicPopupMenuPaintable_new(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void BasicPopupMenuPaintable_updateMeasurement(BasicPopupMenuPaintable* this, Graphics* graphics);

void BasicPopupMenuPaintable_initMethod(BasicPopupMenuPaintable* this, Rectangle* rectangle);

void BasicPopupMenuPaintable_paint(BasicPopupMenuPaintable* this, Graphics* graphics);
#define BasicPopupMenuPaintable_new3 BasicPopupMenuPaintable_new
#define BasicPopupMenuPaintable_init3 BasicPopupMenuPaintable_init
#ifndef BasicPopupMenuPaintable_setBasicColorP
#define BasicPopupMenuPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef BasicPopupMenuPaintable_paintThreed
#define BasicPopupMenuPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicPopupMenuPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicPopupMenuPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H
