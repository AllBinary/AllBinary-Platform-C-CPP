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
// package views.admin.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/HttpContextView.h"

typedef struct AddValidationStoreFrontView AddValidationStoreFrontView;
struct AddValidationStoreFrontView {
    HttpContextView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    StoreFrontInterface* newStoreFrontInterface;
};


AddValidationStoreFrontView* AddValidationStoreFrontView_new(TransformInfoInterface* transformInfoInterface);

void AddValidationStoreFrontView_init(AddValidationStoreFrontView* this, TransformInfoInterface* transformInfoInterface);
bool AddValidationStoreFrontView_isValid(AddValidationStoreFrontView* this);
static const char* AddValidationStoreFrontView_getStoreViewsPath(AddValidationStoreFrontView* this);
const char* AddValidationStoreFrontView_validationInfo(AddValidationStoreFrontView* this);
Document* AddValidationStoreFrontView_toValidationInfoDoc(AddValidationStoreFrontView* this);
Node* AddValidationStoreFrontView_toValidationInfoNode(AddValidationStoreFrontView* this, Document* document);
const char* AddValidationStoreFrontView_view(AddValidationStoreFrontView* this);
TransformInfoInterface* AddValidationStoreFrontView_getTransformInfoInterface(AddValidationStoreFrontView* this);

static void AddValidationStoreFrontView_initFields(AddValidationStoreFrontView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void AddValidationStoreFrontView_init(AddValidationStoreFrontView* this, TransformInfoInterface* transformInfoInterface) {
        HttpContextView_init(&this->base, transformInfoInterface);
        AddValidationStoreFrontView_initFields(this);
        this->newStoreFrontInterface = ((StoreFrontInterface*) StoreFront_new(((HttpServletRequest*) JAVA_CALL(AddValidationStoreFrontView_getPageContext(this), getRequest))));
        if (StoreFrontInterface_getName(this->newStoreFrontInterface) == nullptr) {
            StoreFrontInterface_setName(this->newStoreFrontInterface, JAVA_CALL(AddValidationStoreFrontView_getWeblisketSession(this), getStoreName));
        }
}

AddValidationStoreFrontView* AddValidationStoreFrontView_new(TransformInfoInterface* transformInfoInterface) {
    AddValidationStoreFrontView* this = calloc(1, sizeof(AddValidationStoreFrontView));
    AddValidationStoreFrontView_init(this, transformInfoInterface);
    return this;
}


bool AddValidationStoreFrontView_isValid(AddValidationStoreFrontView* this) {
        JAVA_TRY {
            bool valid = true;
            if (StoreFrontInterface_isValid(this->newStoreFrontInterface) == false) {
                valid = false;
            }
            if (StoreFrontFactory_getInstance(StoreFrontInterface_getName(this->newStoreFrontInterface)) != nullptr) {
                valid = false;
            }
            if (JAVA_CALL(AbFile_createAbFileFromAbPath(AbPath_new(AddValidationStoreFrontView_getStoreViewsPath(this), StringUtil_getInstance()->EMPTY_STRING)), isFile)) {
                valid = false;
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


// throws Exception
static const char* AddValidationStoreFrontView_getStoreViewsPath(AddValidationStoreFrontView* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(HttpContextView_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(HttpContextView_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(this->newStoreFrontInterface));
        return StringMaker_toString(stringBuffer);
}


const char* AddValidationStoreFrontView_validationInfo(AddValidationStoreFrontView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (StoreFrontInterface_isValid(this->newStoreFrontInterface) == false) {
                StringMaker_append(stringBuffer, StoreFrontInterface_validationInfo(this->newStoreFrontInterface));
            }
            if (StoreFrontFactory_getInstance(StoreFrontInterface_getName(this->newStoreFrontInterface)) != nullptr) {
                StringMaker_append(stringBuffer, "Store name already used<br/>");
            }
            if (JAVA_CALL(AbFile_createAbFileFromAbPath(AbPath_new(AddValidationStoreFrontView_getStoreViewsPath(this), StringUtil_getInstance()->EMPTY_STRING)), isFile)) {
                StringMaker_append(stringBuffer, "Store name clashes with template name<br/>");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* AddValidationStoreFrontView_toValidationInfoDoc(AddValidationStoreFrontView* this) {
        return nullptr;
}


Node* AddValidationStoreFrontView_toValidationInfoNode(AddValidationStoreFrontView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* AddValidationStoreFrontView_view(AddValidationStoreFrontView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* AddValidationStoreFrontView_getTransformInfoInterface(AddValidationStoreFrontView* this) {
        return HttpContextView_getTransformInfoInterface((&this->base));
}

