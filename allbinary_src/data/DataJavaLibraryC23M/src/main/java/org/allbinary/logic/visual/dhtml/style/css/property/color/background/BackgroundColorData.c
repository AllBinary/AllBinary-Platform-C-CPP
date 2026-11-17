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
// package org.allbinary.logic.visual.dhtml.style.css.property.color.background

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BackgroundColorData BackgroundColorData;
struct BackgroundColorData {
    const char* VALUE;
};

static BackgroundColorData* BackgroundColorData_instance;

BackgroundColorData* BackgroundColorData_new(void);
BackgroundColorData* BackgroundColorData_getInstance(void);

void BackgroundColorData_init(BackgroundColorData* this);

// Static fields with runtime initializers: call this once at startup
void BackgroundColorData_staticInit(void) {
    BackgroundColorData_instance = BackgroundColorData_new();
}

static void BackgroundColorData_initFields(BackgroundColorData* this) {
    this->VALUE = "background-color";
}


BackgroundColorData* BackgroundColorData_getInstance(void) {
        return BackgroundColorData_instance;
}


void BackgroundColorData_init(BackgroundColorData* this) {
    BackgroundColorData_initFields(this);
}

BackgroundColorData* BackgroundColorData_new(void) {
    BackgroundColorData* this = calloc(1, sizeof(BackgroundColorData));
    BackgroundColorData_init(this);
    return this;
}

