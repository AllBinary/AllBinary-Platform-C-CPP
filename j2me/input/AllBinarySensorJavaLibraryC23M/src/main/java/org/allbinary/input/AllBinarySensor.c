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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/input/AllBinarySensorListener.h"

typedef struct AllBinarySensor AllBinarySensor;
struct AllBinarySensor {
    AllBinarySensorListener AllBinarySensorListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

AllBinarySensor* AllBinarySensor_NULL_ALLBINARY_SENSOR;
static int32_t AllBinarySensor_max = 100;

AllBinarySensor* AllBinarySensor_new(void);

void AllBinarySensor_init(AllBinarySensor* this);
void AllBinarySensor_init(AllBinarySensor* this);
void AllBinarySensor_update(AllBinarySensor* this);
void AllBinarySensor_setMax(int32_t max);
int32_t AllBinarySensor_getMax(void);
int32_t AllBinarySensor_getId(AllBinarySensor* this);
void AllBinarySensor_shutdown(AllBinarySensor* this);
void AllBinarySensor_onSensorChange(AllBinarySensor* this);

// Static fields with runtime initializers: call this once at startup
void AllBinarySensor_staticInit(void) {
    AllBinarySensor_NULL_ALLBINARY_SENSOR = AllBinarySensor_new();
}

static void AllBinarySensor_initFields(AllBinarySensor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void AllBinarySensor_init(AllBinarySensor* this) {
    AllBinarySensor_initFields(this);
}

AllBinarySensor* AllBinarySensor_new(void) {
    AllBinarySensor* this = calloc(1, sizeof(AllBinarySensor));
    AllBinarySensor_init(this);
    return this;
}


void AllBinarySensor_init(AllBinarySensor* this) {
}


// throws Exception
void AllBinarySensor_update(AllBinarySensor* this) {
}


void AllBinarySensor_setMax(int32_t max) {
        AllBinarySensor_max = max;
}


int32_t AllBinarySensor_getMax(void) {
        return AllBinarySensor_max;
}


int32_t AllBinarySensor_getId(AllBinarySensor* this) {
        return AllBinarySensor_getMax();
}


void AllBinarySensor_shutdown(AllBinarySensor* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "shutdown");
}


void AllBinarySensor_onSensorChange(AllBinarySensor* this) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
}

