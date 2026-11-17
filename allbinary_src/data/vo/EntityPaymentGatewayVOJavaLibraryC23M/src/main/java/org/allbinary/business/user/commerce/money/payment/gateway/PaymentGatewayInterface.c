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
#include "org/allbinary/data/tables/TableMappingInterface.h"

typedef struct PaymentGatewayInterface PaymentGatewayInterface;
struct PaymentGatewayInterface {
    const char* (*getEnable)(void* this);
    const char* (*getStoreName)(void* this);
    const char* (*getName)(void* this);
    const char* (*getPaymentMethod)(void* this);
    const char* (*getMode)(void* this);
    const char* (*getTestProtocol)(void* this);
    const char* (*getTestServer)(void* this);
    const char* (*getTestPort)(void* this);
    const char* (*getTestPath)(void* this);
    const char* (*getServerProtocol)(void* this);
    const char* (*getServer)(void* this);
    const char* (*getServerPort)(void* this);
    const char* (*getServerPath)(void* this);
    const char* (*getUserName)(void* this);
    const char* (*getPassword)(void* this);
    const char* (*getProxyProtocol)(void* this);
    const char* (*getProxyServer)(void* this);
    const char* (*getProxyPath)(void* this);
    const char* (*getProxyPort)(void* this);
    const char* (*getProxyUserName)(void* this);
    const char* (*getProxyPassword)(void* this);
    const char* (*getTimeout)(void* this);
    const char* (*getProxyTimeout)(void* this);
    const char* (*getSpecial1)(void* this);
    const char* (*getSpecial2)(void* this);
    const char* (*getSpecial3)(void* this);
    const char* (*getSpecial4)(void* this);
    const char* (*getSpecial5)(void* this);
    const char* (*getSpecial6)(void* this);
    const char* (*getSpecial7)(void* this);
    const char* (*getSpecial8)(void* this);
    const char* (*getSpecial9)(void* this);
    const char* (*getLastModified)(void* this);
    const char* (*getTimeEntered)(void* this);
    void (*setEnable)(void* this, const char* value);
    void (*setStoreName)(void* this, const char* value);
    void (*setName)(void* this, const char* value);
    void (*setPaymentMethod)(void* this, const char* value);
    void (*setMode)(void* this, const char* value);
    void (*setTestProtocol)(void* this, const char* value);
    void (*setTestServer)(void* this, const char* value);
    void (*setTestPort)(void* this, const char* value);
    void (*setTestPath)(void* this, const char* value);
    void (*setServerProtocol)(void* this, const char* value);
    void (*setServer)(void* this, const char* value);
    void (*setServerPort)(void* this, const char* value);
    void (*setServerPath)(void* this, const char* value);
    void (*setUserName)(void* this, const char* value);
    void (*setPassword)(void* this, const char* value);
    void (*setProxyProtocol)(void* this, const char* value);
    void (*setProxyServer)(void* this, const char* value);
    void (*setProxyPath)(void* this, const char* value);
    void (*setProxyPort)(void* this, const char* value);
    void (*setProxyUserName)(void* this, const char* value);
    void (*setProxyPassword)(void* this, const char* value);
    void (*setTimeout)(void* this, const char* value);
    void (*setProxyTimeout)(void* this, const char* value);
    void (*setSpecial1)(void* this, const char* value);
    void (*setSpecial2)(void* this, const char* value);
    void (*setSpecial3)(void* this, const char* value);
    void (*setSpecial4)(void* this, const char* value);
    void (*setSpecial5)(void* this, const char* value);
    void (*setSpecial6)(void* this, const char* value);
    void (*setSpecial7)(void* this, const char* value);
    void (*setSpecial8)(void* this, const char* value);
    void (*setSpecial9)(void* this, const char* value);
    void (*setLastModified)(void* this, const char* value);
    void (*setTimeEntered)(void* this, const char* value);
    HashMap* (*toHashMap)(void* this, bool isEncrypted);
    BasicArrayList* (*toVector)(void* this, bool isEncrypted);
};


