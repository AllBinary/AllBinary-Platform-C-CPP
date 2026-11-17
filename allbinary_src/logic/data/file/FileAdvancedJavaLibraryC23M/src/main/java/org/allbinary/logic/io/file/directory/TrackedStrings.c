/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.logic.io.file.directory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TrackedStrings TrackedStrings;
struct TrackedStrings {
    const char* TARGET_PATH_WINDOWS;
    const char* TARGET_PATH_UNIX;
    const char* HTML_TEMP;
    const char* APPLICATION;
    const char* APP;
    const char* GIT_COMMAND;
    const char* CHANGE_DIRECTORY_OPTION;
    const char* LIST_FILES_COMMAND;
    const char* ERROR_UNMATCH_OPTION;
    const char* PATHSPEC_SEPARATOR;
    const char* SEP_BY_NULL_CHAR_INSTEAD_OF_NEW_LINE;
};

static TrackedStrings* TrackedStrings_instance;

TrackedStrings* TrackedStrings_new(void);
TrackedStrings* TrackedStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TrackedStrings_staticInit(void) {
    TrackedStrings_instance = TrackedStrings_new();
}

static void TrackedStrings_initFields(TrackedStrings* this) {
    this->TARGET_PATH_WINDOWS = "\\target\\";
    this->TARGET_PATH_UNIX = "/target/";
    this->HTML_TEMP = "HTMLTemp";
    this->APPLICATION = "Application";
    this->APP = "\\app";
    this->GIT_COMMAND = "git";
    this->CHANGE_DIRECTORY_OPTION = "-C";
    this->LIST_FILES_COMMAND = "ls-files";
    this->ERROR_UNMATCH_OPTION = "--error-unmatch";
    this->PATHSPEC_SEPARATOR = "--";
    this->SEP_BY_NULL_CHAR_INSTEAD_OF_NEW_LINE = "-z";
}

void TrackedStrings_init(TrackedStrings* this) {
    TrackedStrings_initFields(this);
}

TrackedStrings* TrackedStrings_new(void) {
    TrackedStrings* this = calloc(1, sizeof(TrackedStrings));
    TrackedStrings_init(this);
    return this;
}


TrackedStrings* TrackedStrings_getInstance(void) {
        return TrackedStrings_instance;
}

