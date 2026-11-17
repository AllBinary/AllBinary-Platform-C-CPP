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
// package views.admin.customizers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/customizers/CustomizersView.h"

typedef struct CustomizersValidationView CustomizersValidationView;
struct CustomizersValidationView {
    CustomizersView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


CustomizersValidationView* CustomizersValidationView_new(TransformInfoInterface* transformInfoInterface);

void CustomizersValidationView_init(CustomizersValidationView* this, TransformInfoInterface* transformInfoInterface);
bool CustomizersValidationView_isValid(CustomizersValidationView* this);
const char* CustomizersValidationView_validationInfo(CustomizersValidationView* this);
Document* CustomizersValidationView_toValidationInfoDoc(CustomizersValidationView* this);
Node* CustomizersValidationView_toValidationInfoNode(CustomizersValidationView* this, Document* document);
TransformInfoInterface* CustomizersValidationView_getTransformInfoInterface(CustomizersValidationView* this);

static void CustomizersValidationView_initFields(CustomizersValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void CustomizersValidationView_init(CustomizersValidationView* this, TransformInfoInterface* transformInfoInterface) {
        CustomizersView_init(&this->base, transformInfoInterface);
        CustomizersValidationView_initFields(this);
}

CustomizersValidationView* CustomizersValidationView_new(TransformInfoInterface* transformInfoInterface) {
    CustomizersValidationView* this = calloc(1, sizeof(CustomizersValidationView));
    CustomizersValidationView_init(this, transformInfoInterface);
    return this;
}


bool CustomizersValidationView_isValid(CustomizersValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(this->customizersVector, size) > 0) {
                return true;
            } else {
                return false;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* CustomizersValidationView_validationInfo(CustomizersValidationView* this) {
        JAVA_TRY {
            return "No Customizers";
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* CustomizersValidationView_toValidationInfoDoc(CustomizersValidationView* this) {
        return nullptr;
}


Node* CustomizersValidationView_toValidationInfoNode(CustomizersValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* CustomizersValidationView_getTransformInfoInterface(CustomizersValidationView* this) {
        return CustomizersView_getTransformInfoInterface((&this->base));
}

