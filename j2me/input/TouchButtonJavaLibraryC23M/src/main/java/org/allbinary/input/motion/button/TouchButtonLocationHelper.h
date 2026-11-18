#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
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
typedef struct CommonButtons CommonButtons;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct StringMaker StringMaker;

typedef struct TouchButtonLocationHelper TouchButtonLocationHelper;
struct TouchButtonLocationHelper {
    int32_t totalColumns;
    int32_t totalRows;
    int32_t columnsRemainder;
    int32_t rowsRemainder;
    int32_t columnsRemainderHalf;
    int32_t rowsRemainderHalf;
};


TouchButtonLocationHelper* TouchButtonLocationHelper_new(void);

void TouchButtonLocationHelper_init(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getTotalColumns(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getTotalRows(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getColumnsRemainder(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getRowsRemainder(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getColumnsRemainderHalf(TouchButtonLocationHelper* this);

int32_t TouchButtonLocationHelper_getRowsRemainderHalf(TouchButtonLocationHelper* this);

const char* TouchButtonLocationHelper_toString(TouchButtonLocationHelper* this);
#define TouchButtonLocationHelper_new0 TouchButtonLocationHelper_new
#define TouchButtonLocationHelper_init0 TouchButtonLocationHelper_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonLocationHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonLocationHelper_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONLOCATIONHELPER_H
