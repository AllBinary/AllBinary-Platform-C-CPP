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
// package org.allbinary.logic.visual.transform.info.template

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TransformInfoTemplateData TransformInfoTemplateData;
struct TransformInfoTemplateData {
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static TransformInfoTemplateData* TransformInfoTemplateData_instance;

TransformInfoTemplateData* TransformInfoTemplateData_new(void);
TransformInfoTemplateData* TransformInfoTemplateData_getInstance(void);

void TransformInfoTemplateData_init(TransformInfoTemplateData* this);

// Static fields with runtime initializers: call this once at startup
void TransformInfoTemplateData_staticInit(void) {
    TransformInfoTemplateData_instance = TransformInfoTemplateData_new();
}

static void TransformInfoTemplateData_initFields(TransformInfoTemplateData* this) {
    this->UNCRYPTED_EXTENSION = "xsl";
    this->ENCRYPTED_EXTENSION = "abv";
}


TransformInfoTemplateData* TransformInfoTemplateData_getInstance(void) {
        return TransformInfoTemplateData_instance;
}


void TransformInfoTemplateData_init(TransformInfoTemplateData* this) {
    TransformInfoTemplateData_initFields(this);
}

TransformInfoTemplateData* TransformInfoTemplateData_new(void) {
    TransformInfoTemplateData* this = calloc(1, sizeof(TransformInfoTemplateData));
    TransformInfoTemplateData_init(this);
    return this;
}

