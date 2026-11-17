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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"

typedef struct AnalogControllerConfigurationFactory AnalogControllerConfigurationFactory;
struct AnalogControllerConfigurationFactory {
    int32_t SCALE_FACTOR;
    int32_t SCALE_VALUE;
    bool available;
    AnalogControllerConfigurationEvent* analogControllerConfigurationEvent;
};

static AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_instance;

AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_new(void);
AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_getInstance(void);

void AnalogControllerConfigurationFactory_init(AnalogControllerConfigurationFactory* this);
bool AnalogControllerConfigurationFactory_isAvailable(AnalogControllerConfigurationFactory* this);
void AnalogControllerConfigurationFactory_setAvailable(AnalogControllerConfigurationFactory* this, bool available);

// Static fields with runtime initializers: call this once at startup
void AnalogControllerConfigurationFactory_staticInit(void) {
    AnalogControllerConfigurationFactory_instance = AnalogControllerConfigurationFactory_new();
}

static void AnalogControllerConfigurationFactory_initFields(AnalogControllerConfigurationFactory* this) {
    this->SCALE_FACTOR = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_FACTOR;
    this->SCALE_VALUE = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_VALUE;
    this->available = false;
    this->analogControllerConfigurationEvent = AnalogControllerConfigurationEvent_new(this);
}


AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_getInstance(void) {
        return AnalogControllerConfigurationFactory_instance;
}


void AnalogControllerConfigurationFactory_init(AnalogControllerConfigurationFactory* this) {
    AnalogControllerConfigurationFactory_initFields(this);
}

AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory_new(void) {
    AnalogControllerConfigurationFactory* this = calloc(1, sizeof(AnalogControllerConfigurationFactory));
    AnalogControllerConfigurationFactory_init(this);
    return this;
}


bool AnalogControllerConfigurationFactory_isAvailable(AnalogControllerConfigurationFactory* this) {
        return this->available;
}


// throws Exception
void AnalogControllerConfigurationFactory_setAvailable(AnalogControllerConfigurationFactory* this, bool available) {
        this->available = available;
        AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler_getInstance(), this->analogControllerConfigurationEvent);
}

