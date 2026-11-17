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
// package org.allbinary.data.tables.transform.info

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
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/init/db/UserDbInitInfo.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlBean.h"
#include "org/allbinary/logic/control/crypt/Encoder.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityInterface.h"

typedef struct TransformInfoEntity TransformInfoEntity;
struct TransformInfoEntity {
    AbSqlBean base;
    TransformInfoEntityInterface TransformInfoEntityInterface_interface;
    LogUtil* logUtil;
    const char* tableName;
    AbeClientInformationInterface* abeClientInformation;
    TransformInfoFactoryInterface* transformInfoFactoryInterface;
    TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface;
    TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface;
};


TransformInfoEntity* TransformInfoEntity_new(TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface);

void TransformInfoEntity_init(TransformInfoEntity* this, TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface);
void TransformInfoEntity_insert(TransformInfoEntity* this, BasicArrayList* values);
void TransformInfoEntity_delete(TransformInfoEntity* this, const char* value);
TransformInfoInterface* TransformInfoEntity_get(TransformInfoEntity* this, const char* name, HashMap* propertiesHashMap, PageContext* pageContext);
BasicArrayList* TransformInfoEntity_getObjectConfigs(TransformInfoEntity* this, const char* storeName);
BasicArrayList* TransformInfoEntity_getNames(TransformInfoEntity* this, const char* storeName);
const char* TransformInfoEntity_createTableStatement(TransformInfoEntity* this);
const char* TransformInfoEntity_createTable(TransformInfoEntity* this);
void TransformInfoEntity_update(TransformInfoEntity* this, HashMap* updatedValues);
const char* TransformInfoEntity_dropTable(TransformInfoEntity* this);

static void TransformInfoEntity_initFields(TransformInfoEntity* this) {
    this->logUtil = LogUtil_getInstance();
    this->tableName = "transforminfo";
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    
    
}


void TransformInfoEntity_init(TransformInfoEntity* this, TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface) {
        AbSqlBean_init(&this->base, UserDbInitInfo_new());
        TransformInfoEntity_initFields(this);
        TransformInfoEntity_setTableName(this, this->tableName);
        this->transformInfoObjectConfigGeneratorFactoryInterface = transformInfoObjectConfigGeneratorFactoryInterface;
        this->transformInfoObjectConfigAndManipulatorFactoryInterface = transformInfoObjectConfigAndManipulatorFactoryInterface;
        this->transformInfoFactoryInterface = transformInfoFactoryInterface;
}

TransformInfoEntity* TransformInfoEntity_new(TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface) {
    TransformInfoEntity* this = calloc(1, sizeof(TransformInfoEntity));
    TransformInfoEntity_init(this, transformInfoObjectConfigGeneratorFactoryInterface, transformInfoObjectConfigAndManipulatorFactoryInterface, transformInfoFactoryInterface);
    return this;
}


void TransformInfoEntity_insert(TransformInfoEntity* this, BasicArrayList* values) {
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


void TransformInfoEntity_delete(TransformInfoEntity* this, const char* value) {
        JAVA_TRY {
            AbSqlBean_deleteWhere((&this->base), TransformInfoData_getInstance()->NAME, value);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, this->commonStrings->SUCCESS, this, this->commonStrings->delete);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* TransformInfoEntity_get(TransformInfoEntity* this, const char* name, HashMap* propertiesHashMap, PageContext* pageContext) {
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        HashMap* keysAndValues = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(keysAndValues, transformInfoData->NAME, name);
        HashMap* hashMap = AbSqlBean_getRow((&this->base), keysAndValues);
        if (hashMap != nullptr) {
            Any* anyType = HashMap_get(hashMap, transformInfoData->OBJECTCONFIG);
            if (anyType != nullptr) {
                const char* string = ((const char*) anyType);
                HashMap_put(hashMap, transformInfoData->OBJECTCONFIG, java_string_new(Encoder_decode(string)));
            }
            Any* objectData = HashMap_get(hashMap, transformInfoData->DATA);
            if (objectData != nullptr) {
                const char* string = ((const char*) objectData);
                HashMap_put(hashMap, transformInfoData->DATA, java_string_new(Encoder_decode(string)));
            }
            return TransformInfoFactoryInterface_getInstance(this->transformInfoFactoryInterface, hashMap, propertiesHashMap, pageContext);
        } else {
            return nullptr;
        }
}


// throws Exception
BasicArrayList* TransformInfoEntity_getObjectConfigs(TransformInfoEntity* this, const char* storeName) {
        BasicArrayList* objectConfigVector = BasicArrayListD_new();
        BasicArrayList* objectConfigColumnVector = TransformInfoEntity_getColumnWhere(this, TransformInfoData_getInstance()->OBJECTCONFIG, StoreFrontData_getInstance()->NAME, storeName);
        int32_t size = BasicArrayList_size(objectConfigColumnVector);
        for (int32_t i = 0; i < size; i++) {
            const char* objectConfigString = ((const char*) BasicArrayList_get(objectConfigColumnVector, i));
            objectConfigString = java_string_new(Encoder_decode(objectConfigString));
            BasicArrayList_add(objectConfigVector, TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(this->transformInfoObjectConfigAndManipulatorFactoryInterface, this->abeClientInformation, ((TransformInfoInterface*) this), DomDocumentHelper_create(objectConfigString)));
        }
        return objectConfigVector;
}


// throws Exception
BasicArrayList* TransformInfoEntity_getNames(TransformInfoEntity* this, const char* storeName) {
        BasicArrayList* viewNameVector = BasicArrayListD_new();
        BasicArrayList* columnVector = TransformInfoEntity_getColumnWhere(this, TransformInfoData_getInstance()->NAME, StoreFrontData_getInstance()->NAME, storeName);
        int32_t size = BasicArrayList_size(columnVector);
        for (int32_t i = 0; i < size; i++) {
            const char* viewNameString = ((const char*) BasicArrayList_get(columnVector, i));
            BasicArrayList_add(viewNameVector, viewNameString);
        }
        return viewNameVector;
}


const char* TransformInfoEntity_createTableStatement(TransformInfoEntity* this) {
        TransformInfoData* transformInfoData = TransformInfoData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->sqlStrings->CREATE_TABLE);
        StringMaker_append(stringBuffer, this->tableName);
        StringMaker_append(stringBuffer, this->sqlStrings->START);
        StringMaker_append(stringBuffer, transformInfoData->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, StoreFrontData_getInstance()->NAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->OBJECTFILENAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->OBJECT);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->OBJECTCONFIGFILENAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->OBJECTCONFIG);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->TEMPLATEFILENAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->TEMPLATE);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->DATAFILENAME);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
        StringMaker_append(stringBuffer, transformInfoData->DATA);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->BLOB_NOT_NULL);
        StringMaker_append(stringBuffer, EntryData_getInstance()->LASTMODIFIED);
        StringMaker_append(stringBuffer, EntryData_getInstance()->TIMECREATED);
        StringMaker_append(stringBuffer, this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
        StringMaker_append(stringBuffer, this->sqlStrings->PRIMARY_KEY);
        StringMaker_append(stringBuffer, transformInfoData->NAME);
        StringMaker_append(stringBuffer, this->sqlStrings->END);
        return StringMaker_toString(stringBuffer);
}


const char* TransformInfoEntity_createTable(TransformInfoEntity* this) {
        return AbSqlBean_createTable((&this->base), TransformInfoEntity_createTableStatement(this));
}


void TransformInfoEntity_update(TransformInfoEntity* this, HashMap* updatedValues) {
        AbSqlBean_updateWhere((&this->base), TransformInfoData_getInstance()->NAME, ((const char*) HashMap_get(updatedValues, TransformInfoData_getInstance()->NAME)), updatedValues);
}


const char* TransformInfoEntity_dropTable(TransformInfoEntity* this) {
        return AbSqlBean_dropTable((&this->base));
}

