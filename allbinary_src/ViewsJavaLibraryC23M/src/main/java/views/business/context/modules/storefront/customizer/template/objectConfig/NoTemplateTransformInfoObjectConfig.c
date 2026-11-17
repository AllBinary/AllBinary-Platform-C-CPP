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
// package views.business.context.modules.storefront.customizer.template.objectConfig

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
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
#include "org/w3c/dom/Document.h"

typedef struct NoTemplateTransformInfoObjectConfig NoTemplateTransformInfoObjectConfig;
struct NoTemplateTransformInfoObjectConfig {
    TransformInfoObjectConfig base;
    LogUtil* logUtil;
};


NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface);

void NoTemplateTransformInfoObjectConfig_init(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface);

NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document);
void NoTemplateTransformInfoObjectConfig_init2(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document);

NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void NoTemplateTransformInfoObjectConfig_init3(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
Document* NoTemplateTransformInfoObjectConfig_generate(NoTemplateTransformInfoObjectConfig* this, Document* objectConfigDocument);

static void NoTemplateTransformInfoObjectConfig_initFields(NoTemplateTransformInfoObjectConfig* this) {
    this->logUtil = LogUtil_getInstance();
}


void NoTemplateTransformInfoObjectConfig_init(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface);
        NoTemplateTransformInfoObjectConfig_initFields(this);
}

NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface) {
    NoTemplateTransformInfoObjectConfig* this = calloc(1, sizeof(NoTemplateTransformInfoObjectConfig));
    NoTemplateTransformInfoObjectConfig_init(this, transformInfoInterface);
    return this;
}


void NoTemplateTransformInfoObjectConfig_init2(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface, document);
        NoTemplateTransformInfoObjectConfig_initFields(this);
        NoTemplateTransformInfoObjectConfig_setDocument(this, NoTemplateTransformInfoObjectConfig_generate(this, NoTemplateTransformInfoObjectConfig_toXmlDoc(this)));
}

NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document) {
    NoTemplateTransformInfoObjectConfig* this = calloc(1, sizeof(NoTemplateTransformInfoObjectConfig));
    NoTemplateTransformInfoObjectConfig_init2(this, transformInfoInterface, document);
    return this;
}


void NoTemplateTransformInfoObjectConfig_init3(NoTemplateTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
        TransformInfoObjectConfig_init(&this->base, transformInfoInterface, name, type);
        NoTemplateTransformInfoObjectConfig_initFields(this);
        NoTemplateTransformInfoObjectConfig_setDocument(this, NoTemplateTransformInfoObjectConfig_generate(this, NoTemplateTransformInfoObjectConfig_toXmlDoc(this)));
}

NoTemplateTransformInfoObjectConfig* NoTemplateTransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    NoTemplateTransformInfoObjectConfig* this = calloc(1, sizeof(NoTemplateTransformInfoObjectConfig));
    NoTemplateTransformInfoObjectConfig_init3(this, transformInfoInterface, name, type);
    return this;
}


// throws Exception
Document* NoTemplateTransformInfoObjectConfig_generate(NoTemplateTransformInfoObjectConfig* this, Document* objectConfigDocument) {
        const char* docString = XmlDocumentHelper_toString(objectConfigDocument);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Initial ObjectConfig: ", docString), this, "generate()");
        }
        const char* storeName = JAVA_CALL(NoTemplateTransformInfoObjectConfig_getTransformInfoInterface(this), getStoreName);
        const char* viewName = JAVA_CALL(NoTemplateTransformInfoObjectConfig_getTransformInfoInterface(this), getName);
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        const char* VARKEY = TransformInfoObjectConfigData_getInstance()->VARKEY;
        HashMap_put(hashMap, java_concat(VARKEY, java_string_of(StoreFrontData_getInstance()->NAME)), storeName);
        HashMap_put(hashMap, java_concat(VARKEY, java_string_of(TransformInfoData_getInstance()->OWNER)), viewName);
        const char* pageName = TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil_getInstance(), JAVA_CALL(NoTemplateTransformInfoObjectConfig_getTransformInfoInterface(this), getName), JAVA_CALL(NoTemplateTransformInfoObjectConfig_getTransformInfoInterface(this), getStoreName));
        HashMap_put(hashMap, java_concat(VARKEY, java_string_of(TransformInfoData_getInstance()->PARTIAL)), pageName);
        Replace* replace = Replace_new(hashMap);
        Document* newObjectConfigDocument = DomDocumentHelper_create(Replace_all(replace, docString));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Final ObjectConfig: ", XmlDocumentHelper_toString(newObjectConfigDocument)), this, "generate()");
        }
        return newObjectConfigDocument;
}

