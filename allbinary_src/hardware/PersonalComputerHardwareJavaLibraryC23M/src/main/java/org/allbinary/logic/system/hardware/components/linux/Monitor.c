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
// package org.allbinary.logic.system.hardware.components.linux

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h"

typedef struct Monitor Monitor;
struct Monitor {
    HardwareComponentInterface HardwareComponentInterface_interface;
    MonitorInterface MonitorInterface_interface;
    const char* data;
};


Monitor* Monitor_new(const char* data);

void Monitor_init(Monitor* this, const char* data);
bool Monitor_compareTo(Monitor* this, HardwareComponentInterface* componentInterface);
const char* Monitor_toString(Monitor* this);

static void Monitor_initFields(Monitor* this) {
    
}


void Monitor_init(Monitor* this, const char* data) {
    Monitor_initFields(this);
        this->data = data;
}

Monitor* Monitor_new(const char* data) {
    Monitor* this = calloc(1, sizeof(Monitor));
    Monitor_init(this, data);
    return this;
}


bool Monitor_compareTo(Monitor* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Monitor_toString(Monitor* this) {
        return this->data;
}

