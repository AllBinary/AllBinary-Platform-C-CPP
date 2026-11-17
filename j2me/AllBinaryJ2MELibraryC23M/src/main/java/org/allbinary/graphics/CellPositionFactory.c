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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CellPositionFactory CellPositionFactory;
struct CellPositionFactory {
    LogUtil* logUtil;
    CellPosition* NONE;
    CellPosition*** cellPositionArray;
    int32_t columns;
    int32_t rows;
};

static CellPositionFactory* CellPositionFactory_SINGLETON;

CellPositionFactory* CellPositionFactory_new(void);
CellPositionFactory* CellPositionFactory_getInstance(void);

void CellPositionFactory_init(CellPositionFactory* this);
void CellPositionFactory_init(CellPositionFactory* this, int32_t columns, int32_t rows);
CellPosition* CellPositionFactory_getInstanceColRow(CellPositionFactory* this, int32_t i_column, int32_t i_row);
CellPosition* CellPositionFactory_createInstance(CellPositionFactory* this, int32_t i_column, int32_t i_row);
int32_t CellPositionFactory_getColumns(CellPositionFactory* this);
int32_t CellPositionFactory_getRows(CellPositionFactory* this);

// Static fields with runtime initializers: call this once at startup
void CellPositionFactory_staticInit(void) {
    CellPositionFactory_SINGLETON = CellPositionFactory_new();
}

static void CellPositionFactory_initFields(CellPositionFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->NONE = CellPosition_new(-1, -1, -1, -1);
    this->cellPositionArray = ((CellPosition***) java_array_new2(sizeof(CellPosition*), 0, 0));
    this->columns = 0;
    this->rows = 0;
}


CellPositionFactory* CellPositionFactory_getInstance(void) {
        return CellPositionFactory_SINGLETON;
}


void CellPositionFactory_init(CellPositionFactory* this) {
    CellPositionFactory_initFields(this);
}

CellPositionFactory* CellPositionFactory_new(void) {
    CellPositionFactory* this = calloc(1, sizeof(CellPositionFactory));
    CellPositionFactory_init(this);
    return this;
}


void CellPositionFactory_init(CellPositionFactory* this, int32_t columns, int32_t rows) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Init: columns: ");
        StringMaker_appendint(stringBuffer, columns);
        StringMaker_append(stringBuffer, " rows: ");
        StringMaker_appendint(stringBuffer, rows);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, commonStrings->INIT);
        this->cellPositionArray = ((CellPosition***) java_array_new2(sizeof(CellPosition*), columns, rows));
        this->columns = columns;
        this->rows = rows;
        for (int32_t column = 0; column < columns; column++) {
            for (int32_t row = 0; row < rows; row++) {
                CellPositionFactory_createInstance(this, column, row);
            }
        }
}


CellPosition* CellPositionFactory_getInstanceColRow(CellPositionFactory* this, int32_t i_column, int32_t i_row) {
        JAVA_TRY {
            return this->cellPositionArray[i_column][i_row];
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "columns: "), appendint, CellPositionFactory_getColumns(this)), append, " rows: "), appendint, CellPositionFactory_getRows(this)), append, " col: "), appendint, i_column), append, " row: "), appendint, i_row), toString), this, commonStrings->GET_INSTANCE, e);
            return this->NONE;
        } JAVA_END_TRY;
}


CellPosition* CellPositionFactory_createInstance(CellPositionFactory* this, int32_t i_column, int32_t i_row) {
        CellPosition* cellPositionCanBeNull = this->cellPositionArray[i_column][i_row];
        if (cellPositionCanBeNull == nullptr) {
            cellPositionCanBeNull = CellPosition_new(i_column, i_row, this->columns, this->rows);
            this->cellPositionArray[i_column][i_row] = cellPositionCanBeNull;
        }
        return cellPositionCanBeNull;
}


int32_t CellPositionFactory_getColumns(CellPositionFactory* this) {
        return this->columns;
}


int32_t CellPositionFactory_getRows(CellPositionFactory* this) {
        return this->rows;
}

