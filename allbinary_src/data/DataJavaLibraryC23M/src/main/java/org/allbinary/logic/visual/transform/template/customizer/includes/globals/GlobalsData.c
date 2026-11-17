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
// package org.allbinary.logic.visual.transform.template.customizer.includes.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GlobalsData GlobalsData;
struct GlobalsData {
    char unused;
};

const char* GlobalsData_NAME = "GLOBALS_NAME";

GlobalsData* GlobalsData_new(void);

void GlobalsData_init(GlobalsData* this);


void GlobalsData_init(GlobalsData* this) {
}

GlobalsData* GlobalsData_new(void) {
    GlobalsData* this = calloc(1, sizeof(GlobalsData));
    GlobalsData_init(this);
    return this;
}

