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
// package org.allbinary.logic.visual.dhtml.style.css.property.font

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FontFamilyData FontFamilyData;
struct FontFamilyData {
    const char* NAME;
    const char* VALUE;
};

static FontFamilyData* FontFamilyData_instance;

FontFamilyData* FontFamilyData_new(void);
FontFamilyData* FontFamilyData_getInstance(void);

void FontFamilyData_init(FontFamilyData* this);

// Static fields with runtime initializers: call this once at startup
void FontFamilyData_staticInit(void) {
    FontFamilyData_instance = FontFamilyData_new();
}

static void FontFamilyData_initFields(FontFamilyData* this) {
    this->NAME = "FONT_FAMILY_NAME";
    this->VALUE = "font-family";
}


FontFamilyData* FontFamilyData_getInstance(void) {
        return FontFamilyData_instance;
}


void FontFamilyData_init(FontFamilyData* this) {
    FontFamilyData_initFields(this);
}

FontFamilyData* FontFamilyData_new(void) {
    FontFamilyData* this = calloc(1, sizeof(FontFamilyData));
    FontFamilyData_init(this);
    return this;
}

