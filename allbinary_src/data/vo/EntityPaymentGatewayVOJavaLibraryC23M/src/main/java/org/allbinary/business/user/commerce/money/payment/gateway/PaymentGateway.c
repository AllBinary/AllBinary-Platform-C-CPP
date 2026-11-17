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
// package org.allbinary.business.user.commerce.money.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/UserData.h"
#include "org/allbinary/business/user/commerce/money/payment/PaymentData.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/control/crypt/SuperCrypt.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"

typedef struct PaymentGateway PaymentGateway;
struct PaymentGateway {
    PaymentGatewayInterface PaymentGatewayInterface_interface;
    const char* storeName;
    const char* name;
    const char* enable;
    const char* paymentMethod;
    const char* mode;
    const char* testProtocol;
    const char* testServer;
    const char* testPort;
    const char* testPath;
    const char* serverProtocol;
    const char* server;
    const char* serverPort;
    const char* serverPath;
    const char* timeout;
    const char* userName;
    const char* password;
    const char* proxyProtocol;
    const char* proxyServer;
    const char* proxyPort;
    const char* proxyPath;
    const char* proxyUserName;
    const char* proxyPassword;
    const char* proxyTimeout;
    const char* special1;
    const char* special2;
    const char* special3;
    const char* special4;
    const char* special5;
    const char* special6;
    const char* special7;
    const char* special8;
    const char* special9;
    const char* lastModified;
    const char* timeEntered;
};


PaymentGateway* PaymentGateway_new(HashMap* hashMap);

void PaymentGateway_init(PaymentGateway* this, HashMap* hashMap);
void PaymentGateway_getFormData(PaymentGateway* this, HashMap* hashMap);
const char* PaymentGateway_getStoreName(PaymentGateway* this);
const char* PaymentGateway_getName(PaymentGateway* this);
const char* PaymentGateway_getEnable(PaymentGateway* this);
const char* PaymentGateway_getPaymentMethod(PaymentGateway* this);
const char* PaymentGateway_getMode(PaymentGateway* this);
const char* PaymentGateway_getTestProtocol(PaymentGateway* this);
const char* PaymentGateway_getTestServer(PaymentGateway* this);
const char* PaymentGateway_getTestPort(PaymentGateway* this);
const char* PaymentGateway_getTestPath(PaymentGateway* this);
const char* PaymentGateway_getServerProtocol(PaymentGateway* this);
const char* PaymentGateway_getServer(PaymentGateway* this);
const char* PaymentGateway_getServerPort(PaymentGateway* this);
const char* PaymentGateway_getServerPath(PaymentGateway* this);
const char* PaymentGateway_getUserName(PaymentGateway* this);
const char* PaymentGateway_getPassword(PaymentGateway* this);
const char* PaymentGateway_getProxyProtocol(PaymentGateway* this);
const char* PaymentGateway_getProxyServer(PaymentGateway* this);
const char* PaymentGateway_getProxyPath(PaymentGateway* this);
const char* PaymentGateway_getProxyPort(PaymentGateway* this);
const char* PaymentGateway_getProxyUserName(PaymentGateway* this);
const char* PaymentGateway_getProxyPassword(PaymentGateway* this);
const char* PaymentGateway_getTimeout(PaymentGateway* this);
const char* PaymentGateway_getProxyTimeout(PaymentGateway* this);
const char* PaymentGateway_getSpecial1(PaymentGateway* this);
const char* PaymentGateway_getSpecial2(PaymentGateway* this);
const char* PaymentGateway_getSpecial3(PaymentGateway* this);
const char* PaymentGateway_getSpecial4(PaymentGateway* this);
const char* PaymentGateway_getSpecial5(PaymentGateway* this);
const char* PaymentGateway_getSpecial6(PaymentGateway* this);
const char* PaymentGateway_getSpecial7(PaymentGateway* this);
const char* PaymentGateway_getSpecial8(PaymentGateway* this);
const char* PaymentGateway_getSpecial9(PaymentGateway* this);
const char* PaymentGateway_getLastModified(PaymentGateway* this);
const char* PaymentGateway_getTimeEntered(PaymentGateway* this);
void PaymentGateway_setEnable(PaymentGateway* this, const char* value);
void PaymentGateway_setStoreName(PaymentGateway* this, const char* value);
void PaymentGateway_setName(PaymentGateway* this, const char* value);
void PaymentGateway_setPaymentMethod(PaymentGateway* this, const char* value);
void PaymentGateway_setMode(PaymentGateway* this, const char* value);
void PaymentGateway_setTestProtocol(PaymentGateway* this, const char* value);
void PaymentGateway_setTestServer(PaymentGateway* this, const char* value);
void PaymentGateway_setTestPort(PaymentGateway* this, const char* value);
void PaymentGateway_setTestPath(PaymentGateway* this, const char* value);
void PaymentGateway_setServerProtocol(PaymentGateway* this, const char* value);
void PaymentGateway_setServer(PaymentGateway* this, const char* value);
void PaymentGateway_setServerPort(PaymentGateway* this, const char* value);
void PaymentGateway_setServerPath(PaymentGateway* this, const char* value);
void PaymentGateway_setTimeout(PaymentGateway* this, const char* value);
void PaymentGateway_setUserName(PaymentGateway* this, const char* value);
void PaymentGateway_setPassword(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyProtocol(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyServer(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyPort(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyPath(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyUserName(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyPassword(PaymentGateway* this, const char* value);
void PaymentGateway_setProxyTimeout(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial1(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial2(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial3(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial4(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial5(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial6(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial7(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial8(PaymentGateway* this, const char* value);
void PaymentGateway_setSpecial9(PaymentGateway* this, const char* value);
void PaymentGateway_setLastModified(PaymentGateway* this, const char* value);
void PaymentGateway_setTimeEntered(PaymentGateway* this, const char* value);
HashMap* PaymentGateway_toHashMap(PaymentGateway* this);
HashMap* PaymentGateway_toHashMap(PaymentGateway* this, bool isEncrypted);
BasicArrayList* PaymentGateway_toVector(PaymentGateway* this);
BasicArrayList* PaymentGateway_toVector(PaymentGateway* this, bool isEncrypted);
Any* PaymentGateway_getKey(PaymentGateway* this);

static void PaymentGateway_initFields(PaymentGateway* this) {
    this->storeName = nullptr;
    this->name = nullptr;
    this->enable = nullptr;
    this->paymentMethod = nullptr;
    this->mode = nullptr;
    this->testProtocol = nullptr;
    this->testServer = nullptr;
    this->testPort = nullptr;
    this->testPath = nullptr;
    this->serverProtocol = nullptr;
    this->server = nullptr;
    this->serverPort = nullptr;
    this->serverPath = nullptr;
    this->timeout = nullptr;
    this->userName = nullptr;
    this->password = nullptr;
    this->proxyProtocol = nullptr;
    this->proxyServer = nullptr;
    this->proxyPort = nullptr;
    this->proxyPath = nullptr;
    this->proxyUserName = nullptr;
    this->proxyPassword = nullptr;
    this->proxyTimeout = nullptr;
    this->special1 = nullptr;
    this->special2 = nullptr;
    this->special3 = nullptr;
    this->special4 = nullptr;
    this->special5 = nullptr;
    this->special6 = nullptr;
    this->special7 = nullptr;
    this->special8 = nullptr;
    this->special9 = nullptr;
    this->lastModified = nullptr;
    this->timeEntered = nullptr;
}


void PaymentGateway_init(PaymentGateway* this, HashMap* hashMap) {
    PaymentGateway_initFields(this);
        PaymentGateway_getFormData(this, hashMap);
}

PaymentGateway* PaymentGateway_new(HashMap* hashMap) {
    PaymentGateway* this = calloc(1, sizeof(PaymentGateway));
    PaymentGateway_init(this, hashMap);
    return this;
}


void PaymentGateway_getFormData(PaymentGateway* this, HashMap* hashMap) {
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* empty = stringUtil->EMPTY_STRING;
        this->storeName = ((const char*) HashMap_get(hashMap, JAVA_CALL(StoreFrontData_getInstance()->NAME, toString)));
        this->name = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_NAME, toString)));
        this->enable = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(EntryData_getInstance()->ENABLE, toString))));
        this->paymentMethod = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentData_METHOD, toString))));
        this->mode = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_MODE, toString))));
        this->testProtocol = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_TESTPROTOCOL, toString))));
        this->testServer = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_TESTSERVER, toString))));
        this->testPort = StringUtil_getNonNull(stringUtil, ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_TESTPORT, toString))));
        this->testPath = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_TESTPATH, toString)));
        if (this->testPath == nullptr) {
            this->testPath = empty;
        }
        this->serverProtocol = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SERVERPROTOCOL, toString)));
        if (this->serverProtocol == nullptr) {
            this->serverProtocol = empty;
        }
        this->server = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SERVER, toString)));
        if (this->server == nullptr) {
            this->server = empty;
        }
        this->serverPort = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SERVERPORT, toString)));
        if (this->serverPort == nullptr) {
            this->serverPort = empty;
        }
        this->serverPath = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SERVERPATH, toString)));
        if (this->serverPath == nullptr) {
            this->serverPath = empty;
        }
        this->userName = ((const char*) HashMap_get(hashMap, JAVA_CALL(UserData_USERNAME, toString)));
        if (this->userName == nullptr) {
            this->userName = empty;
        }
        this->password = ((const char*) HashMap_get(hashMap, JAVA_CALL(UserData_PASSWORD, toString)));
        if (this->password == nullptr) {
            this->password = empty;
        }
        this->timeout = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_TIMEOUT, toString)));
        if (this->timeout == nullptr) {
            this->timeout = empty;
        }
        this->proxyProtocol = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYPROTOCOL, toString)));
        if (this->proxyProtocol == nullptr) {
            this->proxyProtocol = empty;
        }
        this->proxyServer = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYSERVER, toString)));
        if (this->proxyServer == nullptr) {
            this->proxyServer = empty;
        }
        this->proxyPort = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYPORT, toString)));
        if (this->proxyPort == nullptr) {
            this->proxyPort = empty;
        }
        this->proxyPath = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYPATH, toString)));
        if (this->proxyPath == nullptr) {
            this->proxyPath = empty;
        }
        this->proxyUserName = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYUSERNAME, toString)));
        if (this->proxyUserName == nullptr) {
            this->proxyUserName = empty;
        }
        this->proxyPassword = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYPASSWORD, toString)));
        if (this->proxyPassword == nullptr) {
            this->proxyPassword = empty;
        }
        this->proxyTimeout = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_PROXYTIMEOUT, toString)));
        if (this->proxyTimeout == nullptr) {
            this->proxyTimeout = empty;
        }
        this->special1 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString)));
        if (this->special1 == nullptr) {
            this->special1 = empty;
        }
        this->special2 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString)));
        if (this->special2 == nullptr) {
            this->special2 = empty;
        }
        this->special3 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString)));
        if (this->special3 == nullptr) {
            this->special3 = empty;
        }
        this->special4 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString)));
        if (this->special4 == nullptr) {
            this->special4 = empty;
        }
        this->special5 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString)));
        if (this->special5 == nullptr) {
            this->special5 = empty;
        }
        this->special6 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString)));
        if (this->special6 == nullptr) {
            this->special6 = empty;
        }
        this->special7 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString)));
        if (this->special7 == nullptr) {
            this->special7 = empty;
        }
        this->special8 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString)));
        if (this->special8 == nullptr) {
            this->special8 = empty;
        }
        this->special9 = ((const char*) HashMap_get(hashMap, JAVA_CALL(PaymentGatewayData_SPECIAL9, toString)));
        if (this->special9 == nullptr) {
            this->special9 = empty;
        }
        this->lastModified = ((const char*) HashMap_get(hashMap, JAVA_CALL(EntryData_getInstance()->LASTMODIFIED, toString)));
        if (this->lastModified == nullptr) {
            this->lastModified = empty;
        }
        this->timeEntered = ((const char*) HashMap_get(hashMap, JAVA_CALL(EntryData_getInstance()->TIMECREATED, toString)));
        if (this->timeEntered == nullptr) {
            this->timeEntered = empty;
        }
}


const char* PaymentGateway_getStoreName(PaymentGateway* this) {
        return this->storeName;
}


const char* PaymentGateway_getName(PaymentGateway* this) {
        return this->name;
}


const char* PaymentGateway_getEnable(PaymentGateway* this) {
        return this->enable;
}


const char* PaymentGateway_getPaymentMethod(PaymentGateway* this) {
        return this->paymentMethod;
}


const char* PaymentGateway_getMode(PaymentGateway* this) {
        return this->mode;
}


const char* PaymentGateway_getTestProtocol(PaymentGateway* this) {
        return this->testProtocol;
}


const char* PaymentGateway_getTestServer(PaymentGateway* this) {
        return this->testServer;
}


const char* PaymentGateway_getTestPort(PaymentGateway* this) {
        return this->testPort;
}


const char* PaymentGateway_getTestPath(PaymentGateway* this) {
        return this->testPath;
}


const char* PaymentGateway_getServerProtocol(PaymentGateway* this) {
        return this->serverProtocol;
}


const char* PaymentGateway_getServer(PaymentGateway* this) {
        return this->server;
}


const char* PaymentGateway_getServerPort(PaymentGateway* this) {
        return this->serverPort;
}


const char* PaymentGateway_getServerPath(PaymentGateway* this) {
        return this->serverPath;
}


const char* PaymentGateway_getUserName(PaymentGateway* this) {
        return this->userName;
}


const char* PaymentGateway_getPassword(PaymentGateway* this) {
        return this->password;
}


const char* PaymentGateway_getProxyProtocol(PaymentGateway* this) {
        return this->proxyProtocol;
}


const char* PaymentGateway_getProxyServer(PaymentGateway* this) {
        return this->proxyServer;
}


const char* PaymentGateway_getProxyPath(PaymentGateway* this) {
        return this->proxyPath;
}


const char* PaymentGateway_getProxyPort(PaymentGateway* this) {
        return this->proxyPort;
}


const char* PaymentGateway_getProxyUserName(PaymentGateway* this) {
        return this->proxyUserName;
}


const char* PaymentGateway_getProxyPassword(PaymentGateway* this) {
        return this->proxyPassword;
}


const char* PaymentGateway_getTimeout(PaymentGateway* this) {
        return this->timeout;
}


const char* PaymentGateway_getProxyTimeout(PaymentGateway* this) {
        return this->proxyTimeout;
}


const char* PaymentGateway_getSpecial1(PaymentGateway* this) {
        return this->special1;
}


const char* PaymentGateway_getSpecial2(PaymentGateway* this) {
        return this->special2;
}


const char* PaymentGateway_getSpecial3(PaymentGateway* this) {
        return this->special3;
}


const char* PaymentGateway_getSpecial4(PaymentGateway* this) {
        return this->special4;
}


const char* PaymentGateway_getSpecial5(PaymentGateway* this) {
        return this->special5;
}


const char* PaymentGateway_getSpecial6(PaymentGateway* this) {
        return this->special6;
}


const char* PaymentGateway_getSpecial7(PaymentGateway* this) {
        return this->special7;
}


const char* PaymentGateway_getSpecial8(PaymentGateway* this) {
        return this->special8;
}


const char* PaymentGateway_getSpecial9(PaymentGateway* this) {
        return this->special9;
}


const char* PaymentGateway_getLastModified(PaymentGateway* this) {
        return this->lastModified;
}


const char* PaymentGateway_getTimeEntered(PaymentGateway* this) {
        return this->timeEntered;
}


void PaymentGateway_setEnable(PaymentGateway* this, const char* value) {
        this->enable = value;
}


void PaymentGateway_setStoreName(PaymentGateway* this, const char* value) {
        this->storeName = value;
}


void PaymentGateway_setName(PaymentGateway* this, const char* value) {
        this->name = value;
}


void PaymentGateway_setPaymentMethod(PaymentGateway* this, const char* value) {
        this->paymentMethod = value;
}


void PaymentGateway_setMode(PaymentGateway* this, const char* value) {
        this->mode = value;
}


void PaymentGateway_setTestProtocol(PaymentGateway* this, const char* value) {
        this->testProtocol = value;
}


void PaymentGateway_setTestServer(PaymentGateway* this, const char* value) {
        this->testServer = value;
}


void PaymentGateway_setTestPort(PaymentGateway* this, const char* value) {
        this->testPort = value;
}


void PaymentGateway_setTestPath(PaymentGateway* this, const char* value) {
        this->testPath = value;
}


void PaymentGateway_setServerProtocol(PaymentGateway* this, const char* value) {
        this->serverProtocol = value;
}


void PaymentGateway_setServer(PaymentGateway* this, const char* value) {
        this->server = value;
}


void PaymentGateway_setServerPort(PaymentGateway* this, const char* value) {
        this->serverPort = value;
}


void PaymentGateway_setServerPath(PaymentGateway* this, const char* value) {
        this->serverPath = value;
}


void PaymentGateway_setTimeout(PaymentGateway* this, const char* value) {
        this->timeout = value;
}


void PaymentGateway_setUserName(PaymentGateway* this, const char* value) {
        this->userName = value;
}


void PaymentGateway_setPassword(PaymentGateway* this, const char* value) {
        this->password = value;
}


void PaymentGateway_setProxyProtocol(PaymentGateway* this, const char* value) {
        this->proxyProtocol = value;
}


void PaymentGateway_setProxyServer(PaymentGateway* this, const char* value) {
        this->proxyServer = value;
}


void PaymentGateway_setProxyPort(PaymentGateway* this, const char* value) {
        this->proxyPort = value;
}


void PaymentGateway_setProxyPath(PaymentGateway* this, const char* value) {
        this->proxyPath = value;
}


void PaymentGateway_setProxyUserName(PaymentGateway* this, const char* value) {
        this->proxyUserName = value;
}


void PaymentGateway_setProxyPassword(PaymentGateway* this, const char* value) {
        this->proxyPassword = value;
}


void PaymentGateway_setProxyTimeout(PaymentGateway* this, const char* value) {
        this->proxyTimeout = value;
}


void PaymentGateway_setSpecial1(PaymentGateway* this, const char* value) {
        this->special1 = value;
}


void PaymentGateway_setSpecial2(PaymentGateway* this, const char* value) {
        this->special2 = value;
}


void PaymentGateway_setSpecial3(PaymentGateway* this, const char* value) {
        this->special3 = value;
}


void PaymentGateway_setSpecial4(PaymentGateway* this, const char* value) {
        this->special4 = value;
}


void PaymentGateway_setSpecial5(PaymentGateway* this, const char* value) {
        this->special5 = value;
}


void PaymentGateway_setSpecial6(PaymentGateway* this, const char* value) {
        this->special6 = value;
}


void PaymentGateway_setSpecial7(PaymentGateway* this, const char* value) {
        this->special7 = value;
}


void PaymentGateway_setSpecial8(PaymentGateway* this, const char* value) {
        this->special8 = value;
}


void PaymentGateway_setSpecial9(PaymentGateway* this, const char* value) {
        this->special9 = value;
}


void PaymentGateway_setLastModified(PaymentGateway* this, const char* value) {
        this->lastModified = value;
}


void PaymentGateway_setTimeEntered(PaymentGateway* this, const char* value) {
        this->timeEntered = value;
}


// throws Exception
HashMap* PaymentGateway_toHashMap(PaymentGateway* this) {
        return PaymentGateway_toHashMap(this, true);
}


// throws Exception
// Java overloaded method: C needs a different name
HashMap* PaymentGateway_toHashMap(PaymentGateway* this, bool isEncrypted) {
        HashMap* paymentGatewayHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(paymentGatewayHashMap, EntryData_getInstance()->ENABLE, this->enable);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(StoreFrontData_getInstance()->NAME, toString), this->storeName);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_NAME, toString), PaymentGateway_getName(this));
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentData_METHOD, toString), this->paymentMethod);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_MODE, toString), this->mode);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_TESTPROTOCOL, toString), this->testProtocol);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_TESTSERVER, toString), this->testServer);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_TESTPORT, toString), this->testPort);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_TESTPATH, toString), this->testPath);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SERVERPROTOCOL, toString), this->serverProtocol);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SERVER, toString), this->server);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SERVERPORT, toString), this->serverPort);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SERVERPATH, toString), this->serverPath);
        if (isEncrypted) {
            SuperCrypt* superCrypt = SuperCrypt_new(PaymentGatewayData_CRYPTNUM);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_USERNAME, toString), SuperCrypt_encrypt(superCrypt, this->userName));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_PASSWORD, toString), SuperCrypt_encrypt(superCrypt, this->password));
        } else {
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_USERNAME, toString), this->userName);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(UserData_PASSWORD, toString), this->password);
        }
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_TIMEOUT, toString), this->timeout);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYPROTOCOL, toString), this->proxyProtocol);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYSERVER, toString), this->proxyServer);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYPORT, toString), this->proxyPort);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYPATH, toString), this->proxyPath);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYUSERNAME, toString), this->proxyUserName);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYPASSWORD, toString), this->proxyPassword);
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_PROXYTIMEOUT, toString), this->proxyTimeout);
        if (isEncrypted) {
            SuperCrypt* superCrypt = SuperCrypt_new(PaymentGatewayData_CRYPTNUM);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString), SuperCrypt_encrypt(superCrypt, this->special1));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString), SuperCrypt_encrypt(superCrypt, this->special2));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString), SuperCrypt_encrypt(superCrypt, this->special3));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString), SuperCrypt_encrypt(superCrypt, this->special4));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString), SuperCrypt_encrypt(superCrypt, this->special5));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString), SuperCrypt_encrypt(superCrypt, this->special6));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString), SuperCrypt_encrypt(superCrypt, this->special7));
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString), SuperCrypt_encrypt(superCrypt, this->special8));
        } else {
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL1, toString), this->special1);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL2, toString), this->special2);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL3, toString), this->special3);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL4, toString), this->special4);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL5, toString), this->special5);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL6, toString), this->special6);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL7, toString), this->special7);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL8, toString), this->special8);
            HashMap_put(paymentGatewayHashMap, JAVA_CALL(PaymentGatewayData_SPECIAL9, toString), this->special9);
        }
        HashMap_put(paymentGatewayHashMap, JAVA_CALL(EntryData_getInstance()->LASTMODIFIED, toString), this->lastModified);
        return paymentGatewayHashMap;
}


BasicArrayList* PaymentGateway_toVector(PaymentGateway* this) {
        return PaymentGateway_toVector(this, true);
}


// Java overloaded method: C needs a different name
BasicArrayList* PaymentGateway_toVector(PaymentGateway* this, bool isEncrypted) {
        BasicArrayList* updateVector = BasicArrayListD_new();
        BasicArrayList_add(updateVector, this->enable);
        BasicArrayList_add(updateVector, this->storeName);
        BasicArrayList_add(updateVector, PaymentGateway_getName(this));
        BasicArrayList_add(updateVector, this->paymentMethod);
        BasicArrayList_add(updateVector, this->mode);
        BasicArrayList_add(updateVector, this->testProtocol);
        BasicArrayList_add(updateVector, this->testServer);
        BasicArrayList_add(updateVector, this->testPort);
        BasicArrayList_add(updateVector, this->testPath);
        BasicArrayList_add(updateVector, this->serverProtocol);
        BasicArrayList_add(updateVector, this->server);
        BasicArrayList_add(updateVector, this->serverPort);
        BasicArrayList_add(updateVector, this->serverPath);
        if (isEncrypted) {
            SuperCrypt* superCrypt = SuperCrypt_new(PaymentGatewayData_CRYPTNUM);
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->userName));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->password));
        } else {
            BasicArrayList_add(updateVector, this->userName);
            BasicArrayList_add(updateVector, this->password);
        }
        BasicArrayList_add(updateVector, this->timeout);
        BasicArrayList_add(updateVector, this->proxyProtocol);
        BasicArrayList_add(updateVector, this->proxyServer);
        BasicArrayList_add(updateVector, this->proxyPort);
        BasicArrayList_add(updateVector, this->proxyPath);
        BasicArrayList_add(updateVector, this->proxyUserName);
        BasicArrayList_add(updateVector, this->proxyPassword);
        BasicArrayList_add(updateVector, this->proxyTimeout);
        if (isEncrypted) {
            SuperCrypt* superCrypt = SuperCrypt_new(PaymentGatewayData_CRYPTNUM);
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special1));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special2));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special3));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special4));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special5));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special6));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special7));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special8));
            BasicArrayList_add(updateVector, SuperCrypt_encrypt(superCrypt, this->special9));
        } else {
            BasicArrayList_add(updateVector, this->special1);
            BasicArrayList_add(updateVector, this->special2);
            BasicArrayList_add(updateVector, this->special3);
            BasicArrayList_add(updateVector, this->special4);
            BasicArrayList_add(updateVector, this->special5);
            BasicArrayList_add(updateVector, this->special6);
            BasicArrayList_add(updateVector, this->special7);
            BasicArrayList_add(updateVector, this->special8);
            BasicArrayList_add(updateVector, this->special9);
        }
        return updateVector;
}


// throws Exception
Any* PaymentGateway_getKey(PaymentGateway* this) {
        return ((Any*) PaymentGatewayPrimaryKey_new(PaymentGateway_getStoreName(this), PaymentGateway_getName(this)));
}

