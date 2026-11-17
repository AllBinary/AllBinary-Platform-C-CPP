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
// package org.allbinary.logic.visual.transform.generator

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
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h"

typedef struct TransformGeneratorUtil TransformGeneratorUtil;
struct TransformGeneratorUtil {
    LogUtil* logUtil;
};

static TransformGeneratorUtil* TransformGeneratorUtil_instance;

TransformGeneratorUtil* TransformGeneratorUtil_new(void);
TransformGeneratorUtil* TransformGeneratorUtil_getInstance(void);

void TransformGeneratorUtil_init(TransformGeneratorUtil* this);
void TransformGeneratorUtil_generate(TransformGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, TransformInfoInterface* ownerTransformInfoInterface);
void TransformGeneratorUtil_generate(TransformGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoDomNode* transformInfoDomNode, TransformInfoInterface* ownerTransformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void TransformGeneratorUtil_staticInit(void) {
    TransformGeneratorUtil_instance = TransformGeneratorUtil_new();
}

static void TransformGeneratorUtil_initFields(TransformGeneratorUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformGeneratorUtil* TransformGeneratorUtil_getInstance(void) {
        return TransformGeneratorUtil_instance;
}


void TransformGeneratorUtil_init(TransformGeneratorUtil* this) {
    TransformGeneratorUtil_initFields(this);
}

TransformGeneratorUtil* TransformGeneratorUtil_new(void) {
    TransformGeneratorUtil* this = calloc(1, sizeof(TransformGeneratorUtil));
    TransformGeneratorUtil_init(this);
    return this;
}


// throws Exception
void TransformGeneratorUtil_generate(TransformGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, TransformInfoInterface* ownerTransformInfoInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Generating View: ", TransformInfoInterface_getName(transformInfoInterface)), this, "generate()");
            }
            TransformInterface* componentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), abeClientInformation, TransformInfoInterface_getName(transformInfoInterface), ownerTransformInfoInterface);
            const char* result = TransformInterface_view(componentInterface);
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) TransformInterface_getTransformInfoInterface(componentInterface));
            InputOutputTypeData* inputOutputTypeData = InputOutputTypeData_getInstance();
            if (java_string_indexOf(result, "<HTML>") >= 0) {
                JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), put, inputOutputTypeData->NAME, inputOutputTypeData->DEFAULT);
            } else {
                JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), put, inputOutputTypeData->NAME, inputOutputTypeData->DEFAULT_FRAGMENT);
            }
            StoreFileGenerator_process(StoreFileGenerator_new(TransformInterface_getTransformInfoInterface(componentInterface)), result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate a view", this, "generate()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
void TransformGeneratorUtil_generate(TransformGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoDomNode* transformInfoDomNode, TransformInfoInterface* ownerTransformInfoInterface) {
        TransformGeneratorUtil_generate(this, abeClientInformation, TransformInfoDomNode_getTransformInfoInterface(transformInfoDomNode), ownerTransformInfoInterface);
}

