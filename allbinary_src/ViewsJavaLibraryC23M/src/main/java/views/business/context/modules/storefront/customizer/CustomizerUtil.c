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
// package views.business.context.modules.storefront.customizer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/w3c/dom/Document.h"

typedef struct CustomizerUtil CustomizerUtil;
struct CustomizerUtil {
    LogUtil* logUtil;
};

static CustomizerUtil* CustomizerUtil_instance;

CustomizerUtil* CustomizerUtil_new(void);
CustomizerUtil* CustomizerUtil_getInstance(void);

void CustomizerUtil_init(CustomizerUtil* this);
TransformInfoInterface* CustomizerUtil_getTransformInfoInterfaceToCustomize(CustomizerUtil* this, TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface);
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigComponentNodesToCustomize(CustomizerUtil* this, TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface);
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigComponentNodes(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface);
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigGroupComponentNodes(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface);
void CustomizerUtil_insert(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface, DomNodeInterface* domNodeInterface);
void CustomizerUtil_write(CustomizerUtil* this, TransformInfoInterface* specifiedTransformInfoInterface, const char* documentString);
Document* CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface);

// Static fields with runtime initializers: call this once at startup
void CustomizerUtil_staticInit(void) {
    CustomizerUtil_instance = CustomizerUtil_new();
}

static void CustomizerUtil_initFields(CustomizerUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


CustomizerUtil* CustomizerUtil_getInstance(void) {
        return CustomizerUtil_instance;
}


void CustomizerUtil_init(CustomizerUtil* this) {
    CustomizerUtil_initFields(this);
}

CustomizerUtil* CustomizerUtil_new(void) {
    CustomizerUtil* this = calloc(1, sizeof(CustomizerUtil));
    CustomizerUtil_init(this);
    return this;
}


// throws Exception
TransformInfoInterface* CustomizerUtil_getTransformInfoInterfaceToCustomize(CustomizerUtil* this, TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(customizerTransformInfoInterface)), this, "getTransformInfoInterfaceToCustomize()");
        }
        TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
        const char* viewName = TransformInfoInterface_getName(transformInfoInterface);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) customizerTransformInfoInterface);
        TransformInfoInterface* customizedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewName, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
        return customizedTransformInfoInterface;
}


// throws Exception
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigComponentNodesToCustomize(CustomizerUtil* this, TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(customizerTransformInfoInterface)), this, "getTransformInfoObjectConfigComponentNodesToCustomize()");
        }
        TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
        const char* viewName = TransformInfoInterface_getName(transformInfoInterface);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) customizerTransformInfoInterface);
        TransformInfoInterface* customizedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewName, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
        return CustomizerUtil_getTransformInfoObjectConfigComponentNodes(this, customizedTransformInfoInterface);
}


// throws Exception
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigComponentNodes(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "getTransformInfoObjectConfigComponentNodes()");
        }
        TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoInterface_getObjectConfigInterface(transformInfoInterface);
        return TransformInfoObjectConfigInterface_getTransforms(transformInfoObjectConfigInterface);
}


// throws Exception
BasicArrayList* CustomizerUtil_getTransformInfoObjectConfigGroupComponentNodes(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "getTransformInfoObjectConfigComponentNodes()");
        }
        TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoInterface_getObjectConfigInterface(transformInfoInterface);
        return TransformInfoObjectConfigInterface_getGroupTransforms(transformInfoObjectConfigInterface);
}


// throws Exception
void CustomizerUtil_insert(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface, DomNodeInterface* domNodeInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "insert()");
        }
        TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
        BasicArrayList* allViewsToBeModified = CustomizerUtil_getTransformInfoObjectConfigGroupComponentNodes(this, transformInfoInterface);
        Document* document = DomDocumentHelper_create();
        Document_appendChild(document, DomNodeInterface_toXmlNode(domNodeInterface, document));
        const char* documentString = XmlDocumentHelper_toString(document);
        StringMaker* stringBuffer = StringMaker_new();
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker_append(stringBuffer, "Total Views For Modification: ");
            StringMaker_appendint(stringBuffer, BasicArrayList_size(allViewsToBeModified));
            StringMaker_append(stringBuffer, " New Xml/Data: ");
            StringMaker_append(stringBuffer, documentString);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
        }
        TransformInfoInterface_setData(transformInfoInterface, documentString);
        int32_t size = BasicArrayList_size(allViewsToBeModified);
        for (int32_t index = 0; index < size; index++) {
            TransformInfo* transformInfo = ((TransformInfo*) BasicArrayList_get(allViewsToBeModified, index));
            const char* viewNameOfViewToBeModified = TransformInfo_getName(transformInfo);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, TransformInfoInterface_getName(transformInfoInterface));
                StringMaker_append(stringBuffer, " is modifying view: ");
                StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
            }
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
            TransformInfoInterface* specifiedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewNameOfViewToBeModified, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
            if (specifiedTransformInfoInterface == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, TransformInfoInterface_getName(transformInfoInterface));
                    StringMaker_append(stringBuffer, " is unable to add data to view: ");
                    StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                    StringMaker_append(stringBuffer, " since it does not exist");
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat(TransformInfoInterface_getName(transformInfoInterface), " is adding data to view: "), viewNameOfViewToBeModified), this, "insert()");
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                    StringMaker_append(stringBuffer, viewNameOfViewToBeModified);
                    StringMaker_append(stringBuffer, " is changing data in ");
                    StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoInterface_getDataFilePath(specifiedTransformInfoInterface), toString));
                    StringMaker_append(stringBuffer, " to the following data:\n");
                    StringMaker_append(stringBuffer, documentString);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "insert()");
                }
                CustomizerUtil_write(this, specifiedTransformInfoInterface, documentString);
            }
        }
}


// throws Exception
void CustomizerUtil_write(CustomizerUtil* this, TransformInfoInterface* specifiedTransformInfoInterface, const char* documentString) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(specifiedTransformInfoInterface)), this, "write()");
        }
        TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
        TransformInfoInterface_setData(specifiedTransformInfoInterface, documentString);
        TransformInfoEntity_update(transformInfoEntityInterface, TransformInfoInterface_toHashMap(specifiedTransformInfoInterface));
}


// throws Exception
Document* CustomizerUtil_getViewDataForComponentsInObjectConfig(CustomizerUtil* this, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoInterface_getName(transformInfoInterface)), this, "getViewDataForComponentsInObjectConfig()");
        }
        TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoInterface_getObjectConfigInterface(transformInfoInterface);
        BasicArrayList* allViewsToBeModified = TransformInfoObjectConfigInterface_getGroupTransforms(transformInfoObjectConfigInterface);
        TransformInfoEntity* transformInfoEntityInterface = TransformInfoEntityBuilder_getInstance();
        int32_t size = BasicArrayList_size(allViewsToBeModified);
        for (int32_t index = 0; index < size; index++) {
            TransformInfo* nextTransformInfoInterface = ((TransformInfo*) BasicArrayList_get(allViewsToBeModified, index));
            const char* viewNameOfViewToBeModified = TransformInfo_getName(nextTransformInfoInterface);
            TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
            TransformInfoInterface* specifiedTransformInfoInterface = TransformInfoEntity_get(transformInfoEntityInterface, viewNameOfViewToBeModified, TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
            return TransformInfoInterface_getDataDocument(specifiedTransformInfoInterface);
        }
        java_throw(java_exception_new("Exception", "No Components Specified in ObjectConfig"));
}

