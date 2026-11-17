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
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/os/Parcelable.h"
#include "android/os/Parcel.h"

typedef struct NullParcelable NullParcelable;
struct NullParcelable {
    Parcelable Parcelable_interface;
};

NullParcelable* NullParcelable_NULL_PARCELABLE;

NullParcelable* NullParcelable_new(void);
int32_t NullParcelable_describeContents(NullParcelable* this);
void NullParcelable_writeToParcel(NullParcelable* this, Parcel* dest, int32_t flags);

// Static fields with runtime initializers: call this once at startup
void NullParcelable_staticInit(void) {
    NullParcelable_NULL_PARCELABLE = NullParcelable_new();
}

void NullParcelable_init(NullParcelable* this) {
}

NullParcelable* NullParcelable_new(void) {
    NullParcelable* this = calloc(1, sizeof(NullParcelable));
    NullParcelable_init(this);
    return this;
}


int32_t NullParcelable_describeContents(NullParcelable* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullParcelable_writeToParcel(NullParcelable* this, Parcel* dest, int32_t flags) {
}

