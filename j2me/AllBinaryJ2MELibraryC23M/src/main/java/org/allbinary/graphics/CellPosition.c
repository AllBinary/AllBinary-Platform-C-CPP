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
#include "org/allbinary/graph/V.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

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

static void CellPosition_initFields(CellPosition* this) {
    
    
    
}


void CellPosition_init(CellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows) {
    V_init(&this->base);
    CellPosition_initFields(this);
        this->column = column;
        this->row = row;
        this->id = (row * columns) + column;
}

CellPosition* CellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows) {
    CellPosition* this = calloc(1, sizeof(CellPosition));
    CellPosition_init(this, column, row, columns, rows);
    return this;
}


int32_t CellPosition_getColumn(CellPosition* this) {
        return this->column;
}


int32_t CellPosition_getRow(CellPosition* this) {
        return this->row;
}


const char* CellPosition_toString(CellPosition* this) {
        return CellPosition_toStringColRow(CellPosition_getColumn(this), CellPosition_getRow(this));
}


const char* CellPosition_toStringCellPosition(CellPosition* basicGeographicMapCellPosition) {
        return CellPosition_toStringColRow(CellPosition_getColumn(basicGeographicMapCellPosition), CellPosition_getRow(basicGeographicMapCellPosition));
}


const char* CellPosition_toStringColRow(int32_t i_column, int32_t i_row) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, commonSeps->PARENTHESIS_OPEN);
        StringMaker_appendint(stringBuffer, i_column);
        StringMaker_append(stringBuffer, commonSeps->COMMA);
        StringMaker_appendint(stringBuffer, i_row);
        StringMaker_append(stringBuffer, commonSeps->PARENTHESIS_CLOSE);
        return StringMaker_toString(stringBuffer);
}


int32_t CellPosition_getId(CellPosition* this) {
        return this->id;
}

