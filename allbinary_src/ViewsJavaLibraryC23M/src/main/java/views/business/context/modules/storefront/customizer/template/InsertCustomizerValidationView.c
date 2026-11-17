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
// package views.business.context.modules.storefront.customizer.template

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
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"
#include "views/business/context/modules/storefront/customizer/template/objectConfig/InsertTemplateCustomizerTransformInfoObjectConfig.h"
#include "views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h"

//Sets Template Type
typedef struct InsertCustomizerValidationView InsertCustomizerValidationView;
struct InsertCustomizerValidationView {
    HttpStoreComponentView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    const char* viewName;
};


InsertCustomizerValidationView* InsertCustomizerValidationView_new(TransformInfoInterface* transformInfoInterface);

void InsertCustomizerValidationView_init(InsertCustomizerValidationView* this, TransformInfoInterface* transformInfoInterface);
bool InsertCustomizerValidationView_isValid(InsertCustomizerValidationView* this);
const char* InsertCustomizerValidationView_validationInfo(InsertCustomizerValidationView* this);
Document* InsertCustomizerValidationView_toValidationInfoDoc(InsertCustomizerValidationView* this);
Node* InsertCustomizerValidationView_toValidationInfoNode(InsertCustomizerValidationView* this, Document* document);
const char* InsertCustomizerValidationView_view(InsertCustomizerValidationView* this);
TransformInfoInterface* InsertCustomizerValidationView_getTransformInfoInterface(InsertCustomizerValidationView* this);

static void InsertCustomizerValidationView_initFields(InsertCustomizerValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void InsertCustomizerValidationView_init(InsertCustomizerValidationView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        InsertCustomizerValidationView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        HashMap* requestHashMap = RequestParams_toHashMap(RequestParams_new(InsertCustomizerValidationView_getPageContext(this)));
        this->viewName = ((const char*) HashMap_get(requestHashMap, TransformInfoData_getInstance()->NAME));
}

InsertCustomizerValidationView* InsertCustomizerValidationView_new(TransformInfoInterface* transformInfoInterface) {
    InsertCustomizerValidationView* this = calloc(1, sizeof(InsertCustomizerValidationView));
    InsertCustomizerValidationView_init(this, transformInfoInterface);
    return this;
}


bool InsertCustomizerValidationView_isValid(InsertCustomizerValidationView* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Started Validation", this, this->commonStrings->IS_VALID);
            }
            bool isValid = true;
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->viewName)) {
                isValid = false;
            } else {
                NoTemplateTransformInfoObjectConfig* objectConfig = NoTemplateTransformInfoObjectConfig_new(InsertCustomizerValidationView_getTransformInfoInterface(this), JAVA_CALL(JAVA_CALL(InsertCustomizerValidationView_getTransformInfoInterface(this), getObjectConfigInterface), toXmlDoc));
                BasicArrayList* componentVector = NoTemplateTransformInfoObjectConfig_getGroupTransforms(objectConfig);
                int32_t size = BasicArrayList_size(componentVector);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Pointing ");
                    StringMaker_appendint(stringBuffer, BasicArrayList_size(componentVector));
                    StringMaker_append(stringBuffer, " Components");
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                }
                for (int32_t index = 0; index < size; index++) {
                    TransformInfo* transformInfo = ((TransformInfo*) BasicArrayList_get(componentVector, index));
                    const char* transformInfoName = TransformInfo_getName(transformInfo);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        LogUtil_putF(this->logUtil, java_concat("Setting Template Component with ViewName: ", transformInfoName), this, this->commonStrings->IS_VALID);
                    }
                    TransformInterface* componentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), this->abeClientInformation, transformInfoName, InsertCustomizerValidationView_getTransformInfoInterface(this));
                    InsertTemplateCustomizerTransformInfoObjectConfig* templateViewObjectConfig = InsertTemplateCustomizerTransformInfoObjectConfig_new(TransformInterface_getTransformInfoInterface(componentInterface), JAVA_CALL(JAVA_CALL(TransformInterface_getTransformInfoInterface(componentInterface), getObjectConfigInterface), toXmlDoc));
                    const char* storeName = JAVA_CALL(InsertCustomizerValidationView_getTransformInfoInterface(this), getStoreName);
                    int32_t endIndex = java_string_indexOf(this->viewName, storeName) + ((int32_t) strlen(storeName));
                    const char* storePrepend = java_substring(this->viewName, 0, endIndex);
                    const char* viewNamePostfix = java_substring(this->viewName, endIndex, ((int32_t) strlen(this->viewName)));
                    StringMaker* newViewNameStringBuffer = StringMaker_new();
                    StringMaker_append(newViewNameStringBuffer, storePrepend);
                    CommonSeps* commonSeps = CommonSeps_getInstance();
                    TransformInfosData* transformInfosData = TransformInfosData_getInstance();
                    if (java_string_indexOf(transformInfoName, transformInfosData->SMALL_PREVIEW) >= 0) {
                        StringMaker_append(newViewNameStringBuffer, commonSeps->SPACE);
                        StringMaker_append(newViewNameStringBuffer, transformInfosData->SMALL_PREVIEW);
                    } else if (java_string_indexOf(transformInfoName, transformInfosData->PREVIEW) >= 0) {
                        StringMaker_append(newViewNameStringBuffer, commonSeps->SPACE);
                        StringMaker_append(newViewNameStringBuffer, transformInfosData->PREVIEW);
                    }
                    StringMaker_append(newViewNameStringBuffer, commonSeps->SPACE);
                    StringMaker_append(newViewNameStringBuffer, viewNamePostfix);
                    if (java_string_indexOf(transformInfoName, GeneratorTransformInfoData_NAME) >= 0) {
                        StringMaker_append(newViewNameStringBuffer, commonSeps->SPACE);
                        StringMaker_append(newViewNameStringBuffer, GeneratorTransformInfoData_NAME);
                    }
                    const char* newViewName = StringMaker_toString(newViewNameStringBuffer);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Template Component: ");
                        StringMaker_append(stringBuffer, transformInfoName);
                        StringMaker_append(stringBuffer, "\n Now Pointing To View Name: ");
                        StringMaker_append(stringBuffer, newViewName);
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                    }
                    InsertTemplateCustomizerTransformInfoObjectConfig_set(templateViewObjectConfig, newViewName);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Template Component: ");
                        StringMaker_append(stringBuffer, transformInfoName);
                        StringMaker_append(stringBuffer, "\n with ObjectConfig: ");
                        StringMaker_append(stringBuffer, InsertTemplateCustomizerTransformInfoObjectConfig_toString(templateViewObjectConfig));
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                    }
                    JAVA_CALL(TransformInterface_getTransformInfoInterface(componentInterface), setObjectConfigInterface, templateViewObjectConfig);
                    HashMap* updatedTransformInfoHashMap = JAVA_CALL(TransformInterface_getTransformInfoInterface(componentInterface), toHashMap);
                    TransformInfoEntityBuilder_update(TransformInfoEntityBuilder_getInstance(), updatedTransformInfoHashMap);
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


const char* InsertCustomizerValidationView_validationInfo(InsertCustomizerValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Error: Template Name Is Empty.");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


Document* InsertCustomizerValidationView_toValidationInfoDoc(InsertCustomizerValidationView* this) {
        return nullptr;
}


Node* InsertCustomizerValidationView_toValidationInfoNode(InsertCustomizerValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* InsertCustomizerValidationView_view(InsertCustomizerValidationView* this) {
        return JAVA_CALL(JAVA_CALL(this->base.views->ValidationOnlyTempUtil, getInstance), view, this);
}


// throws Exception
TransformInfoInterface* InsertCustomizerValidationView_getTransformInfoInterface(InsertCustomizerValidationView* this) {
        return HttpStoreComponentView_getTransformInfoInterface((&this->base));
}

