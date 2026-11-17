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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct Direction Direction;
struct Direction {
    const char* name;
    const char* otherName;
    int32_t value;
    int32_t frameFactor;
};

static Direction** Direction_directionArray;

Direction* Direction_new(const char* name, const char* otherName, int32_t value, int32_t frameFactor);

void Direction_init(Direction* this, const char* name, const char* otherName, int32_t value, int32_t frameFactor);
Direction* Direction_getInstance(int32_t direction);
int32_t Direction_getValue(Direction* this);
int32_t Direction_getFrameFactor(Direction* this);
const char* Direction_getOtherName(Direction* this);
const char* Direction_getName(Direction* this);
const char* Direction_toString(Direction* this);

// Static fields with runtime initializers: call this once at startup
void Direction_staticInit(void) {
    Direction_directionArray = ((Direction**) java_array_new(sizeof(Direction*), 13));
}

static void Direction_initFields(Direction* this) {
    
    
    
    
}


void Direction_init(Direction* this, const char* name, const char* otherName, int32_t value, int32_t frameFactor) {
    Direction_initFields(this);
        this->name = name;
        this->otherName = otherName;
        this->value = value;
        this->frameFactor = frameFactor;
        Direction_directionArray[value] = this;
}

Direction* Direction_new(const char* name, const char* otherName, int32_t value, int32_t frameFactor) {
    Direction* this = calloc(1, sizeof(Direction));
    Direction_init(this, name, otherName, value, frameFactor);
    return this;
}


Direction* Direction_getInstance(int32_t direction) {
        return Direction_directionArray[direction];
}


int32_t Direction_getValue(Direction* this) {
        return this->value;
}


int32_t Direction_getFrameFactor(Direction* this) {
        return this->frameFactor;
}


const char* Direction_getOtherName(Direction* this) {
        return this->otherName;
}


const char* Direction_getName(Direction* this) {
        return this->name;
}


const char* Direction_toString(Direction* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Direction: ");
        StringMaker_append(stringBuffer, Direction_getName(this));
        StringMaker_append(stringBuffer, " Or: ");
        StringMaker_append(stringBuffer, Direction_getOtherName(this));
        StringMaker_append(stringBuffer, " Value: ");
        StringMaker_appendint(stringBuffer, this->value);
        return StringMaker_toString(stringBuffer);
}

