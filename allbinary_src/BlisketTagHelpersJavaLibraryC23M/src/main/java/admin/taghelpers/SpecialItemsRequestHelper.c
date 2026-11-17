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
#include "org/allbinary/business/user/commerce/inventory/item/special/SpecialItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/special/SpecialItemsEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct SpecialItemsRequestHelper SpecialItemsRequestHelper;
struct SpecialItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    const char* enabled;
    const char* number;
    const char* startTime;
    const char* endTime;
    const char* price;
    const char* timeEntered;
    const char* lastModified;
};


SpecialItemsRequestHelper* SpecialItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void SpecialItemsRequestHelper_init(SpecialItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void SpecialItemsRequestHelper_getFormData(SpecialItemsRequestHelper* this);
static HashMap* SpecialItemsRequestHelper_getHashMap(SpecialItemsRequestHelper* this);
const char* SpecialItemsRequestHelper_insert(SpecialItemsRequestHelper* this);
const char* SpecialItemsRequestHelper_delete(SpecialItemsRequestHelper* this);
const char* SpecialItemsRequestHelper_update(SpecialItemsRequestHelper* this);

static void SpecialItemsRequestHelper_initFields(SpecialItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->enabled = nullptr;
    this->number = nullptr;
    this->startTime = nullptr;
    this->endTime = nullptr;
    this->price = nullptr;
    this->timeEntered = nullptr;
    this->lastModified = nullptr;
}


void SpecialItemsRequestHelper_init(SpecialItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    SpecialItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        SpecialItemsRequestHelper_getFormData(this);
}

SpecialItemsRequestHelper* SpecialItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    SpecialItemsRequestHelper* this = calloc(1, sizeof(SpecialItemsRequestHelper));
    SpecialItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void SpecialItemsRequestHelper_getFormData(SpecialItemsRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->number = HttpServletRequest_getParameter(this->request, this->basicItemData->NUMBER);
        this->enabled = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->ENABLE);
        this->startTime = HttpServletRequest_getParameter(this->request, SpecialItemData_START_TIME);
        this->endTime = HttpServletRequest_getParameter(this->request, SpecialItemData_END_TIME);
        this->price = HttpServletRequest_getParameter(this->request, this->basicItemData->PRICE);
        this->timeEntered = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->TIMECREATED);
        this->lastModified = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->LASTMODIFIED);
}


static HashMap* SpecialItemsRequestHelper_getHashMap(SpecialItemsRequestHelper* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(values, this->basicItemData->ID, this->id);
        HashMap_put(values, this->basicItemData->NUMBER, this->number);
        HashMap_put(values, EntryData_getInstance()->ENABLE, this->enabled);
        HashMap_put(values, SpecialItemData_START_TIME, this->startTime);
        HashMap_put(values, SpecialItemData_END_TIME, this->endTime);
        HashMap_put(values, this->basicItemData->PRICE, this->price);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* SpecialItemsRequestHelper_insert(SpecialItemsRequestHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList* values = BasicArrayListD_new();
            HashMap_add(values, this->id);
            HashMap_add(values, this->number);
            HashMap_add(values, this->enabled);
            HashMap_add(values, this->startTime);
            HashMap_add(values, this->endTime);
            HashMap_add(values, this->price);
            HashMap_add(values, time);
            HashMap_add(values, time);
            JAVA_CALL(SpecialItemsEntityFactory_getSpecialItemsEntityInstance(SpecialItemsEntityFactory_getInstance()), insert, values);
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


const char* SpecialItemsRequestHelper_delete(SpecialItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(SpecialItemsEntityFactory_getSpecialItemsEntityInstance(SpecialItemsEntityFactory_getInstance()), delete, this->id);
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


const char* SpecialItemsRequestHelper_update(SpecialItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Successful";
            HashMap* values = SpecialItemsRequestHelper_getHashMap(this);
            JAVA_CALL(SpecialItemsEntityFactory_getSpecialItemsEntityInstance(SpecialItemsEntityFactory_getInstance()), update, values);
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

