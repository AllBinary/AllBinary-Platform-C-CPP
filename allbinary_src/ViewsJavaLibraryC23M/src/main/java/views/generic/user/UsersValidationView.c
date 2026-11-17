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
// package views.generic.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/user/UsersView.h"

typedef struct UsersValidationView UsersValidationView;
struct UsersValidationView {
    UsersView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


UsersValidationView* UsersValidationView_new(TransformInfoInterface* transformInfoInterface);

void UsersValidationView_init(UsersValidationView* this, TransformInfoInterface* transformInfoInterface);
bool UsersValidationView_isValid(UsersValidationView* this);
const char* UsersValidationView_validationInfo(UsersValidationView* this);
Document* UsersValidationView_toValidationInfoDoc(UsersValidationView* this);
Node* UsersValidationView_toValidationInfoNode(UsersValidationView* this, Document* document);
TransformInfoInterface* UsersValidationView_getTransformInfoInterface(UsersValidationView* this);

static void UsersValidationView_initFields(UsersValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void UsersValidationView_init(UsersValidationView* this, TransformInfoInterface* transformInfoInterface) {
        UsersView_init(&this->base, transformInfoInterface);
        UsersValidationView_initFields(this);
        this->userVector = UserEntityFactory_getCustomers(UserEntityFactory_getInstance());
}

UsersValidationView* UsersValidationView_new(TransformInfoInterface* transformInfoInterface) {
    UsersValidationView* this = calloc(1, sizeof(UsersValidationView));
    UsersValidationView_init(this, transformInfoInterface);
    return this;
}


bool UsersValidationView_isValid(UsersValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(this->userVector, size) > 0) {
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


const char* UsersValidationView_validationInfo(UsersValidationView* this) {
        JAVA_TRY {
            return "No Users";
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* UsersValidationView_toValidationInfoDoc(UsersValidationView* this) {
        return nullptr;
}


Node* UsersValidationView_toValidationInfoNode(UsersValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* UsersValidationView_getTransformInfoInterface(UsersValidationView* this) {
        return UsersView_getTransformInfoInterface((&this->base));
}

