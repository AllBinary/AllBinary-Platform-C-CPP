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
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct VectorCenterGenerator VectorCenterGenerator;
struct VectorCenterGenerator {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int32_t minX;
    int32_t minY;
    int32_t maxX;
    int32_t maxY;
    int32_t dx;
    int32_t dy;
    int32_t width;
    int32_t height;
};


VectorCenterGenerator* VectorCenterGenerator_new(void);

void VectorCenterGenerator_init(VectorCenterGenerator* this);
void VectorCenterGenerator_calculate(VectorCenterGenerator* this, HashMap* hashMap);
void VectorCenterGenerator_transform(VectorCenterGenerator* this, HashMap* hashMap);
static void VectorCenterGenerator_getInstance(VectorCenterGenerator* this, BasicArrayList* pointVector);
BasicArrayList* VectorCenterGenerator_translate(BasicArrayList* list, int32_t x, int32_t y);
int32_t VectorCenterGenerator_getWidth(VectorCenterGenerator* this);
void VectorCenterGenerator_setWidth(VectorCenterGenerator* this, int32_t width);
int32_t VectorCenterGenerator_getHeight(VectorCenterGenerator* this);
void VectorCenterGenerator_setHeight(VectorCenterGenerator* this, int32_t height);

static void VectorCenterGenerator_initFields(VectorCenterGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->minX = Integer_MAX_VALUE;
    this->minY = Integer_MAX_VALUE;
    this->maxX = Integer_MIN_VALUE;
    this->maxY = Integer_MIN_VALUE;
    this->dx = 0;
    this->dy = 0;
    this->width = 0;
    this->height = 0;
}


void VectorCenterGenerator_init(VectorCenterGenerator* this) {
    VectorCenterGenerator_initFields(this);
}

VectorCenterGenerator* VectorCenterGenerator_new(void) {
    VectorCenterGenerator* this = calloc(1, sizeof(VectorCenterGenerator));
    VectorCenterGenerator_init(this);
    return this;
}


// throws Exception
void VectorCenterGenerator_calculate(VectorCenterGenerator* this, HashMap* hashMap) {
        Any** graphicItemArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) HashMap_get(hashMap, graphicItemArray[index]));
            if (GraphicItemInterface_getName(item) == LinesGraphicItem_getStaticName()) {
                VectorCenterGenerator_getInstance(this, JAVA_CALL(GraphicItemInterface_getPointsInterface(item), getPoints));
            }
        }
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat("minX: ", java_string_of(this->minX)), " minY: "), java_string_of(this->minY)), " maxX: "), java_string_of(this->maxX)), " maxY: "), java_string_of(this->maxY)), this, this->commonStrings->GET_INSTANCE);
        VectorCenterGenerator_setWidth(this, this->maxX - this->minX);
        VectorCenterGenerator_setHeight(this, this->maxY - this->minY);
        int32_t max = VectorCenterGenerator_getWidth(this);
        if (VectorCenterGenerator_getHeight(this) > max) {
            max = VectorCenterGenerator_getHeight(this);
        }
        int32_t middle = max / 2;
        CommonLabels* commonLabels = CommonLabels_getInstance();
        const char* s = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), commonLabels->WIDTH_LABEL), appendint, VectorCenterGenerator_getWidth(this)), append, commonLabels->HEIGHT_LABEL), appendint, VectorCenterGenerator_getHeight(this)), append, " max: "), appendint, max), append, " middle: "), appendint, middle), toString);
        LogUtil_putF(this->logUtil, s, this, this->commonStrings->GET_INSTANCE);
        int32_t currentMiddleX = this->minX + VectorCenterGenerator_getWidth(this) / 2;
        int32_t currentMiddleY = this->minY + VectorCenterGenerator_getHeight(this) / 2;
        this->dx = middle - currentMiddleX;
        this->dy = middle - currentMiddleY;
}


// throws Exception
void VectorCenterGenerator_transform(VectorCenterGenerator* this, HashMap* hashMap) {
        VectorCenterGenerator_calculate(this, hashMap);
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), " dx: "), appendint, this->dx), append, " dy: "), appendint, this->dy), toString), this, this->commonStrings->GET_INSTANCE);
        Any** graphicItemArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) HashMap_get(hashMap, graphicItemArray[index]));
            BasicArrayList* list = VectorCenterGenerator_translate(JAVA_CALL(GraphicItemInterface_getPointsInterface(item), getPoints), this->dx, this->dy);
            Points* newPoints = Points_new();
            Points_addPoints(newPoints, list);
            GraphicItemInterface_setPointsInterface(item, newPoints);
        }
}


// throws Exception
static void VectorCenterGenerator_getInstance(VectorCenterGenerator* this, BasicArrayList* pointVector) {
        JAVA_TRY {
            int32_t size = BasicArrayList_size(pointVector);
            for (int32_t index = 0; index < size; index++) {
                GPoint* point = ((GPoint*) BasicArrayList_get(pointVector, index));
                if (GPoint_getX(point) < this->minX) {
                    this->minX = GPoint_getX(point);
                }
                if (GPoint_getX(point) > this->maxX) {
                    this->maxX = GPoint_getX(point);
                }
                if (GPoint_getY(point) < this->minY) {
                    this->minY = GPoint_getY(point);
                }
                if (GPoint_getY(point) > this->maxY) {
                    this->maxY = GPoint_getY(point);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
BasicArrayList* VectorCenterGenerator_translate(BasicArrayList* list, int32_t x, int32_t y) {
        BasicGraphicsPipeline* graphicsPipe = BasicGraphicsPipeline_new(list);
        BasicGraphicsPipeline_createMatrix(graphicsPipe);
        BasicGraphicsPipeline_translate(graphicsPipe, x, y);
        return BasicGraphicsPipeline_getMatrix(graphicsPipe);
}


int32_t VectorCenterGenerator_getWidth(VectorCenterGenerator* this) {
        return this->width;
}


void VectorCenterGenerator_setWidth(VectorCenterGenerator* this, int32_t width) {
        this->width = width;
}


int32_t VectorCenterGenerator_getHeight(VectorCenterGenerator* this) {
        return this->height;
}


void VectorCenterGenerator_setHeight(VectorCenterGenerator* this, int32_t height) {
        this->height = height;
}

