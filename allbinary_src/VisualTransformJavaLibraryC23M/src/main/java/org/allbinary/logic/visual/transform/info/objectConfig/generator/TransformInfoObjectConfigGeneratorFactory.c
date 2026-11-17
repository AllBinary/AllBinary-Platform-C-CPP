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
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h"

typedef struct TransformInfoObjectConfigGeneratorFactory TransformInfoObjectConfigGeneratorFactory;
struct TransformInfoObjectConfigGeneratorFactory {
    TransformInfoObjectConfigGeneratorFactoryInterface TransformInfoObjectConfigGeneratorFactoryInterface_interface;
    LogUtil* logUtil;
};

static TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory_instance;

TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory_new(void);
TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory_getInstance(void);

void TransformInfoObjectConfigGeneratorFactory_init(TransformInfoObjectConfigGeneratorFactory* this);
TransformInfoObjectConfigGenerator* TransformInfoObjectConfigGeneratorFactory_getInstance(TransformInfoObjectConfigGeneratorFactory* this, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectConfigGeneratorFactory_staticInit(void) {
    TransformInfoObjectConfigGeneratorFactory_instance = TransformInfoObjectConfigGeneratorFactory_new();
}

static void TransformInfoObjectConfigGeneratorFactory_initFields(TransformInfoObjectConfigGeneratorFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory_getInstance(void) {
        return TransformInfoObjectConfigGeneratorFactory_instance;
}


void TransformInfoObjectConfigGeneratorFactory_init(TransformInfoObjectConfigGeneratorFactory* this) {
    TransformInfoObjectConfigGeneratorFactory_initFields(this);
}

TransformInfoObjectConfigGeneratorFactory* TransformInfoObjectConfigGeneratorFactory_new(void) {
    TransformInfoObjectConfigGeneratorFactory* this = calloc(1, sizeof(TransformInfoObjectConfigGeneratorFactory));
    TransformInfoObjectConfigGeneratorFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigGenerator* TransformInfoObjectConfigGeneratorFactory_getInstance(TransformInfoObjectConfigGeneratorFactory* this, TransformInfoInterface* transformInfoInterface) {
        const char* type = ((const char*) JAVA_CALL(TransformInfoInterface_getObjectConfigInterface(transformInfoInterface), getOutputTypeName));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, java_concat("Generating Instance for type: ", type), this, commonStrings->GET_INSTANCE);
        }
        if (type == nullptr || strcmp(type, InputOutputTypeData_getInstance()->RESPONSE) == 0 || TransformInfoInterface_isChild(transformInfoInterface)) {
            return BasicGenerator_new();
        } else if (strcmp(type, InputOutputTypeData_getInstance()->FILE) == 0) {
            return StoreFileGenerator_new(transformInfoInterface);
        } else {
            java_throw(java_exception_new("Exception", "No Such TransformInfoObjectConfigGenerator Type"));
        }
}

