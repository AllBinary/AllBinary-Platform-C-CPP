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
// package tags.generic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "tags/TransformTag.h"

typedef struct GenericViewTag GenericViewTag;
struct GenericViewTag {
    TransformTag base;
    LogUtil* logUtil;
    const char* output;
    const char* file;
};


GenericViewTag* GenericViewTag_new(void);

void GenericViewTag_init(GenericViewTag* this);
void GenericViewTag_setOutput(GenericViewTag* this, const char* value);
void GenericViewTag_setFile(GenericViewTag* this, const char* value);

static void GenericViewTag_initFields(GenericViewTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->output = nullptr;
    this->file = nullptr;
}


void GenericViewTag_init(GenericViewTag* this) {
    TransformTag_init(&this->base);
    GenericViewTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

GenericViewTag* GenericViewTag_new(void) {
    GenericViewTag* this = calloc(1, sizeof(GenericViewTag));
    GenericViewTag_init(this);
    return this;
}


void GenericViewTag_setOutput(GenericViewTag* this, const char* value) {
        this->output = value;
        JAVA_CALL(GenericViewTag_getPropertiesHashMap(this), put, InputOutputTypeData_getInstance()->NAME, this->output);
}


void GenericViewTag_setFile(GenericViewTag* this, const char* value) {
        this->file = value;
        JAVA_CALL(GenericViewTag_getPropertiesHashMap(this), put, InputOutputTypeData_getInstance()->FILE, this->file);
}

