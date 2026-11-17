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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h"

typedef struct MachineAccessControlAddress MachineAccessControlAddress;
struct MachineAccessControlAddress {
    HardwareComponentInterface HardwareComponentInterface_interface;
    MachineAccessControlAddressInterface MachineAccessControlAddressInterface_interface;
};


MachineAccessControlAddress* MachineAccessControlAddress_new(void);

void MachineAccessControlAddress_init(MachineAccessControlAddress* this);
bool MachineAccessControlAddress_compareTo(MachineAccessControlAddress* this, HardwareComponentInterface* componentInterface);
const char* MachineAccessControlAddress_toString(MachineAccessControlAddress* this);


void MachineAccessControlAddress_init(MachineAccessControlAddress* this) {
}

MachineAccessControlAddress* MachineAccessControlAddress_new(void) {
    MachineAccessControlAddress* this = calloc(1, sizeof(MachineAccessControlAddress));
    MachineAccessControlAddress_init(this);
    return this;
}


bool MachineAccessControlAddress_compareTo(MachineAccessControlAddress* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* MachineAccessControlAddress_toString(MachineAccessControlAddress* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

