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
// package org.allbinary.android.input.motion.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct AnalogControllerConfigurationEvent AnalogControllerConfigurationEvent;
struct AnalogControllerConfigurationEvent {
    AllBinaryEventObject base;
};


AnalogControllerConfigurationEvent* AnalogControllerConfigurationEvent_new(Any* anyType);

void AnalogControllerConfigurationEvent_init(AnalogControllerConfigurationEvent* this, Any* anyType);


void AnalogControllerConfigurationEvent_init(AnalogControllerConfigurationEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
}

AnalogControllerConfigurationEvent* AnalogControllerConfigurationEvent_new(Any* anyType) {
    AnalogControllerConfigurationEvent* this = calloc(1, sizeof(AnalogControllerConfigurationEvent));
    AnalogControllerConfigurationEvent_init(this, anyType);
    return this;
}

