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
// package org.allbinary.logic.communication.log

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
#include "org/apache/xmlrpc/XmlRpcClient.h"
#include "org/apache/xmlrpc/XmlRpcException.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h"
#include "org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct XmlRpcRemoteLogClient XmlRpcRemoteLogClient;
struct XmlRpcRemoteLogClient {
    XmlRpcAbeClient base;
    NoCrypt* noCrypt;
};


XmlRpcRemoteLogClient* XmlRpcRemoteLogClient_new(AbeClientInformationInterface* clientInfo);

void XmlRpcRemoteLogClient_init(XmlRpcRemoteLogClient* this, AbeClientInformationInterface* clientInfo);
Any* XmlRpcRemoteLogClient_get(XmlRpcRemoteLogClient* this, Any* anyType);

static void XmlRpcRemoteLogClient_initFields(XmlRpcRemoteLogClient* this) {
    this->noCrypt = NoCrypt_new();
}


void XmlRpcRemoteLogClient_init(XmlRpcRemoteLogClient* this, AbeClientInformationInterface* clientInfo) {
        XmlRpcAbeClient_init(&this->base, clientInfo, "SSLLogServ.logUtil");
        XmlRpcRemoteLogClient_initFields(this);
}

XmlRpcRemoteLogClient* XmlRpcRemoteLogClient_new(AbeClientInformationInterface* clientInfo) {
    XmlRpcRemoteLogClient* this = calloc(1, sizeof(XmlRpcRemoteLogClient));
    XmlRpcRemoteLogClient_init(this, clientInfo);
    return this;
}


// throws Exception
Any* XmlRpcRemoteLogClient_get(XmlRpcRemoteLogClient* this, Any* anyType) {
        JAVA_TRY {
            BasicArrayList* param = BasicArrayListD_new();
            const char* serverUrl = JAVA_CALL(XmlRpcRemoteLogClient_getClientInfo(this), getLicenseServer, XmlRpcRemoteLogClient_getServer(this));
            int32_t index = java_string_lastIndexOf(serverUrl, "/");
            serverUrl = java_concat(java_substring(serverUrl, 0, index + 1), "logservssl.php");
            XmlRpcClient* xmlRpcClient = XmlRpcClient_new(serverUrl);
            XmlRpcRemoteLogClient_setClient(this, xmlRpcClient);
            XmlRpcClient_setBasicAuthentication(xmlRpcClient, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
            ABHashtable* hashtable = ((ABHashtable*) anyType);
            BasicArrayList_add(param, hashtable);
            Any* result = XmlRpcClient_executeWithCrypt(xmlRpcClient, XmlRpcRemoteLogClient_getRemoteMethod(this), param, this->noCrypt);
            puts(java_string_of(java_concat(java_string_of(CommonLabels_getInstance()->RESULT_ + CommonSeps_getInstance()->NEW_LINE), Any_toString(result))));
            return result;
        } JAVA_CATCH(IOException, e) {
            puts(java_string_of("IOException Trying Other Servers"));
            if (!JAVA_CALL(java_exception_message(e), startsWith, XmlRpcAbeClient_HOST_NOT_RESOLVED)) {
                return XmlRpcRemoteLogClient_tryAnother(this, anyType);
            } else {
                java_throw(java_exception_new("Exception", XmlRpcAbeClient_HOST_NOT_RESOLVED_MSG));
            }
        } JAVA_CATCH(XmlRpcException, e) {
            return XmlRpcRemoteLogClient_tryAnother(this, anyType);
        } JAVA_CATCH(Exception, e) {
            return XmlRpcRemoteLogClient_tryAnother(this, anyType);
        } JAVA_END_TRY;
}

