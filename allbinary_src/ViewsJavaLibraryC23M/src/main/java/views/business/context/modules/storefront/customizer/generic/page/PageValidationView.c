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
// package views.business.context.modules.storefront.customizer.generic.page

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/page/PageValidation.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#include "views/business/context/modules/storefront/customizer/generic/page/PageView.h"

typedef struct PageValidationView PageValidationView;
struct PageValidationView {
    PageView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


PageValidationView* PageValidationView_new(TransformInfoInterface* transformInfoInterface);

void PageValidationView_init(PageValidationView* this, TransformInfoInterface* transformInfoInterface);
bool PageValidationView_isValid(PageValidationView* this);
const char* PageValidationView_validationInfo(PageValidationView* this);
Document* PageValidationView_toValidationInfoDoc(PageValidationView* this);
Node* PageValidationView_toValidationInfoNode(PageValidationView* this, Document* document);
TransformInfoInterface* PageValidationView_getTransformInfoInterface(PageValidationView* this);

static void PageValidationView_initFields(PageValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void PageValidationView_init(PageValidationView* this, TransformInfoInterface* transformInfoInterface) {
        PageView_init(&this->base, transformInfoInterface);
        PageValidationView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "PageViewValidation()");
        }
}

PageValidationView* PageValidationView_new(TransformInfoInterface* transformInfoInterface) {
    PageValidationView* this = calloc(1, sizeof(PageValidationView));
    PageValidationView_init(this, transformInfoInterface);
    return this;
}


bool PageValidationView_isValid(PageValidationView* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
            TransformInfoObjectConfigInterface* pageObjectConfigInterface = JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getObjectConfigInterface);
            BasicArrayList* allViewsToBeModifiedVector = TransformInfoObjectConfigInterface_getGroupTransforms(pageObjectConfigInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Views To Be Modified: ", java_string_of(BasicArrayList_size(allViewsToBeModifiedVector))), this, "get(transformInfoInterface)");
            }
            int32_t size = BasicArrayList_size(allViewsToBeModifiedVector);
            for (int32_t index = 0; index < size; index++) {
                TransformInfo* transformInfoInterface = ((TransformInfo*) BasicArrayList_get(allViewsToBeModifiedVector, index));
                const char* viewNameOfViewToBeModified = TransformInfoInterface_getName(transformInfoInterface);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getName));
                    StringMaker_append(stringBuffer, " is modifying view: ");
                    StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
                }
                TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) PageValidationView_getTransformInfoInterface(this));
                TransformInfoInterface* specifiedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewNameOfViewToBeModified, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getName));
                    StringMaker_append(stringBuffer, " is adding data to view: ");
                    StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
                }
                HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
                const char* title = JAVA_CALL(TransformInfoInterface_getName(specifiedTransformInfoInterface), substring, JAVA_CALL(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName), length));
                if (strcmp(title, "index") == 0) {
                    HashMap_put(hashMap, TitleData_getInstance()->TEXT, java_concat(java_string_of(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName)), " - Home Page"));
                } else {
                    HashMap_put(hashMap, TitleData_getInstance()->TEXT, java_concat(java_concat(java_string_of(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName)), " -"), title));
                }
                PageValidation* pageValidation = PageValidation_new(hashMap);
                if (PageValidation_isValid(pageValidation) == false) {
                    isValid = false;
                }
                if (isValid == true) {
                    Document* document = DomDocumentHelper_create();
                    Document_appendChild(document, PageValidation_toXmlNode(pageValidation, document));
                    const char* documentString = XmlDocumentHelper_toString(document);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                        StringMaker_append(stringBuffer, " is changing data in ");
                        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoInterface_getDataFilePath(specifiedTransformInfoInterface), toString));
                        StringMaker_append(stringBuffer, " to the following data:\n");
                        StringMaker_append(stringBuffer, documentString);
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                    }
                    CustomizerUtil_write(CustomizerUtil_getInstance(), specifiedTransformInfoInterface, documentString);
                }
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* PageValidationView_validationInfo(PageValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
            TransformInfoObjectConfigInterface* objectConfig = JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getObjectConfigInterface);
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) PageValidationView_getTransformInfoInterface(this));
            BasicArrayList* allViewsToBeModifiedVector = TransformInfoObjectConfigInterface_getGroupTransforms(objectConfig);
            int32_t size = BasicArrayList_size(allViewsToBeModifiedVector);
            for (int32_t index = 0; index < size; index++) {
                TransformInfo* transformInfoInterface = ((TransformInfo*) BasicArrayList_get(allViewsToBeModifiedVector, index));
                const char* viewNameOfViewToBeModified = TransformInfoInterface_getName(transformInfoInterface);
                TransformInfoInterface* specifiedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewNameOfViewToBeModified, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
                HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
                const char* title = JAVA_CALL(TransformInfoInterface_getName(specifiedTransformInfoInterface), substring, JAVA_CALL(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName), length));
                if (strcmp(title, "index") == 0) {
                    HashMap_put(hashMap, TitleData_getInstance()->TEXT, java_concat(java_string_of(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName)), " - Home Page"));
                } else {
                    HashMap_put(hashMap, TitleData_getInstance()->TEXT, java_concat(java_concat(java_string_of(JAVA_CALL(PageValidationView_getTransformInfoInterface(this), getStoreName)), " -"), title));
                }
                PageValidation* pageValidation = PageValidation_new(hashMap);
                if (PageValidation_isValid(pageValidation) == false) {
                    StringMaker_append(stringBuffer, java_concat("TransformInfo Name for PageValidation:", TransformInfoInterface_getName(specifiedTransformInfoInterface)));
                    StringMaker_append(stringBuffer, java_concat("PageValidation:", java_string_of(hashMap)));
                    StringMaker_append(stringBuffer, java_concat("PageValidation Info:", java_string_of(PageValidation_validationInfo(pageValidation))));
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "An auto generated page name was invalid.";
        } JAVA_END_TRY;
}


Document* PageValidationView_toValidationInfoDoc(PageValidationView* this) {
        return nullptr;
}


Node* PageValidationView_toValidationInfoNode(PageValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* PageValidationView_getTransformInfoInterface(PageValidationView* this) {
        return PageView_getTransformInfoInterface((&this->base));
}

