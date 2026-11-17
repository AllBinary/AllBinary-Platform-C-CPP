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
#include "org/allbinary/business/user/username/UserName.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/user/UserView.h"

typedef struct EditValidationView EditValidationView;
struct EditValidationView {
    UserView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditValidationView_isValid(EditValidationView* this);
const char* EditValidationView_validationInfo(EditValidationView* this);
Document* EditValidationView_toValidationInfoDoc(EditValidationView* this);
Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document);
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this);

static void EditValidationView_initFields(EditValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface) {
        UserView_init(&this->base, transformInfoInterface);
        EditValidationView_initFields(this);
}

EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditValidationView* this = calloc(1, sizeof(EditValidationView));
    EditValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditValidationView_isValid(EditValidationView* this) {
        JAVA_TRY {
            if (UserName_isValid(UserName_getInstance(), JAVA_CALL(EditValidationView_getWeblisketSession(this), getUserName)) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Failed to validate username", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            this->user = UserEntityFactory_getUser(UserEntityFactory_getInstance(), JAVA_CALL(EditValidationView_getWeblisketSession(this), getUserName));
            if (this->user == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User does not exist", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (JAVA_CALL(this->user, isValid) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User exists but is invalid - Probably manually modified", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditValidationView_validationInfo(EditValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (UserName_isValid(UserName_getInstance(), JAVA_CALL(EditValidationView_getWeblisketSession(this), getUserName)) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Failed to validate username", this, "validationInfo()");
                }
                StringMaker_append(stringBuffer, "Session User Name is not valid - Your session data has been logged!");
            }
            if (this->user == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User does not exist", this, this->commonStrings->IS_VALID);
                }
                StringMaker_append(stringBuffer, "User profile does not exist - Your session data has been logged!");
            }
            if (JAVA_CALL(this->user, isValid) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User exists but is invalid - Probably manually modified", this, this->commonStrings->IS_VALID);
                }
                StringMaker_append(stringBuffer, JAVA_CALL(this->user, validationInfo));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditValidationView_toValidationInfoDoc(EditValidationView* this) {
        return nullptr;
}


Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this) {
        return UserView_getTransformInfoInterface((&this->base));
}

