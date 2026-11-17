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
// package org.allbinary.business.context.modules.storefronts

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/init/InitSql.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct BasicStoreFrontsEntity BasicStoreFrontsEntity;
struct BasicStoreFrontsEntity {
    InitSql base;
    LogUtil* logUtil;
    const char* tableName;
};


BasicStoreFrontsEntity* BasicStoreFrontsEntity_new(void);

void BasicStoreFrontsEntity_init(BasicStoreFrontsEntity* this);
BasicStoreFrontInterface* BasicStoreFrontsEntity_getStoreFrontInterface(BasicStoreFrontsEntity* this, const char* name);

static void BasicStoreFrontsEntity_initFields(BasicStoreFrontsEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "storefronts";
}


void BasicStoreFrontsEntity_init(BasicStoreFrontsEntity* this) {
        InitSql_init(&this->base, UserDbInitInfo_new());
        BasicStoreFrontsEntity_initFields(this);
        BasicStoreFrontsEntity_setTable(this, this->tableName);
}

BasicStoreFrontsEntity* BasicStoreFrontsEntity_new(void) {
    BasicStoreFrontsEntity* this = calloc(1, sizeof(BasicStoreFrontsEntity));
    BasicStoreFrontsEntity_init(this);
    return this;
}


// throws Exception
BasicStoreFrontInterface* BasicStoreFrontsEntity_getStoreFrontInterface(BasicStoreFrontsEntity* this, const char* name) {
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, name);
        HashMap* storeHashMap = InitSql_getRow((&this->base), keysAndValues);
        if (storeHashMap == nullptr) {
            java_throw(java_exception_new("Exception", java_concat("No Such Store: ", name)));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
            LogUtil_putF(this->logUtil, java_concat("StoreFront: ", HashMap_toString(storeHashMap)), this, "getStore()");
        }
        return ((BasicStoreFrontInterface*) BasicStoreFront_new(storeHashMap));
}

