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
#include "org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"

typedef struct HardDriveController HardDriveController;
struct HardDriveController {
    HardwareComponentInterface HardwareComponentInterface_interface;
    HardDriveControllerInterface HardDriveControllerInterface_interface;
    const char* data;
};


HardDriveController* HardDriveController_new(const char* data);

void HardDriveController_init(HardDriveController* this, const char* data);
bool HardDriveController_compareTo(HardDriveController* this, HardwareComponentInterface* componentInterface);
const char* HardDriveController_toString(HardDriveController* this);

static void HardDriveController_initFields(HardDriveController* this) {
    
}


void HardDriveController_init(HardDriveController* this, const char* data) {
    HardDriveController_initFields(this);
        this->data = data;
}

HardDriveController* HardDriveController_new(const char* data) {
    HardDriveController* this = calloc(1, sizeof(HardDriveController));
    HardDriveController_init(this, data);
    return this;
}


bool HardDriveController_compareTo(HardDriveController* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* HardDriveController_toString(HardDriveController* this) {
        return this->data;
}

