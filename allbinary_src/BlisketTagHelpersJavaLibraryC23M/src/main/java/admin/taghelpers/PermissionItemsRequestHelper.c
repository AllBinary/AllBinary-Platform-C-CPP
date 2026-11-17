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
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/permission/PermissionItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/permissions/PermissionItemsEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct PermissionItemsRequestHelper PermissionItemsRequestHelper;
struct PermissionItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    const char* enabled;
    const char* number;
    const char* who;
    const char* what;
    const char* type;
    const char* remoteAddr;
    const char* startTime;
    const char* endTime;
    const char* price;
    const char* timeEntered;
    const char* lastModified;
};


PermissionItemsRequestHelper* PermissionItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void PermissionItemsRequestHelper_init(PermissionItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void PermissionItemsRequestHelper_getFormData(PermissionItemsRequestHelper* this);
static HashMap* PermissionItemsRequestHelper_getHashMap(PermissionItemsRequestHelper* this);
const char* PermissionItemsRequestHelper_insert(PermissionItemsRequestHelper* this);
const char* PermissionItemsRequestHelper_delete(PermissionItemsRequestHelper* this);
const char* PermissionItemsRequestHelper_update(PermissionItemsRequestHelper* this);

static void PermissionItemsRequestHelper_initFields(PermissionItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->enabled = nullptr;
    this->number = nullptr;
    this->who = nullptr;
    this->what = nullptr;
    this->type = nullptr;
    this->remoteAddr = nullptr;
    this->startTime = nullptr;
    this->endTime = nullptr;
    this->price = nullptr;
    this->timeEntered = nullptr;
    this->lastModified = nullptr;
}


void PermissionItemsRequestHelper_init(PermissionItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    PermissionItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        PermissionItemsRequestHelper_getFormData(this);
}

PermissionItemsRequestHelper* PermissionItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    PermissionItemsRequestHelper* this = calloc(1, sizeof(PermissionItemsRequestHelper));
    PermissionItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void PermissionItemsRequestHelper_getFormData(PermissionItemsRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->number = HttpServletRequest_getParameter(this->request, this->basicItemData->NUMBER);
        this->enabled = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->ENABLE);
        this->who = HttpServletRequest_getParameter(this->request, PermissionItemData_WHO);
        this->what = HttpServletRequest_getParameter(this->request, PermissionItemData_WHAT);
        this->type = HttpServletRequest_getParameter(this->request, PermissionItemData_TYPE);
        this->remoteAddr = HttpServletRequest_getParameter(this->request, PermissionItemData_REMOTE_ADDR);
        this->startTime = HttpServletRequest_getParameter(this->request, PermissionItemData_START_TIME);
        this->endTime = HttpServletRequest_getParameter(this->request, PermissionItemData_END_TIME);
        this->price = HttpServletRequest_getParameter(this->request, this->basicItemData->PRICE);
        this->timeEntered = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->TIMECREATED);
        this->lastModified = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->LASTMODIFIED);
}


static HashMap* PermissionItemsRequestHelper_getHashMap(PermissionItemsRequestHelper* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(values, this->basicItemData->ID, this->id);
        HashMap_put(values, this->basicItemData->NUMBER, this->number);
        HashMap_put(values, EntryData_getInstance()->ENABLE, this->enabled);
        HashMap_put(values, PermissionItemData_WHO, this->who);
        HashMap_put(values, PermissionItemData_WHAT, this->what);
        HashMap_put(values, PermissionItemData_TYPE, this->type);
        HashMap_put(values, PermissionItemData_REMOTE_ADDR, this->remoteAddr);
        HashMap_put(values, PermissionItemData_START_TIME, this->startTime);
        HashMap_put(values, PermissionItemData_END_TIME, this->endTime);
        HashMap_put(values, this->basicItemData->PRICE, this->price);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* PermissionItemsRequestHelper_insert(PermissionItemsRequestHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList* values = BasicArrayListD_new();
            HashMap_add(values, this->id);
            HashMap_add(values, this->number);
            HashMap_add(values, this->enabled);
            HashMap_add(values, this->who);
            HashMap_add(values, this->what);
            HashMap_add(values, this->type);
            HashMap_add(values, this->remoteAddr);
            HashMap_add(values, this->startTime);
            HashMap_add(values, this->endTime);
            HashMap_add(values, this->price);
            HashMap_add(values, time);
            HashMap_add(values, time);
            JAVA_CALL(PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), insert, values);
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


const char* PermissionItemsRequestHelper_delete(PermissionItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), delete, this->id);
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


const char* PermissionItemsRequestHelper_update(PermissionItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Pricing Successful";
            HashMap* values = PermissionItemsRequestHelper_getHashMap(this);
            JAVA_CALL(PermissionItemsEntityFactory_getPermissionItemsEntityInstance(PermissionItemsEntityFactory_getInstance()), update, values);
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

