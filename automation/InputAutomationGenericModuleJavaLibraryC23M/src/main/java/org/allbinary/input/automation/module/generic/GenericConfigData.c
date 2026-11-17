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
// package org.allbinary.input.automation.module.generic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GenericConfigData GenericConfigData;
struct GenericConfigData {
    char unused;
};

const char* GenericConfigData_RELATIVE_PATH = "./";
const char* GenericConfigData_CONFIG_PATH = "modules/configs/";
const char* GenericConfigData_MODULE_RELATIVE_PATH;
const char* GenericConfigData_GAME_MODULE_RELATIVE_PATH;
const char* GenericConfigData_MMO_GAME_MODULE_RELATIVE_PATH;
const char* GenericConfigData_FREE_MMO_GAME_MODULE_RELATIVE_PATH = "free/";

GenericConfigData* GenericConfigData_new(void);

void GenericConfigData_init(GenericConfigData* this);

// Static fields with runtime initializers: call this once at startup
void GenericConfigData_staticInit(void) {
    GenericConfigData_MODULE_RELATIVE_PATH = java_concat(java_string_of(GenericConfigData_RELATIVE_PATH + GenericConfigData_CONFIG_PATH), "allbinary/input/automation/module/");
    GenericConfigData_GAME_MODULE_RELATIVE_PATH = java_concat(java_string_of(GenericConfigData_MODULE_RELATIVE_PATH), "game/");
    GenericConfigData_MMO_GAME_MODULE_RELATIVE_PATH = java_concat(java_string_of(GenericConfigData_GAME_MODULE_RELATIVE_PATH), "mmog/");
}


void GenericConfigData_init(GenericConfigData* this) {
}

GenericConfigData* GenericConfigData_new(void) {
    GenericConfigData* this = calloc(1, sizeof(GenericConfigData));
    GenericConfigData_init(this);
    return this;
}

