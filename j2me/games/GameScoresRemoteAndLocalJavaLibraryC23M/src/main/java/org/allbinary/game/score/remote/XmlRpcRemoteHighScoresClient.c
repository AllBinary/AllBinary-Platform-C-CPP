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
// package org.allbinary.game.score.remote

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"
// #include "java/io/IOException.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/apache/xmlrpc/XmlRpcClient.h"
#include "org/apache/xmlrpc/XmlRpcException.h"

typedef struct XmlRpcRemoteHighScoresClient XmlRpcRemoteHighScoresClient;
struct XmlRpcRemoteHighScoresClient {
    XmlRpcAbeClient base;
    LogUtil* logUtil;
    const char* page;
};


XmlRpcRemoteHighScoresClient* XmlRpcRemoteHighScoresClient_new(AbeClientInformationInterface* clientInfo, const char* page, const char* remoteMethod);

void XmlRpcRemoteHighScoresClient_init(XmlRpcRemoteHighScoresClient* this, AbeClientInformationInterface* clientInfo, const char* page, const char* remoteMethod);
Any* XmlRpcRemoteHighScoresClient_get(XmlRpcRemoteHighScoresClient* this, Any* anyType, CryptInterface* cryptInterface);

static void XmlRpcRemoteHighScoresClient_initFields(XmlRpcRemoteHighScoresClient* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void XmlRpcRemoteHighScoresClient_init(XmlRpcRemoteHighScoresClient* this, AbeClientInformationInterface* clientInfo, const char* page, const char* remoteMethod) {
        XmlRpcAbeClient_init(&this->base, clientInfo, remoteMethod);
        XmlRpcRemoteHighScoresClient_initFields(this);
        this->page = page;
        XmlRpcRemoteHighScoresClient_setServer(this, 0);
}

XmlRpcRemoteHighScoresClient* XmlRpcRemoteHighScoresClient_new(AbeClientInformationInterface* clientInfo, const char* page, const char* remoteMethod) {
    XmlRpcRemoteHighScoresClient* this = calloc(1, sizeof(XmlRpcRemoteHighScoresClient));
    XmlRpcRemoteHighScoresClient_init(this, clientInfo, page, remoteMethod);
    return this;
}


// throws Exception
Any* XmlRpcRemoteHighScoresClient_get(XmlRpcRemoteHighScoresClient* this, Any* anyType, CryptInterface* cryptInterface) {
        JAVA_TRY {
            BasicArrayList* param = BasicArrayListD_new();
            const char* serverUrl = JAVA_CALL(XmlRpcRemoteHighScoresClient_getClientInfo(this), getLicenseServer, XmlRpcRemoteHighScoresClient_getServer(this));
            int32_t index = java_string_lastIndexOf(serverUrl, u'/');
            serverUrl = java_concat(java_substring(serverUrl, 0, index + 1), this->page);
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, XmlRpcAbeClient_TRYING);
            StringMaker_appendint(stringBuffer, ((int32_t) XmlRpcRemoteHighScoresClient_getServer(this)));
            StringMaker_append(stringBuffer, SEP);
            StringMaker_append(stringBuffer, serverUrl);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->GET);
            XmlRpcClient* xmlRpcClient = XmlRpcClient_new(serverUrl);
            XmlRpcRemoteHighScoresClient_setClient(this, xmlRpcClient);
            XmlRpcClient_setBasicAuthentication(xmlRpcClient, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
            ABHashtable* hashtable = ((ABHashtable*) anyType);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(XmlRpcAbeClient_CLIENT_INFO), ABHashtable_toString(hashtable)), this, this->commonStrings->GET);
            BasicArrayList_add(param, hashtable);
            Any* result = XmlRpcClient_executeWithCrypt(xmlRpcClient, XmlRpcRemoteHighScoresClient_getRemoteMethod(this), param, cryptInterface);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(XmlRpcAbeClient_RESULT), Any_toString(result)), this, this->commonStrings->GET);
            this->base.isOnline = true;
            return result;
        } JAVA_CATCH(IOException, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_TRYING_OTHER_SERVERS + ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e), this, this->commonStrings->GET, e);
            if (!JAVA_CALL(java_exception_message(e), startsWith, XmlRpcAbeClient_HOST_NOT_RESOLVED)) {
                return XmlRpcRemoteHighScoresClient_tryAnother(this, anyType);
            } else {
                java_throw(java_exception_new("Exception", XmlRpcAbeClient_HOST_NOT_RESOLVED_MSG));
            }
        } JAVA_CATCH(XmlRpcException, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_SERVER_REPORTED_ERROR, this, this->commonStrings->GET, e);
            return XmlRpcRemoteHighScoresClient_tryAnother(this, anyType);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_UNKNOWN_ERROR, this, this->commonStrings->GET, e);
            return XmlRpcRemoteHighScoresClient_tryAnother(this, anyType);
        } JAVA_END_TRY;
}

