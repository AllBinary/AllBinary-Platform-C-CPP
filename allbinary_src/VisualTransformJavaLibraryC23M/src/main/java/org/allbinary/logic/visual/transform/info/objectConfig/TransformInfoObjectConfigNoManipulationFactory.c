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
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformInfoObjectConfigNoManipulationFactory TransformInfoObjectConfigNoManipulationFactory;
struct TransformInfoObjectConfigNoManipulationFactory {
    LogUtil* logUtil;
};

static TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory_instance;

TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory_new(void);
TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory_getInstance(void);

void TransformInfoObjectConfigNoManipulationFactory_init(TransformInfoObjectConfigNoManipulationFactory* this);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigNoManipulationFactory_getInstance(TransformInfoObjectConfigNoManipulationFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);

// Static fields with runtime initializers: call this once at startup
void TransformInfoObjectConfigNoManipulationFactory_staticInit(void) {
    TransformInfoObjectConfigNoManipulationFactory_instance = TransformInfoObjectConfigNoManipulationFactory_new();
}

static void TransformInfoObjectConfigNoManipulationFactory_initFields(TransformInfoObjectConfigNoManipulationFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory_getInstance(void) {
        return TransformInfoObjectConfigNoManipulationFactory_instance;
}


void TransformInfoObjectConfigNoManipulationFactory_init(TransformInfoObjectConfigNoManipulationFactory* this) {
    TransformInfoObjectConfigNoManipulationFactory_initFields(this);
}

TransformInfoObjectConfigNoManipulationFactory* TransformInfoObjectConfigNoManipulationFactory_new(void) {
    TransformInfoObjectConfigNoManipulationFactory* this = calloc(1, sizeof(TransformInfoObjectConfigNoManipulationFactory));
    TransformInfoObjectConfigNoManipulationFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigNoManipulationFactory_getInstance(TransformInfoObjectConfigNoManipulationFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) {
        JAVA_TRY {
            TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData_getInstance();
            const char* data = CryptFileReader_get(CryptFileReader_new(transformInfoObjectConfigData->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance(transformInfoObjectConfigData)->ENCRYPTED_EXTENSION), objectConfigFileAbPath);
            return TransformInfoObjectConfig_new(transformInfoInterface, DomDocumentHelper_create(data));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Could Not Load Object Config", this, commonStrings->GET_INSTANCE, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

