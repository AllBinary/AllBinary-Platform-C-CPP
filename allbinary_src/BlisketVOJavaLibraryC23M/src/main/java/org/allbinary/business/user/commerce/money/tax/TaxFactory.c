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
// package org.allbinary.business.user.commerce.money.tax

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/money/tax/components/TaxData.h"
#include "org/allbinary/business/user/commerce/money/tax/modules/SimpleStateTaxModule.h"
#include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct TaxFactory TaxFactory;
struct TaxFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* TAXATIONFILENAME;
};

static TaxFactory* TaxFactory_instance;

TaxFactory* TaxFactory_new(void);
TaxFactory* TaxFactory_getInstance(void);

void TaxFactory_init(TaxFactory* this);
TaxModuleInterface* TaxFactory_getInstance(TaxFactory* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

// Static fields with runtime initializers: call this once at startup
void TaxFactory_staticInit(void) {
    TaxFactory_instance = TaxFactory_new();
}

static void TaxFactory_initFields(TaxFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->TAXATIONFILENAME = "taxationMethod.xml";
}


TaxFactory* TaxFactory_getInstance(void) {
        return TaxFactory_instance;
}


void TaxFactory_init(TaxFactory* this) {
    TaxFactory_initFields(this);
}

TaxFactory* TaxFactory_new(void) {
    TaxFactory* this = calloc(1, sizeof(TaxFactory));
    TaxFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
TaxModuleInterface* TaxFactory_getInstance(TaxFactory* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFrontInterface));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, "generic");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, "taxes");
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        AbPath* abPath = AbPath_new(StringMaker_toString(stringBuffer), this->TAXATIONFILENAME);
        TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData_getInstance();
        const char* data = CryptFileReader_get(CryptFileReader_new(transformInfoObjectConfigData->UNCRYPTED_EXTENSION, transformInfoObjectConfigData->ENCRYPTED_EXTENSION), abPath);
        Document* document = DomDocumentHelper_create(data);
        NodeList* taxNameNodeList = Document_getElementsByTagName(document, TaxData_NAME);
        for (int32_t index = 0; index < NodeList_getLength(taxNameNodeList); index++) {
            Node* node = NodeList_item(taxNameNodeList, index);
            NodeList* nodeList = Node_getChildNodes(node);
            if (nodeList != nullptr) {
                Node* classNameNode = DomSearchHelper_getNode(DynamicObjectData_NAME, nodeList);
                if (classNameNode != nullptr) {
                    const char* className = DomNodeHelper_getTextNodeValue(classNameNode);
                    return ((TaxModuleInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, className));
                } else {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAX)) {
                        LogUtil_putF(this->logUtil, "Class Node Null", this, this->commonStrings->GET_INSTANCE);
                    }
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAX)) {
                    LogUtil_putF(this->logUtil, "Tax Name Node Node Children", this, this->commonStrings->GET_INSTANCE);
                }
            }
        }
        return ((TaxModuleInterface*) SimpleStateTaxModule_new());
}

