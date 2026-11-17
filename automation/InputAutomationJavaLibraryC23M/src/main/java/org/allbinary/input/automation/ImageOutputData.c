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
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct ImageOutputData ImageOutputData;
struct ImageOutputData {
    char unused;
};

const char* ImageOutputData_SAVE_PATH;

ImageOutputData* ImageOutputData_new(void);

void ImageOutputData_init(ImageOutputData* this);

// Static fields with runtime initializers: call this once at startup
void ImageOutputData_staticInit(void) {
    ImageOutputData_SAVE_PATH = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), System_getProperty("user.dir")), appendchar, FilePathData_getInstance()->SEPARATORCHAR), append, "saves"), appendchar, FilePathData_getInstance()->SEPARATORCHAR), toString);
}


void ImageOutputData_init(ImageOutputData* this) {
}

ImageOutputData* ImageOutputData_new(void) {
    ImageOutputData* this = calloc(1, sizeof(ImageOutputData));
    ImageOutputData_init(this);
    return this;
}

