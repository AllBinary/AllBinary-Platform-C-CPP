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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/InitInfoEntity.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/business/init/db/HistoryDbInitInfo.h"
#include "org/allbinary/business/init/db/InventoryDbInitInfo.h"
#include "org/allbinary/business/init/db/LogDbInitInfo.h"
#include "org/allbinary/business/init/db/StaticPagesDbInitInfo.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h"
#include "org/allbinary/data/tables/log/LogTableEntityFactory.h"
#include "org/allbinary/data/tables/staticpages/StaticPagesEntityFactory.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/data/tables/user/UserEntityFactory.h"
#include "org/allbinary/data/tables/user/address/billing/BillingAddressesEntityFactory.h"
#include "org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/PaymentEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/transaction/TransactionResultEntityFactory.h"
#include "org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbDatabaseManagement.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"

//Warning you must have sql root access
typedef struct InitDbCrypted InitDbCrypted;
struct InitDbCrypted {
    AbDatabaseManagement base;
    LogUtil* logUtil;
    UserDbInitInfo* userDbInitInfo;
    InventoryDbInitInfo* inventoryDbInitInfo;
    HistoryDbInitInfo* historyDbInitInfo;
    StaticPagesDbInitInfo* staticpagesDbInitInfo;
    LogDbInitInfo* logDbInitInfo;
    const char* SQL_FILE;
};


InitDbCrypted* InitDbCrypted_new(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);

void InitDbCrypted_init(InitDbCrypted* this, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);
bool InitDbCrypted_addUsers(InitDbCrypted* this);
bool InitDbCrypted_addDatabases(InitDbCrypted* this);
bool InitDbCrypted_addTables(InitDbCrypted* this);

static void InitDbCrypted_initFields(InitDbCrypted* this) {
    this->logUtil = LogUtil_getInstance();
    this->userDbInitInfo = nullptr;
    this->inventoryDbInitInfo = nullptr;
    this->historyDbInitInfo = nullptr;
    this->staticpagesDbInitInfo = nullptr;
    this->logDbInitInfo = nullptr;
    this->SQL_FILE = "initWeblisket.sql";
}


void InitDbCrypted_init(InitDbCrypted* this, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
        AbDatabaseManagement_init(&this->base, ((DbConnectionInfo*) databaseConnectionInfoInterface));
        InitDbCrypted_initFields(this);
}

InitDbCrypted* InitDbCrypted_new(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
    InitDbCrypted* this = calloc(1, sizeof(InitDbCrypted));
    InitDbCrypted_init(this, databaseConnectionInfoInterface);
    return this;
}


bool InitDbCrypted_addUsers(InitDbCrypted* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->METHOD_ADD_USERS);
            this->userDbInitInfo = UserDbInitInfo_new();
            this->inventoryDbInitInfo = InventoryDbInitInfo_new();
            this->historyDbInitInfo = HistoryDbInitInfo_new();
            this->staticpagesDbInitInfo = StaticPagesDbInitInfo_new();
            this->logDbInitInfo = LogDbInitInfo_new();
            const char* CUSTOMERDB = UserDbInitInfo_getName(this->userDbInitInfo);
            const char* CUSTOMERDBUSER = UserDbInitInfo_getUserName(this->userDbInitInfo);
            const char* CUSTOMERDBPASSWORD = UserDbInitInfo_getPassword(this->userDbInitInfo);
            if (!InitDbCrypted_addDbUser(this, CUSTOMERDB, CUSTOMERDBUSER, CUSTOMERDBPASSWORD)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_USER), CUSTOMERDBUSER), this, this->METHOD_ADD_USERS);
                return false;
            }
            const char* INVENTORYDB = InventoryDbInitInfo_getName(this->inventoryDbInitInfo);
            const char* INVENTORYDBUSER = InventoryDbInitInfo_getUserName(this->inventoryDbInitInfo);
            const char* INVENTORYDBPASSWORD = InventoryDbInitInfo_getPassword(this->inventoryDbInitInfo);
            if (!InitDbCrypted_addDbUser(this, INVENTORYDB, INVENTORYDBUSER, INVENTORYDBPASSWORD)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_USER), INVENTORYDBUSER), this, this->METHOD_ADD_USERS);
                return false;
            }
            const char* HISTORYDB = HistoryDbInitInfo_getName(this->historyDbInitInfo);
            const char* HISTORYDBUSER = HistoryDbInitInfo_getUserName(this->historyDbInitInfo);
            const char* HISTORYDBPASSWORD = HistoryDbInitInfo_getPassword(this->historyDbInitInfo);
            if (!InitDbCrypted_addDbUser(this, HISTORYDB, HISTORYDBUSER, HISTORYDBPASSWORD)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_USER), HISTORYDBUSER), this, this->METHOD_ADD_USERS);
                return false;
            }
            const char* STATICPAGESDB = StaticPagesDbInitInfo_getName(this->staticpagesDbInitInfo);
            const char* STATICPAGESDBUSER = StaticPagesDbInitInfo_getUserName(this->staticpagesDbInitInfo);
            const char* STATICPAGESDBPASSWORD = StaticPagesDbInitInfo_getPassword(this->staticpagesDbInitInfo);
            if (!InitDbCrypted_addDbUser(this, STATICPAGESDB, STATICPAGESDBUSER, STATICPAGESDBPASSWORD)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_USER), STATICPAGESDBUSER), this, this->METHOD_ADD_USERS);
                return false;
            }
            const char* LOGDB = LogDbInitInfo_getName(this->logDbInitInfo);
            const char* LOGDBUSER = LogDbInitInfo_getUserName(this->logDbInitInfo);
            const char* LOGDBPASSWORD = LogDbInitInfo_getPassword(this->logDbInitInfo);
            if (!InitDbCrypted_addDbUser(this, LOGDB, LOGDBUSER, LOGDBPASSWORD)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_USER), LOGDBUSER), this, this->METHOD_ADD_USERS);
                return false;
            }
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->METHOD_ADD_USERS);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_ADD_USERS, e);
            return true;
        } JAVA_END_TRY;
}


bool InitDbCrypted_addDatabases(InitDbCrypted* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->METHOD_ADD_DATABASES);
            this->userDbInitInfo = UserDbInitInfo_new();
            this->inventoryDbInitInfo = InventoryDbInitInfo_new();
            this->historyDbInitInfo = HistoryDbInitInfo_new();
            this->staticpagesDbInitInfo = StaticPagesDbInitInfo_new();
            this->logDbInitInfo = LogDbInitInfo_new();
            const char* CUSTOMERDB = UserDbInitInfo_getName(this->userDbInitInfo);
            if (!InitDbCrypted_addDb(this, CUSTOMERDB)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_DATABASE), CUSTOMERDB), this, this->METHOD_ADD_DATABASES);
                return false;
            }
            const char* INVENTORYDB = InventoryDbInitInfo_getName(this->inventoryDbInitInfo);
            if (!InitDbCrypted_addDb(this, INVENTORYDB)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_DATABASE), INVENTORYDB), this, this->METHOD_ADD_DATABASES);
                return false;
            }
            const char* HISTORYDB = HistoryDbInitInfo_getName(this->historyDbInitInfo);
            if (!InitDbCrypted_addDb(this, HISTORYDB)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_DATABASE), HISTORYDB), this, this->METHOD_ADD_DATABASES);
                return false;
            }
            const char* STATICPAGESDB = StaticPagesDbInitInfo_getName(this->staticpagesDbInitInfo);
            if (!InitDbCrypted_addDb(this, STATICPAGESDB)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_DATABASE), STATICPAGESDB), this, this->METHOD_ADD_DATABASES);
                return false;
            }
            const char* LOGDB = LogDbInitInfo_getName(this->logDbInitInfo);
            if (!InitDbCrypted_addDb(this, LOGDB)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(this->UNABLE_TO_CREATE_DATABASE), LOGDB), this, this->METHOD_ADD_DATABASES);
                return false;
            }
            AbFile* file = FileFactory_getInstance(FileFactory_getInstance(), this->SQL_FILE);
            AbFile_createNewFile(file);
            AbDataOutputStream* idOutData = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), file);
            AbDataOutputStream_writeBytes(idOutData, JAVA_CALL(this->sqlCommandLog, toString));
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_ADD_DATABASES, e);
            return true;
        } JAVA_END_TRY;
}


bool InitDbCrypted_addTables(InitDbCrypted* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->METHOD_ADD_TABLES);
            StringMaker_append(stringBuffer, UserEntityFactory_createTable(UserEntityFactory_getInstance()));
            StringMaker_append(stringBuffer, JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory_getInstance(), this->stringUtil->EMPTY_STRING), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory_getInstance(), this->stringUtil->EMPTY_STRING), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(PaymentEntityFactory_getPaymentEntityInstance(PaymentEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(QuoteRequestEntityFactory_getQuoteRequestEntityInstance(QuoteRequestEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, OrderHistoryEntityFactory_createTable(OrderHistoryEntityFactory_getInstance()));
            StringMaker_append(stringBuffer, OrderItemsEntityFactory_createTable(OrderItemsEntityFactory_getInstance()));
            StringMaker_append(stringBuffer, JAVA_CALL(TransactionEntityFactory_getTransactionEntityInstance(TransactionEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(TransactionResultEntityFactory_getTransactionResultEntityInstance(TransactionResultEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, PaymentGatewayEntityFactory_createTable(PaymentGatewayEntityFactory_getInstance()));
            StringMaker_append(stringBuffer, JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, InitInfoEntity_createTable(InitInfoEntity_new()));
            StringMaker_append(stringBuffer, JAVA_CALL(LogTableEntityFactory_getLogTableEntityInstance(LogTableEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, JAVA_CALL(StaticPagesEntityFactory_getStaticPagesEntityInstance(StaticPagesEntityFactory_getInstance()), createTable));
            StringMaker_append(stringBuffer, TransformInfoEntityBuilder_createTable(TransformInfoEntityBuilder_getInstance()));
            LogUtil_putF(this->logUtil, java_concat(java_string_of(AbDatabaseManagement_ADD_TABLES_RESULTS_LABEL), StringMaker_toString(stringBuffer)), this, this->METHOD_ADD_TABLES);
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_ADD_TABLES, e);
            return false;
        } JAVA_END_TRY;
}

