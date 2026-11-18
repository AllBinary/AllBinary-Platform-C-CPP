#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
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
typedef struct CellPosition CellPosition;
typedef struct CellPositionFactory CellPositionFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/CellPosition.h")
#include "org/allbinary/graphics/CellPosition.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct BasicTouchButtonCellPositionFactory BasicTouchButtonCellPositionFactory;
struct BasicTouchButtonCellPositionFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CellPosition* TOP_RIGHT;
    CellPosition* TOP_LEFT;
    CellPosition* SECOND_FROM_TOP_LEFT;
    CellPosition* SECOND_FROM_TOP_RIGHT;
    CellPosition* TOP_SECOND_FROM_LEFT;
    CellPosition* TOP_SECOND_FROM_RIGHT;
    CellPosition* BOTTOM_RIGHT;
    CellPosition* BOTTOM_SECOND_FROM_RIGHT;
    CellPosition* SECOND_FROM_BOTTOM_RIGHT;
    CellPosition* THIRD_FROM_BOTTOM_RIGHT;
    CellPosition* FOURTH_FROM_BOTTOM_RIGHT;
    CellPosition* SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT;
    CellPosition* SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT;
    CellPosition* SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT;
    CellPosition* BOTTOM_THIRD_FROM_RIGHT;
    CellPosition* BOTTOM_FOURTH_FROM_RIGHT;
    CellPosition* BOTTOM_SECOND_FROM_LEFT;
    CellPosition* SECOND_FROM_BOTTOM_LEFT;
    CellPosition* THIRD_FROM_BOTTOM_LEFT;
    CellPosition* BOTTOM_LEFT;
    CellPosition* SECOND_FROM_BOTTOM_SECOND_FROM_LEFT;
};


BasicTouchButtonCellPositionFactory* BasicTouchButtonCellPositionFactory_new(void);

void BasicTouchButtonCellPositionFactory_init(BasicTouchButtonCellPositionFactory* this);
#define BasicTouchButtonCellPositionFactory_new0 BasicTouchButtonCellPositionFactory_new
#define BasicTouchButtonCellPositionFactory_init0 BasicTouchButtonCellPositionFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicTouchButtonCellPositionFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicTouchButtonCellPositionFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_H
