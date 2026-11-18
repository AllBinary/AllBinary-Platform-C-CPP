#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
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
typedef struct TouchButtonInput TouchButtonInput;
typedef struct TouchButtonResource TouchButtonResource;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct CellPosition CellPosition;
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct Paintable Paintable;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/graphics/CellPosition.h")
#include "org/allbinary/graphics/CellPosition.h"
#endif
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

typedef struct TouchButton TouchButton;
struct TouchButton {
    Paintable base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TouchButtonInput* touchButtonInput;
    Animation* animationInterface;
    Animation* hintAnimationInterface;
    Rectangle* rawRectangle;
    int32_t xBorder;
    int32_t yBorder;
    Rectangle* rectangleP;
    CellPosition* cellPositionP;
    int32_t animationX;
    int32_t animationY;
    int32_t hintAnimationY;
};


TouchButton* TouchButton_new(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

TouchButton* TouchButton_createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void TouchButton_init(TouchButton* this, TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void TouchButton_paintHint(TouchButton* this, Graphics* graphics);

void TouchButton_paint(TouchButton* this, Graphics* graphics);

void TouchButton_updateRectangle(TouchButton* this);

CellPosition* TouchButton_getCellPosition(TouchButton* this);

Rectangle* TouchButton_getRectangle(TouchButton* this);

TouchButtonInput* TouchButton_getTouchButtonInput(TouchButton* this);

const char* TouchButton_toString(TouchButton* this);
#define TouchButton_new7 TouchButton_new
#define TouchButton_init7 TouchButton_init
#ifndef TouchButton_setBasicColorP
#define TouchButton_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef TouchButton_paintThreed
#define TouchButton_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButton_register(void);

#if __has_include("org/allbinary/graphics/CellPosition.h")
#include "org/allbinary/graphics/CellPosition.h"
#endif
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTON_H
