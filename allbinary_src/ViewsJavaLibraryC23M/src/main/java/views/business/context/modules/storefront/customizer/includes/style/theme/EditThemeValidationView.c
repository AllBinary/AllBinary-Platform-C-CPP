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
// package views.business.context.modules.storefront.customizer.includes.style.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryPathValidationView.h"
#include "org/allbinary/data/tree/category/CategoryLoaderFactory.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h"

typedef struct EditThemeValidationView EditThemeValidationView;
struct EditThemeValidationView {
    ThemeCustomizerView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


EditThemeValidationView* EditThemeValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditThemeValidationView_init(EditThemeValidationView* this, TransformInfoInterface* transformInfoInterface);
bool EditThemeValidationView_isValid(EditThemeValidationView* this);
const char* EditThemeValidationView_validationInfo(EditThemeValidationView* this);
Document* EditThemeValidationView_toValidationInfoDoc(EditThemeValidationView* this);
Node* EditThemeValidationView_toValidationInfoNode(EditThemeValidationView* this, Document* document);
TransformInfoInterface* EditThemeValidationView_getTransformInfoInterface(EditThemeValidationView* this);

static void EditThemeValidationView_initFields(EditThemeValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void EditThemeValidationView_init(EditThemeValidationView* this, TransformInfoInterface* transformInfoInterface) {
        ThemeCustomizerView_init(&this->base, transformInfoInterface);
        EditThemeValidationView_initFields(this);
}

EditThemeValidationView* EditThemeValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditThemeValidationView* this = calloc(1, sizeof(EditThemeValidationView));
    EditThemeValidationView_init(this, transformInfoInterface);
    return this;
}


bool EditThemeValidationView_isValid(EditThemeValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            CategoryFactoryInterface* categoryFactoryInterface = StoreThemeCategoryFactory_new(EditThemeValidationView_getTransformInfoInterface(this));
            CategoryLoaderInterface* categoryLoaderInterface = CategoryLoaderFactory_getInstance(categoryFactoryInterface);
            StoreThemeCategoryInterface* rootStoreThemeCategoryInterface = ((StoreThemeCategoryInterface*) CategoryFactoryInterface_getRootInstance(categoryFactoryInterface));
            StoreThemeCategoryInterface* storeThemeCategoryInterface = ((StoreThemeCategoryInterface*) CategoryLoaderInterface_getAll(categoryLoaderInterface, ((CategoryInterface*) rootStoreThemeCategoryInterface)));
            this->validationInterface = StoreThemeCategoryPathValidationView_new(((StoreThemeCategoryInterface*) storeThemeCategoryInterface));
            isValid = JAVA_CALL(this->validationInterface, isValid);
            DomNodeInterface* domNodeInterface = ((DomNodeInterface*) this->validationInterface);
            Document* document = DomDocumentHelper_create();
            Document_appendChild(document, DomNodeInterface_toXmlNode(domNodeInterface, document));
            const char* documentString = XmlDocumentHelper_toString(document);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_putF(this->logUtil, java_concat("Setting Data: ", documentString), this, this->commonStrings->CONSTRUCTOR);
            }
            JAVA_CALL(EditThemeValidationView_getTransformInfoInterface(this), setData, documentString);
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* EditThemeValidationView_validationInfo(EditThemeValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(this->validationInterface, validationInfo));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* EditThemeValidationView_toValidationInfoDoc(EditThemeValidationView* this) {
        return nullptr;
}


Node* EditThemeValidationView_toValidationInfoNode(EditThemeValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* EditThemeValidationView_getTransformInfoInterface(EditThemeValidationView* this) {
        return ThemeCustomizerView_getTransformInfoInterface((&this->base));
}

