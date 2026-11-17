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
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/string/StringMaker.h"

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

static void TouchButtonLocationHelper_initFields(TouchButtonLocationHelper* this) {
    
    
    
    
    
    
}


void TouchButtonLocationHelper_init(TouchButtonLocationHelper* this) {
    TouchButtonLocationHelper_initFields(this);
        int32_t buttonSize = CommonButtons_getInstance()->STANDARD_BUTTON_SIZE;
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->totalColumns = ((int64_t) llround(((float) DisplayInfoSingleton_getLastWidth(displayInfo)) / ((float) buttonSize)));
        this->totalRows = ((int64_t) llround(((float) DisplayInfoSingleton_getLastHeight(displayInfo)) / ((float) buttonSize)));
        this->columnsRemainder = DisplayInfoSingleton_getLastWidth(displayInfo) % buttonSize;
        this->columnsRemainderHalf = (this->columnsRemainder >> 1);
        this->rowsRemainder = DisplayInfoSingleton_getLastHeight(displayInfo) % buttonSize;
        this->rowsRemainderHalf = (this->rowsRemainder >> 1);
}

TouchButtonLocationHelper* TouchButtonLocationHelper_new(void) {
    TouchButtonLocationHelper* this = calloc(1, sizeof(TouchButtonLocationHelper));
    TouchButtonLocationHelper_init(this);
    return this;
}


int32_t TouchButtonLocationHelper_getTotalColumns(TouchButtonLocationHelper* this) {
        return this->totalColumns;
}


int32_t TouchButtonLocationHelper_getTotalRows(TouchButtonLocationHelper* this) {
        return this->totalRows;
}


int32_t TouchButtonLocationHelper_getColumnsRemainder(TouchButtonLocationHelper* this) {
        return this->columnsRemainder;
}


int32_t TouchButtonLocationHelper_getRowsRemainder(TouchButtonLocationHelper* this) {
        return this->rowsRemainder;
}


int32_t TouchButtonLocationHelper_getColumnsRemainderHalf(TouchButtonLocationHelper* this) {
        return this->columnsRemainderHalf;
}


int32_t TouchButtonLocationHelper_getRowsRemainderHalf(TouchButtonLocationHelper* this) {
        return this->rowsRemainderHalf;
}


const char* TouchButtonLocationHelper_toString(TouchButtonLocationHelper* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "totalColumns: ");
        StringMaker_appendint(stringBuffer, this->totalColumns);
        StringMaker_append(stringBuffer, " totalRows: ");
        StringMaker_appendint(stringBuffer, this->totalRows);
        StringMaker_append(stringBuffer, " columnsRemainder: ");
        StringMaker_appendint(stringBuffer, this->columnsRemainder);
        StringMaker_append(stringBuffer, " rowsRemainder: ");
        StringMaker_appendint(stringBuffer, this->rowsRemainder);
        StringMaker_append(stringBuffer, " columnsRemainderHalf: ");
        StringMaker_appendint(stringBuffer, this->columnsRemainderHalf);
        StringMaker_append(stringBuffer, " rowsRemainderHalf: ");
        StringMaker_appendint(stringBuffer, this->rowsRemainderHalf);
        return StringMaker_toString(stringBuffer);
}

