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
#include "org/allbinary/business/user/NewUserFactory.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct AddValidationUserView AddValidationUserView;
struct AddValidationUserView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    UserInterface* user;
};


AddValidationUserView* AddValidationUserView_new(TransformInfoInterface* transformInfoInterface);

void AddValidationUserView_init(AddValidationUserView* this, TransformInfoInterface* transformInfoInterface);
bool AddValidationUserView_isValid(AddValidationUserView* this);
const char* AddValidationUserView_validationInfo(AddValidationUserView* this);
Document* AddValidationUserView_toValidationInfoDoc(AddValidationUserView* this);
Node* AddValidationUserView_toValidationInfoNode(AddValidationUserView* this, Document* document);
const char* AddValidationUserView_view(AddValidationUserView* this);
TransformInfoInterface* AddValidationUserView_getTransformInfoInterface(AddValidationUserView* this);

static void AddValidationUserView_initFields(AddValidationUserView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void AddValidationUserView_init(AddValidationUserView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        AddValidationUserView_initFields(this);
        this->user = NewUserFactory_getInstance(transformInfoInterface);
}

AddValidationUserView* AddValidationUserView_new(TransformInfoInterface* transformInfoInterface) {
    AddValidationUserView* this = calloc(1, sizeof(AddValidationUserView));
    AddValidationUserView_init(this, transformInfoInterface);
    return this;
}


bool AddValidationUserView_isValid(AddValidationUserView* this) {
        JAVA_TRY {
            if (UserEntityFactory_getUser(UserEntityFactory_getInstance(), UserInterface_getUserName(this->user)) != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User already in existance.", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (UserInterface_isValid(this->user) == false) {
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


const char* AddValidationUserView_validationInfo(AddValidationUserView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (UserEntityFactory_getUser(UserEntityFactory_getInstance(), UserInterface_getUserName(this->user)) != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User already exists", this, "validationInfo()");
                }
                StringMaker_append(stringBuffer, "The User Name you selected is already in use.<br/>  Please select another User Name.<br />");
            }
            if (UserInterface_isValid(this->user) == false) {
                StringMaker_append(stringBuffer, UserInterface_validationInfo(this->user));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* AddValidationUserView_toValidationInfoDoc(AddValidationUserView* this) {
        return nullptr;
}


Node* AddValidationUserView_toValidationInfoNode(AddValidationUserView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* AddValidationUserView_view(AddValidationUserView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* AddValidationUserView_getTransformInfoInterface(AddValidationUserView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

