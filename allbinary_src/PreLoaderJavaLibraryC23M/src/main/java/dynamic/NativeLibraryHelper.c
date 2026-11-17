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
// package dynamic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct NativeLibraryHelper NativeLibraryHelper;
struct NativeLibraryHelper {
    const char* library;
};


NativeLibraryHelper* NativeLibraryHelper_new(const char* library);

void NativeLibraryHelper_init(NativeLibraryHelper* this, const char* library);
void NativeLibraryHelper_load(NativeLibraryHelper* this);

static void NativeLibraryHelper_initFields(NativeLibraryHelper* this) {
    
}


void NativeLibraryHelper_init(NativeLibraryHelper* this, const char* library) {
    NativeLibraryHelper_initFields(this);
        this->library = library;
}

NativeLibraryHelper* NativeLibraryHelper_new(const char* library) {
    NativeLibraryHelper* this = calloc(1, sizeof(NativeLibraryHelper));
    NativeLibraryHelper_init(this, library);
    return this;
}


void NativeLibraryHelper_load(NativeLibraryHelper* this) {
        System_loadLibrary(this->library);
}

