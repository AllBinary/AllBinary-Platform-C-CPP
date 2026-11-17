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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TransformInfosData TransformInfosData;
struct TransformInfosData {
    const char* NAME;
    const char* GROUP;
    const char* ALL;
    const char* PREVIEW;
    const char* SMALL_PREVIEW;
};

static TransformInfosData* TransformInfosData_instance;

TransformInfosData* TransformInfosData_new(void);

void TransformInfosData_init(TransformInfosData* this);
TransformInfosData* TransformInfosData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TransformInfosData_staticInit(void) {
    TransformInfosData_instance = TransformInfosData_new();
}

static void TransformInfosData_initFields(TransformInfosData* this) {
    this->NAME = "TRANSFORM_INFOS_NAME";
    this->GROUP = "TRANSFORM_INFOS_GROUP";
    this->ALL = "TRANSFORM_INFOS_ALL";
    this->PREVIEW = "TRANSFORM_INFOS_PREVIEW";
    this->SMALL_PREVIEW = "TRANSFORM_INFOS_SMALL_PREVIEW";
}


void TransformInfosData_init(TransformInfosData* this) {
    TransformInfosData_initFields(this);
}

TransformInfosData* TransformInfosData_new(void) {
    TransformInfosData* this = calloc(1, sizeof(TransformInfosData));
    TransformInfosData_init(this);
    return this;
}


TransformInfosData* TransformInfosData_getInstance(void) {
        return TransformInfosData_instance;
}

