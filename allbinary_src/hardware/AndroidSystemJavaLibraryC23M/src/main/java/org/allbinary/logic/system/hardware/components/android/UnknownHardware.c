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
// package org.allbinary.logic.system.hardware.components.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"

typedef struct UnknownHardware UnknownHardware;
struct UnknownHardware {
    HardwareComponentInterface HardwareComponentInterface_interface;
    const char* data;
};


UnknownHardware* UnknownHardware_new(const char* data);

void UnknownHardware_init(UnknownHardware* this, const char* data);
bool UnknownHardware_compareTo(UnknownHardware* this, HardwareComponentInterface* componentInterface);
const char* UnknownHardware_toString(UnknownHardware* this);

static void UnknownHardware_initFields(UnknownHardware* this) {
    
}


void UnknownHardware_init(UnknownHardware* this, const char* data) {
    UnknownHardware_initFields(this);
        this->data = data;
}

UnknownHardware* UnknownHardware_new(const char* data) {
    UnknownHardware* this = calloc(1, sizeof(UnknownHardware));
    UnknownHardware_init(this, data);
    return this;
}


bool UnknownHardware_compareTo(UnknownHardware* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* UnknownHardware_toString(UnknownHardware* this) {
        return this->data;
}

