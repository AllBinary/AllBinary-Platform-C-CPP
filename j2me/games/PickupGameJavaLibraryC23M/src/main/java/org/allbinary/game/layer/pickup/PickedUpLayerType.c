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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PickedUpLayerType PickedUpLayerType;
struct PickedUpLayerType {
    const char* name;
};


PickedUpLayerType* PickedUpLayerType_new(const char* name);

void PickedUpLayerType_init(PickedUpLayerType* this, const char* name);
const char* PickedUpLayerType_toString(PickedUpLayerType* this);

static void PickedUpLayerType_initFields(PickedUpLayerType* this) {
    
}


void PickedUpLayerType_init(PickedUpLayerType* this, const char* name) {
    PickedUpLayerType_initFields(this);
        this->name = name;
}

PickedUpLayerType* PickedUpLayerType_new(const char* name) {
    PickedUpLayerType* this = calloc(1, sizeof(PickedUpLayerType));
    PickedUpLayerType_init(this, name);
    return this;
}


const char* PickedUpLayerType_toString(PickedUpLayerType* this) {
        return this->name;
}

