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
// #include "javax/microedition/rms/RecordComparator.h"

typedef struct NullRecordComparator NullRecordComparator;
struct NullRecordComparator {
    RecordComparator RecordComparator_interface;
};

NullRecordComparator* NullRecordComparator_NULL_RECORD_COMPARATOR;

NullRecordComparator* NullRecordComparator_new(void);
int32_t NullRecordComparator_compare(NullRecordComparator* this, int8_t* rec1, int8_t* rec2);

// Static fields with runtime initializers: call this once at startup
void NullRecordComparator_staticInit(void) {
    NullRecordComparator_NULL_RECORD_COMPARATOR = NullRecordComparator_new();
}

void NullRecordComparator_init(NullRecordComparator* this) {
}

NullRecordComparator* NullRecordComparator_new(void) {
    NullRecordComparator* this = calloc(1, sizeof(NullRecordComparator));
    NullRecordComparator_init(this);
    return this;
}


int32_t NullRecordComparator_compare(NullRecordComparator* this, int8_t* rec1, int8_t* rec2) {
        return 0;
}

