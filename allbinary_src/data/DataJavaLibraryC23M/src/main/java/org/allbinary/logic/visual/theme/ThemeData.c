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
// package org.allbinary.logic.visual.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ThemeData ThemeData;
struct ThemeData {
    const char* NAME;
    const char* PATH;
    const char* PREVIEW_IMAGE_NAME;
    const char* PREVIEW_IMAGE_PATH;
};

static ThemeData* ThemeData_instance;

ThemeData* ThemeData_new(void);
ThemeData* ThemeData_getInstance(void);

void ThemeData_init(ThemeData* this);

// Static fields with runtime initializers: call this once at startup
void ThemeData_staticInit(void) {
    ThemeData_instance = ThemeData_new();
}

static void ThemeData_initFields(ThemeData* this) {
    this->NAME = "THEME_NAME";
    this->PATH = "THEME_PATH";
    this->PREVIEW_IMAGE_NAME = "THEME_PREVIEW_IMAGE_NAME";
    this->PREVIEW_IMAGE_PATH = "THEME_PREVIEW_IMAGE_PATH";
}


ThemeData* ThemeData_getInstance(void) {
        return ThemeData_instance;
}


void ThemeData_init(ThemeData* this) {
    ThemeData_initFields(this);
}

ThemeData* ThemeData_new(void) {
    ThemeData* this = calloc(1, sizeof(ThemeData));
    ThemeData_init(this);
    return this;
}

