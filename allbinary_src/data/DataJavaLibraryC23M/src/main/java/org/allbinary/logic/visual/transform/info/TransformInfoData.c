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

typedef struct TransformInfoData TransformInfoData;
struct TransformInfoData {
    const char* PARENT;
    const char* MAPPED;
    const char* NAME;
    const char* DESCRIPTION;
    const char* CATEGORY;
    const char* OBJECTFILENAME;
    const char* OBJECT;
    const char* OBJECTCONFIGFILENAME;
    const char* OBJECTCONFIG;
    const char* TEMPLATEFILENAME;
    const char* TEMPLATE;
    const char* DATAFILENAME;
    const char* DATA;
    const char* LABEL;
    const char* OWNER;
    const char* PARTIAL;
};

static TransformInfoData* TransformInfoData_instance;

TransformInfoData* TransformInfoData_new(void);
TransformInfoData* TransformInfoData_getInstance(void);

void TransformInfoData_init(TransformInfoData* this);

// Static fields with runtime initializers: call this once at startup
void TransformInfoData_staticInit(void) {
    TransformInfoData_instance = TransformInfoData_new();
}

static void TransformInfoData_initFields(TransformInfoData* this) {
    this->PARENT = "TRANSFORM_INFO_PARENT";
    this->MAPPED = "TRANSFORM_INFO_MAPPED";
    this->NAME = "TRANSFORM_INFO_NAME";
    this->DESCRIPTION = "TRANSFORM_INFO_DESCRIPTION";
    this->CATEGORY = "TRANSFORM_INFO_CATEGORY";
    this->OBJECTFILENAME = "TRANSFORM_INFO_OBJECTFILENAME";
    this->OBJECT = "TRANSFORM_INFO_OBJECT";
    this->OBJECTCONFIGFILENAME = "TRANSFORM_INFO_OBJECTCONFIGFILENAME";
    this->OBJECTCONFIG = "TRANSFORM_INFO_OBJECTCONFIG";
    this->TEMPLATEFILENAME = "TRANSFORM_INFO_TEMPLATEFILENAME";
    this->TEMPLATE = "TRANSFORM_INFO_TEMPLATE";
    this->DATAFILENAME = "TRANSFORM_INFO_DATAFILENAME";
    this->DATA = "TRANSFORM_INFO_DATA";
    this->LABEL = "TRANSFORM_INFO_LABEL";
    this->OWNER = java_concat("OWNER_", this->NAME);
    this->PARTIAL = java_concat("PARTIAL_", this->NAME);
}


TransformInfoData* TransformInfoData_getInstance(void) {
        return TransformInfoData_instance;
}


void TransformInfoData_init(TransformInfoData* this) {
    TransformInfoData_initFields(this);
}

TransformInfoData* TransformInfoData_new(void) {
    TransformInfoData* this = calloc(1, sizeof(TransformInfoData));
    TransformInfoData_init(this);
    return this;
}

