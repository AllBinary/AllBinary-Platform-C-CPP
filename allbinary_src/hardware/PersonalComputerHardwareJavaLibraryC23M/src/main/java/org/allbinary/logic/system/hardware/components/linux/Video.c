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

typedef struct Video Video;
struct Video {
    HardwareComponentInterface HardwareComponentInterface_interface;
    VideoInterface VideoInterface_interface;
    const char* data;
};


Video* Video_new(const char* data);

void Video_init(Video* this, const char* data);
bool Video_compareTo(Video* this, HardwareComponentInterface* componentInterface);
const char* Video_toString(Video* this);

static void Video_initFields(Video* this) {
    
}


void Video_init(Video* this, const char* data) {
    Video_initFields(this);
        this->data = data;
}

Video* Video_new(const char* data) {
    Video* this = calloc(1, sizeof(Video));
    Video_init(this, data);
    return this;
}


bool Video_compareTo(Video* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Video_toString(Video* this) {
        return this->data;
}

