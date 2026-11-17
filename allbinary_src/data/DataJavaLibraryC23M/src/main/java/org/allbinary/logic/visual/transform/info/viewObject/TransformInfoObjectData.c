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
// package org.allbinary.logic.visual.transform.info.viewObject

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TransformInfoObjectData TransformInfoObjectData;
struct TransformInfoObjectData {
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static TransformInfoObjectData* TransformInfoObjectData_instance;

TransformInfoObjectData* TransformInfoObjectData_new(void);
TransformInfoObjectData* TransformInfoObjectData_getInstance(void);

void TransformInfoObjectData_init(TransformInfoObjectData* this);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectData_staticInit(void) {
    TransformInfoObjectData_instance = TransformInfoObjectData_new();
}

static void TransformInfoObjectData_initFields(TransformInfoObjectData* this) {
    this->UNCRYPTED_EXTENSION = "class";
    this->ENCRYPTED_EXTENSION = "abw";
}


TransformInfoObjectData* TransformInfoObjectData_getInstance(void) {
        return TransformInfoObjectData_instance;
}


void TransformInfoObjectData_init(TransformInfoObjectData* this) {
    TransformInfoObjectData_initFields(this);
}

TransformInfoObjectData* TransformInfoObjectData_new(void) {
    TransformInfoObjectData* this = calloc(1, sizeof(TransformInfoObjectData));
    TransformInfoObjectData_init(this);
    return this;
}

