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
// package org.allbinary.logic.visual.transform.info.dom

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
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoProperties.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoPropertiesFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct TransformInfoPropertiesDocument TransformInfoPropertiesDocument;
struct TransformInfoPropertiesDocument {
    LogUtil* logUtil;
    Document* document;
};


TransformInfoPropertiesDocument* TransformInfoPropertiesDocument_new(const char* filePath);

void TransformInfoPropertiesDocument_init(TransformInfoPropertiesDocument* this, const char* filePath);
HashMap* TransformInfoPropertiesDocument_toTransformInfoPropertiesHashMap(TransformInfoPropertiesDocument* this);

static void TransformInfoPropertiesDocument_initFields(TransformInfoPropertiesDocument* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void TransformInfoPropertiesDocument_init(TransformInfoPropertiesDocument* this, const char* filePath) {
    TransformInfoPropertiesDocument_initFields(this);
        AbFile* xmlFile = AbFile_createAbFile(filePath);
        this->document = DomDocumentFileHelper_createDocument(xmlFile);
}

TransformInfoPropertiesDocument* TransformInfoPropertiesDocument_new(const char* filePath) {
    TransformInfoPropertiesDocument* this = calloc(1, sizeof(TransformInfoPropertiesDocument));
    TransformInfoPropertiesDocument_init(this, filePath);
    return this;
}


HashMap* TransformInfoPropertiesDocument_toTransformInfoPropertiesHashMap(TransformInfoPropertiesDocument* this) {
        JAVA_TRY {
            HashMap* transformInfoPropertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            Node* transformInfosNode = JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfosData_getInstance()->NAME), item, 0);
            NodeList* transformInfosChildNodeList = Node_getChildNodes(transformInfosNode);
            BasicArrayList* transformInfoNodeVector = DomSearchHelper_getAllNodes(TransformInfoData_getInstance()->NAME, transformInfosChildNodeList);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Size: ", java_string_of(BasicArrayList_size(transformInfoNodeVector))), this, "toTransformInfoPropertiesHashMap()");
            }
            int32_t size = BasicArrayList_size(transformInfoNodeVector);
            Node* node = nullptr;
            TransformInfoProperties* transformInfoProperties = nullptr;
            for (int32_t index = 0; index < size; index++) {
                node = ((Node*) BasicArrayList_get(transformInfoNodeVector, index));
                transformInfoProperties = TransformInfoPropertiesFactory_getInstance(TransformInfoPropertiesFactory_getInstance(), node);
                HashMap_put(transformInfoPropertiesHashMap, TransformInfoProperties_getName(transformInfoProperties), transformInfoProperties);
            }
            return transformInfoPropertiesHashMap;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "toTransformInfoPropertiesHashMap()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

