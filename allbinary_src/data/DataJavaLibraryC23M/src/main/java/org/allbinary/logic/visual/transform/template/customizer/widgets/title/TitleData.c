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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.title

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TitleData TitleData;
struct TitleData {
    const char* NAME;
    const char* TEXT;
    const char* VIEWNAMEKEY;
    int32_t MAXLEN;
};

static TitleData* TitleData_instance;

TitleData* TitleData_new(void);
TitleData* TitleData_getInstance(void);

void TitleData_init(TitleData* this);

// Static fields with runtime initializers: call this once at startup
void TitleData_staticInit(void) {
    TitleData_instance = TitleData_new();
}

static void TitleData_initFields(TitleData* this) {
    this->NAME = "TITLE_NAME";
    this->TEXT = "TITLE_TEXT";
    this->VIEWNAMEKEY = "Title";
    this->MAXLEN = 255;
}


TitleData* TitleData_getInstance(void) {
        return TitleData_instance;
}


void TitleData_init(TitleData* this) {
    TitleData_initFields(this);
}

TitleData* TitleData_new(void) {
    TitleData* this = calloc(1, sizeof(TitleData));
    TitleData_init(this);
    return this;
}

