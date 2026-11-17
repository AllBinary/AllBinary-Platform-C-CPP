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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.logo

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LogoData LogoData;
struct LogoData {
    const char* NAME;
    const char* IMAGEPATH;
    const char* IMAGEFILENAME;
    const char* IMAGE;
};

static LogoData* LogoData_instance;

LogoData* LogoData_new(void);
LogoData* LogoData_getInstance(void);

void LogoData_init(LogoData* this);

// Static fields with runtime initializers: call this once at startup
void LogoData_staticInit(void) {
    LogoData_instance = LogoData_new();
}

static void LogoData_initFields(LogoData* this) {
    this->NAME = "LOGO_NAME";
    this->IMAGEPATH = "LOGO_IMAGE_PATH";
    this->IMAGEFILENAME = "LOGO_IMAGE_FILE_NAME";
    this->IMAGE = "LOGO_IMAGE";
}


LogoData* LogoData_getInstance(void) {
        return LogoData_instance;
}


void LogoData_init(LogoData* this) {
    LogoData_initFields(this);
}

LogoData* LogoData_new(void) {
    LogoData* this = calloc(1, sizeof(LogoData));
    LogoData_init(this);
    return this;
}

