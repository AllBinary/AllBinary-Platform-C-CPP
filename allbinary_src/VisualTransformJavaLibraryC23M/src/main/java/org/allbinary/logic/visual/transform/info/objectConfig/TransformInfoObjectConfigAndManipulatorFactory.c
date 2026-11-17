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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h"

typedef struct TransformInfoObjectConfigAndManipulatorFactory TransformInfoObjectConfigAndManipulatorFactory;
struct TransformInfoObjectConfigAndManipulatorFactory {
    TransformInfoObjectConfigAndManipulatorFactoryBase base;
    LogUtil* logUtil;
};

static TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory_instance;

TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory_new(void);
TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory_getInstance(void);

void TransformInfoObjectConfigAndManipulatorFactory_init(TransformInfoObjectConfigAndManipulatorFactory* this);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectConfigAndManipulatorFactory_staticInit(void) {
    TransformInfoObjectConfigAndManipulatorFactory_instance = TransformInfoObjectConfigAndManipulatorFactory_new();
}

static void TransformInfoObjectConfigAndManipulatorFactory_initFields(TransformInfoObjectConfigAndManipulatorFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory_getInstance(void) {
        return TransformInfoObjectConfigAndManipulatorFactory_instance;
}


void TransformInfoObjectConfigAndManipulatorFactory_init(TransformInfoObjectConfigAndManipulatorFactory* this) {
    TransformInfoObjectConfigAndManipulatorFactoryBase_init(&this->base);
    TransformInfoObjectConfigAndManipulatorFactory_initFields(this);
}

TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory_new(void) {
    TransformInfoObjectConfigAndManipulatorFactory* this = calloc(1, sizeof(TransformInfoObjectConfigAndManipulatorFactory));
    TransformInfoObjectConfigAndManipulatorFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) {
        JAVA_TRY {
            const char* data = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectConfigData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance()->ENCRYPTED_EXTENSION), objectConfigFileAbPath);
            return TransformInfoObjectConfigAndManipulatorFactory_getInstance(this, abeClientInformation, transformInfoInterface, DomDocumentHelper_create(data));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Could Not Load Object Config", TransformInfoObjectConfigAndManipulatorFactory_getInstance(), this->commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        JAVA_TRY {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (transformInfoInterface != nullptr && !StringValidationUtil_isEmpty(stringValidationUtil, TransformInfoInterface_getStoreName(transformInfoInterface))) {
                return ((TransformInfoObjectConfigInterface*) GenericStoreTransformInfoObjectConfig_new(abeClientInformation, transformInfoInterface));
            } else {
                return ((TransformInfoObjectConfigInterface*) TransformInfoObjectConfig_new(transformInfoInterface));
            }
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Get Instance: ";
            if (transformInfoInterface != nullptr) {
                error = java_concat(error, TransformInfoInterface_getName(transformInfoInterface));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, TransformInfoObjectConfigAndManipulatorFactory_getInstance(), this->base.commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactory_getInstance(TransformInfoObjectConfigAndManipulatorFactory* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
        JAVA_TRY {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (transformInfoInterface != nullptr && !StringValidationUtil_isEmpty(stringValidationUtil, TransformInfoInterface_getStoreName(transformInfoInterface))) {
                return ((TransformInfoObjectConfigInterface*) GenericStoreTransformInfoObjectConfig_new(abeClientInformation, transformInfoInterface, document));
            } else {
                return ((TransformInfoObjectConfigInterface*) TransformInfoObjectConfig_new(transformInfoInterface, document));
            }
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Get Instance: ";
            if (transformInfoInterface != nullptr) {
                error = java_concat(error, TransformInfoInterface_getName(transformInfoInterface));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, TransformInfoObjectConfigAndManipulatorFactory_getInstance(), "getInstance(document)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

