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
// #include "java/lang/reflect/Constructor.h"
// #include "java/lang/reflect/Method.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NativeLibraryHelperWrapper NativeLibraryHelperWrapper;
struct NativeLibraryHelperWrapper {
    const char* libraryName;
    ClassLoader* loader;
    Any* anyType;
};


NativeLibraryHelperWrapper* NativeLibraryHelperWrapper_new(const char* libraryName);

void NativeLibraryHelperWrapper_init(NativeLibraryHelperWrapper* this, const char* libraryName);
void NativeLibraryHelperWrapper_load(NativeLibraryHelperWrapper* this);
void NativeLibraryHelperWrapper_unload(NativeLibraryHelperWrapper* this);
const char* NativeLibraryHelperWrapper_toString(NativeLibraryHelperWrapper* this);
const char* NativeLibraryHelperWrapper_getLibraryName(NativeLibraryHelperWrapper* this);
void NativeLibraryHelperWrapper_setLibraryName(NativeLibraryHelperWrapper* this, const char* libraryName);

static void NativeLibraryHelperWrapper_initFields(NativeLibraryHelperWrapper* this) {
    this->libraryName = nullptr;
    this->loader = nullptr;
    this->anyType = nullptr;
}


void NativeLibraryHelperWrapper_init(NativeLibraryHelperWrapper* this, const char* libraryName) {
    NativeLibraryHelperWrapper_initFields(this);
        NativeLibraryHelperWrapper_setLibraryName(this, libraryName);
}

NativeLibraryHelperWrapper* NativeLibraryHelperWrapper_new(const char* libraryName) {
    NativeLibraryHelperWrapper* this = calloc(1, sizeof(NativeLibraryHelperWrapper));
    NativeLibraryHelperWrapper_init(this, libraryName);
    return this;
}


// throws Exception
void NativeLibraryHelperWrapper_load(NativeLibraryHelperWrapper* this) {
        Any** params = ((Any**) java_array_new(sizeof(Any*), 1));
        params[0] = NativeLibraryHelperWrapper_getLibraryName(this);
        const char** classes = ((const char**) java_array_new(sizeof(const char*), 1));
        classes[0] = java_class_of(NativeLibraryHelperWrapper_getLibraryName(this));
        this->loader = NativeLibraryClassLoader_new(JAVA_CALL(java_class_of(this), getClassLoader));
        const char* myClass = ClassLoader_loadClass(this->loader, "dynamic.NativeLibraryHelper");
        Constructor* constructor = Class_getConstructor(myClass, classes);
        this->anyType = Constructor_newInstance(constructor, params);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        Method* method = JAVA_CALL(java_class_of(this->anyType), getMethod, commonStrings->LOAD, nullptr);
        Method_invoke(method, this->anyType, nullptr);
}


void NativeLibraryHelperWrapper_unload(NativeLibraryHelperWrapper* this) {
        this->anyType = nullptr;
        this->loader = nullptr;
        ((void) 0);
        ((void) 0);
}


const char* NativeLibraryHelperWrapper_toString(NativeLibraryHelperWrapper* this) {
        return java_concat("Library: ", java_string_of(NativeLibraryHelperWrapper_getLibraryName(this)));
}


const char* NativeLibraryHelperWrapper_getLibraryName(NativeLibraryHelperWrapper* this) {
        return this->libraryName;
}


void NativeLibraryHelperWrapper_setLibraryName(NativeLibraryHelperWrapper* this, const char* libraryName) {
        this->libraryName = libraryName;
}

