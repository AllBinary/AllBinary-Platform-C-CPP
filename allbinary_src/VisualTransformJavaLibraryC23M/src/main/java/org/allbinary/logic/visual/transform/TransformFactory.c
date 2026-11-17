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
// package org.allbinary.logic.visual.transform

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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformFactory TransformFactory;
struct TransformFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static TransformFactory* TransformFactory_instance;

TransformFactory* TransformFactory_new(void);
TransformFactory* TransformFactory_getInstance(void);

void TransformFactory_init(TransformFactory* this);
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, const char* viewName, TransformInfoInterface* ownerTransformInfoInterface);
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext);
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void TransformFactory_staticInit(void) {
    TransformFactory_instance = TransformFactory_new();
}

static void TransformFactory_initFields(TransformFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


TransformFactory* TransformFactory_getInstance(void) {
        return TransformFactory_instance;
}


void TransformFactory_init(TransformFactory* this) {
    TransformFactory_initFields(this);
}

TransformFactory* TransformFactory_new(void) {
    TransformFactory* this = calloc(1, sizeof(TransformFactory));
    TransformFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, const char* viewName, TransformInfoInterface* ownerTransformInfoInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Creating Transform: ", viewName), this, this->commonStrings->GET_INSTANCE);
            }
            TransformInfoHttpInterface* ownerTransformInfoHttpInterface = ((TransformInfoHttpInterface*) ownerTransformInfoInterface);
            TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder_getInstance();
            TransformInfoInterface* transformInfoInterface = TransformInfoEntity_get(transformInfoEntity, viewName, TransformInfoHttpInterface_getPropertiesHashMap(ownerTransformInfoHttpInterface), TransformInfoHttpInterface_getPageContext(ownerTransformInfoHttpInterface));
            if (transformInfoInterface == nullptr) {
                java_throw(java_exception_new("Exception", java_concat("No Such View In DB: ", viewName)));
            }
            TransformInfoInterface_setChild(transformInfoInterface);
            Any* anyType = TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory_getInstance(), abeClientInformation, transformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Created Transform: ", viewName), this, this->commonStrings->GET_INSTANCE);
            }
            return ((TransformInterface*) anyType);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, HashMap* propertiesHashMap, PageContext* pageContext) {
        JAVA_TRY {
            TransformInfoData* transformInfoData = TransformInfoData_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Creating Transform: ", java_string_of(HashMap_get(propertiesHashMap, transformInfoData->NAME))), this, this->commonStrings->GET_INSTANCE);
            }
            TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder_getInstance();
            TransformInfoInterface* transformInfoInterface = TransformInfoEntity_get(transformInfoEntity, ((const char*) HashMap_get(propertiesHashMap, transformInfoData->NAME)), propertiesHashMap, pageContext);
            if (transformInfoInterface != nullptr) {
                TransformInfoInterface_override(transformInfoInterface, propertiesHashMap);
            } else {
                transformInfoInterface = ((TransformInfoInterface*) TransformInfoHttpFactory_getInstance(propertiesHashMap, pageContext));
            }
            Any* anyType = TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory_getInstance(), abeClientInformation, transformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Created Transform: ", java_string_of(HashMap_get(propertiesHashMap, transformInfoData->NAME))), this, this->commonStrings->GET_INSTANCE);
            }
            return ((TransformInterface*) anyType);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failed To Get Instance: ");
                StringMaker_append(stringBuffer, ((const char*) HashMap_get(propertiesHashMap, TransformInfoData_getInstance()->NAME)));
                StringMaker_append(stringBuffer, "->TransformFactory");
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInterface* TransformFactory_getInstance(TransformFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Creating Transform: ", TransformInfoInterface_getName(transformInfoInterface)), this, "getInstance(TransformInfoInterface)");
            }
            Any* anyType = TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory_getInstance(), abeClientInformation, transformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Created Transform: ", TransformInfoInterface_getName(transformInfoInterface)), this, "getInstance(TransformInfoInterface)");
            }
            return ((TransformInterface*) anyType);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(TransformInfoInterface)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

