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
// package org.allbinary.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/loader/ClassLoader.h"

typedef struct NativeLibraryClassLoader NativeLibraryClassLoader;
struct NativeLibraryClassLoader {
    ClassLoader base;
    const char* message;
};


NativeLibraryClassLoader* NativeLibraryClassLoader_new(ClassLoader* parent);

void NativeLibraryClassLoader_init(NativeLibraryClassLoader* this, ClassLoader* parent);

static void NativeLibraryClassLoader_initFields(NativeLibraryClassLoader* this) {
    this->message = "This Class Loader Does Not Load Classes - Only For Loading and Unloading of Native Libraries";
}


void NativeLibraryClassLoader_init(NativeLibraryClassLoader* this, ClassLoader* parent) {
        ClassLoader_init(&this->base, parent);
        NativeLibraryClassLoader_initFields(this);
}

NativeLibraryClassLoader* NativeLibraryClassLoader_new(ClassLoader* parent) {
    NativeLibraryClassLoader* this = calloc(1, sizeof(NativeLibraryClassLoader));
    NativeLibraryClassLoader_init(this, parent);
    return this;
}

