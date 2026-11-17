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
#include "org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h"

typedef struct Usb Usb;
struct Usb {
    HardwareComponentInterface HardwareComponentInterface_interface;
    UsbInterface UsbInterface_interface;
    const char* data;
};


Usb* Usb_new(const char* data);

void Usb_init(Usb* this, const char* data);
bool Usb_compareTo(Usb* this, HardwareComponentInterface* componentInterface);
const char* Usb_toString(Usb* this);

static void Usb_initFields(Usb* this) {
    
}


void Usb_init(Usb* this, const char* data) {
    Usb_initFields(this);
        this->data = data;
}

Usb* Usb_new(const char* data) {
    Usb* this = calloc(1, sizeof(Usb));
    Usb_init(this, data);
    return this;
}


bool Usb_compareTo(Usb* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Usb_toString(Usb* this) {
        return this->data;
}

