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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/user/UserView.h"

typedef struct NewUserView NewUserView;
struct NewUserView {
    UserView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


NewUserView* NewUserView_new(TransformInfoInterface* transformInfoInterface);

void NewUserView_init(NewUserView* this, TransformInfoInterface* transformInfoInterface);
bool NewUserView_isValid(NewUserView* this);
const char* NewUserView_validationInfo(NewUserView* this);
Document* NewUserView_toValidationInfoDoc(NewUserView* this);
Node* NewUserView_toValidationInfoNode(NewUserView* this, Document* document);
TransformInfoInterface* NewUserView_getTransformInfoInterface(NewUserView* this);

static void NewUserView_initFields(NewUserView* this) {
    this->logUtil = LogUtil_getInstance();
}


void NewUserView_init(NewUserView* this, TransformInfoInterface* transformInfoInterface) {
        UserView_init(&this->base, transformInfoInterface);
        NewUserView_initFields(this);
        this->user = NewUserFactory_getInstance();
}

NewUserView* NewUserView_new(TransformInfoInterface* transformInfoInterface) {
    NewUserView* this = calloc(1, sizeof(NewUserView));
    NewUserView_init(this, transformInfoInterface);
    return this;
}


bool NewUserView_isValid(NewUserView* this) {
        JAVA_TRY {
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* NewUserView_validationInfo(NewUserView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Please Contact Administrator");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* NewUserView_toValidationInfoDoc(NewUserView* this) {
        return nullptr;
}


Node* NewUserView_toValidationInfoNode(NewUserView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* NewUserView_getTransformInfoInterface(NewUserView* this) {
        return UserView_getTransformInfoInterface((&this->base));
}

