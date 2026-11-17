/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/rms/RecordFilter.h"

typedef struct NullRecordFilter NullRecordFilter;
struct NullRecordFilter {
    RecordFilter RecordFilter_interface;
};

NullRecordFilter* NullRecordFilter_NULL_RECORD_FILTER;

NullRecordFilter* NullRecordFilter_new(void);
bool NullRecordFilter_matches(NullRecordFilter* this, int8_t* candidate);

// Static fields with runtime initializers: call this once at startup
void NullRecordFilter_staticInit(void) {
    NullRecordFilter_NULL_RECORD_FILTER = NullRecordFilter_new();
}

void NullRecordFilter_init(NullRecordFilter* this) {
}

NullRecordFilter* NullRecordFilter_new(void) {
    NullRecordFilter* this = calloc(1, sizeof(NullRecordFilter));
    NullRecordFilter_init(this);
    return this;
}


bool NullRecordFilter_matches(NullRecordFilter* this, int8_t* candidate) {
        return true;
}

