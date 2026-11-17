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
// package org.allbinary.game.layer.hud

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct LapInfo LapInfo;
struct LapInfo {
    int32_t numberOfLaps;
    int32_t totalLaps;
};

LapInfo* LapInfo_NULL_LAP_INFO;

LapInfo* LapInfo_new(int32_t totalLaps);

void LapInfo_init(LapInfo* this, int32_t totalLaps);
void LapInfo_add(LapInfo* this);
int32_t LapInfo_getCurrentLap(LapInfo* this);
int32_t LapInfo_getTotalLaps(LapInfo* this);
bool LapInfo_isDone(LapInfo* this);
const char* LapInfo_toString(LapInfo* this);

// Static fields with runtime initializers: call this once at startup
void LapInfo_staticInit(void) {
    LapInfo_NULL_LAP_INFO = LapInfo_new(-1);
}

static void LapInfo_initFields(LapInfo* this) {
    
    
}


void LapInfo_init(LapInfo* this, int32_t totalLaps) {
    LapInfo_initFields(this);
        this->totalLaps = totalLaps;
        this->numberOfLaps = 1;
}

LapInfo* LapInfo_new(int32_t totalLaps) {
    LapInfo* this = calloc(1, sizeof(LapInfo));
    LapInfo_init(this, totalLaps);
    return this;
}


void LapInfo_add(LapInfo* this) {
        this->numberOfLaps++;
}


int32_t LapInfo_getCurrentLap(LapInfo* this) {
        return this->numberOfLaps;
}


int32_t LapInfo_getTotalLaps(LapInfo* this) {
        return this->totalLaps;
}


bool LapInfo_isDone(LapInfo* this) {
        if (this->numberOfLaps >= this->totalLaps) {
            return true;
        }
        return false;
}


const char* LapInfo_toString(LapInfo* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "isDone: ");
        StringMaker_appendboolean(stringBuffer, LapInfo_isDone(this));
        StringMaker_append(stringBuffer, " CurrentLap: ");
        StringMaker_appendint(stringBuffer, LapInfo_getCurrentLap(this));
        StringMaker_append(stringBuffer, " Total Laps: ");
        StringMaker_appendint(stringBuffer, LapInfo_getTotalLaps(this));
        return StringMaker_toString(stringBuffer);
}

