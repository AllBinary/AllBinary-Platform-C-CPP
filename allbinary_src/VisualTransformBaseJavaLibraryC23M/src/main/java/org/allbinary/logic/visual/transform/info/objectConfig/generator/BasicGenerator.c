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
// package org.allbinary.logic.visual.transform.info.objectConfig.generator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"

typedef struct BasicGenerator BasicGenerator;
struct BasicGenerator {
    TransformInfoObjectConfigGenerator base;
    LogUtil* logUtil;
};


BasicGenerator* BasicGenerator_new(void);

void BasicGenerator_init(BasicGenerator* this);
const char* BasicGenerator_process(BasicGenerator* this, const char* input);

static void BasicGenerator_initFields(BasicGenerator* this) {
    this->logUtil = LogUtil_getInstance();
}


void BasicGenerator_init(BasicGenerator* this) {
    TransformInfoObjectConfigGenerator_init(&this->base);
    BasicGenerator_initFields(this);
}

BasicGenerator* BasicGenerator_new(void) {
    BasicGenerator* this = calloc(1, sizeof(BasicGenerator));
    BasicGenerator_init(this);
    return this;
}


const char* BasicGenerator_process(BasicGenerator* this, const char* input) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, "Processing", this, this->commonStrings->PROCESS);
        }
        return input;
}

