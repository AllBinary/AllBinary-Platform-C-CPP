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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct AllBinarySensorManager AllBinarySensorManager;
struct AllBinarySensorManager {
    const char* ORIENTATION_SENSOR_INPUT;
    const char* ORIENTATION_TYPE;
    BasicArrayList* list;
};

static Any* AllBinarySensorManager_instance;

AllBinarySensorManager* AllBinarySensorManager_new(void);
AllBinarySensorManager* AllBinarySensorManager_getInstance(void);

void AllBinarySensorManager_init(AllBinarySensorManager* this);
void AllBinarySensorManager_init(AllBinarySensorManager* this);
BasicArrayList* AllBinarySensorManager_getSensorNamesList(AllBinarySensorManager* this);
void AllBinarySensorManager_shutdown(AllBinarySensorManager* this);

// Static fields with runtime initializers: call this once at startup
void AllBinarySensorManager_staticInit(void) {
    AllBinarySensorManager_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void AllBinarySensorManager_initFields(AllBinarySensorManager* this) {
    this->ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";
    this->ORIENTATION_TYPE = "Orientation Type";
    this->list = BasicArrayListD_new();
}


AllBinarySensorManager* AllBinarySensorManager_getInstance(void) {
        if (AllBinarySensorManager_instance == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinarySensorManager_instance = AllBinarySensorManager_new();
        }
        return ((AllBinarySensorManager*) AllBinarySensorManager_instance);
}


void AllBinarySensorManager_init(AllBinarySensorManager* this) {
    AllBinarySensorManager_initFields(this);
}

AllBinarySensorManager* AllBinarySensorManager_new(void) {
    AllBinarySensorManager* this = calloc(1, sizeof(AllBinarySensorManager));
    AllBinarySensorManager_init(this);
    return this;
}


void AllBinarySensorManager_init(AllBinarySensorManager* this) {
}


BasicArrayList* AllBinarySensorManager_getSensorNamesList(AllBinarySensorManager* this) {
        return this->list;
}


void AllBinarySensorManager_shutdown(AllBinarySensorManager* this) {
}

