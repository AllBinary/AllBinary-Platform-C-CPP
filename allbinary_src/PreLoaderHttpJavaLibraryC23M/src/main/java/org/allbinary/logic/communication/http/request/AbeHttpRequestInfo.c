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
// #include "java/util/Enumeration.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct AbeHttpRequestInfo AbeHttpRequestInfo;
struct AbeHttpRequestInfo {
    const char* NAME;
    AbeHttpRequestInfoData* abeHttpRequestInfoData;
    CommonSeps* commonSeps;
    const char* httpUserAgent;
    const char* remoteAddress;
    const char* remoteHost;
    const char* remoteHostByAddr;
    const char* remotePort;
    const char* requestedFilePath;
};


AbeHttpRequestInfo* AbeHttpRequestInfo_new(HashMap* hashMap);

void AbeHttpRequestInfo_init(AbeHttpRequestInfo* this, HashMap* hashMap);

AbeHttpRequestInfo* AbeHttpRequestInfo_new1(HttpServletRequest* httpServletRequest);
void AbeHttpRequestInfo_init1(AbeHttpRequestInfo* this, HttpServletRequest* httpServletRequest);
HashMap* AbeHttpRequestInfo_toHashMap(AbeHttpRequestInfo* this);
BasicArrayList* AbeHttpRequestInfo_toVector(AbeHttpRequestInfo* this);
const char* AbeHttpRequestInfo_toString(AbeHttpRequestInfo* this);

static void AbeHttpRequestInfo_initFields(AbeHttpRequestInfo* this) {
    this->NAME = "AbeHttpRequestInfo";
    this->abeHttpRequestInfoData = AbeHttpRequestInfoData_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    
    
    
    
    
    
}


void AbeHttpRequestInfo_init(AbeHttpRequestInfo* this, HashMap* hashMap) {
    AbeHttpRequestInfo_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        this->httpUserAgent = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->HTTP_USER_AGENT)));
        this->remoteAddress = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->REMOTE_ADDRESS)));
        this->remoteHost = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->REMOTE_HOST)));
        this->remoteHostByAddr = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS)));
        this->remotePort = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->REMOTE_PORT)));
        this->requestedFilePath = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, this->abeHttpRequestInfoData->REQUEST_FILE_PATH)));
}

AbeHttpRequestInfo* AbeHttpRequestInfo_new(HashMap* hashMap) {
    AbeHttpRequestInfo* this = calloc(1, sizeof(AbeHttpRequestInfo));
    AbeHttpRequestInfo_init(this, hashMap);
    return this;
}


void AbeHttpRequestInfo_init1(AbeHttpRequestInfo* this, HttpServletRequest* httpServletRequest) {
    AbeHttpRequestInfo_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        this->httpUserAgent = stringUtil->EMPTY_STRING;
        Enumeration* enumuration = HttpServletRequest_getHeaderNames(httpServletRequest);
        while (Enumeration_hasMoreElements(enumuration)) {
            const char* key = ((const char*) Enumeration_nextElement(enumuration));
            const char* value = HttpServletRequest_getHeader(httpServletRequest, key);
            if (java_string_indexOf(key, "user") >= 0) {
                this->httpUserAgent = java_concat(java_concat(java_concat("key: ", key), " value: "), value);
            }
        }
        this->remoteHostByAddr = stringUtil->EMPTY_STRING;
        this->remoteAddress = HttpServletRequest_getRemoteAddr(httpServletRequest);
        this->remoteHost = HttpServletRequest_getRemoteHost(httpServletRequest);
        this->requestedFilePath = HttpServletRequest_getServletPath(httpServletRequest);
        this->remotePort = java_string_of(HttpServletRequest_getRemotePort(httpServletRequest));
}

AbeHttpRequestInfo* AbeHttpRequestInfo_new1(HttpServletRequest* httpServletRequest) {
    AbeHttpRequestInfo* this = calloc(1, sizeof(AbeHttpRequestInfo));
    AbeHttpRequestInfo_init1(this, httpServletRequest);
    return this;
}


HashMap* AbeHttpRequestInfo_toHashMap(AbeHttpRequestInfo* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, this->abeHttpRequestInfoData->HTTP_USER_AGENT, this->httpUserAgent);
        HashMap_put(hashMap, this->abeHttpRequestInfoData->REMOTE_ADDRESS, this->remoteAddress);
        HashMap_put(hashMap, this->abeHttpRequestInfoData->REMOTE_HOST, this->remoteHost);
        HashMap_put(hashMap, this->abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS, this->remoteHostByAddr);
        HashMap_put(hashMap, this->abeHttpRequestInfoData->REMOTE_PORT, this->remotePort);
        HashMap_put(hashMap, this->abeHttpRequestInfoData->REQUEST_FILE_PATH, this->requestedFilePath);
        return hashMap;
}


BasicArrayList* AbeHttpRequestInfo_toVector(AbeHttpRequestInfo* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, this->httpUserAgent);
        BasicArrayList_add(vector, this->remoteAddress);
        BasicArrayList_add(vector, this->remoteHost);
        BasicArrayList_add(vector, this->remoteHostByAddr);
        BasicArrayList_add(vector, this->remotePort);
        BasicArrayList_add(vector, this->requestedFilePath);
        return vector;
}


const char* AbeHttpRequestInfo_toString(AbeHttpRequestInfo* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->NAME), append, this->commonSeps->COLON_SEP), append, this->abeHttpRequestInfoData->HTTP_USER_AGENT), append, this->commonSeps->COLON_SEP), append, this->httpUserAgent), append, this->commonSeps->SPACE), append, this->abeHttpRequestInfoData->REMOTE_ADDRESS), append, this->commonSeps->COLON_SEP), append, this->remoteAddress), append, this->commonSeps->SPACE), append, this->abeHttpRequestInfoData->REMOTE_HOST), append, this->commonSeps->COLON_SEP), append, this->remoteHost), append, this->commonSeps->SPACE), append, this->abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS), append, this->commonSeps->COLON_SEP), append, this->remoteHostByAddr), append, this->commonSeps->SPACE), append, this->abeHttpRequestInfoData->REMOTE_PORT), append, this->commonSeps->COLON_SEP), append, this->remotePort), append, this->commonSeps->SPACE), append, this->abeHttpRequestInfoData->REQUEST_FILE_PATH), append, this->commonSeps->COLON_SEP), append, this->requestedFilePath), toString);
}

