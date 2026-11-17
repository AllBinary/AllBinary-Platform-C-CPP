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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ImageActionScriptOutputData ImageActionScriptOutputData;
struct ImageActionScriptOutputData {
    char unused;
};

const char* ImageActionScriptOutputData_NAME = "IMAGE_ACTION_OUTPUT_NAME";
const char* ImageActionScriptOutputData_SAVE = "SAVE_IMAGE_ACTION_OUTPUT_NAME";
const char* ImageActionScriptOutputData_DISPLAY = "DISPLAY_IMAGE_ACTION_OUTPUT_NAME";
const char* ImageActionScriptOutputData_TYPE = "TYPE_IMAGE_ACTION_OUTPUT_NAME";
const char* ImageActionScriptOutputData_TYPES = "TYPES_IMAGE_ACTION_OUTPUT_NAME";

ImageActionScriptOutputData* ImageActionScriptOutputData_new(void);

void ImageActionScriptOutputData_init(ImageActionScriptOutputData* this);


void ImageActionScriptOutputData_init(ImageActionScriptOutputData* this) {
}

ImageActionScriptOutputData* ImageActionScriptOutputData_new(void) {
    ImageActionScriptOutputData* this = calloc(1, sizeof(ImageActionScriptOutputData));
    ImageActionScriptOutputData_init(this);
    return this;
}

