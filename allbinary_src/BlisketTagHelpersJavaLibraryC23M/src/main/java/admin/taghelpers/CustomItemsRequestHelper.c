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
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/custom/CustomItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/customs/CustomItemsEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct CustomItemsRequestHelper CustomItemsRequestHelper;
struct CustomItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    const char* className;
    const char* packageName;
    const char* timeEntered;
    const char* lastModified;
};


CustomItemsRequestHelper* CustomItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void CustomItemsRequestHelper_init(CustomItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void CustomItemsRequestHelper_getFormData(CustomItemsRequestHelper* this);
static HashMap* CustomItemsRequestHelper_getHashMap(CustomItemsRequestHelper* this);
const char* CustomItemsRequestHelper_insert(CustomItemsRequestHelper* this);
const char* CustomItemsRequestHelper_delete(CustomItemsRequestHelper* this);
const char* CustomItemsRequestHelper_update(CustomItemsRequestHelper* this);

static void CustomItemsRequestHelper_initFields(CustomItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->className = nullptr;
    this->packageName = nullptr;
    this->timeEntered = nullptr;
    this->lastModified = nullptr;
}


void CustomItemsRequestHelper_init(CustomItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    CustomItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        CustomItemsRequestHelper_getFormData(this);
}

CustomItemsRequestHelper* CustomItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    CustomItemsRequestHelper* this = calloc(1, sizeof(CustomItemsRequestHelper));
    CustomItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void CustomItemsRequestHelper_getFormData(CustomItemsRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->className = HttpServletRequest_getParameter(this->request, DynamicObjectData_NAME);
        this->packageName = HttpServletRequest_getParameter(this->request, CustomItemData_PACKAGE);
        this->timeEntered = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->TIMECREATED);
        this->lastModified = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->LASTMODIFIED);
}


static HashMap* CustomItemsRequestHelper_getHashMap(CustomItemsRequestHelper* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(values, this->basicItemData->ID, this->id);
        HashMap_put(values, DynamicObjectData_NAME, this->className);
        HashMap_put(values, CustomItemData_PACKAGE, this->packageName);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* CustomItemsRequestHelper_insert(CustomItemsRequestHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList* values = BasicArrayListD_new();
            HashMap_add(values, this->id);
            HashMap_add(values, this->className);
            HashMap_add(values, this->packageName);
            HashMap_add(values, time);
            HashMap_add(values, time);
            JAVA_CALL(CustomItemsEntityFactory_getCustomItemsEntityInstance(CustomItemsEntityFactory_getInstance()), insert, values);
            const char* success = java_concat(java_concat("Successfully inserted ", this->id), " into items table");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat(java_concat("Failed to insert ", this->id), " into items table");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "inserts()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* CustomItemsRequestHelper_delete(CustomItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(CustomItemsEntityFactory_getCustomItemsEntityInstance(CustomItemsEntityFactory_getInstance()), delete, this->id);
            const char* success = "Successfully deleted";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* CustomItemsRequestHelper_update(CustomItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Pricing Successful";
            HashMap* values = CustomItemsRequestHelper_getHashMap(this);
            JAVA_CALL(CustomItemsEntityFactory_getCustomItemsEntityInstance(CustomItemsEntityFactory_getInstance()), update, values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->id), append, CommonSeps_getInstance()->SPACE), append, success), toString), this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat("Failed to update: ", this->id);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

