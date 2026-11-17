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
// package org.allbinary.business.user.address

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StreetAddress StreetAddress;
struct StreetAddress {
    LogUtil* logUtil;
    const char* id;
    const char* name;
    const char* street;
    const char* city;
    const char* state;
    const char* code;
    const char* country;
    bool isDefault;
};


StreetAddress* StreetAddress_new(void);

void StreetAddress_init(StreetAddress* this);

StreetAddress* StreetAddress_new1(Node* node);
void StreetAddress_init1(StreetAddress* this, Node* node);

StreetAddress* StreetAddress_new1(StreetAddress* streetAddress);
void StreetAddress_init1(StreetAddress* this, StreetAddress* streetAddress);

StreetAddress* StreetAddress_new1(HttpServletRequest* request);
void StreetAddress_init1(StreetAddress* this, HttpServletRequest* request);

StreetAddress* StreetAddress_new6(const char* name, const char* street, const char* city, const char* state, const char* code, const char* country);
void StreetAddress_init6(StreetAddress* this, const char* name, const char* street, const char* city, const char* state, const char* code, const char* country);

StreetAddress* StreetAddress_new1(HashMap* address);
void StreetAddress_init1(StreetAddress* this, HashMap* address);
static void StreetAddress_log(StreetAddress* this);
void StreetAddress_setId(StreetAddress* this, const char* id);
void StreetAddress_setName(StreetAddress* this, const char* name);
void StreetAddress_setStreet(StreetAddress* this, const char* value);
void StreetAddress_setCity(StreetAddress* this, const char* value);
void StreetAddress_setState(StreetAddress* this, const char* value);
void StreetAddress_setCode(StreetAddress* this, const char* value);
void StreetAddress_setCountry(StreetAddress* this, const char* value);
const char* StreetAddress_getName(StreetAddress* this);
const char* StreetAddress_getStreet(StreetAddress* this);
const char* StreetAddress_getCity(StreetAddress* this);
const char* StreetAddress_getState(StreetAddress* this);
const char* StreetAddress_getCode(StreetAddress* this);
const char* StreetAddress_getCountry(StreetAddress* this);
const char* StreetAddress_getId(StreetAddress* this);
bool StreetAddress_isDefault(StreetAddress* this);
bool StreetAddress_isEmpty(StreetAddress* this);
bool StreetAddress_isValid(StreetAddress* this);
const char* StreetAddress_validationInfo(StreetAddress* this);
static Document* StreetAddress_toValidationInfoDoc(StreetAddress* this);
static Node* StreetAddress_toValidationInfoNode(StreetAddress* this, Document* document);
HashMap* StreetAddress_toHashMap(StreetAddress* this);
Node* StreetAddress_toXmlNode(StreetAddress* this, Document* document);

static void StreetAddress_initFields(StreetAddress* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    this->isDefault = false;
}


void StreetAddress_init(StreetAddress* this) {
    StreetAddress_initFields(this);
}

StreetAddress* StreetAddress_new(void) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init(this);
    return this;
}


void StreetAddress_init1(StreetAddress* this, Node* node) {
    StreetAddress_initFields(this);
        Node* nameNode = DomSearchHelper_getNode(StreetAddressData_NAME, Node_getChildNodes(node));
        this->name = DomNodeHelper_getTextNodeValue(nameNode);
        Node* streetNode = DomSearchHelper_getNode(StreetAddressData_STREET, Node_getChildNodes(node));
        this->street = DomNodeHelper_getTextNodeValue(streetNode);
        Node* cityNode = DomSearchHelper_getNode(StreetAddressData_CITY, Node_getChildNodes(node));
        this->city = DomNodeHelper_getTextNodeValue(cityNode);
        Node* stateNode = DomSearchHelper_getNode(StreetAddressData_STATE, Node_getChildNodes(node));
        this->state = DomNodeHelper_getTextNodeValue(stateNode);
        Node* codeNode = DomSearchHelper_getNode(StreetAddressData_CODE, Node_getChildNodes(node));
        this->code = DomNodeHelper_getTextNodeValue(codeNode);
        Node* countryNode = DomSearchHelper_getNode(StreetAddressData_COUNTRY, Node_getChildNodes(node));
        this->country = DomNodeHelper_getTextNodeValue(countryNode);
        StreetAddress_log(this);
}

StreetAddress* StreetAddress_new1(Node* node) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init1(this, node);
    return this;
}


void StreetAddress_init1(StreetAddress* this, StreetAddress* streetAddress) {
    StreetAddress_initFields(this);
        this->id = StreetAddress_getId(streetAddress);
        this->name = StreetAddress_getName(streetAddress);
        this->street = StreetAddress_getStreet(streetAddress);
        this->city = StreetAddress_getCity(streetAddress);
        this->state = StreetAddress_getState(streetAddress);
        this->code = StreetAddress_getCode(streetAddress);
        this->country = StreetAddress_getCountry(streetAddress);
        this->isDefault = StreetAddress_isDefault(streetAddress);
        StreetAddress_log(this);
}

StreetAddress* StreetAddress_new1(StreetAddress* streetAddress) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init1(this, streetAddress);
    return this;
}


void StreetAddress_init1(StreetAddress* this, HttpServletRequest* request) {
    StreetAddress_initFields(this);
        StreetAddress_setId(this, HttpServletRequest_getParameter(request, StreetAddressData_ID));
        StreetAddress_setName(this, HttpServletRequest_getParameter(request, StreetAddressData_NAME));
        StreetAddress_setStreet(this, HttpServletRequest_getParameter(request, StreetAddressData_STREET));
        StreetAddress_setCity(this, HttpServletRequest_getParameter(request, StreetAddressData_CITY));
        StreetAddress_setState(this, HttpServletRequest_getParameter(request, StreetAddressData_STATE));
        StreetAddress_setCode(this, HttpServletRequest_getParameter(request, StreetAddressData_CODE));
        StreetAddress_setCountry(this, HttpServletRequest_getParameter(request, StreetAddressData_COUNTRY));
        StreetAddress_log(this);
}

StreetAddress* StreetAddress_new1(HttpServletRequest* request) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init1(this, request);
    return this;
}


void StreetAddress_init6(StreetAddress* this, const char* name, const char* street, const char* city, const char* state, const char* code, const char* country) {
    StreetAddress_initFields(this);
        this->name = name;
        this->street = street;
        this->city = city;
        this->state = state;
        this->code = code;
        this->country = country;
        StreetAddress_log(this);
}

StreetAddress* StreetAddress_new6(const char* name, const char* street, const char* city, const char* state, const char* code, const char* country) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init6(this, name, street, city, state, code, country);
    return this;
}


void StreetAddress_init1(StreetAddress* this, HashMap* address) {
    StreetAddress_initFields(this);
        this->id = ((const char*) HashMap_get(address, StreetAddressData_ID));
        this->name = ((const char*) HashMap_get(address, StreetAddressData_NAME));
        this->street = ((const char*) HashMap_get(address, StreetAddressData_STREET));
        this->city = ((const char*) HashMap_get(address, StreetAddressData_CITY));
        this->state = ((const char*) HashMap_get(address, StreetAddressData_STATE));
        this->code = ((const char*) HashMap_get(address, StreetAddressData_CODE));
        this->country = ((const char*) HashMap_get(address, StreetAddressData_COUNTRY));
        const char* def = ((const char*) HashMap_get(address, StreetAddressData_DEFAULT));
        if (def != nullptr && strcmp(def, StreetAddressData_DEFAULT) == 0) {
            this->isDefault = true;
        } else {
            this->isDefault = false;
        }
        StreetAddress_log(this);
}

StreetAddress* StreetAddress_new1(HashMap* address) {
    StreetAddress* this = calloc(1, sizeof(StreetAddress));
    StreetAddress_init1(this, address);
    return this;
}


static void StreetAddress_log(StreetAddress* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Created Address: \n", java_string_of(StreetAddress_toHashMap(this))), this, "log");
        }
}


void StreetAddress_setId(StreetAddress* this, const char* id) {
        this->id = id;
}


void StreetAddress_setName(StreetAddress* this, const char* name) {
        this->name = name;
}


void StreetAddress_setStreet(StreetAddress* this, const char* value) {
        this->street = value;
}


void StreetAddress_setCity(StreetAddress* this, const char* value) {
        this->city = value;
}


void StreetAddress_setState(StreetAddress* this, const char* value) {
        this->state = value;
}


void StreetAddress_setCode(StreetAddress* this, const char* value) {
        this->code = value;
}


void StreetAddress_setCountry(StreetAddress* this, const char* value) {
        this->country = value;
}


const char* StreetAddress_getName(StreetAddress* this) {
        return this->name;
}


const char* StreetAddress_getStreet(StreetAddress* this) {
        return this->street;
}


const char* StreetAddress_getCity(StreetAddress* this) {
        return this->city;
}


const char* StreetAddress_getState(StreetAddress* this) {
        return this->state;
}


const char* StreetAddress_getCode(StreetAddress* this) {
        return this->code;
}


const char* StreetAddress_getCountry(StreetAddress* this) {
        return this->country;
}


const char* StreetAddress_getId(StreetAddress* this) {
        return this->id;
}


bool StreetAddress_isDefault(StreetAddress* this) {
        return this->isDefault;
}


bool StreetAddress_isEmpty(StreetAddress* this) {
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        if (StreetAddress_getName(this) == nullptr && JAVA_CALL(StreetAddress_getName(this), compareTo, EMPTY_STRING) == 0 && StreetAddress_getStreet(this) == nullptr && JAVA_CALL(StreetAddress_getStreet(this), compareTo, EMPTY_STRING) == 0 && StreetAddress_getCity(this) == nullptr && JAVA_CALL(StreetAddress_getCity(this), compareTo, EMPTY_STRING) == 0 && StreetAddress_getState(this) == nullptr && JAVA_CALL(StreetAddress_getState(this), compareTo, EMPTY_STRING) == 0 && StreetAddress_getCode(this) == nullptr && JAVA_CALL(StreetAddress_getCode(this), compareTo, EMPTY_STRING) == 0 && StreetAddress_getCountry(this) == nullptr && JAVA_CALL(StreetAddress_getCountry(this), compareTo, EMPTY_STRING) == 0) {
            return true;
        }
        return false;
}


bool StreetAddress_isValid(StreetAddress* this) {
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        if (StreetAddress_getName(this) == nullptr || JAVA_CALL(StreetAddress_getName(this), compareTo, EMPTY_STRING) == 0 || StreetAddress_getStreet(this) == nullptr || JAVA_CALL(StreetAddress_getStreet(this), compareTo, EMPTY_STRING) == 0 || StreetAddress_getCity(this) == nullptr || JAVA_CALL(StreetAddress_getCity(this), compareTo, EMPTY_STRING) == 0 || StreetAddress_getState(this) == nullptr || JAVA_CALL(StreetAddress_getState(this), compareTo, EMPTY_STRING) == 0 || StreetAddress_getCode(this) == nullptr || JAVA_CALL(StreetAddress_getCode(this), compareTo, EMPTY_STRING) == 0 || StreetAddress_getCountry(this) == nullptr || JAVA_CALL(StreetAddress_getCountry(this), compareTo, EMPTY_STRING) == 0) {
            return false;
        }
        return true;
}


const char* StreetAddress_validationInfo(StreetAddress* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Address Failed To Validate - All fields must contain data.<br></br>");
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getName(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid name");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getStreet(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid street");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getCity(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid city");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getState(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid state");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getCode(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid zipcode");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        if (!StringValidationUtil_isValidRequired(stringValidationUtil, StreetAddress_getCountry(this), StreetAddressData_MIN, StreetAddressData_MAX)) {
            StringMaker_append(stringBuffer, "Please enter a valid country");
            StringMaker_append(stringBuffer, "<br></br>");
        }
        return StringMaker_toString(stringBuffer);
}


static Document* StreetAddress_toValidationInfoDoc(StreetAddress* this) {
        return nullptr;
}


static Node* StreetAddress_toValidationInfoNode(StreetAddress* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, StreetAddressData_FORM);
            Node_appendChild(node, StreetAddress_toXmlNode(this, document));
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGINGERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "toValidationInfoNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


HashMap* StreetAddress_toHashMap(StreetAddress* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, StreetAddressData_ID, this->id);
        HashMap_put(hashMap, StreetAddressData_NAME, this->name);
        HashMap_put(hashMap, StreetAddressData_STREET, this->street);
        HashMap_put(hashMap, StreetAddressData_CITY, this->city);
        HashMap_put(hashMap, StreetAddressData_STATE, this->state);
        HashMap_put(hashMap, StreetAddressData_CODE, this->code);
        HashMap_put(hashMap, StreetAddressData_COUNTRY, this->country);
        return hashMap;
}


// throws Exception
Node* StreetAddress_toXmlNode(StreetAddress* this, Document* document) {
        StringUtil* stringUtil = StringUtil_getInstance();
        HashMap* hashMap = StreetAddress_toHashMap(this);
        Set* keySet = HashMap_keySet(hashMap);
        Any** keyArray = Set_toArray(keySet);
        int32_t size = java_array_length(keyArray);
        Node* node = Document_createElement(document, StreetAddressData_ADDRESS);
        for (int32_t i = 0; i < size; i++) {
            const char* name = ((const char*) keyArray[i]);
            const char* value = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, name)));
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, name, value));
        }
        return node;
}

