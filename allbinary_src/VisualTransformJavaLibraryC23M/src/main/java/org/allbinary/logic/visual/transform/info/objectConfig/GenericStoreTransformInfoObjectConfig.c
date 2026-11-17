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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/RootTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h"
#include "org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h"
#include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"

typedef struct GenericStoreTransformInfoObjectConfig GenericStoreTransformInfoObjectConfig;
struct GenericStoreTransformInfoObjectConfig {
    TransformInfoObjectConfig base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
};


GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void GenericStoreTransformInfoObjectConfig_init(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);
void GenericStoreTransformInfoObjectConfig_init3(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void GenericStoreTransformInfoObjectConfig_init4(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
Document* GenericStoreTransformInfoObjectConfig_generate(GenericStoreTransformInfoObjectConfig* this, Document* objectConfigDocument);
static HashMap* GenericStoreTransformInfoObjectConfig_createReplaceHashMap(GenericStoreTransformInfoObjectConfig* this, TransformInfoHttp* transformInfoHttpStoreInterface, const char* objectConfigDocumentString);
static HashMap* GenericStoreTransformInfoObjectConfig_createHashMap(GenericStoreTransformInfoObjectConfig* this, TransformInfoHttp* transformInfoHttpStoreInterface, const char* objectConfigDocumentString);
static Document* GenericStoreTransformInfoObjectConfig_generate(GenericStoreTransformInfoObjectConfig* this, const char* objectConfigDocumentString, HashMap* hashMap);

static void GenericStoreTransformInfoObjectConfig_initFields(GenericStoreTransformInfoObjectConfig* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GenericStoreTransformInfoObjectConfig_init(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface);
        GenericStoreTransformInfoObjectConfig_initFields(this);
        this->abeClientInformation = abeClientInformation;
}

GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    GenericStoreTransformInfoObjectConfig* this = calloc(1, sizeof(GenericStoreTransformInfoObjectConfig));
    GenericStoreTransformInfoObjectConfig_init(this, abeClientInformation, transformInfoInterface);
    return this;
}


void GenericStoreTransformInfoObjectConfig_init3(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface, document);
        GenericStoreTransformInfoObjectConfig_initFields(this);
        this->abeClientInformation = abeClientInformation;
        GenericStoreTransformInfoObjectConfig_setDocument(this, GenericStoreTransformInfoObjectConfig_generate(this, GenericStoreTransformInfoObjectConfig_toXmlDoc(this)));
}

GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
    GenericStoreTransformInfoObjectConfig* this = calloc(1, sizeof(GenericStoreTransformInfoObjectConfig));
    GenericStoreTransformInfoObjectConfig_init3(this, abeClientInformation, transformInfoInterface, document);
    return this;
}


void GenericStoreTransformInfoObjectConfig_init4(GenericStoreTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface, name, type);
        GenericStoreTransformInfoObjectConfig_initFields(this);
        this->abeClientInformation = abeClientInformation;
        GenericStoreTransformInfoObjectConfig_setDocument(this, GenericStoreTransformInfoObjectConfig_generate(this, GenericStoreTransformInfoObjectConfig_toXmlDoc(this)));
}

GenericStoreTransformInfoObjectConfig* GenericStoreTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    GenericStoreTransformInfoObjectConfig* this = calloc(1, sizeof(GenericStoreTransformInfoObjectConfig));
    GenericStoreTransformInfoObjectConfig_init4(this, abeClientInformation, transformInfoInterface, name, type);
    return this;
}


// throws Exception
Document* GenericStoreTransformInfoObjectConfig_generate(GenericStoreTransformInfoObjectConfig* this, Document* objectConfigDocument) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "TransformInfo: ");
            if (GenericStoreTransformInfoObjectConfig_getTransformInfoInterface(this) != nullptr) {
                StringMaker_append(stringBuffer, JAVA_CALL(GenericStoreTransformInfoObjectConfig_getTransformInfoInterface(this), getName));
            } else {
                StringMaker_append(stringBuffer, "No Owner!?#@");
            }
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "generate()");
        }
        TransformInfoHttp* transformInfoHttpStoreInterface = ((TransformInfoHttp*) GenericStoreTransformInfoObjectConfig_getTransformInfoInterface(this));
        const char* objectConfigDocumentString = XmlDocumentHelper_toString(objectConfigDocument);
        HashMap* replaceHashMap = GenericStoreTransformInfoObjectConfig_createReplaceHashMap(this, transformInfoHttpStoreInterface, objectConfigDocumentString);
        return GenericStoreTransformInfoObjectConfig_generate(this, objectConfigDocumentString, replaceHashMap);
}


// throws Exception
static HashMap* GenericStoreTransformInfoObjectConfig_createReplaceHashMap(GenericStoreTransformInfoObjectConfig* this, TransformInfoHttp* transformInfoHttpStoreInterface, const char* objectConfigDocumentString) {
        const char* storeName = TransformInfoHttp_getStoreName(transformInfoHttpStoreInterface);
        HashMap* hashMap = GenericStoreTransformInfoObjectConfig_createHashMap(this, transformInfoHttpStoreInterface, objectConfigDocumentString);
        TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData_getInstance();
        HashMap_put(hashMap, transformInfoObjectConfigData->VARKEY + StoreFrontData_getInstance()->NAME, storeName);
        const char* pageName = TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil_getInstance(), JAVA_CALL(GenericStoreTransformInfoObjectConfig_getTransformInfoInterface(this), getName), storeName);
        HashMap_put(hashMap, transformInfoObjectConfigData->VARKEY + TransformInfoData_getInstance()->PARTIAL, pageName);
        return hashMap;
}


// throws Exception
static HashMap* GenericStoreTransformInfoObjectConfig_createHashMap(GenericStoreTransformInfoObjectConfig* this, TransformInfoHttp* transformInfoHttpStoreInterface, const char* objectConfigDocumentString) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        const char* storeName = TransformInfoHttp_getStoreName(transformInfoHttpStoreInterface);
        HashMap* propertiesHashMap = TransformInfoHttp_getPropertiesHashMap(transformInfoHttpStoreInterface);
        const char* templateNameOverride = StringUtil_getNonNull(StringUtil_getInstance(), ((const char*) HashMap_get(propertiesHashMap, TransformInfoData_getInstance()->PARTIAL)));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("TemplateNameOverride: ", templateNameOverride), this, "generate()");
        }
        StringMaker* templateNameStringBuffer = StringMaker_new();
        StringMaker_append(templateNameStringBuffer, storeName);
        StringMaker_append(templateNameStringBuffer, templateNameOverride);
        StringMaker_append(templateNameStringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(templateNameStringBuffer, RootTransformInfoData_NAME);
        const char* templateNameKey = TransformInfoObjectConfigData_getInstance()->VARKEY + TransformInfoData_getInstance()->OWNER;
        if (java_string_indexOf(objectConfigDocumentString, templateNameKey) != -1) {
            TransformTemplateInterface* templateInterface = TransformTemplateFactory_getInstance(TransformTemplateFactory_getInstance(), this->abeClientInformation, StringMaker_toString(templateNameStringBuffer), TransformInfoHttp_getPropertiesHashMap(transformInfoHttpStoreInterface), TransformInfoHttp_getPageContext(transformInfoHttpStoreInterface));
            const char* selectedTemplate = TransformTemplateInterface_getName(templateInterface);
            HashMap_put(hashMap, templateNameKey, selectedTemplate);
        }
        return hashMap;
}


// throws Exception
// Java overloaded method: C needs a different name
static Document* GenericStoreTransformInfoObjectConfig_generate(GenericStoreTransformInfoObjectConfig* this, const char* objectConfigDocumentString, HashMap* hashMap) {
        Replace* replace = Replace_new(hashMap);
        Document* newObjectConfigDocument = DomDocumentHelper_create(Replace_all(replace, objectConfigDocumentString));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Final ObjectConfig: ", XmlDocumentHelper_toString(newObjectConfigDocument)), this, "generate()");
        }
        return newObjectConfigDocument;
}

