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
// package taghelpers

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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"

typedef struct ViewHelper ViewHelper;
struct ViewHelper {
    TransformInterface TransformInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AbeClientInformationInterface* abeClientInformation;
    TransformInterface* componentInterface;
    int32_t NO_TYPE;
};


ViewHelper* ViewHelper_new(HashMap* hashMap, PageContext* pageContext);

void ViewHelper_init(ViewHelper* this, HashMap* hashMap, PageContext* pageContext);
int32_t ViewHelper_getTypeId(ViewHelper* this);
const char* ViewHelper_view(ViewHelper* this);
Document* ViewHelper_toXmlDoc(ViewHelper* this);
TransformInterface* ViewHelper_getViewObject(ViewHelper* this);
TransformInfoInterface* ViewHelper_getTransformInfoInterface(ViewHelper* this);
TransformDocumentInterface* ViewHelper_getTransformDocumentInterface(ViewHelper* this);
void ViewHelper_setTransformDocumentInterface(ViewHelper* this, TransformDocumentInterface* viewDocumentInterface);

static void ViewHelper_initFields(ViewHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    this->NO_TYPE = 0;
}


void ViewHelper_init(ViewHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ViewHelper_initFields(this);
        this->componentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), this->abeClientInformation, hashMap, pageContext);
}

ViewHelper* ViewHelper_new(HashMap* hashMap, PageContext* pageContext) {
    ViewHelper* this = calloc(1, sizeof(ViewHelper));
    ViewHelper_init(this, hashMap, pageContext);
    return this;
}


int32_t ViewHelper_getTypeId(ViewHelper* this) {
        return this->NO_TYPE;
}


// throws Exception
const char* ViewHelper_view(ViewHelper* this) {
        JAVA_TRY {
            return TransformInterface_view(this->componentInterface);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to View: ";
            if (this->componentInterface != nullptr) {
                error = java_concat(error, java_string_of(java_class_of(this->componentInterface)));
            } else {
                error = java_concat(error, java_string_of("Unknown"));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
Document* ViewHelper_toXmlDoc(ViewHelper* this) {
        JAVA_TRY {
            java_throw(java_exception_new("Exception", java_concat("Hmm: ", java_string_of(JAVA_CALL(TransformInterface_getTransformDocumentInterface(this->componentInterface), getDoc)))));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to View: ";
            if (this->componentInterface != nullptr) {
                error = java_concat(error, java_string_of(java_class_of(this->componentInterface)));
            } else {
                error = java_concat(error, java_string_of("Unknown"));
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


TransformInterface* ViewHelper_getViewObject(ViewHelper* this) {
        return this->componentInterface;
}


// throws Exception
TransformInfoInterface* ViewHelper_getTransformInfoInterface(ViewHelper* this) {
        return TransformInterface_getTransformInfoInterface(this->componentInterface);
}


TransformDocumentInterface* ViewHelper_getTransformDocumentInterface(ViewHelper* this) {
        return nullptr;
}


void ViewHelper_setTransformDocumentInterface(ViewHelper* this, TransformDocumentInterface* viewDocumentInterface) {
        return;
}

