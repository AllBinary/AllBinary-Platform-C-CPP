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
// package org.allbinary.logic.communication.smtp.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryData.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct UserEmailEventNameData UserEmailEventNameData;
struct UserEmailEventNameData {
    int32_t eventNameId;
    const char* eventHandlerName;
};

static HashMap* UserEmailEventNameData_userNameEvenNameHashMap;
static int32_t UserEmailEventNameData_nextId = 0;
UserEmailEventNameData* UserEmailEventNameData_INSTALLER;
UserEmailEventNameData* UserEmailEventNameData_EXCEPTION;
UserEmailEventNameData* UserEmailEventNameData_LOGGEDEXCEPTION;
UserEmailEventNameData* UserEmailEventNameData_ERROR;
UserEmailEventNameData* UserEmailEventNameData_OUTOFMEMORY;
UserEmailEventNameData* UserEmailEventNameData_ADMINGENERATINGSTATICPAGES;
UserEmailEventNameData* UserEmailEventNameData_STOREERROROCCURRED;
UserEmailEventNameData* UserEmailEventNameData_STOREOUTOFMEMORY;
UserEmailEventNameData* UserEmailEventNameData_STORECREATED;
UserEmailEventNameData* UserEmailEventNameData_STOREOPENED;
UserEmailEventNameData* UserEmailEventNameData_STORECLOSED;
UserEmailEventNameData* UserEmailEventNameData_STOREGENERATINGSTATICPAGES;
UserEmailEventNameData* UserEmailEventNameData_PRODUCTISOUT;
UserEmailEventNameData* UserEmailEventNameData_PRODUCTISAVAILABLE;
UserEmailEventNameData* UserEmailEventNameData_PRODUCTISOLD;
UserEmailEventNameData* UserEmailEventNameData_PRODUCTISONSALE;
UserEmailEventNameData* UserEmailEventNameData_PRODUCTSALEISOVER;
UserEmailEventNameData* UserEmailEventNameData_ORDERPREPROCESSING;
UserEmailEventNameData* UserEmailEventNameData_ORDERPROCESSING;
UserEmailEventNameData* UserEmailEventNameData_ORDERCANCELLED;
UserEmailEventNameData* UserEmailEventNameData_ORDERPARTIALLYSHIPPED;
UserEmailEventNameData* UserEmailEventNameData_ORDERSHIPPED;
UserEmailEventNameData* UserEmailEventNameData_QUOTEREQUEST;
UserEmailEventNameData* UserEmailEventNameData_NEWPASSWORD;

UserEmailEventNameData* UserEmailEventNameData_new(const char* eventHandlerName);

void UserEmailEventNameData_init(UserEmailEventNameData* this, const char* eventHandlerName);
static void UserEmailEventNameData_initNextId(UserEmailEventNameData* this);
bool UserEmailEventNameData_isEvent(UserEmailEventNameData* this, const char* userEmailEventNameString);
UserEmailEventNameData* UserEmailEventNameData_getInstance(const char* userEmailEventNameString);
const char* UserEmailEventNameData_toString(UserEmailEventNameData* this);

// Static fields with runtime initializers: call this once at startup
void UserEmailEventNameData_staticInit(void) {
    UserEmailEventNameData_userNameEvenNameHashMap = StdUtil_createHashMap(StdUtil_getInstance());
    UserEmailEventNameData_INSTALLER = UserEmailEventNameData_new("Installer");
    UserEmailEventNameData_EXCEPTION = UserEmailEventNameData_new("Exception");
    UserEmailEventNameData_LOGGEDEXCEPTION = UserEmailEventNameData_new("Logged Exception");
    UserEmailEventNameData_ERROR = UserEmailEventNameData_new("Error");
    UserEmailEventNameData_OUTOFMEMORY = UserEmailEventNameData_new("Out Of Memory Error");
    UserEmailEventNameData_ADMINGENERATINGSTATICPAGES = UserEmailEventNameData_new("Admin Generating Static Pages");
    UserEmailEventNameData_STOREERROROCCURRED = UserEmailEventNameData_new("Store Error Occurred");
    UserEmailEventNameData_STOREOUTOFMEMORY = UserEmailEventNameData_new("Store Out Of Memory Error");
    UserEmailEventNameData_STORECREATED = UserEmailEventNameData_new("Store Created");
    UserEmailEventNameData_STOREOPENED = UserEmailEventNameData_new("Store Opened");
    UserEmailEventNameData_STORECLOSED = UserEmailEventNameData_new("Store Closed");
    UserEmailEventNameData_STOREGENERATINGSTATICPAGES = UserEmailEventNameData_new("Store Generating Static Pages");
    UserEmailEventNameData_PRODUCTISOUT = UserEmailEventNameData_new("Product Is Out");
    UserEmailEventNameData_PRODUCTISAVAILABLE = UserEmailEventNameData_new("Product Is Available");
    UserEmailEventNameData_PRODUCTISOLD = UserEmailEventNameData_new("Product Is Old");
    UserEmailEventNameData_PRODUCTISONSALE = UserEmailEventNameData_new("Product Is On Sale");
    UserEmailEventNameData_PRODUCTSALEISOVER = UserEmailEventNameData_new("Product Sale Is Over");
    UserEmailEventNameData_ORDERPREPROCESSING = UserEmailEventNameData_new(OrderHistoryData_PREPROCESSING);
    UserEmailEventNameData_ORDERPROCESSING = UserEmailEventNameData_new(OrderHistoryData_PROCESSING);
    UserEmailEventNameData_ORDERCANCELLED = UserEmailEventNameData_new(OrderHistoryData_CANCELLED);
    UserEmailEventNameData_ORDERPARTIALLYSHIPPED = UserEmailEventNameData_new(OrderHistoryData_PARTIALLYSHIPPED);
    UserEmailEventNameData_ORDERSHIPPED = UserEmailEventNameData_new(OrderHistoryData_SHIPPED);
    UserEmailEventNameData_QUOTEREQUEST = UserEmailEventNameData_new("Quote Request");
    UserEmailEventNameData_NEWPASSWORD = UserEmailEventNameData_new("New Password");
}

static void UserEmailEventNameData_initFields(UserEmailEventNameData* this) {
    this->eventNameId = 0;
    
}


void UserEmailEventNameData_init(UserEmailEventNameData* this, const char* eventHandlerName) {
    UserEmailEventNameData_initFields(this);
        this->eventHandlerName = eventHandlerName;
        UserEmailEventNameData_initNextId(this);
        JAVA_CALL(UserEmailEventNameData_userNameEvenNameHashMap, put, this->eventHandlerName, this);
}

UserEmailEventNameData* UserEmailEventNameData_new(const char* eventHandlerName) {
    UserEmailEventNameData* this = calloc(1, sizeof(UserEmailEventNameData));
    UserEmailEventNameData_init(this, eventHandlerName);
    return this;
}


// synchronized
static void UserEmailEventNameData_initNextId(UserEmailEventNameData* this) {
        this->eventNameId = UserEmailEventNameData_nextId;
        UserEmailEventNameData_nextId++;
}


bool UserEmailEventNameData_isEvent(UserEmailEventNameData* this, const char* userEmailEventNameString) {
        return JAVA_CALL(UserEmailEventNameData_userNameEvenNameHashMap, containsKey, userEmailEventNameString);
}


// throws Exception
// synchronized
UserEmailEventNameData* UserEmailEventNameData_getInstance(const char* userEmailEventNameString) {
        UserEmailEventNameData* userEmailEventNameData = ((UserEmailEventNameData*) JAVA_CALL(UserEmailEventNameData_userNameEvenNameHashMap, get, userEmailEventNameString));
        if (userEmailEventNameData == nullptr) {
            java_throw(java_exception_new("Exception", ""));
        } else {
            return userEmailEventNameData;
        }
}


const char* UserEmailEventNameData_toString(UserEmailEventNameData* this) {
        return this->eventHandlerName;
}

