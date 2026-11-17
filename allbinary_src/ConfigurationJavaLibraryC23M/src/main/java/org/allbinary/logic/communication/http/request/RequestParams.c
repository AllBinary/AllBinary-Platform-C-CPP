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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

//Note: if request is destroyed or messed up this will not work. Use fileRequestParams
typedef struct RequestParams RequestParams;
struct RequestParams {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Map* map;
    const char* KEY;
    const char* VALUE;
};


RequestParams* RequestParams_new(void);

void RequestParams_init(RequestParams* this);

RequestParams* RequestParams_new1(HttpServletRequest* request);
void RequestParams_init1(RequestParams* this, HttpServletRequest* request);

RequestParams* RequestParams_new1(PageContext* pageContext);
void RequestParams_init1(RequestParams* this, PageContext* pageContext);
void RequestParams_setMap(RequestParams* this, Map* map);
Map* RequestParams_getMap(RequestParams* this);
Node* RequestParams_toXmlNode(RequestParams* this, Document* document);
HashMap* RequestParams_toHashMap(RequestParams* this);

static void RequestParams_initFields(RequestParams* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->KEY = "Key: ";
    this->VALUE = " Value: ";
}


void RequestParams_init(RequestParams* this) {
    RequestParams_initFields(this);
        LogUtil_putF(this->logUtil, "New RequestParams Size: 0", this, this->commonStrings->CONSTRUCTOR);
}

RequestParams* RequestParams_new(void) {
    RequestParams* this = calloc(1, sizeof(RequestParams));
    RequestParams_init(this);
    return this;
}


void RequestParams_init1(RequestParams* this, HttpServletRequest* request) {
    RequestParams_initFields(this);
        this->map = HttpServletRequest_getParameterMap(request);
        LogUtil_putF(this->logUtil, java_concat("RequestParams Size: ", java_string_of(JAVA_CALL(JAVA_CALL(RequestParams_getMap(this), keySet), size))), this, this->commonStrings->CONSTRUCTOR);
}

RequestParams* RequestParams_new1(HttpServletRequest* request) {
    RequestParams* this = calloc(1, sizeof(RequestParams));
    RequestParams_init1(this, request);
    return this;
}


void RequestParams_init1(RequestParams* this, PageContext* pageContext) {
    RequestParams_initFields(this);
        this->map = JAVA_CALL(PageContext_getRequest(pageContext), getParameterMap);
        LogUtil_putF(this->logUtil, java_concat("Request Params Size: ", java_string_of(JAVA_CALL(JAVA_CALL(RequestParams_getMap(this), keySet), size))), this, this->commonStrings->CONSTRUCTOR);
}

RequestParams* RequestParams_new1(PageContext* pageContext) {
    RequestParams* this = calloc(1, sizeof(RequestParams));
    RequestParams_init1(this, pageContext);
    return this;
}


void RequestParams_setMap(RequestParams* this, Map* map) {
        this->map = map;
}


Map* RequestParams_getMap(RequestParams* this) {
        return this->map;
}


Node* RequestParams_toXmlNode(RequestParams* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, RequestData_REQUEST);
            StringMaker* stringBuffer = StringMaker_new();
            Set* keys = Map_keySet(this->map);
            Any** keyArray = Set_toArray(keys);
            int32_t size = java_array_length(keyArray);
            for (int32_t i = 0; i < size; i++) {
                const char* key = ((const char*) keyArray[i]);
                const char** values = ((const char**) Map_get(this->map, key));
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->KEY);
                StringMaker_append(stringBuffer, key);
                StringMaker_append(stringBuffer, this->VALUE);
                StringMaker_append(stringBuffer, values[0]);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "toXmlNode(document)");
                Node_appendChild(node, ModDomHelper_createNameValueNodes(document, RequestData_PARAMETER, java_string_new(key), java_string_new(values[0])));
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode(document)", e);
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
HashMap* RequestParams_toHashMap(RequestParams* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        Set* keys = Map_keySet(this->map);
        Any** keyArray = Set_toArray(keys);
        int32_t size = java_array_length(keyArray);
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t i = 0; i < size; i++) {
            const char* key = ((const char*) keyArray[i]);
            const char** values = ((const char**) Map_get(this->map, key));
            HashMap_put(hashMap, java_string_new(key), java_string_new(values[0]));
        }
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, "RequestParams: ");
        StringMaker_append(stringBuffer, Map_toString(this->map));
        StringMaker_append(stringBuffer, "\ntoHashMap: ");
        StringMaker_append(stringBuffer, HashMap_toString(hashMap));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "toHashMap()");
        return hashMap;
}

