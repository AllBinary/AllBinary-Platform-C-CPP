#ifndef ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H
#define ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H
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
typedef struct V V;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
#include "org/allbinary/graph/V.h"

typedef struct CellPosition CellPosition;
struct CellPosition {
    V base;
    int32_t id;
    int32_t column;
    int32_t row;
};


CellPosition* CellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows);

void CellPosition_init(CellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows);

int32_t CellPosition_getColumn(CellPosition* this);

int32_t CellPosition_getRow(CellPosition* this);

const char* CellPosition_toString(CellPosition* this);

const char* CellPosition_toStringCellPosition(CellPosition* basicGeographicMapCellPosition);

const char* CellPosition_toStringColRow(int32_t i_column, int32_t i_row);

int32_t CellPosition_getId(CellPosition* this);
#define CellPosition_new4 CellPosition_new
#define CellPosition_init4 CellPosition_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CellPosition_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CellPosition_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_CELLPOSITION_H
