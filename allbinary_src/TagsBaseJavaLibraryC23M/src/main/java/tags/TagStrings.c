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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TagStrings TagStrings;
struct TagStrings {
    const char* DO_START_TAG;
};

static TagStrings* TagStrings_instance;

TagStrings* TagStrings_new(void);
TagStrings* TagStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TagStrings_staticInit(void) {
    TagStrings_instance = TagStrings_new();
}

static void TagStrings_initFields(TagStrings* this) {
    this->DO_START_TAG = "doStartTag";
}

void TagStrings_init(TagStrings* this) {
    TagStrings_initFields(this);
}

TagStrings* TagStrings_new(void) {
    TagStrings* this = calloc(1, sizeof(TagStrings));
    TagStrings_init(this);
    return this;
}


TagStrings* TagStrings_getInstance(void) {
        return TagStrings_instance;
}

