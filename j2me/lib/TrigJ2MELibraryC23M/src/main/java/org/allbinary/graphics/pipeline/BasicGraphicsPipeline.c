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
// package org.allbinary.graphics.pipeline

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/NoDecimalTrigTable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicGraphicsPipeline BasicGraphicsPipeline;
struct BasicGraphicsPipeline {
    BasicArrayList* pointBasicArrayList;
    NoDecimalTrigTable* noDecimalTrigTable;
};


BasicGraphicsPipeline* BasicGraphicsPipeline_new(BasicArrayList* points);

void BasicGraphicsPipeline_init(BasicGraphicsPipeline* this, BasicArrayList* points);
void BasicGraphicsPipeline_setInitMatrix(BasicGraphicsPipeline* this, BasicArrayList* points);
void BasicGraphicsPipeline_createMatrix(BasicGraphicsPipeline* this);
void BasicGraphicsPipeline_translate(BasicGraphicsPipeline* this, int32_t x, int32_t y);
void BasicGraphicsPipeline_rotateToAngle(BasicGraphicsPipeline* this, Angle* angle);
static void BasicGraphicsPipeline_rotate(BasicGraphicsPipeline* this, int32_t angle);
void BasicGraphicsPipeline_mirror(BasicGraphicsPipeline* this, int32_t width);
BasicArrayList* BasicGraphicsPipeline_getMatrix(BasicGraphicsPipeline* this);

static void BasicGraphicsPipeline_initFields(BasicGraphicsPipeline* this) {
    
    this->noDecimalTrigTable = NoDecimalTrigTable_getInstance();
}


void BasicGraphicsPipeline_init(BasicGraphicsPipeline* this, BasicArrayList* points) {
    BasicGraphicsPipeline_initFields(this);
        this->pointBasicArrayList = points;
}

BasicGraphicsPipeline* BasicGraphicsPipeline_new(BasicArrayList* points) {
    BasicGraphicsPipeline* this = calloc(1, sizeof(BasicGraphicsPipeline));
    BasicGraphicsPipeline_init(this, points);
    return this;
}


void BasicGraphicsPipeline_setInitMatrix(BasicGraphicsPipeline* this, BasicArrayList* points) {
        this->pointBasicArrayList = points;
}


void BasicGraphicsPipeline_createMatrix(BasicGraphicsPipeline* this) {
}


// throws Exception
void BasicGraphicsPipeline_translate(BasicGraphicsPipeline* this, int32_t x, int32_t y) {
        BasicArrayList* newBasicArrayList = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(this->pointBasicArrayList);
        PointFactory* pointFactory = PointFactory_getInstance();
        GPoint* secondPoint = nullptr;
        for (int32_t index = 0; index < size; index++) {
            secondPoint = ((GPoint*) this->pointBasicArrayList->objectArray[index]);
            if (GPoint_getX(secondPoint) != 1000) {
                BasicArrayList_add(newBasicArrayList, PointFactory_createXY(pointFactory, GPoint_getX(secondPoint) + x, GPoint_getY(secondPoint) + y));
            } else {
                BasicArrayList_add(newBasicArrayList, secondPoint);
            }
        }
        this->pointBasicArrayList = newBasicArrayList;
}


// throws Exception
void BasicGraphicsPipeline_rotateToAngle(BasicGraphicsPipeline* this, Angle* angle) {
        BasicGraphicsPipeline_rotate(this, ((int32_t) Angle_getValue(angle)));
}


// throws Exception
static void BasicGraphicsPipeline_rotate(BasicGraphicsPipeline* this, int32_t angle) {
        BasicArrayList* newBasicArrayList = BasicArrayListD_new();
        GPoint* secondPoint = nullptr;
        int64_t y = 0;
        int64_t secondX = 0;
        int64_t secondY = 0;
        GPoint* point = nullptr;
        PointFactory* pointFactory = PointFactory_getInstance();
        int32_t size = BasicArrayList_size(this->pointBasicArrayList);
        int64_t sin = 0;
        int64_t cos = 0;
        for (int32_t index = 0; index < size; index++) {
            secondPoint = ((GPoint*) this->pointBasicArrayList->objectArray[index]);
            if (GPoint_getX(secondPoint) != 1000) {
                sin = NoDecimalTrigTable_sin(this->noDecimalTrigTable, angle);
                cos = NoDecimalTrigTable_cos(this->noDecimalTrigTable, angle);
                y = GPoint_getY(secondPoint) * sin;
                secondX = (GPoint_getX(secondPoint) * cos) - y;
                secondY = (GPoint_getX(secondPoint) * sin) + (GPoint_getY(secondPoint) * cos);
                point = PointFactory_createXY(pointFactory, ((int32_t) secondX) / 10000, ((int32_t) secondY) / 10000);
                BasicArrayList_add(newBasicArrayList, point);
            } else {
                BasicArrayList_add(newBasicArrayList, secondPoint);
            }
        }
        this->pointBasicArrayList = newBasicArrayList;
}


// throws Exception
void BasicGraphicsPipeline_mirror(BasicGraphicsPipeline* this, int32_t width) {
        PointFactory* pointFactory = PointFactory_getInstance();
        int32_t halfWidth = (width >> 1);
        BasicArrayList* newBasicArrayList = BasicArrayListD_new();
        GPoint* secondPoint = nullptr;
        int32_t newX = 0;
        GPoint* point = nullptr;
        int32_t size = BasicArrayList_size(this->pointBasicArrayList);
        for (int32_t index = 0; index < size; index++) {
            secondPoint = ((GPoint*) this->pointBasicArrayList->objectArray[index]);
            if (GPoint_getX(secondPoint) != 1000) {
                newX = 0;
                if (GPoint_getX(secondPoint) > halfWidth) {
                    newX = halfWidth - (GPoint_getX(secondPoint) - halfWidth);
                } else {
                    newX = halfWidth + (halfWidth - GPoint_getX(secondPoint));
                }
                point = PointFactory_createXY(pointFactory, newX, GPoint_getY(secondPoint));
                BasicArrayList_add(newBasicArrayList, point);
            } else {
                BasicArrayList_add(newBasicArrayList, secondPoint);
            }
        }
        this->pointBasicArrayList = newBasicArrayList;
}


BasicArrayList* BasicGraphicsPipeline_getMatrix(BasicGraphicsPipeline* this) {
        return this->pointBasicArrayList;
}

