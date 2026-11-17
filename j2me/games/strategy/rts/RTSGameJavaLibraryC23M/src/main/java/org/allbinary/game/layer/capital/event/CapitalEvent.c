/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer.capital.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct CapitalEvent CapitalEvent;
struct CapitalEvent {
    AllBinaryEventObject base;
    int32_t value;
};


CapitalEvent* CapitalEvent_new(Any* anyType);

void CapitalEvent_init(CapitalEvent* this, Any* anyType);
const char* CapitalEvent_toString(CapitalEvent* this);
int32_t CapitalEvent_getValue(CapitalEvent* this);
void CapitalEvent_setValue(CapitalEvent* this, int32_t value);

static void CapitalEvent_initFields(CapitalEvent* this) {
    this->value = 0;
}


void CapitalEvent_init(CapitalEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
        CapitalEvent_initFields(this);
}

CapitalEvent* CapitalEvent_new(Any* anyType) {
    CapitalEvent* this = calloc(1, sizeof(CapitalEvent));
    CapitalEvent_init(this, anyType);
    return this;
}


const char* CapitalEvent_toString(CapitalEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CapitalEvent: Value: \n");
        StringMaker_appendint(stringBuffer, CapitalEvent_getValue(this));
        return StringMaker_toString(stringBuffer);
}


int32_t CapitalEvent_getValue(CapitalEvent* this) {
        return this->value;
}


void CapitalEvent_setValue(CapitalEvent* this, int32_t value) {
        this->value = value;
}

