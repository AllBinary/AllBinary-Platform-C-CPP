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
// package org.allbinary.logic.communication.http.request.session

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderInterface.h"
#include "org/allbinary/business/user/role/UserRole.h"

typedef struct WeblisketSessionInterface WeblisketSessionInterface;
struct WeblisketSessionInterface {
    void (*clear)(void* this);
    int32_t (*getAttempts)(void* this);
    const char* (*getAuthentication)(void* this);
    int64_t (*getCreationTime)(void* this);
    const char* (*getId)(void* this);
    int64_t (*getLastAccessedTime)(void* this);
    OrderInterface* (*getOrder)(void* this);
    const char* (*getPassword)(void* this);
    const char* (*getPaymentMethod)(void* this);
    UserRole* (*getRole)(void* this);
    const char* (*getStoreName)(void* this);
    const char* (*getTimeout)(void* this);
    const char* (*getUserName)(void* this);
    const char* (*getWebAppPath)(void* this);
    void (*removeBasket)(void* this);
    void (*setAttempts)(void* this, int32_t value);
    void (*setAuthenticated)(void* this);
    void (*setAuthenticated)(void* this, bool value);
    void (*setPassword)(void* this, const char* password);
    void (*setPaymentMethod)(void* this, const char* value);
    void (*setRole)(void* this, UserRole* aRole);
    void (*setStoreName)(void* this, const char* value);
    void (*setTimeout)(void* this, const char* value);
    void (*setUserName)(void* this, const char* userName);
};


