#ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CellPosition CellPosition;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/graphics/CellPosition.h")
#include "org/allbinary/graphics/CellPosition.h"
#endif

typedef struct CellPositionFactory CellPositionFactory;
struct CellPositionFactory {
    LogUtil* logUtil;
    CellPosition* NONE;
    CellPosition*** cellPositionArray;
    int32_t columns;
    int32_t rows;
};


CellPositionFactory* CellPositionFactory_new(void);

CellPositionFactory* CellPositionFactory_getInstance(void);

void CellPositionFactory_init(CellPositionFactory* this);

void CellPositionFactory_initMethod(CellPositionFactory* this, int32_t columns, int32_t rows);

CellPosition* CellPositionFactory_getInstanceColRow(CellPositionFactory* this, int32_t i_column, int32_t i_row);

CellPosition* CellPositionFactory_createInstance(CellPositionFactory* this, int32_t i_column, int32_t i_row);

int32_t CellPositionFactory_getColumns(CellPositionFactory* this);

int32_t CellPositionFactory_getRows(CellPositionFactory* this);
#define CellPositionFactory_new0 CellPositionFactory_new
#define CellPositionFactory_init0 CellPositionFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CellPositionFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CellPositionFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_CELLPOSITIONFACTORY_H
