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
// package org.allbinary.business.user.commerce.shipping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h"
#include "org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct ShippingMethodsFactory ShippingMethodsFactory;
struct ShippingMethodsFactory {
    ShippingInterface* defaultShippingMethodInterface;
    Document* document;
    BasicArrayList* shippingVector;
};

static const char* ShippingMethodsFactory_SHIPPINGMETHODSFILEPATHSTRING = nullptr;
static const char* ShippingMethodsFactory_SHIPPINGMETHODSFILENAME = "shippingMethods.xml";

ShippingMethodsFactory* ShippingMethodsFactory_new(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

void ShippingMethodsFactory_init(ShippingMethodsFactory* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);
BasicArrayList* ShippingMethodsFactory_getInstance(ShippingMethodsFactory* this);
ShippingInterface* ShippingMethodsFactory_getDefaultInstance(ShippingMethodsFactory* this);

static void ShippingMethodsFactory_initFields(ShippingMethodsFactory* this) {
    this->defaultShippingMethodInterface = nullptr;
    
    
}


// Java static initializer: call this once at startup
void ShippingMethodsFactory_staticInitializer(void) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* sep = AbPathData_getInstance()->SEPARATOR;
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "generic");
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, "shipping");
        StringMaker_append(stringBuffer, sep);
        ShippingMethodsFactory_SHIPPINGMETHODSFILEPATHSTRING = StringMaker_toString(stringBuffer);
}


void ShippingMethodsFactory_init(ShippingMethodsFactory* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
    ShippingMethodsFactory_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        const char* sep = AbPathData_getInstance()->SEPARATOR;
        StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFrontInterface));
        StringMaker_append(stringBuffer, sep);
        StringMaker_append(stringBuffer, ShippingMethodsFactory_SHIPPINGMETHODSFILEPATHSTRING);
        AbPath* abPath = ((AbPath*) AbPath_new(StringMaker_toString(stringBuffer), ShippingMethodsFactory_SHIPPINGMETHODSFILENAME));
        const char* data = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectConfigData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance()->ENCRYPTED_EXTENSION), abPath);
        this->document = DomDocumentHelper_create(data);
        this->shippingVector = BasicArrayListD_new();
        NodeList* nodeList = Document_getElementsByTagName(this->document, ShippingMethodsData_NAME);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* node = NodeList_item(nodeList, index);
            NodeList* shippingMethodNodeChildren = Node_getChildNodes(node);
            Node* shippingMethodNameNode = DomSearchHelper_getNode(ShippingMethodData_NAME, shippingMethodNodeChildren);
            Node* classNameNode = DomSearchHelper_getNode(DynamicObjectData_NAME, Node_getChildNodes(shippingMethodNameNode));
            const char* shippingMethodClassName = DomNodeHelper_getTextNodeValue(classNameNode);
            ShippingInterface* shippingMethodInterface = ((ShippingInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, shippingMethodClassName));
            BasicArrayList_add(this->shippingVector, shippingMethodInterface);
            Node* defaultShippingMethodNameNode = DomSearchHelper_getNode(ShippingMethodData_DEFAULT, Node_getChildNodes(shippingMethodNameNode));
            const char* defaultShippingMethodNameNodeValue = DomNodeHelper_getTextNodeValue(defaultShippingMethodNameNode);
            if (defaultShippingMethodNameNodeValue != nullptr && strcmp(defaultShippingMethodNameNodeValue, ShippingMethodData_DEFAULT) == 0) {
                this->defaultShippingMethodInterface = shippingMethodInterface;
            }
        }
        if (BasicArrayList_size(this->shippingVector) < 1) {
            this->defaultShippingMethodInterface = BasicWeightShippingModuleView_new();
            BasicArrayList_add(this->shippingVector, this->defaultShippingMethodInterface);
            BasicArrayList_add(this->shippingVector, NoShippingModuleView_new());
        }
}

ShippingMethodsFactory* ShippingMethodsFactory_new(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
    ShippingMethodsFactory* this = calloc(1, sizeof(ShippingMethodsFactory));
    ShippingMethodsFactory_init(this, abeClientInformation, storeFrontInterface);
    return this;
}


// throws Exception
BasicArrayList* ShippingMethodsFactory_getInstance(ShippingMethodsFactory* this) {
        return this->shippingVector;
}


ShippingInterface* ShippingMethodsFactory_getDefaultInstance(ShippingMethodsFactory* this) {
        return this->defaultShippingMethodInterface;
}

