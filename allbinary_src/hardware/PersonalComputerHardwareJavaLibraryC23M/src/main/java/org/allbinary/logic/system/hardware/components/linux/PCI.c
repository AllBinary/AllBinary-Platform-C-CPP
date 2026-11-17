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
#include "org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h"

typedef struct PCI PCI;
struct PCI {
    HardwareComponentInterface HardwareComponentInterface_interface;
    VideoInterface VideoInterface_interface;
    const char* data;
};


PCI* PCI_new(const char* data);

void PCI_init(PCI* this, const char* data);
bool PCI_compareTo(PCI* this, HardwareComponentInterface* componentInterface);
const char* PCI_toString(PCI* this);

static void PCI_initFields(PCI* this) {
    
}


void PCI_init(PCI* this, const char* data) {
    PCI_initFields(this);
        this->data = data;
}

PCI* PCI_new(const char* data) {
    PCI* this = calloc(1, sizeof(PCI));
    PCI_init(this, data);
    return this;
}


bool PCI_compareTo(PCI* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* PCI_toString(PCI* this) {
        return this->data;
}

