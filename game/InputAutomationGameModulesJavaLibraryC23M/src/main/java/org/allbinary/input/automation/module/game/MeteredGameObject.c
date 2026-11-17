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
// package org.allbinary.input.automation.module.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/input/automation/module/game/MeteredGameObjectInterface.h"

typedef struct MeteredGameObject MeteredGameObject;
struct MeteredGameObject {
    MeteredGameObjectInterface MeteredGameObjectInterface_interface;
    double* ratios;
    bool good;
    bool dropping;
    int32_t minX;
    int32_t maxX;
    int32_t y;
    int32_t size;
    const char* RATIOS_LABEL;
    const char* IS_GOOD_LABEL;
    const char* IS_DROPPPING_LABEL;
};


MeteredGameObject* MeteredGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);

void MeteredGameObject_init(MeteredGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);
bool MeteredGameObject_isGood(MeteredGameObject* this);
void MeteredGameObject_setGood(MeteredGameObject* this, bool good);
bool MeteredGameObject_isDropping(MeteredGameObject* this);
void MeteredGameObject_setDropping(MeteredGameObject* this, bool dropping);
double* MeteredGameObject_getRatios(MeteredGameObject* this);
const char* MeteredGameObject_toString(MeteredGameObject* this);
void MeteredGameObject_setRatios(MeteredGameObject* this, double* ratios);
int32_t MeteredGameObject_getMinX(MeteredGameObject* this);
void MeteredGameObject_setMinX(MeteredGameObject* this, int32_t minX);
int32_t MeteredGameObject_getMaxX(MeteredGameObject* this);
void MeteredGameObject_setMaxX(MeteredGameObject* this, int32_t maxX);
int32_t MeteredGameObject_getY(MeteredGameObject* this);
void MeteredGameObject_setY(MeteredGameObject* this, int32_t y);
int32_t MeteredGameObject_getSize(MeteredGameObject* this);
void MeteredGameObject_setSize(MeteredGameObject* this, int32_t size);

static void MeteredGameObject_initFields(MeteredGameObject* this) {
    this->ratios = nullptr;
    this->good = false;
    this->dropping = false;
    this->minX = nullptr;
    this->maxX = nullptr;
    this->y = nullptr;
    this->size = nullptr;
    this->RATIOS_LABEL = "Ratios: ";
    this->IS_GOOD_LABEL = "isGood: ";
    this->IS_DROPPPING_LABEL = "isDropping: ";
}


void MeteredGameObject_init(MeteredGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
    MeteredGameObject_initFields(this);
        MeteredGameObject_setRatios(this, ((double*) java_array_new(sizeof(double), java_array_length(bufferedImage))));
        MeteredGameObject_setMinX(this, minX);
        MeteredGameObject_setMaxX(this, maxX);
        MeteredGameObject_setY(this, y);
        MeteredGameObject_setSize(this, maxX - minX);
        for (int32_t index = 0; index < java_array_length(bufferedImage); index++) {
            double nominator = GraphicsAnalysisUtil_getNominator(bufferedImage[index], MeteredGameObject_getMinX(this), MeteredGameObject_getMaxX(this), MeteredGameObject_getY(this));
            MeteredGameObject_getRatios(this)[index] = nominator / MeteredGameObject_getSize(this);
        }
        if (JAVA_CALL(MeteredGameObject_getRatios(this)[java_array_length(bufferedImage) - 1], doubleValue) > 0.93f) {
            MeteredGameObject_setGood(this, true);
        } else {
            MeteredGameObject_setGood(this, false);
        }
        if (JAVA_CALL(MeteredGameObject_getRatios(this)[java_array_length(bufferedImage) - 1], doubleValue) < JAVA_CALL(MeteredGameObject_getRatios(this)[0], doubleValue)) {
            MeteredGameObject_setDropping(this, true);
        } else {
            MeteredGameObject_setDropping(this, false);
        }
}

MeteredGameObject* MeteredGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
    MeteredGameObject* this = calloc(1, sizeof(MeteredGameObject));
    MeteredGameObject_init(this, bufferedImage, minX, maxX, y);
    return this;
}


bool MeteredGameObject_isGood(MeteredGameObject* this) {
        return this->good;
}


void MeteredGameObject_setGood(MeteredGameObject* this, bool good) {
        this->good = good;
}


bool MeteredGameObject_isDropping(MeteredGameObject* this) {
        return this->dropping;
}


void MeteredGameObject_setDropping(MeteredGameObject* this, bool dropping) {
        this->dropping = dropping;
}


double* MeteredGameObject_getRatios(MeteredGameObject* this) {
        return this->ratios;
}


const char* MeteredGameObject_toString(MeteredGameObject* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->RATIOS_LABEL);
        for (int32_t index = 0; index < java_array_length(MeteredGameObject_getRatios(this)); index++) {
            StringMaker_append(stringBuffer, JAVA_CALL(MeteredGameObject_getRatios(this)[index], toString));
            if (index < java_array_length(MeteredGameObject_getRatios(this)) - 1) {
                StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
            }
        }
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->IS_GOOD_LABEL);
        StringMaker_appendboolean(stringBuffer, MeteredGameObject_isGood(this));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->IS_DROPPPING_LABEL);
        StringMaker_appendboolean(stringBuffer, MeteredGameObject_isDropping(this));
        return StringMaker_toString(stringBuffer);
}


void MeteredGameObject_setRatios(MeteredGameObject* this, double* ratios) {
        this->ratios = ratios;
}


int32_t MeteredGameObject_getMinX(MeteredGameObject* this) {
        return this->minX;
}


void MeteredGameObject_setMinX(MeteredGameObject* this, int32_t minX) {
        this->minX = minX;
}


int32_t MeteredGameObject_getMaxX(MeteredGameObject* this) {
        return this->maxX;
}


void MeteredGameObject_setMaxX(MeteredGameObject* this, int32_t maxX) {
        this->maxX = maxX;
}


int32_t MeteredGameObject_getY(MeteredGameObject* this) {
        return this->y;
}


void MeteredGameObject_setY(MeteredGameObject* this, int32_t y) {
        this->y = y;
}


int32_t MeteredGameObject_getSize(MeteredGameObject* this) {
        return this->size;
}


void MeteredGameObject_setSize(MeteredGameObject* this, int32_t size) {
        this->size = size;
}

