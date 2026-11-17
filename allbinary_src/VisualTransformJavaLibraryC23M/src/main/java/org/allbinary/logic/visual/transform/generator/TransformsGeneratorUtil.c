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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"

typedef struct TransformsGeneratorUtil TransformsGeneratorUtil;
struct TransformsGeneratorUtil {
    LogUtil* logUtil;
};

static TransformsGeneratorUtil* TransformsGeneratorUtil_instance;

TransformsGeneratorUtil* TransformsGeneratorUtil_new(void);
TransformsGeneratorUtil* TransformsGeneratorUtil_getInstance(void);

void TransformsGeneratorUtil_init(TransformsGeneratorUtil* this);
const char* TransformsGeneratorUtil_generateComponentsFromObjectConfig(TransformsGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* group);
const char* TransformsGeneratorUtil_generateComponentsFromObjectConfig(TransformsGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface, TransformInfoInterface* transformInfoInterface, const char* group);

// Static fields with runtime initializers: call this once at startup
void TransformsGeneratorUtil_staticInit(void) {
    TransformsGeneratorUtil_instance = TransformsGeneratorUtil_new();
}

static void TransformsGeneratorUtil_initFields(TransformsGeneratorUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformsGeneratorUtil* TransformsGeneratorUtil_getInstance(void) {
        return TransformsGeneratorUtil_instance;
}


void TransformsGeneratorUtil_init(TransformsGeneratorUtil* this) {
    TransformsGeneratorUtil_initFields(this);
}

TransformsGeneratorUtil* TransformsGeneratorUtil_new(void) {
    TransformsGeneratorUtil* this = calloc(1, sizeof(TransformsGeneratorUtil));
    TransformsGeneratorUtil_init(this);
    return this;
}


// throws Exception
const char* TransformsGeneratorUtil_generateComponentsFromObjectConfig(TransformsGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* group) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Started Group: ", group), this, "generateComponentsFromObjectConfig(2)");
        }
        TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoInterface_getObjectConfigInterface(transformInfoInterface);
        const char* result = TransformsGeneratorUtil_generateComponentsFromObjectConfig(this, abeClientInformation, transformInfoObjectConfigInterface, transformInfoInterface, group);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("End Group: ", group), this, "generateComponentsFromObjectConfig(2)");
        }
        return result;
}


// throws Exception
// Java overloaded method: C needs a different name
const char* TransformsGeneratorUtil_generateComponentsFromObjectConfig(TransformsGeneratorUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface, TransformInfoInterface* transformInfoInterface, const char* group) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Started Group: ", group), this, "generateComponentsFromObjectConfig()");
        }
        BasicArrayList* transformInfoObjectConfigComponentVector = TransformInfoObjectConfigInterface_getTransformsGroup(transformInfoObjectConfigInterface, group);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Processing ");
            StringMaker_appendint(stringBuffer, BasicArrayList_size(transformInfoObjectConfigComponentVector));
            StringMaker_append(stringBuffer, " Components Group: ");
            StringMaker_append(stringBuffer, group);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "generateComponentsFromObjectConfig()");
        }
        if (BasicArrayList_size(transformInfoObjectConfigComponentVector) < 1) {
            java_throw(java_exception_new("Exception", "No Pages Generated For Template."));
        }
        int32_t size = BasicArrayList_size(transformInfoObjectConfigComponentVector);
        for (int32_t index = 0; index < size; index++) {
            TransformInfoDomNode* transformInfoObjectConfigComponent = ((TransformInfoDomNode*) BasicArrayList_get(transformInfoObjectConfigComponentVector, index));
            TransformGeneratorUtil_generate(TransformGeneratorUtil_getInstance(), abeClientInformation, transformInfoObjectConfigComponent, transformInfoInterface);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Done Group: ", group), this, "generateComponentsFromObjectConfig()");
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "<!-- Generated all template views successfully for View: ");
        StringMaker_append(stringBuffer, TransformInfoInterface_getName(transformInfoInterface));
        StringMaker_append(stringBuffer, "-->");
        return StringMaker_toString(stringBuffer);
}

