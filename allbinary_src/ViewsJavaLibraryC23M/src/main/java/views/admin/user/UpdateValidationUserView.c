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
// package views.admin.user

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
#include "views/business/context/HttpContextView.h"

typedef struct UpdateValidationUserView UpdateValidationUserView;
struct UpdateValidationUserView {
    HttpContextView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    UserInterface* user;
};


UpdateValidationUserView* UpdateValidationUserView_new(TransformInfoInterface* transformInfoInterface);

void UpdateValidationUserView_init(UpdateValidationUserView* this, TransformInfoInterface* transformInfoInterface);
bool UpdateValidationUserView_isValid(UpdateValidationUserView* this);
const char* UpdateValidationUserView_validationInfo(UpdateValidationUserView* this);
Document* UpdateValidationUserView_toValidationInfoDoc(UpdateValidationUserView* this);
Node* UpdateValidationUserView_toValidationInfoNode(UpdateValidationUserView* this, Document* document);
const char* UpdateValidationUserView_view(UpdateValidationUserView* this);
TransformInfoInterface* UpdateValidationUserView_getTransformInfoInterface(UpdateValidationUserView* this);

static void UpdateValidationUserView_initFields(UpdateValidationUserView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void UpdateValidationUserView_init(UpdateValidationUserView* this, TransformInfoInterface* transformInfoInterface) {
        HttpContextView_init(&this->base, transformInfoInterface);
        UpdateValidationUserView_initFields(this);
        this->user = NewUserFactory_getInstance(transformInfoInterface);
}

UpdateValidationUserView* UpdateValidationUserView_new(TransformInfoInterface* transformInfoInterface) {
    UpdateValidationUserView* this = calloc(1, sizeof(UpdateValidationUserView));
    UpdateValidationUserView_init(this, transformInfoInterface);
    return this;
}


bool UpdateValidationUserView_isValid(UpdateValidationUserView* this) {
        JAVA_TRY {
            if (UserEntityFactory_getUser(UserEntityFactory_getInstance(), UserInterface_getUserName(this->user)) == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User does not exist", this, this->commonStrings->IS_VALID);
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


const char* UpdateValidationUserView_validationInfo(UpdateValidationUserView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (UserEntityFactory_getUser(UserEntityFactory_getInstance(), UserInterface_getUserName(this->user)) == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "User does not exist", this, "validationInfo()");
                }
                StringMaker_append(stringBuffer, "Unable to update user that does not exist.<br />");
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


Document* UpdateValidationUserView_toValidationInfoDoc(UpdateValidationUserView* this) {
        return nullptr;
}


Node* UpdateValidationUserView_toValidationInfoNode(UpdateValidationUserView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* UpdateValidationUserView_view(UpdateValidationUserView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* UpdateValidationUserView_getTransformInfoInterface(UpdateValidationUserView* this) {
        return HttpContextView_getTransformInfoInterface((&this->base));
}

