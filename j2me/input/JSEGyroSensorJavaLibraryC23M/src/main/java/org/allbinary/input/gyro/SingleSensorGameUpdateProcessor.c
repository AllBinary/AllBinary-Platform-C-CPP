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
// package org.allbinary.input.gyro

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"

typedef struct SingleSensorGameUpdateProcessor SingleSensorGameUpdateProcessor;
struct SingleSensorGameUpdateProcessor {
    SensorGameUpdateProcessor base;
    Processor* accelerometerSensorUpdateProcessor;
    Processor* gyroSensorUpdateProcessor;
};


SingleSensorGameUpdateProcessor* SingleSensorGameUpdateProcessor_new(void);
void SingleSensorGameUpdateProcessor_process(SingleSensorGameUpdateProcessor* this, Any* anyType);
void SingleSensorGameUpdateProcessor_sendNotifications(SingleSensorGameUpdateProcessor* this, Any* anyType);

static void SingleSensorGameUpdateProcessor_initFields(SingleSensorGameUpdateProcessor* this) {
    this->accelerometerSensorUpdateProcessor = AccelerometerSensorUpdateProcessor_new();
    this->gyroSensorUpdateProcessor = GyroSensorUpdateProcessor_new();
}

void SingleSensorGameUpdateProcessor_init(SingleSensorGameUpdateProcessor* this) {
    SensorGameUpdateProcessor_init(&this->base);
    SingleSensorGameUpdateProcessor_initFields(this);
}

SingleSensorGameUpdateProcessor* SingleSensorGameUpdateProcessor_new(void) {
    SingleSensorGameUpdateProcessor* this = calloc(1, sizeof(SingleSensorGameUpdateProcessor));
    SingleSensorGameUpdateProcessor_init(this);
    return this;
}


// throws Exception
void SingleSensorGameUpdateProcessor_process(SingleSensorGameUpdateProcessor* this, Any* anyType) {
        SingleSensorGameUpdateProcessor_setNoSensors(this);
}


// throws Exception
void SingleSensorGameUpdateProcessor_sendNotifications(SingleSensorGameUpdateProcessor* this, Any* anyType) {
}

