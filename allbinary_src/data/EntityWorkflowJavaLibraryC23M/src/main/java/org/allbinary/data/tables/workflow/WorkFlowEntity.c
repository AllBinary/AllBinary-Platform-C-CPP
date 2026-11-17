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
// package org.allbinary.data.tables.workflow

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
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/workflow/DbWorkFlowFactory.h"
#include "org/allbinary/logic/control/workflow/WorkFlowData.h"
#include "org/allbinary/logic/control/workflow/WorkFlowInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/data/tables/workflow/WorkFlowEntityInterface.h"

typedef struct WorkFlowEntity WorkFlowEntity;
struct WorkFlowEntity {
    AbSqlBean base;
    WorkFlowEntityInterface WorkFlowEntityInterface_interface;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
    const char* tableName;
    const char* METHOD_GET;
    const char* METHOD_UPDATE;
};


WorkFlowEntity* WorkFlowEntity_new(void);

void WorkFlowEntity_init(WorkFlowEntity* this);
void WorkFlowEntity_insert(WorkFlowEntity* this, BasicArrayList* values);
void WorkFlowEntity_delete(WorkFlowEntity* this, const char* name, const char* storeName);
WorkFlowInterface* WorkFlowEntity_get(WorkFlowEntity* this, const char* name, const char* storeName);
BasicArrayList* WorkFlowEntity_get(WorkFlowEntity* this, const char* storeName);
void WorkFlowEntity_update(WorkFlowEntity* this, HashMap* updatedValues);
const char* WorkFlowEntity_createTableStatement(WorkFlowEntity* this);
const char* WorkFlowEntity_createTable(WorkFlowEntity* this);
const char* WorkFlowEntity_dropTable(WorkFlowEntity* this);

static void WorkFlowEntity_initFields(WorkFlowEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    this->tableName = "workflows";
    this->METHOD_GET = "get()";
    this->METHOD_UPDATE = "update";
}


void WorkFlowEntity_init(WorkFlowEntity* this) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        WorkFlowEntity_initFields(this);
        WorkFlowEntity_setTableName(this, this->tableName);
}

WorkFlowEntity* WorkFlowEntity_new(void) {
    WorkFlowEntity* this = calloc(1, sizeof(WorkFlowEntity));
    WorkFlowEntity_init(this);
    return this;
}


void WorkFlowEntity_insert(WorkFlowEntity* this, BasicArrayList* values) {
        JAVA_TRY {
            AbSqlBean_insert((&this->base), values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, AbSqlBean_INSERT);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, AbSqlBean_INSERT, e);
            }
        } JAVA_END_TRY;
}


void WorkFlowEntity_delete(WorkFlowEntity* this, const char* name, const char* storeName) {
        JAVA_TRY {
            HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keysAndValues, WorkFlowData_getInstance()->NAME, name);
            HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
            AbSqlBean_deleteWhere((&this->base), keysAndValues);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


// throws Exception, LicensingException
WorkFlowInterface* WorkFlowEntity_get(WorkFlowEntity* this, const char* name, const char* storeName) {
        JAVA_TRY {
            HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keysAndValues, WorkFlowData_getInstance()->NAME, name);
            HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
            HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
            return ((WorkFlowInterface*) DbWorkFlowFactory_getInstance(DbWorkFlowFactory_getInstance(), this->abeClientInformation, hashMap));
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->METHOD_GET, e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->METHOD_GET, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
BasicArrayList* WorkFlowEntity_get(WorkFlowEntity* this, const char* storeName) {
        JAVA_TRY {
            BasicArrayList* workFlowsVector = BasicArrayListD_new();
            HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(keysAndValues, StoreFrontData_getInstance()->NAME, storeName);
            BasicArrayList* hashMapVector = AbSqlBean_getRows((&this->base), keysAndValues);
            int32_t size = BasicArrayList_size(hashMapVector);
            for (int32_t i = 0; i < size; i++) {
                HashMap* workFlowHashMap = ((HashMap*) BasicArrayList_get(hashMapVector, i));
                if (workFlowHashMap != nullptr) {
                    BasicArrayList_add(workFlowsVector, DbWorkFlowFactory_getInstance(DbWorkFlowFactory_getInstance(), this->abeClientInformation, workFlowHashMap));
                }
            }
            return workFlowsVector;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->METHOD_GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void WorkFlowEntity_update(WorkFlowEntity* this, HashMap* updatedValues) {
        JAVA_TRY {
            HashMap* wherekeysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(wherekeysAndValues, WorkFlowData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, WorkFlowData_getInstance()->NAME)));
            HashMap_put(wherekeysAndValues, StoreFrontData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, StoreFrontData_getInstance()->NAME)));
            AbSqlBean_updateWhere((&this->base), wherekeysAndValues, updatedValues);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->METHOD_UPDATE, e);
            }
        } JAVA_END_TRY;
}


const char* WorkFlowEntity_createTableStatement(WorkFlowEntity* this) {
        WorkFlowData* workFlowData = WorkFlowData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE), append, this->tableName), append, this->sqlStrings->START), append, workFlowData->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, StoreFrontData_getInstance()->NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, DynamicObjectData_NAME), append, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL), append, workFlowData->DATA), append, this->sqlTypeStrings->BLOB_NOT_NULL), append, EntryData_getInstance()->TIMECREATED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, EntryData_getInstance()->LASTMODIFIED), append, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL), append, this->sqlStrings->PRIMARY_KEY), append, workFlowData->NAME), append, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* WorkFlowEntity_createTable(WorkFlowEntity* this) {
        return AbSqlBean_createTable((&this->base), WorkFlowEntity_createTableStatement(this));
}


const char* WorkFlowEntity_dropTable(WorkFlowEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

