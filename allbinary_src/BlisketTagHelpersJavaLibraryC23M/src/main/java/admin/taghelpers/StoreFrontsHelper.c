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
// package admin.taghelpers

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
#include "org/allbinary/business/installer/Portion.h"
#include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/dhtml/html/select/HtmlSelect.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/BasicTable.h"

typedef struct StoreFrontsHelper StoreFrontsHelper;
struct StoreFrontsHelper {
    BasicTable base;
    LogUtil* logUtil;
    Portion* portion;
    CommonPhoneStrings* commonPhoneStrings;
};

static const char* StoreFrontsHelper_CLASS = "class";
static const char* StoreFrontsHelper_TEXT = "text";

StoreFrontsHelper* StoreFrontsHelper_new(HashMap* hashMap, PageContext* pageContext);

void StoreFrontsHelper_init(StoreFrontsHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* StoreFrontsHelper_drop(StoreFrontsHelper* this);
const char* StoreFrontsHelper_create(StoreFrontsHelper* this);
const char* StoreFrontsHelper_restore(StoreFrontsHelper* this);
const char* StoreFrontsHelper_backup(StoreFrontsHelper* this);
const char* StoreFrontsHelper_generateSelect(StoreFrontsHelper* this);

static void StoreFrontsHelper_initFields(StoreFrontsHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->commonPhoneStrings = CommonPhoneStrings_getInstance();
}


void StoreFrontsHelper_init(StoreFrontsHelper* this, HashMap* hashMap, PageContext* pageContext) {
    BasicTable_init(&this->base);
    StoreFrontsHelper_initFields(this);
        this->portion = Portion_new(hashMap);
}

StoreFrontsHelper* StoreFrontsHelper_new(HashMap* hashMap, PageContext* pageContext) {
    StoreFrontsHelper* this = calloc(1, sizeof(StoreFrontsHelper));
    StoreFrontsHelper_init(this, hashMap, pageContext);
    return this;
}


const char* StoreFrontsHelper_drop(StoreFrontsHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), dropTable);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->commonStrings->DROP);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StoreFrontsHelper_create(StoreFrontsHelper* this) {
        JAVA_TRY {
            const char* success = JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), createTable);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "create()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create new storefronts table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StoreFrontsHelper_restore(StoreFrontsHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_restoreTable(AbSqlTableUtil_getInstance(), StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), this->portion);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "restore()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StoreFrontsHelper_backup(StoreFrontsHelper* this) {
        JAVA_TRY {
            const char* success = "Restore Successful";
            const char* result = AbSqlTableUtil_backupTable(AbSqlTableUtil_getInstance(), StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "backup()");
            }
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* StoreFrontsHelper_generateSelect(StoreFrontsHelper* this) {
        JAVA_TRY {
            const char* success = CommonSeps_getInstance()->SPACE;
            BasicArrayList* storeNamesVector = JAVA_CALL(StoreFrontsEntityFactory_getStoreFrontsEntityInstance(StoreFrontsEntityFactory_getInstance()), getStoreFrontNames);
            HtmlSelect* storeSelect = HtmlSelect_new(StringUtil_getInstance()->EMPTY_STRING, this->commonPhoneStrings->ONE, StoreFrontData_getInstance()->SELECTSTORENAME, StringUtil_getInstance()->EMPTY_STRING);
            HtmlSelect_addAttribute(storeSelect, StoreFrontsHelper_CLASS, StoreFrontsHelper_TEXT);
            int32_t size = BasicArrayList_size(storeNamesVector);
            for (int32_t index = 0; index < size; index++) {
                const char* storeName = ((const char*) BasicArrayList_get(storeNamesVector, index));
                HtmlSelect_addOption(storeSelect, storeName);
            }
            success = java_concat(success, java_string_of(storeSelect));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "generateSelect()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to generate storefronts select";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "generateSelect()", e);
            }
            return error;
        } JAVA_END_TRY;
}

