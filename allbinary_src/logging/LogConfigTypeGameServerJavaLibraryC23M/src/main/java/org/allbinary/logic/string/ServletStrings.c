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
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ServletStrings ServletStrings;
struct ServletStrings {
    const char* DOPOST;
    const char* DOGET;
    const char* REQUEST_EXCEPTION;
};

static ServletStrings* ServletStrings_instance;

ServletStrings* ServletStrings_new(void);
ServletStrings* ServletStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ServletStrings_staticInit(void) {
    ServletStrings_instance = ServletStrings_new();
}

static void ServletStrings_initFields(ServletStrings* this) {
    this->DOPOST = "doPost";
    this->DOGET = "doGet";
    this->REQUEST_EXCEPTION = "Request Failed";
}

void ServletStrings_init(ServletStrings* this) {
    ServletStrings_initFields(this);
}

ServletStrings* ServletStrings_new(void) {
    ServletStrings* this = calloc(1, sizeof(ServletStrings));
    ServletStrings_init(this);
    return this;
}


ServletStrings* ServletStrings_getInstance(void) {
        return ServletStrings_instance;
}

