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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"

typedef struct TransformInfoObjectConfigData TransformInfoObjectConfigData;
struct TransformInfoObjectConfigData {
    const char* NAME;
    const char* VARKEY;
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static TransformInfoObjectConfigData* TransformInfoObjectConfigData_instance;

TransformInfoObjectConfigData* TransformInfoObjectConfigData_new(void);
TransformInfoObjectConfigData* TransformInfoObjectConfigData_getInstance(void);

void TransformInfoObjectConfigData_init(TransformInfoObjectConfigData* this);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectConfigData_staticInit(void) {
    TransformInfoObjectConfigData_instance = TransformInfoObjectConfigData_new();
}

static void TransformInfoObjectConfigData_initFields(TransformInfoObjectConfigData* this) {
    this->NAME = "OBJECTCONFIG_NAME";
    this->VARKEY = "$";
    this->UNCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->UNCRYPTED_EXTENSION;
    this->ENCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->ENCRYPTED_EXTENSION;
}


TransformInfoObjectConfigData* TransformInfoObjectConfigData_getInstance(void) {
        return TransformInfoObjectConfigData_instance;
}


void TransformInfoObjectConfigData_init(TransformInfoObjectConfigData* this) {
    TransformInfoObjectConfigData_initFields(this);
}

TransformInfoObjectConfigData* TransformInfoObjectConfigData_new(void) {
    TransformInfoObjectConfigData* this = calloc(1, sizeof(TransformInfoObjectConfigData));
    TransformInfoObjectConfigData_init(this);
    return this;
}

