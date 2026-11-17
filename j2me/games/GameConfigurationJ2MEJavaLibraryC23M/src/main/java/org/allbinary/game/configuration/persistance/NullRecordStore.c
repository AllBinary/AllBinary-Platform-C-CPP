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
// #include "javax/microedition/rms/RecordStore.h"

typedef struct NullRecordStore NullRecordStore;
struct NullRecordStore {
    RecordStore base;
};

NullRecordStore* NullRecordStore_NULL_RECORD_STORE;

NullRecordStore* NullRecordStore_new(void);

// Static fields with runtime initializers: call this once at startup
void NullRecordStore_staticInit(void) {
    NullRecordStore_NULL_RECORD_STORE = NullRecordStore_new();
}

void NullRecordStore_init(NullRecordStore* this) {
    RecordStore_init(&this->base);
}

NullRecordStore* NullRecordStore_new(void) {
    NullRecordStore* this = calloc(1, sizeof(NullRecordStore));
    NullRecordStore_init(this);
    return this;
}

