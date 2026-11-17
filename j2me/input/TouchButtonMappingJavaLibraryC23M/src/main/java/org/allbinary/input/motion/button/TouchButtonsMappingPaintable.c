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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TouchButtonsMappingPaintable TouchButtonsMappingPaintable;
struct TouchButtonsMappingPaintable {
    Paintable base;
    LogUtil* logUtil;
    int32_t foregroundColor;
    Paintable*** paintableTable;
    TouchButtonLocationHelper* touchButtonLocationHelper;
};


TouchButtonsMappingPaintable* TouchButtonsMappingPaintable_new(BasicColor* basicColor);

void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this, BasicColor* basicColor);
static void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this);
static Paintable*** TouchButtonsMappingPaintable_createPaintableTable(TouchButtonsMappingPaintable* this);
void TouchButtonsMappingPaintable_paint(TouchButtonsMappingPaintable* this, Graphics* graphics);

static void TouchButtonsMappingPaintable_initFields(TouchButtonsMappingPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->paintableTable = ((Paintable***) java_array_new2(sizeof(Paintable*), 0, 0));
    this->touchButtonLocationHelper = TouchButtonLocationHelper_new();
}


void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this, BasicColor* basicColor) {
    Paintable_init(&this->base);
    TouchButtonsMappingPaintable_initFields(this);
        this->foregroundColor = BasicColor_intValue(basicColor);
        TouchButtonsMappingPaintable_init(this);
}

TouchButtonsMappingPaintable* TouchButtonsMappingPaintable_new(BasicColor* basicColor) {
    TouchButtonsMappingPaintable* this = calloc(1, sizeof(TouchButtonsMappingPaintable));
    TouchButtonsMappingPaintable_init(this, basicColor);
    return this;
}


static void TouchButtonsMappingPaintable_init(TouchButtonsMappingPaintable* this) {
        JAVA_TRY {
            this->paintableTable = TouchButtonsMappingPaintable_createPaintableTable(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "updateRectangle", e);
        } JAVA_END_TRY;
}


// throws Exception
static Paintable*** TouchButtonsMappingPaintable_createPaintableTable(TouchButtonsMappingPaintable* this) {
        int32_t totalColumns = TouchButtonLocationHelper_getTotalColumns(this->touchButtonLocationHelper);
        int32_t totalRows = TouchButtonLocationHelper_getTotalRows(this->touchButtonLocationHelper);
        Paintable*** paintableTable = ((Paintable***) java_array_new2(sizeof(Paintable*), totalColumns, totalRows));
        CellPositionFactory* cellPositionFactory = CellPositionFactory_getInstance();
        CommonButtons* commonButtons = CommonButtons_getInstance();
        for (int32_t index = totalColumns - 1; index >= 0; index--) {
            for (int32_t rowIndex = totalRows - 1; rowIndex >= 0; rowIndex--) {
                this->paintableTable[index][rowIndex] = TouchButton_createButton(BasicTouchInputFactory_getInstance()->NONE, TouchButtonBlankResource_getInstance(), commonButtons->NORMAL_BUTTON, CellPositionFactory_getInstanceColRow(cellPositionFactory, index, rowIndex), TouchButtonLocationHelper_getColumnsRemainderHalf(this->touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(this->touchButtonLocationHelper));
            }
        }
        return paintableTable;
}


void TouchButtonsMappingPaintable_paint(TouchButtonsMappingPaintable* this, Graphics* graphics) {
        int32_t totalColumns = TouchButtonLocationHelper_getTotalColumns(this->touchButtonLocationHelper);
        int32_t totalRows = TouchButtonLocationHelper_getTotalRows(this->touchButtonLocationHelper);
        for (int32_t index = totalColumns - 1; index >= 0; index--) {
            for (int32_t rowIndex = totalRows - 1; rowIndex >= 0; rowIndex--) {
                JAVA_CALL(this->paintableTable[index][rowIndex], paint, graphics);
            }
        }
}

