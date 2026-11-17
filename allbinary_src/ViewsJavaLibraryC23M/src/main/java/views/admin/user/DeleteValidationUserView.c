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
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/username/UserName.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/user/UserView.h"

typedef struct DeleteValidationUserView DeleteValidationUserView;
struct DeleteValidationUserView {
    UserView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    const char* userName;
};


DeleteValidationUserView* DeleteValidationUserView_new(TransformInfoInterface* transformInfoInterface);

void DeleteValidationUserView_init(DeleteValidationUserView* this, TransformInfoInterface* transformInfoInterface);
bool DeleteValidationUserView_isValid(DeleteValidationUserView* this);
const char* DeleteValidationUserView_validationInfo(DeleteValidationUserView* this);
Document* DeleteValidationUserView_toValidationInfoDoc(DeleteValidationUserView* this);
Node* DeleteValidationUserView_toValidationInfoNode(DeleteValidationUserView* this, Document* document);
TransformInfoInterface* DeleteValidationUserView_getTransformInfoInterface(DeleteValidationUserView* this);

static void DeleteValidationUserView_initFields(DeleteValidationUserView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DeleteValidationUserView_init(DeleteValidationUserView* this, TransformInfoInterface* transformInfoInterface) {
        UserView_init(&this->base, transformInfoInterface);
        DeleteValidationUserView_initFields(this);
        HttpServletRequest* httpServletRequest = ((HttpServletRequest*) JAVA_CALL(DeleteValidationUserView_getPageContext(this), getRequest));
        HashMap* hashMap = RequestParams_toHashMap(RequestParams_new(httpServletRequest));
        this->userName = UserName_get(UserName_new(hashMap));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("User Name: ", this->userName), this, this->commonStrings->CONSTRUCTOR);
        }
}

DeleteValidationUserView* DeleteValidationUserView_new(TransformInfoInterface* transformInfoInterface) {
    DeleteValidationUserView* this = calloc(1, sizeof(DeleteValidationUserView));
    DeleteValidationUserView_init(this, transformInfoInterface);
    return this;
}


bool DeleteValidationUserView_isValid(DeleteValidationUserView* this) {
        JAVA_TRY {
            if (UserName_isValid(UserName_getInstance(), this->userName) == true) {
                this->user = UserEntityFactory_getUser(UserEntityFactory_getInstance(), this->userName);
                if (this->user == nullptr) {
                    return false;
                }
            } else {
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* DeleteValidationUserView_validationInfo(DeleteValidationUserView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (UserName_isValid(UserName_getInstance(), this->userName) == true) {
                this->user = UserEntityFactory_getUser(UserEntityFactory_getInstance(), this->userName);
                if (this->user == nullptr) {
                    StringMaker_append(stringBuffer, "User does not exist.<br />");
                }
            } else {
                StringMaker_append(stringBuffer, "User Name is not valid.<br />");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* DeleteValidationUserView_toValidationInfoDoc(DeleteValidationUserView* this) {
        return nullptr;
}


Node* DeleteValidationUserView_toValidationInfoNode(DeleteValidationUserView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* DeleteValidationUserView_getTransformInfoInterface(DeleteValidationUserView* this) {
        return UserView_getTransformInfoInterface((&this->base));
}

