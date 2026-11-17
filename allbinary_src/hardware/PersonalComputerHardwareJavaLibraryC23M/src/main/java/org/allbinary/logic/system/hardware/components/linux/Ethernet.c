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
#include "org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"

typedef struct Ethernet Ethernet;
struct Ethernet {
    HardwareComponentInterface HardwareComponentInterface_interface;
    EthernetInterface EthernetInterface_interface;
    const char* data;
};


Ethernet* Ethernet_new(const char* data);

void Ethernet_init(Ethernet* this, const char* data);
bool Ethernet_compareTo(Ethernet* this, HardwareComponentInterface* componentInterface);
const char* Ethernet_toString(Ethernet* this);

static void Ethernet_initFields(Ethernet* this) {
    
}


void Ethernet_init(Ethernet* this, const char* data) {
    Ethernet_initFields(this);
        this->data = data;
}

Ethernet* Ethernet_new(const char* data) {
    Ethernet* this = calloc(1, sizeof(Ethernet));
    Ethernet_init(this, data);
    return this;
}


bool Ethernet_compareTo(Ethernet* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Ethernet_toString(Ethernet* this) {
        return this->data;
}

