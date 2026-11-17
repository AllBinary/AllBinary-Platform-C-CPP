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
// package org.allbinary.logic.system.security.licensing.client

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
#include "org/allbinary/logic/system/security/licensing/AbeClientLicense.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/apache/xmlrpc/XmlRpcClient.h"
#include "org/apache/xmlrpc/XmlRpcException.h"

typedef struct XmlRpcAbeLicenseRetrievalClient XmlRpcAbeLicenseRetrievalClient;
struct XmlRpcAbeLicenseRetrievalClient {
    XmlRpcAbeClient base;
    LogUtil* logUtil;
};


XmlRpcAbeLicenseRetrievalClient* XmlRpcAbeLicenseRetrievalClient_new(AbeClientInformationInterface* clientInfo);

void XmlRpcAbeLicenseRetrievalClient_init(XmlRpcAbeLicenseRetrievalClient* this, AbeClientInformationInterface* clientInfo);
Any* XmlRpcAbeLicenseRetrievalClient_get(XmlRpcAbeLicenseRetrievalClient* this, Any* anyType, CryptInterface* cryptInterface);

static void XmlRpcAbeLicenseRetrievalClient_initFields(XmlRpcAbeLicenseRetrievalClient* this) {
    this->logUtil = LogUtil_getInstance();
}


void XmlRpcAbeLicenseRetrievalClient_init(XmlRpcAbeLicenseRetrievalClient* this, AbeClientInformationInterface* clientInfo) {
        XmlRpcAbeClient_init(&this->base, clientInfo, "LicServ.getLicense");
        XmlRpcAbeLicenseRetrievalClient_initFields(this);
}

XmlRpcAbeLicenseRetrievalClient* XmlRpcAbeLicenseRetrievalClient_new(AbeClientInformationInterface* clientInfo) {
    XmlRpcAbeLicenseRetrievalClient* this = calloc(1, sizeof(XmlRpcAbeLicenseRetrievalClient));
    XmlRpcAbeLicenseRetrievalClient_init(this, clientInfo);
    return this;
}


// throws Exception
Any* XmlRpcAbeLicenseRetrievalClient_get(XmlRpcAbeLicenseRetrievalClient* this, Any* anyType, CryptInterface* cryptInterface) {
        JAVA_TRY {
            const char* server = JAVA_CALL(XmlRpcAbeLicenseRetrievalClient_getClientInfo(this), getLicenseServer, XmlRpcAbeLicenseRetrievalClient_getServer(this));
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, XmlRpcAbeClient_TRYING);
            StringMaker_appendint(stringBuffer, ((int32_t) XmlRpcAbeLicenseRetrievalClient_getServer(this)));
            StringMaker_append(stringBuffer, SEP);
            StringMaker_append(stringBuffer, server);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START_LABEL), StringMaker_toString(stringBuffer)), this, this->commonStrings->GET);
            BasicArrayList* param = BasicArrayListD_new();
            XmlRpcClient* xmlRpcClient = XmlRpcClient_new(server);
            XmlRpcAbeLicenseRetrievalClient_setClient(this, xmlRpcClient);
            XmlRpcClient_setBasicAuthentication(xmlRpcClient, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
            ABHashtable* hashtable = JAVA_CALL(XmlRpcAbeLicenseRetrievalClient_getClientInfo(this), toHashtable);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(XmlRpcAbeClient_CLIENT_INFO), ABHashtable_toString(hashtable)), this, this->commonStrings->GET);
            BasicArrayList_add(param, hashtable);
            Any* result = XmlRpcClient_executeWithCrypt(xmlRpcClient, XmlRpcAbeLicenseRetrievalClient_getRemoteMethod(this), param, cryptInterface);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(XmlRpcAbeClient_RESULT), Any_toString(result)), this, this->commonStrings->GET);
            ABHashtable* resultHashtable = ((ABHashtable*) result);
            if (!AbeClientLicense_hasRequiredKeys(resultHashtable)) {
                LogUtil_putF(this->logUtil, XmlRpcAbeClient_INVALID, this, this->commonStrings->GET);
                return XmlRpcAbeLicenseRetrievalClient_tryAnother(this, anyType);
            }
            AbeLicenseInterface* abeLicenseInterface = AbeClientLicense_new(resultHashtable);
            LogUtil_putF(this->logUtil, java_concat(java_string_of(this->commonStrings->END), StringMaker_toString(stringBuffer)), this, this->commonStrings->GET);
            this->base.isOnline = true;
            return abeLicenseInterface;
        } JAVA_CATCH(IOException, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_EXCEPTION_IN_CLIENT, this, this->commonStrings->GET, e);
            LogUtil_putF(this->logUtil, XmlRpcAbeClient_TRYING_OTHER_SERVERS + ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e), this, this->commonStrings->GET);
            if (!JAVA_CALL(java_exception_message(e), startsWith, XmlRpcAbeClient_HOST_NOT_RESOLVED)) {
                return XmlRpcAbeLicenseRetrievalClient_tryAnother(this, anyType);
            } else {
                this->base.isOnline = false;
                java_throw(java_exception_new("Exception", XmlRpcAbeClient_HOST_NOT_RESOLVED_MSG));
            }
        } JAVA_CATCH(XmlRpcException, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_SERVER_REPORTED_ERROR, this, this->commonStrings->GET, e);
            return XmlRpcAbeLicenseRetrievalClient_tryAnother(this, anyType);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, XmlRpcAbeClient_UNKNOWN_ERROR, this, this->commonStrings->GET, e);
            return XmlRpcAbeLicenseRetrievalClient_tryAnother(this, anyType);
        } JAVA_END_TRY;
}

