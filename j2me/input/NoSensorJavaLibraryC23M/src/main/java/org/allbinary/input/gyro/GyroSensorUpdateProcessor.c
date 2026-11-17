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

typedef struct GyroSensorUpdateProcessor GyroSensorUpdateProcessor;
struct GyroSensorUpdateProcessor {
    Processor base;
};


GyroSensorUpdateProcessor* GyroSensorUpdateProcessor_new(void);
void GyroSensorUpdateProcessor_process(GyroSensorUpdateProcessor* this);

void GyroSensorUpdateProcessor_init(GyroSensorUpdateProcessor* this) {
    Processor_init(&this->base);
}

GyroSensorUpdateProcessor* GyroSensorUpdateProcessor_new(void) {
    GyroSensorUpdateProcessor* this = calloc(1, sizeof(GyroSensorUpdateProcessor));
    GyroSensorUpdateProcessor_init(this);
    return this;
}


// throws Exception
void GyroSensorUpdateProcessor_process(GyroSensorUpdateProcessor* this) {
}

