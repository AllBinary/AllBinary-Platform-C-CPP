#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_H
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
typedef struct BaseTouchInput BaseTouchInput;
typedef struct CommonButtons CommonButtons;
typedef struct TouchButtonLocationHelper TouchButtonLocationHelper;
typedef struct BasicTouchButtonCellPositionFactory BasicTouchButtonCellPositionFactory;
typedef struct TouchButton TouchButton;
typedef struct BasicTouchInputFactory BasicTouchInputFactory;
typedef struct TouchButtonUpResource TouchButtonUpResource;
typedef struct TouchButtonDownResource TouchButtonDownResource;
typedef struct TouchButtonTurnLeftResource TouchButtonTurnLeftResource;
typedef struct TouchButtonTurnRightResource TouchButtonTurnRightResource;
typedef struct LogUtil LogUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct BasicTouchButtonsBuilder BasicTouchButtonsBuilder;
struct BasicTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void);
void BasicTouchButtonsBuilder_init(BasicTouchButtonsBuilder* this);

BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this);
#ifndef BasicTouchButtonsBuilder_toString
#define BasicTouchButtonsBuilder_toString BaseTouchInput_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicTouchButtonsBuilder_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicTouchButtonsBuilder_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONSBUILDER_H
