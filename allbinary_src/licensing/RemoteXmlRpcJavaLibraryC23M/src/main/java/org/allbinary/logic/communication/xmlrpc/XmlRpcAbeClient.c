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
// package org.allbinary.logic.communication.xmlrpc

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/xmlrpc/NullXmlRpcHandler.h"
#include "org/apache/xmlrpc/XmlRpcClient.h"
#include "org/apache/xmlrpc/XmlRpcHandler.h"

typedef struct XmlRpcAbeClient XmlRpcAbeClient;
struct XmlRpcAbeClient {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* remoteMethod;
    AbeClientInformationInterface* clientInfo;
    XmlRpcHandler* client;
    int32_t server;
    int32_t start;
    int32_t maxServers;
    bool isDone;
    const char* START_SERVER;
    const char* TRYING;
    const char* SEP;
    const char* CLIENT_INFO;
    const char* RESULT;
    const char* INVALID;
    const char* EXCEPTION_IN_CLIENT;
    const char* SERVER_REPORTED_ERROR;
    const char* UNKNOWN_ERROR;
    const char* TRYING_OTHER_SERVERS;
    const char* HOST_NOT_RESOLVED_MSG;
    const char* HOST_NOT_RESOLVED;
    MyRandomFactory* myRandomFactory;
};

bool XmlRpcAbeClient_isOnline = true;

XmlRpcAbeClient* XmlRpcAbeClient_new(AbeClientInformationInterface* clientInfo, const char* remoteMethod);

void XmlRpcAbeClient_init(XmlRpcAbeClient* this, AbeClientInformationInterface* clientInfo, const char* remoteMethod);
Any* XmlRpcAbeClient_get(XmlRpcAbeClient* this, Any* anyType);
Any* XmlRpcAbeClient_tryAnother(XmlRpcAbeClient* this, Any* anyType);
AbeClientInformationInterface* XmlRpcAbeClient_getClientInfo(XmlRpcAbeClient* this);
XmlRpcHandler* XmlRpcAbeClient_getClient(XmlRpcAbeClient* this);
void XmlRpcAbeClient_setClient(XmlRpcAbeClient* this, XmlRpcClient* client);
int32_t XmlRpcAbeClient_getServer(XmlRpcAbeClient* this);
void XmlRpcAbeClient_setServer(XmlRpcAbeClient* this, int32_t server);
int32_t XmlRpcAbeClient_getStart(XmlRpcAbeClient* this);
void XmlRpcAbeClient_setStart(XmlRpcAbeClient* this, int32_t start);
int32_t XmlRpcAbeClient_getMaxServers(XmlRpcAbeClient* this);
void XmlRpcAbeClient_setMaxServers(XmlRpcAbeClient* this, int32_t maxServers);
bool XmlRpcAbeClient_isIsDone(XmlRpcAbeClient* this);
void XmlRpcAbeClient_setIsDone(XmlRpcAbeClient* this, bool isDone);
const char* XmlRpcAbeClient_getRemoteMethod(XmlRpcAbeClient* this);

static void XmlRpcAbeClient_initFields(XmlRpcAbeClient* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->client = NullXmlRpcHandler_NULL_XML_RPC_HANDLER;
    
    this->start = 0;
    this->maxServers = 0;
    
    this->START_SERVER = "Start With Server #";
    this->TRYING = "Trying Server #";
    this->SEP = CommonLabels_getInstance()->COLON_SEP;
    this->CLIENT_INFO = "Client Info: \n";
    this->RESULT = CommonLabels_getInstance()->RESULT_ + CommonSeps_getInstance()->NEW_LINE;
    this->INVALID = "License data is Invalid Trying Other Servers";
    this->EXCEPTION_IN_CLIENT = "Exception in client";
    this->SERVER_REPORTED_ERROR = "Server reported error";
    this->UNKNOWN_ERROR = "Unknown License Retrieval Failure";
    this->TRYING_OTHER_SERVERS = "IOException Trying Other Servers";
    this->HOST_NOT_RESOLVED_MSG = "Not Trying Again Since Host Unresolved";
    this->HOST_NOT_RESOLVED = "Host is unresolved";
    this->myRandomFactory = MyRandomFactory_getInstance();
}


void XmlRpcAbeClient_init(XmlRpcAbeClient* this, AbeClientInformationInterface* clientInfo, const char* remoteMethod) {
    XmlRpcAbeClient_initFields(this);
        this->remoteMethod = remoteMethod;
        this->clientInfo = clientInfo;
        if (AbeClientInformationInterface_getNumberOfLicenseServers(clientInfo) > 1) {
            this->maxServers = AbeClientInformationInterface_getNumberOfLicenseServers(clientInfo) - 2;
            this->start = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, this->maxServers) + 1;
        } else if (AbeClientInformationInterface_getNumberOfLicenseServers(clientInfo) == 1) {
            this->maxServers = 0;
            this->start = 0;
        }
        this->isDone = false;
        this->server = this->start;
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->START_SERVER);
        StringMaker_appendint(stringBuffer, XmlRpcAbeClient_getServer(this));
        StringMaker_append(stringBuffer, this->SEP);
        StringMaker_append(stringBuffer, AbeClientInformationInterface_getLicenseServer(clientInfo, XmlRpcAbeClient_getServer(this)));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->CONSTRUCTOR);
}

XmlRpcAbeClient* XmlRpcAbeClient_new(AbeClientInformationInterface* clientInfo, const char* remoteMethod) {
    XmlRpcAbeClient* this = calloc(1, sizeof(XmlRpcAbeClient));
    XmlRpcAbeClient_init(this, clientInfo, remoteMethod);
    return this;
}


// throws Exception
Any* XmlRpcAbeClient_get(XmlRpcAbeClient* this, Any* anyType) {
        ForcedLogUtil_log(this->commonStrings->NOT_IMPLEMENTED, this);
        return NullUtil_getInstance()->NULL_OBJECT;
}


// throws Exception
Any* XmlRpcAbeClient_tryAnother(XmlRpcAbeClient* this, Any* anyType) {
        if (XmlRpcAbeClient_getServer(this) < XmlRpcAbeClient_getMaxServers(this)) {
            XmlRpcAbeClient_setServer(this, XmlRpcAbeClient_getServer(this) + 1);
        } else {
            XmlRpcAbeClient_setServer(this, 0);
        }
        if (XmlRpcAbeClient_getServer(this) != XmlRpcAbeClient_getStart(this) && !XmlRpcAbeClient_isIsDone(this)) {
            return XmlRpcAbeClient_get(this, anyType);
        } else {
            XmlRpcAbeClient_setIsDone(this, true);
        }
        java_throw(java_exception_new("Exception", "Tried All Servers But Still Failed"));
}


AbeClientInformationInterface* XmlRpcAbeClient_getClientInfo(XmlRpcAbeClient* this) {
        return this->clientInfo;
}


XmlRpcHandler* XmlRpcAbeClient_getClient(XmlRpcAbeClient* this) {
        return this->client;
}


void XmlRpcAbeClient_setClient(XmlRpcAbeClient* this, XmlRpcClient* client) {
        this->client = client;
}


int32_t XmlRpcAbeClient_getServer(XmlRpcAbeClient* this) {
        return this->server;
}


void XmlRpcAbeClient_setServer(XmlRpcAbeClient* this, int32_t server) {
        this->server = server;
}


int32_t XmlRpcAbeClient_getStart(XmlRpcAbeClient* this) {
        return this->start;
}


void XmlRpcAbeClient_setStart(XmlRpcAbeClient* this, int32_t start) {
        this->start = start;
}


int32_t XmlRpcAbeClient_getMaxServers(XmlRpcAbeClient* this) {
        return this->maxServers;
}


void XmlRpcAbeClient_setMaxServers(XmlRpcAbeClient* this, int32_t maxServers) {
        this->maxServers = maxServers;
}


bool XmlRpcAbeClient_isIsDone(XmlRpcAbeClient* this) {
        return this->isDone;
}


void XmlRpcAbeClient_setIsDone(XmlRpcAbeClient* this, bool isDone) {
        this->isDone = isDone;
}


const char* XmlRpcAbeClient_getRemoteMethod(XmlRpcAbeClient* this) {
        return this->remoteMethod;
}

