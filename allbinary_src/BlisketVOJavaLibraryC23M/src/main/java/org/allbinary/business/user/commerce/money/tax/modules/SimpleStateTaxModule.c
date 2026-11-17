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
// package org.allbinary.business.user.commerce.money.tax.modules

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/address/StreetAddress.h"
#include "org/allbinary/business/user/address/StreetAddressData.h"
#include "org/allbinary/business/user/commerce/money/tax/components/TaxData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"

typedef struct SimpleStateTaxModule SimpleStateTaxModule;
struct SimpleStateTaxModule {
    TaxModuleInterface TaxModuleInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    StreetAddress* streetAddress;
    StoreFrontInterface* storeFrontInterface;
    const char* ALL;
    const char* STATETAXPATH;
    const char* STATETAXFILE;
    Document* document;
};


SimpleStateTaxModule* SimpleStateTaxModule_new(void);

void SimpleStateTaxModule_init(SimpleStateTaxModule* this);
float SimpleStateTaxModule_getTaxRate(SimpleStateTaxModule* this, StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface);
bool SimpleStateTaxModule_isValid(SimpleStateTaxModule* this, StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface);

static void SimpleStateTaxModule_initFields(SimpleStateTaxModule* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->streetAddress = nullptr;
    this->storeFrontInterface = nullptr;
    this->ALL = CommonPhoneStrings_getInstance()->STAR;
    this->STATETAXPATH = "/generic/taxes/";
    this->STATETAXFILE = "stateTaxation.xml";
    this->document = nullptr;
}


void SimpleStateTaxModule_init(SimpleStateTaxModule* this) {
    SimpleStateTaxModule_initFields(this);
}

SimpleStateTaxModule* SimpleStateTaxModule_new(void) {
    SimpleStateTaxModule* this = calloc(1, sizeof(SimpleStateTaxModule));
    SimpleStateTaxModule_init(this);
    return this;
}


// throws Exception
float SimpleStateTaxModule_getTaxRate(SimpleStateTaxModule* this, StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) {
        this->streetAddress = streetAddress;
        this->storeFrontInterface = storeFrontInterface;
        AbPath* fileAbPath = AbPath_new(java_concat(java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getMainPath) + JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH), StoreFrontInterface_getName(this->storeFrontInterface)), this->STATETAXPATH), this->STATETAXFILE);
        const char* data = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectConfigData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance()->ENCRYPTED_EXTENSION), fileAbPath);
        this->document = DomDocumentHelper_create(data);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAX)) {
            LogUtil_putF(this->logUtil, java_concat("Tax Doc: ", XmlDocumentHelper_toString(this->document)), this, "getTaxRate");
        }
        const char* state = StreetAddress_getState(this->streetAddress);
        const char* country = StreetAddress_getCountry(this->streetAddress);
        state = java_string_toUpperCase(state);
        NodeList* nodeList = Document_getElementsByTagName(this->document, TaxData_NAME);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* node = NodeList_item(nodeList, index);
            NodeList* taxNodeChildren = Node_getChildNodes(node);
            Node* streetAddressNode = DomSearchHelper_getNode(StreetAddressData_NAME, taxNodeChildren);
            StreetAddress* taxableStreetAddress = StreetAddress_new(streetAddressNode);
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (!StringValidationUtil_isEmpty(stringValidationUtil, country) && !StringValidationUtil_isEmpty(stringValidationUtil, StreetAddress_getCountry(taxableStreetAddress)) && strcmp(country, StreetAddress_getCountry(taxableStreetAddress)) == 0) {
                if (state != nullptr && StreetAddress_getState(taxableStreetAddress) != nullptr && strcmp(state, StreetAddress_getState(taxableStreetAddress)) == 0) {
                    Node* rateNode = DomSearchHelper_getNode(TaxData_RATE, taxNodeChildren);
                    const char* taxRate = DomNodeHelper_getTextNodeValue(rateNode);
                    float taxRateFloat = Float_floatValue(taxRate) * .01;
                    return taxRateFloat;
                }
            }
        }
        return 0;
}


bool SimpleStateTaxModule_isValid(SimpleStateTaxModule* this, StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) {
        JAVA_TRY {
            this->streetAddress = streetAddress;
            this->storeFrontInterface = storeFrontInterface;
            AbPath* fileAbPath = AbPath_new(java_concat(java_concat(java_string_of(JAVA_CALL(_URLGLOBALS, getMainPath) + JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH), StoreFrontInterface_getName(this->storeFrontInterface)), this->STATETAXPATH), this->STATETAXFILE);
            const char* data = CryptFileReader_get(CryptFileReader_new(TransformInfoObjectConfigData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData_getInstance()->ENCRYPTED_EXTENSION), fileAbPath);
            this->document = DomDocumentHelper_create(data);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAX)) {
                LogUtil_putF(this->logUtil, java_concat("Tax Doc: ", XmlDocumentHelper_toString(this->document)), this, this->commonStrings->IS_VALID);
            }
            const char* country = StreetAddress_getCountry(this->streetAddress);
            Node* rootNode = JAVA_CALL(Document_getElementsByTagName(this->document, TransformInfoObjectConfigData_getInstance()->NAME), item, 0);
            NodeList* nodeList = Document_getElementsByTagName(this->document, TaxData_NAME);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* node = NodeList_item(nodeList, index);
                NodeList* taxNodeChildren = Node_getChildNodes(node);
                Node* streetAddressNode = DomSearchHelper_getNode(StreetAddressData_NAME, taxNodeChildren);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAX)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "StreetAddress Node: ");
                    StringMaker_append(stringBuffer, Node_getNodeName(streetAddressNode));
                    StringMaker_append(stringBuffer, " Value: ");
                    StringMaker_append(stringBuffer, Node_getNodeValue(streetAddressNode));
                    StringMaker_append(stringBuffer, " Number Of Children: ");
                    StringMaker_appendint(stringBuffer, ((int32_t) JAVA_CALL(Node_getChildNodes(streetAddressNode), getLength)));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                }
                StreetAddress* taxableStreetAddress = StreetAddress_new(streetAddressNode);
                StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
                if (!StringValidationUtil_isEmpty(stringValidationUtil, country) && !StringValidationUtil_isEmpty(stringValidationUtil, StreetAddress_getCountry(taxableStreetAddress)) && JAVA_CALL(StreetAddress_getCountry(taxableStreetAddress), compareTo, this->ALL) == 0) {
                    return true;
                }
                if (!StringValidationUtil_isEmpty(stringValidationUtil, country) && !StringValidationUtil_isEmpty(stringValidationUtil, StreetAddress_getCountry(taxableStreetAddress)) && strcmp(country, StreetAddress_getCountry(taxableStreetAddress)) == 0) {
                    const char* state = StreetAddress_getState(this->streetAddress);
                    if (state != nullptr) {
                        return true;
                    }
                }
            }
            return false;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}

