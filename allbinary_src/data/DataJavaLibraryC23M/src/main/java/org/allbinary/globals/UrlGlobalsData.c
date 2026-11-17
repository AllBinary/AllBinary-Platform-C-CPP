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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct UrlGlobalsData UrlGlobalsData;
struct UrlGlobalsData {
    char unused;
};

const char* UrlGlobalsData_NAME = "URLGLOBALS_NAME";
const char* UrlGlobalsData_WEBAPPPATH = "URLGLOBALS_WEBAPPPATH";
const char* UrlGlobalsData_TESTINGMODE = "URLGLOBALS_TESTINGMODE";
const char* UrlGlobalsData_TESTINGHTMLPATH = "URLGLOBALS_TESTINGHTMLPATH";
const char* UrlGlobalsData_MAINPATH = "URLGLOBALS_MAINPATH";

UrlGlobalsData* UrlGlobalsData_new(void);

void UrlGlobalsData_init(UrlGlobalsData* this);


void UrlGlobalsData_init(UrlGlobalsData* this) {
}

UrlGlobalsData* UrlGlobalsData_new(void) {
    UrlGlobalsData* this = calloc(1, sizeof(UrlGlobalsData));
    UrlGlobalsData_init(this);
    return this;
}

