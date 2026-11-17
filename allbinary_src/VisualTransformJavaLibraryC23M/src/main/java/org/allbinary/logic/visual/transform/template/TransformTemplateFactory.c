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
// package org.allbinary.logic.visual.transform.template

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h"

typedef struct TransformTemplateFactory TransformTemplateFactory;
struct TransformTemplateFactory {
    LogUtil* logUtil;
};

static TransformTemplateFactory* TransformTemplateFactory_instance;

TransformTemplateFactory* TransformTemplateFactory_new(void);
TransformTemplateFactory* TransformTemplateFactory_getInstance(void);

void TransformTemplateFactory_init(TransformTemplateFactory* this);
TransformTemplateInterface* TransformTemplateFactory_getInstance(TransformTemplateFactory* this, AbeClientInformationInterface* abeClientInformation, const char* templateName, HashMap* propertiesHashMap, PageContext* pageContext);

// Static fields with runtime initializers: call this once at startup
void TransformTemplateFactory_staticInit(void) {
    TransformTemplateFactory_instance = TransformTemplateFactory_new();
}

static void TransformTemplateFactory_initFields(TransformTemplateFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformTemplateFactory* TransformTemplateFactory_getInstance(void) {
        return TransformTemplateFactory_instance;
}


void TransformTemplateFactory_init(TransformTemplateFactory* this) {
    TransformTemplateFactory_initFields(this);
}

TransformTemplateFactory* TransformTemplateFactory_new(void) {
    TransformTemplateFactory* this = calloc(1, sizeof(TransformTemplateFactory));
    TransformTemplateFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformTemplateInterface* TransformTemplateFactory_getInstance(TransformTemplateFactory* this, AbeClientInformationInterface* abeClientInformation, const char* templateName, HashMap* propertiesHashMap, PageContext* pageContext) {
        JAVA_TRY {
            TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder_getInstance();
            TransformInfoInterface* transformInfoInterface = TransformInfoEntity_get(transformInfoEntity, templateName, propertiesHashMap, pageContext);
            return ((TransformTemplateInterface*) TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory_getInstance(), abeClientInformation, transformInfoInterface));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Get Instance";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_concat(error, templateName), "->TemplateFactory"), this, "getInstance(viewName, HashMap, PageContext)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

