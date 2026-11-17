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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoDomNodeView.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h"

typedef struct InsertTemplateCustomizerTransformInfoObjectConfig InsertTemplateCustomizerTransformInfoObjectConfig;
struct InsertTemplateCustomizerTransformInfoObjectConfig {
    NoTemplateTransformInfoObjectConfig base;
    LogUtil* logUtil;
};


InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface);

void InsertTemplateCustomizerTransformInfoObjectConfig_init(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface);

InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document);
void InsertTemplateCustomizerTransformInfoObjectConfig_init2(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document);

InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void InsertTemplateCustomizerTransformInfoObjectConfig_init3(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type);
void InsertTemplateCustomizerTransformInfoObjectConfig_set(InsertTemplateCustomizerTransformInfoObjectConfig* this, const char* aParentViewName);

static void InsertTemplateCustomizerTransformInfoObjectConfig_initFields(InsertTemplateCustomizerTransformInfoObjectConfig* this) {
    this->logUtil = LogUtil_getInstance();
}


void InsertTemplateCustomizerTransformInfoObjectConfig_init(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface) {
        NoTemplateTransformInfoObjectConfig_init(&this->base, transformInfoInterface);
        InsertTemplateCustomizerTransformInfoObjectConfig_initFields(this);
}

InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new(TransformInfoInterface* transformInfoInterface) {
    InsertTemplateCustomizerTransformInfoObjectConfig* this = calloc(1, sizeof(InsertTemplateCustomizerTransformInfoObjectConfig));
    InsertTemplateCustomizerTransformInfoObjectConfig_init(this, transformInfoInterface);
    return this;
}


void InsertTemplateCustomizerTransformInfoObjectConfig_init2(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, Document* document) {
        NoTemplateTransformInfoObjectConfig_init(&this->base, transformInfoInterface, document);
        InsertTemplateCustomizerTransformInfoObjectConfig_initFields(this);
        InsertTemplateCustomizerTransformInfoObjectConfig_setDocument(this, InsertTemplateCustomizerTransformInfoObjectConfig_generate(this, InsertTemplateCustomizerTransformInfoObjectConfig_toXmlDoc(this)));
}

InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new2(TransformInfoInterface* transformInfoInterface, Document* document) {
    InsertTemplateCustomizerTransformInfoObjectConfig* this = calloc(1, sizeof(InsertTemplateCustomizerTransformInfoObjectConfig));
    InsertTemplateCustomizerTransformInfoObjectConfig_init2(this, transformInfoInterface, document);
    return this;
}


void InsertTemplateCustomizerTransformInfoObjectConfig_init3(InsertTemplateCustomizerTransformInfoObjectConfig* this, TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
        NoTemplateTransformInfoObjectConfig_init(&this->base, transformInfoInterface, name, type);
        InsertTemplateCustomizerTransformInfoObjectConfig_initFields(this);
        InsertTemplateCustomizerTransformInfoObjectConfig_setDocument(this, InsertTemplateCustomizerTransformInfoObjectConfig_generate(this, InsertTemplateCustomizerTransformInfoObjectConfig_toXmlDoc(this)));
}

InsertTemplateCustomizerTransformInfoObjectConfig* InsertTemplateCustomizerTransformInfoObjectConfig_new3(TransformInfoInterface* transformInfoInterface, const char* name, const char* type) {
    InsertTemplateCustomizerTransformInfoObjectConfig* this = calloc(1, sizeof(InsertTemplateCustomizerTransformInfoObjectConfig));
    InsertTemplateCustomizerTransformInfoObjectConfig_init3(this, transformInfoInterface, name, type);
    return this;
}


// throws Exception
void InsertTemplateCustomizerTransformInfoObjectConfig_set(InsertTemplateCustomizerTransformInfoObjectConfig* this, const char* aParentViewName) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Setting: ", aParentViewName), this, "set()");
        }
        Document* document = InsertTemplateCustomizerTransformInfoObjectConfig_toXmlDoc(this);
        NodeList* parentComponentsNodeList = Document_getElementsByTagName(document, TransformInfosData_getInstance()->NAME);
        if (parentComponentsNodeList != nullptr && NodeList_getLength(parentComponentsNodeList) > 0) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Replacing", this, "set()");
            }
            Node* componentNode = JAVA_CALL(JAVA_CALL(NodeList_item(parentComponentsNodeList, 0), getChildNodes), item, 0);
            if (componentNode != nullptr) {
                Document_removeChild(document, componentNode);
            }
            JAVA_CALL(NodeList_item(parentComponentsNodeList, 0), appendChild, TransformInfoDomNodeView_toXmlNode(TransformInfoDomNodeView_new(aParentViewName), document));
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Setting", this, "set()");
            }
            Node* objectConfigNode = JAVA_CALL(Document_getElementsByTagName(document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
            Node* parentComponentsNode = Document_createElement(document, TransformInfosData_getInstance()->NAME);
            Node_appendChild(objectConfigNode, parentComponentsNode);
            TransformInfoDomNodeView* transformInfoDomNodeView = TransformInfoDomNodeView_new(aParentViewName);
            Node_appendChild(parentComponentsNode, TransformInfoDomNodeView_toXmlNode(transformInfoDomNodeView, document));
        }
}

