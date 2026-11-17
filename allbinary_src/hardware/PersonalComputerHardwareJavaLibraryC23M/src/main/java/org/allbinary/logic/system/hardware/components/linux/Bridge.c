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
#include "org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"

typedef struct Bridge Bridge;
struct Bridge {
    HardwareComponentInterface HardwareComponentInterface_interface;
    BridgeInterface BridgeInterface_interface;
    const char* data;
};


Bridge* Bridge_new(const char* data);

void Bridge_init(Bridge* this, const char* data);
bool Bridge_compareTo(Bridge* this, HardwareComponentInterface* componentInterface);
const char* Bridge_toString(Bridge* this);

static void Bridge_initFields(Bridge* this) {
    
}


void Bridge_init(Bridge* this, const char* data) {
    Bridge_initFields(this);
        this->data = data;
}

Bridge* Bridge_new(const char* data) {
    Bridge* this = calloc(1, sizeof(Bridge));
    Bridge_init(this, data);
    return this;
}


bool Bridge_compareTo(Bridge* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Bridge_toString(Bridge* this) {
        return this->data;
}

