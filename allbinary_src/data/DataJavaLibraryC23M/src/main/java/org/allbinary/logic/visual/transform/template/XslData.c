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
// package org.allbinary.logic.visual.transform.template

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct XslData XslData;
struct XslData {
    const char* NAME;
    const char* ROOT_IMPORT_URI;
};

static XslData* XslData_instance;

XslData* XslData_new(void);
XslData* XslData_getInstance(void);

void XslData_init(XslData* this);

// Static fields with runtime initializers: call this once at startup
void XslData_staticInit(void) {
    XslData_instance = XslData_new();
}

static void XslData_initFields(XslData* this) {
    this->NAME = "XSL_NAME";
    this->ROOT_IMPORT_URI = "ROOT_IMPORT_URI";
}


XslData* XslData_getInstance(void) {
        return XslData_instance;
}


void XslData_init(XslData* this) {
    XslData_initFields(this);
}

XslData* XslData_new(void) {
    XslData* this = calloc(1, sizeof(XslData));
    XslData_init(this);
    return this;
}

