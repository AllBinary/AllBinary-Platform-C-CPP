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
// package org.allbinary.logic.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct Orientation Orientation;
struct Orientation {
    BasicDecimal* yaw;
    BasicDecimal* pitch;
    BasicDecimal* roll;
};

Orientation* Orientation_NONE;
static Orientation* Orientation_SINGLETON;

Orientation* Orientation_new(int32_t yaw, int32_t pitch, int32_t roll);
Orientation* Orientation_getInstance(int32_t yaw, int32_t pitch, int32_t roll);

void Orientation_init(Orientation* this, int32_t yaw, int32_t pitch, int32_t roll);
const char* Orientation_toString(Orientation* this);

// Static fields with runtime initializers: call this once at startup
void Orientation_staticInit(void) {
    Orientation_NONE = Orientation_new(0, 0, 0);
    Orientation_SINGLETON = Orientation_new(0, 0, 0);
}

static void Orientation_initFields(Orientation* this) {
    this->yaw = BasicDecimal_new(0);
    this->pitch = BasicDecimal_new(0);
    this->roll = BasicDecimal_new(0);
}


Orientation* Orientation_getInstance(int32_t yaw, int32_t pitch, int32_t roll) {
        JAVA_CALL(Orientation_SINGLETON->yaw, setint, yaw);
        JAVA_CALL(Orientation_SINGLETON->pitch, setint, pitch);
        JAVA_CALL(Orientation_SINGLETON->roll, setint, roll);
        return Orientation_SINGLETON;
}


void Orientation_init(Orientation* this, int32_t yaw, int32_t pitch, int32_t roll) {
    Orientation_initFields(this);
        BasicDecimal_setint(this->yaw, yaw);
        BasicDecimal_setint(this->pitch, pitch);
        BasicDecimal_setint(this->roll, roll);
}

Orientation* Orientation_new(int32_t yaw, int32_t pitch, int32_t roll) {
    Orientation* this = calloc(1, sizeof(Orientation));
    Orientation_init(this, yaw, pitch, roll);
    return this;
}


const char* Orientation_toString(Orientation* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Y: ");
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->yaw));
        StringMaker_append(stringBuffer, " P: ");
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->pitch));
        StringMaker_append(stringBuffer, " R: ");
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->roll));
        return StringMaker_toString(stringBuffer);
}

