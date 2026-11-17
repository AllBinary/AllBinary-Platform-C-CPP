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
// package org.allbinary.business.context.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"

typedef struct ContextConfigurationData ContextConfigurationData;
struct ContextConfigurationData {
    const char* NAME;
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static ContextConfigurationData* ContextConfigurationData_instance;

ContextConfigurationData* ContextConfigurationData_new(void);
ContextConfigurationData* ContextConfigurationData_getInstance(void);

void ContextConfigurationData_init(ContextConfigurationData* this);

// Static fields with runtime initializers: call this once at startup
void ContextConfigurationData_staticInit(void) {
    ContextConfigurationData_instance = ContextConfigurationData_new();
}

static void ContextConfigurationData_initFields(ContextConfigurationData* this) {
    this->NAME = "CONTEXT_CONFIGURATION_NAME";
    this->UNCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->UNCRYPTED_EXTENSION;
    this->ENCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->ENCRYPTED_EXTENSION;
}


ContextConfigurationData* ContextConfigurationData_getInstance(void) {
        return ContextConfigurationData_instance;
}


void ContextConfigurationData_init(ContextConfigurationData* this) {
    ContextConfigurationData_initFields(this);
}

ContextConfigurationData* ContextConfigurationData_new(void) {
    ContextConfigurationData* this = calloc(1, sizeof(ContextConfigurationData));
    ContextConfigurationData_init(this);
    return this;
}

