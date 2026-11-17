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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct URIResolverStrings URIResolverStrings;
struct URIResolverStrings {
    const char* IMPORT_URL;
    const char* ATTEMPT;
    const char* BASE;
    const char* NEW_PATH;
    const char* NOTE;
    const char* URL_GLOBAL;
    const char* REQUIRED_EXTENSION;
    const char* RESOLVE;
};

static URIResolverStrings* URIResolverStrings_instance;

URIResolverStrings* URIResolverStrings_new(void);
URIResolverStrings* URIResolverStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void URIResolverStrings_staticInit(void) {
    URIResolverStrings_instance = URIResolverStrings_new();
}

static void URIResolverStrings_initFields(URIResolverStrings* this) {
    this->IMPORT_URL = "/{import url}";
    this->ATTEMPT = "attempt to use xsl:import: href=";
    this->BASE = "\nBase= ";
    this->NEW_PATH = "\nNew path= ";
    this->NOTE = "\nNote: ";
    this->URL_GLOBAL = " is a urlglobal";
    this->REQUIRED_EXTENSION = "\nRequired Extension: ";
    this->RESOLVE = "resolve";
}

void URIResolverStrings_init(URIResolverStrings* this) {
    URIResolverStrings_initFields(this);
}

URIResolverStrings* URIResolverStrings_new(void) {
    URIResolverStrings* this = calloc(1, sizeof(URIResolverStrings));
    URIResolverStrings_init(this);
    return this;
}


URIResolverStrings* URIResolverStrings_getInstance(void) {
        return URIResolverStrings_instance;
}

