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
#include "org/allbinary/business/user/commerce/inventory/item/option/BasicOptionItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct BasicOptionItemsRequestHelper BasicOptionItemsRequestHelper;
struct BasicOptionItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    const char* optionOneTitle;
    const char* defaultOptionItem;
    const char* defaultOptionValue;
    BasicArrayList* optionItem;
    BasicArrayList* optionValue;
    const char* timeEntered;
    const char* lastModified;
};


BasicOptionItemsRequestHelper* BasicOptionItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void BasicOptionItemsRequestHelper_init(BasicOptionItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void BasicOptionItemsRequestHelper_getFormData(BasicOptionItemsRequestHelper* this);
static HashMap* BasicOptionItemsRequestHelper_getHashMap(BasicOptionItemsRequestHelper* this);
const char* BasicOptionItemsRequestHelper_insert(BasicOptionItemsRequestHelper* this);
const char* BasicOptionItemsRequestHelper_delete(BasicOptionItemsRequestHelper* this);
const char* BasicOptionItemsRequestHelper_update(BasicOptionItemsRequestHelper* this);

static void BasicOptionItemsRequestHelper_initFields(BasicOptionItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->optionOneTitle = nullptr;
    this->defaultOptionItem = nullptr;
    this->defaultOptionValue = nullptr;
    this->optionItem = nullptr;
    this->optionValue = nullptr;
    this->timeEntered = nullptr;
    this->lastModified = nullptr;
}


void BasicOptionItemsRequestHelper_init(BasicOptionItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    BasicOptionItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        BasicOptionItemsRequestHelper_getFormData(this);
}

BasicOptionItemsRequestHelper* BasicOptionItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    BasicOptionItemsRequestHelper* this = calloc(1, sizeof(BasicOptionItemsRequestHelper));
    BasicOptionItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void BasicOptionItemsRequestHelper_getFormData(BasicOptionItemsRequestHelper* this) {
        this->optionItem = BasicArrayListD_new();
        this->optionValue = BasicArrayListD_new();
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->optionOneTitle = HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_TITLE);
        this->defaultOptionItem = HttpServletRequest_getParameter(this->request, BasicOptionItemData_DEFAULT_OPTION_ITEM);
        this->defaultOptionValue = HttpServletRequest_getParameter(this->request, BasicOptionItemData_DEFAULT_OPTION_VALUE);
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_ONE_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_ONE_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_TWO_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_TWO_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_THREE_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_THREE_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_FOUR_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_FOUR_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_FIVE_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_FIVE_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_SIX_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_SIX_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_SEVEN_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_SEVEN_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_EIGHT_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_EIGHT_VALUE));
        BasicArrayList_add(this->optionItem, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_NINE_ITEM));
        BasicArrayList_add(this->optionValue, HttpServletRequest_getParameter(this->request, BasicOptionItemData_OPTION_ONE_NINE_VALUE));
        this->timeEntered = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->TIMECREATED);
        this->lastModified = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->LASTMODIFIED);
}


static HashMap* BasicOptionItemsRequestHelper_getHashMap(BasicOptionItemsRequestHelper* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(values, this->basicItemData->ID, this->id);
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_ONE_ITEM, BasicArrayList_get(this->optionItem, 0));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_ONE_VALUE, BasicArrayList_get(this->optionValue, 0));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_TWO_ITEM, BasicArrayList_get(this->optionItem, 1));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_TWO_VALUE, BasicArrayList_get(this->optionValue, 1));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_THREE_ITEM, BasicArrayList_get(this->optionItem, 2));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_THREE_VALUE, BasicArrayList_get(this->optionValue, 2));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_FOUR_ITEM, BasicArrayList_get(this->optionItem, 3));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_FOUR_VALUE, BasicArrayList_get(this->optionValue, 3));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_FIVE_ITEM, BasicArrayList_get(this->optionItem, 4));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_FIVE_VALUE, BasicArrayList_get(this->optionValue, 4));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_SIX_ITEM, BasicArrayList_get(this->optionItem, 5));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_SIX_VALUE, BasicArrayList_get(this->optionValue, 5));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_SEVEN_ITEM, BasicArrayList_get(this->optionItem, 6));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_SEVEN_VALUE, BasicArrayList_get(this->optionValue, 6));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_EIGHT_ITEM, BasicArrayList_get(this->optionItem, 7));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_EIGHT_VALUE, BasicArrayList_get(this->optionValue, 7));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_NINE_ITEM, BasicArrayList_get(this->optionItem, 8));
        HashMap_put(values, BasicOptionItemData_OPTION_ONE_NINE_VALUE, BasicArrayList_get(this->optionValue, 8));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* BasicOptionItemsRequestHelper_insert(BasicOptionItemsRequestHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList* values = BasicArrayListD_new();
            HashMap_add(values, this->id);
            int32_t size = BasicArrayList_size(this->optionValue);
            for (int32_t index = 0; index < size; index++) {
                HashMap_add(values, BasicArrayList_get(this->optionValue, index));
                HashMap_add(values, BasicArrayList_get(this->optionItem, index));
            }
            HashMap_add(values, time);
            HashMap_add(values, time);
            JAVA_CALL(BasicOptionItemsEntityFactory_getBasicOptionItemsEntityInstance(BasicOptionItemsEntityFactory_getInstance()), insert, values);
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


const char* BasicOptionItemsRequestHelper_delete(BasicOptionItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(BasicOptionItemsEntityFactory_getBasicOptionItemsEntityInstance(BasicOptionItemsEntityFactory_getInstance()), delete, this->id);
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


const char* BasicOptionItemsRequestHelper_update(BasicOptionItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Pricing Successful";
            HashMap* values = BasicOptionItemsRequestHelper_getHashMap(this);
            JAVA_CALL(BasicOptionItemsEntityFactory_getBasicOptionItemsEntityInstance(BasicOptionItemsEntityFactory_getInstance()), update, values);
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

