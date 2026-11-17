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
// package org.allbinary.logic.visual.transform.info.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"

typedef struct TransformInfoDataData TransformInfoDataData;
struct TransformInfoDataData {
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static TransformInfoDataData* TransformInfoDataData_instance;

TransformInfoDataData* TransformInfoDataData_new(void);
TransformInfoDataData* TransformInfoDataData_getInstance(void);

void TransformInfoDataData_init(TransformInfoDataData* this);

// Static fields with runtime initializers: call this once at startup
void TransformInfoDataData_staticInit(void) {
    TransformInfoDataData_instance = TransformInfoDataData_new();
}

static void TransformInfoDataData_initFields(TransformInfoDataData* this) {
    this->UNCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->UNCRYPTED_EXTENSION;
    this->ENCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->ENCRYPTED_EXTENSION;
}


TransformInfoDataData* TransformInfoDataData_getInstance(void) {
        return TransformInfoDataData_instance;
}


void TransformInfoDataData_init(TransformInfoDataData* this) {
    TransformInfoDataData_initFields(this);
}

TransformInfoDataData* TransformInfoDataData_new(void) {
    TransformInfoDataData* this = calloc(1, sizeof(TransformInfoDataData));
    TransformInfoDataData_init(this);
    return this;
}

