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

//import org.allbinary.logic.system.hardware.components.interfaces.MediaInterface;
typedef struct Unknown Unknown;
struct Unknown {
    HardwareComponentInterface HardwareComponentInterface_interface;
    const char* data;
};


Unknown* Unknown_new(const char* data);

void Unknown_init(Unknown* this, const char* data);
bool Unknown_compareTo(Unknown* this, HardwareComponentInterface* componentInterface);
const char* Unknown_toString(Unknown* this);

static void Unknown_initFields(Unknown* this) {
    
}


void Unknown_init(Unknown* this, const char* data) {
    Unknown_initFields(this);
        this->data = data;
}

Unknown* Unknown_new(const char* data) {
    Unknown* this = calloc(1, sizeof(Unknown));
    Unknown_init(this, data);
    return this;
}


bool Unknown_compareTo(Unknown* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Unknown_toString(Unknown* this) {
        return this->data;
}

