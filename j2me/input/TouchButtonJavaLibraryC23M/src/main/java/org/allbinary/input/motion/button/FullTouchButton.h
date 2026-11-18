#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H
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
typedef struct TouchButton TouchButton;
typedef struct TouchButtonInput TouchButtonInput;
typedef struct TouchButtonResource TouchButtonResource;
typedef struct Animation Animation;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct CellPosition CellPosition;
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
#include "org/allbinary/input/motion/button/TouchButton.h"

typedef struct FullTouchButton FullTouchButton;
struct FullTouchButton {
    TouchButton base;
};


FullTouchButton* FullTouchButton_new(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

FullTouchButton* FullTouchButton_createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void FullTouchButton_init(FullTouchButton* this, TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void FullTouchButton_updateRectangle(FullTouchButton* this);
#define FullTouchButton_new7 FullTouchButton_new
#define FullTouchButton_init7 FullTouchButton_init
#ifndef FullTouchButton_paint
#define FullTouchButton_paint TouchButton_paint
#endif
#ifndef FullTouchButton_getCellPositionP
#define FullTouchButton_getCellPositionP TouchButton_getCellPositionP
#endif
#ifndef FullTouchButton_getRectangleP
#define FullTouchButton_getRectangleP TouchButton_getRectangleP
#endif
#ifndef FullTouchButton_getTouchButtonInput
#define FullTouchButton_getTouchButtonInput TouchButton_getTouchButtonInput
#endif
#ifndef FullTouchButton_toString
#define FullTouchButton_toString TouchButton_toString
#endif
#ifndef FullTouchButton_paintHint
#define FullTouchButton_paintHint TouchButton_paintHint
#endif
#ifndef FullTouchButton_getCellPosition
#define FullTouchButton_getCellPosition TouchButton_getCellPosition
#endif
#ifndef FullTouchButton_getRectangle
#define FullTouchButton_getRectangle TouchButton_getRectangle
#endif
#ifndef FullTouchButton_setBasicColorP
#define FullTouchButton_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef FullTouchButton_paint
#define FullTouchButton_paint Paintable_paint
#endif
#ifndef FullTouchButton_paintThreed
#define FullTouchButton_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FullTouchButton_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FullTouchButton_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_FULLTOUCHBUTTON_H
