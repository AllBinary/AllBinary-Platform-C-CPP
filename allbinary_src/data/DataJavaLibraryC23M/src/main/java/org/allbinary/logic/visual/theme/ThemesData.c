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

typedef struct ThemesData ThemesData;
struct ThemesData {
    const char* NAME;
};

static ThemesData* ThemesData_instance;

ThemesData* ThemesData_new(void);
ThemesData* ThemesData_getInstance(void);

void ThemesData_init(ThemesData* this);

// Static fields with runtime initializers: call this once at startup
void ThemesData_staticInit(void) {
    ThemesData_instance = ThemesData_new();
}

static void ThemesData_initFields(ThemesData* this) {
    this->NAME = "THEMES_NAME";
}


ThemesData* ThemesData_getInstance(void) {
        return ThemesData_instance;
}


void ThemesData_init(ThemesData* this) {
    ThemesData_initFields(this);
}

ThemesData* ThemesData_new(void) {
    ThemesData* this = calloc(1, sizeof(ThemesData));
    ThemesData_init(this);
    return this;
}

