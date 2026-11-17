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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformInfoObjectFactory TransformInfoObjectFactory;
struct TransformInfoObjectFactory {
    LogUtil* logUtil;
};

static TransformInfoObjectFactory* TransformInfoObjectFactory_instance;

TransformInfoObjectFactory* TransformInfoObjectFactory_new(void);
TransformInfoObjectFactory* TransformInfoObjectFactory_getInstance(void);

void TransformInfoObjectFactory_init(TransformInfoObjectFactory* this);
TransformInterface* TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectFactory_staticInit(void) {
    TransformInfoObjectFactory_instance = TransformInfoObjectFactory_new();
}

static void TransformInfoObjectFactory_initFields(TransformInfoObjectFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformInfoObjectFactory* TransformInfoObjectFactory_getInstance(void) {
        return TransformInfoObjectFactory_instance;
}


void TransformInfoObjectFactory_init(TransformInfoObjectFactory* this) {
    TransformInfoObjectFactory_initFields(this);
}

TransformInfoObjectFactory* TransformInfoObjectFactory_new(void) {
    TransformInfoObjectFactory* this = calloc(1, sizeof(TransformInfoObjectFactory));
    TransformInfoObjectFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInterface* TransformInfoObjectFactory_getInstance(TransformInfoObjectFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_putF(this->logUtil, java_concat("Creating View: ", TransformInfoInterface_getName(transformInfoInterface)), this, commonStrings->GET_INSTANCE);
            }
            Any** params = ((Any**) java_array_new(sizeof(Any*), 1));
            const char** classes = ((const char**) java_array_new(sizeof(const char*), 1));
            classes[0] = "TransformInfoInterface";
            params[0] = ((Any*) transformInfoInterface);
            TransformInterface* anyType = ((TransformInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, TransformInfoInterface_getObjectFile(transformInfoInterface), classes, params));
            if (anyType == nullptr) {
                if (transformInfoInterface != nullptr) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "\nNo Such View Name: ");
                    StringMaker_append(stringBuffer, TransformInfoInterface_getName(transformInfoInterface));
                    StringMaker_append(stringBuffer, "\nNo Such View Object: ");
                    StringMaker_append(stringBuffer, TransformInfoInterface_getObjectFile(transformInfoInterface));
                    java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
                } else {
                    java_throw(java_exception_new("Exception", "No Such View Object since transformInfo is null"));
                }
            }
            return anyType;
        } JAVA_CATCH(LicensingException, e) {
            const char* error = "Failed To Get Instance: ";
            if (transformInfoInterface != nullptr) {
                error = java_concat(error, TransformInfoInterface_getName(transformInfoInterface));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, error, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Get Instance: ";
            if (transformInfoInterface != nullptr) {
                error = java_concat(error, TransformInfoInterface_getName(transformInfoInterface));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, error, this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

