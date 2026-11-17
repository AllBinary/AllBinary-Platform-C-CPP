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
#include "org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h"

typedef struct Media Media;
struct Media {
    HardwareComponentInterface HardwareComponentInterface_interface;
    MediaInterface MediaInterface_interface;
    const char* data;
};


Media* Media_new(const char* data);

void Media_init(Media* this, const char* data);
bool Media_compareTo(Media* this, HardwareComponentInterface* componentInterface);
const char* Media_toString(Media* this);

static void Media_initFields(Media* this) {
    
}


void Media_init(Media* this, const char* data) {
    Media_initFields(this);
        this->data = data;
}

Media* Media_new(const char* data) {
    Media* this = calloc(1, sizeof(Media));
    Media_init(this, data);
    return this;
}


bool Media_compareTo(Media* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Media_toString(Media* this) {
        return this->data;
}

