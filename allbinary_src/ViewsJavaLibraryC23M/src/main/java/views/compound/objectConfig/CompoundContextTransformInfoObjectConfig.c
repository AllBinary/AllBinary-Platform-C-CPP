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
// package views.compound.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/document/DocumentToNode.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/TransformFactory.h"
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#include "org/allbinary/logic/visual/transform/info/RootTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"

typedef struct CompoundContextTransformInfoObjectConfig CompoundContextTransformInfoObjectConfig;
struct CompoundContextTransformInfoObjectConfig {
    GenericStoreTransformInfoObjectConfig base;
    LogUtil* logUtil;
};


CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void CompoundContextTransformInfoObjectConfig_init(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);
void CompoundContextTransformInfoObjectConfig_init3(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void CompoundContextTransformInfoObjectConfig_init4(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
const char* CompoundContextTransformInfoObjectConfig_get(CompoundContextTransformInfoObjectConfig* this);
InputStream* CompoundContextTransformInfoObjectConfig_createInputStream(CompoundContextTransformInfoObjectConfig* this);

static void CompoundContextTransformInfoObjectConfig_initFields(CompoundContextTransformInfoObjectConfig* this) {
    this->logUtil = LogUtil_getInstance();
}


void CompoundContextTransformInfoObjectConfig_init(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface);
        CompoundContextTransformInfoObjectConfig_initFields(this);
}

CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    CompoundContextTransformInfoObjectConfig* this = calloc(1, sizeof(CompoundContextTransformInfoObjectConfig));
    CompoundContextTransformInfoObjectConfig_init(this, abeClientInformation, transformInfoInterface);
    return this;
}


void CompoundContextTransformInfoObjectConfig_init3(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface, document);
        CompoundContextTransformInfoObjectConfig_initFields(this);
        CompoundContextTransformInfoObjectConfig_setDocument(this, CompoundContextTransformInfoObjectConfig_generate(this, CompoundContextTransformInfoObjectConfig_toXmlDoc(this)));
}

CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new3(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
    CompoundContextTransformInfoObjectConfig* this = calloc(1, sizeof(CompoundContextTransformInfoObjectConfig));
    CompoundContextTransformInfoObjectConfig_init3(this, abeClientInformation, transformInfoInterface, document);
    return this;
}


void CompoundContextTransformInfoObjectConfig_init4(CompoundContextTransformInfoObjectConfig* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
        GenericStoreTransformInfoObjectConfig_init(&this->base, abeClientInformation, transformInfoInterface, name, type);
        CompoundContextTransformInfoObjectConfig_initFields(this);
        CompoundContextTransformInfoObjectConfig_setDocument(this, CompoundContextTransformInfoObjectConfig_generate(this, CompoundContextTransformInfoObjectConfig_toXmlDoc(this)));
}

CompoundContextTransformInfoObjectConfig* CompoundContextTransformInfoObjectConfig_new4(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    CompoundContextTransformInfoObjectConfig* this = calloc(1, sizeof(CompoundContextTransformInfoObjectConfig));
    CompoundContextTransformInfoObjectConfig_init4(this, abeClientInformation, transformInfoInterface, name, type);
    return this;
}


// throws Exception
const char* CompoundContextTransformInfoObjectConfig_get(CompoundContextTransformInfoObjectConfig* this) {
        const char* storeName = JAVA_CALL(CompoundContextTransformInfoObjectConfig_getTransformInfoInterface(this), getStoreName);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) CompoundContextTransformInfoObjectConfig_getTransformInfoInterface(this));
        const char* templateNameOverride = StringUtil_getNonNull(StringUtil_getInstance(), ((const char*) JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), get, TransformInfoData_getInstance()->PARTIAL)));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, storeName);
        StringMaker_append(stringBuffer, templateNameOverride);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, RootTransformInfoData_NAME);
        TransformInterface* rootComponentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), this->base.abeClientInformation, StringMaker_toString(stringBuffer), CompoundContextTransformInfoObjectConfig_getTransformInfoInterface(this));
        BasicArrayList* viewVector = CompoundContextTransformInfoObjectConfig_getTransformDomNodes(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Root View Called with: ", java_string_of(BasicArrayList_size(viewVector))), this, "get(transformInfoInterface)");
        }
        const char* rootView = TransformInterface_view(rootComponentInterface);
        const char* startXMLHeader = "<xsl:text disable-output-escaping=\"yes\" ><![CDATA[";
        const char* endXMLHeader = "]]></xsl:text>";
        int32_t size = BasicArrayList_size(viewVector);
        for (int32_t index = 0; index < size; index++) {
            TransformInfoDomNode* objectConfigTransformInfoDomNode = ((TransformInfoDomNode*) BasicArrayList_get(viewVector, index));
            const char* templateKey = TransformInfoDomNode_getReplaceKey(objectConfigTransformInfoDomNode);
            TransformInterface* componentInterface = TransformFactory_getInstance(TransformFactory_getInstance(), this->base.abeClientInformation, JAVA_CALL(TransformInfoDomNode_getTransformInfoInterface(objectConfigTransformInfoDomNode), getName), CompoundContextTransformInfoObjectConfig_getTransformInfoInterface(this));
            const char* replacementViewString = TransformInterface_view(componentInterface);
            replacementViewString = DocumentToNode_convertDocumentToNodeString(replacementViewString);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, startXMLHeader);
            StringMaker_append(stringBuffer, replacementViewString);
            StringMaker_append(stringBuffer, endXMLHeader);
            const char* templateValue = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, "Replacing: ");
                StringMaker_append(stringBuffer, templateKey);
                StringMaker_append(stringBuffer, " with ");
                StringMaker_append(stringBuffer, templateValue);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "get()");
            }
            Replace* replace = Replace_new(templateKey, templateValue);
            rootView = Replace_all(replace, rootView);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("End: Result of a compound view: ", rootView), this, "get()");
        }
        return rootView;
}


// throws Exception
InputStream* CompoundContextTransformInfoObjectConfig_createInputStream(CompoundContextTransformInfoObjectConfig* this) {
        int8_t* completeTemplateViewBytes = JAVA_CALL(CompoundContextTransformInfoObjectConfig_get(this), getBytes);
        ByteArrayInputStream* bais = ByteArrayInputStream_new(completeTemplateViewBytes);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Template: ", String_toString(java_string_new(completeTemplateViewBytes))), this, "createInputStream()");
        }
        return bais;
}

