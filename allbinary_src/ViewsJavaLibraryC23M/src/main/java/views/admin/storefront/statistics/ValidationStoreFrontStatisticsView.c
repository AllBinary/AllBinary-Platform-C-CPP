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
// package views.admin.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/storefront/statistics/StoreFrontStatisticsComponent.h"

//extends StoreFrontComponent
typedef struct ValidationStoreFrontStatisticsView ValidationStoreFrontStatisticsView;
struct ValidationStoreFrontStatisticsView {
    StoreFrontStatisticsComponent base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    StoreFrontInterface* newStoreFrontInterface;
};


ValidationStoreFrontStatisticsView* ValidationStoreFrontStatisticsView_new(TransformInfoInterface* transformInfoInterface);

void ValidationStoreFrontStatisticsView_init(ValidationStoreFrontStatisticsView* this, TransformInfoInterface* transformInfoInterface);
bool ValidationStoreFrontStatisticsView_isValid(ValidationStoreFrontStatisticsView* this);
const char* ValidationStoreFrontStatisticsView_validationInfo(ValidationStoreFrontStatisticsView* this);
Document* ValidationStoreFrontStatisticsView_toValidationInfoDoc(ValidationStoreFrontStatisticsView* this);
Node* ValidationStoreFrontStatisticsView_toValidationInfoNode(ValidationStoreFrontStatisticsView* this, Document* document);
TransformInfoInterface* ValidationStoreFrontStatisticsView_getTransformInfoInterface(ValidationStoreFrontStatisticsView* this);

static void ValidationStoreFrontStatisticsView_initFields(ValidationStoreFrontStatisticsView* this) {
    this->logUtil = LogUtil_getInstance();
    this->newStoreFrontInterface = nullptr;
}


void ValidationStoreFrontStatisticsView_init(ValidationStoreFrontStatisticsView* this, TransformInfoInterface* transformInfoInterface) {
        StoreFrontStatisticsComponent_init(&this->base, transformInfoInterface);
        ValidationStoreFrontStatisticsView_initFields(this);
}

ValidationStoreFrontStatisticsView* ValidationStoreFrontStatisticsView_new(TransformInfoInterface* transformInfoInterface) {
    ValidationStoreFrontStatisticsView* this = calloc(1, sizeof(ValidationStoreFrontStatisticsView));
    ValidationStoreFrontStatisticsView_init(this, transformInfoInterface);
    return this;
}


bool ValidationStoreFrontStatisticsView_isValid(ValidationStoreFrontStatisticsView* this) {
        JAVA_TRY {
            bool valid = true;
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* ValidationStoreFrontStatisticsView_validationInfo(ValidationStoreFrontStatisticsView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Never");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* ValidationStoreFrontStatisticsView_toValidationInfoDoc(ValidationStoreFrontStatisticsView* this) {
        return nullptr;
}


Node* ValidationStoreFrontStatisticsView_toValidationInfoNode(ValidationStoreFrontStatisticsView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* ValidationStoreFrontStatisticsView_getTransformInfoInterface(ValidationStoreFrontStatisticsView* this) {
        return StoreFrontStatisticsComponent_getTransformInfoInterface((&this->base));
}

