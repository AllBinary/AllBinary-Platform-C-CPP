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
#include "org/allbinary/business/user/commerce/inventory/item/group/BasicGroupItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/groups/BasicGroupItemsEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct BasicGroupItemsRequestHelper BasicGroupItemsRequestHelper;
struct BasicGroupItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    const char* itemOne;
    const char* itemTwo;
    const char* itemThree;
    const char* itemFour;
    const char* itemFive;
    const char* itemSix;
    const char* itemSeven;
    const char* itemEight;
    const char* itemNine;
    const char* itemTen;
    const char* timeEntered;
    const char* lastModified;
};


BasicGroupItemsRequestHelper* BasicGroupItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void BasicGroupItemsRequestHelper_init(BasicGroupItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void BasicGroupItemsRequestHelper_getFormData(BasicGroupItemsRequestHelper* this);
static HashMap* BasicGroupItemsRequestHelper_getHashMap(BasicGroupItemsRequestHelper* this);
const char* BasicGroupItemsRequestHelper_insert(BasicGroupItemsRequestHelper* this);
const char* BasicGroupItemsRequestHelper_delete(BasicGroupItemsRequestHelper* this);
const char* BasicGroupItemsRequestHelper_update(BasicGroupItemsRequestHelper* this);

static void BasicGroupItemsRequestHelper_initFields(BasicGroupItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->itemOne = nullptr;
    this->itemTwo = nullptr;
    this->itemThree = nullptr;
    this->itemFour = nullptr;
    this->itemFive = nullptr;
    this->itemSix = nullptr;
    this->itemSeven = nullptr;
    this->itemEight = nullptr;
    this->itemNine = nullptr;
    this->itemTen = nullptr;
    this->timeEntered = nullptr;
    this->lastModified = nullptr;
}


void BasicGroupItemsRequestHelper_init(BasicGroupItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    BasicGroupItemsRequestHelper_initFields(this);
        this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
        BasicGroupItemsRequestHelper_getFormData(this);
}

BasicGroupItemsRequestHelper* BasicGroupItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    BasicGroupItemsRequestHelper* this = calloc(1, sizeof(BasicGroupItemsRequestHelper));
    BasicGroupItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void BasicGroupItemsRequestHelper_getFormData(BasicGroupItemsRequestHelper* this) {
        this->id = HttpServletRequest_getParameter(this->request, this->basicItemData->ID);
        this->itemOne = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_ONE);
        this->itemTwo = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_TWO);
        this->itemThree = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_THREE);
        this->itemFour = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_FOUR);
        this->itemFive = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_FIVE);
        this->itemSix = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_SIX);
        this->itemSeven = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_SEVEN);
        this->itemEight = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_EIGHT);
        this->itemNine = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_NINE);
        this->itemTen = HttpServletRequest_getParameter(this->request, BasicGroupItemData_ITEM_TEN);
        this->timeEntered = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->TIMECREATED);
        this->lastModified = HttpServletRequest_getParameter(this->request, EntryData_getInstance()->LASTMODIFIED);
}


static HashMap* BasicGroupItemsRequestHelper_getHashMap(BasicGroupItemsRequestHelper* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(values, this->basicItemData->ID, this->id);
        HashMap_put(values, BasicGroupItemData_ITEM_ONE, this->itemOne);
        HashMap_put(values, BasicGroupItemData_ITEM_TWO, this->itemTwo);
        HashMap_put(values, BasicGroupItemData_ITEM_THREE, this->itemThree);
        HashMap_put(values, BasicGroupItemData_ITEM_FOUR, this->itemFour);
        HashMap_put(values, BasicGroupItemData_ITEM_FIVE, this->itemFive);
        HashMap_put(values, BasicGroupItemData_ITEM_SIX, this->itemSix);
        HashMap_put(values, BasicGroupItemData_ITEM_SEVEN, this->itemSeven);
        HashMap_put(values, BasicGroupItemData_ITEM_EIGHT, this->itemEight);
        HashMap_put(values, BasicGroupItemData_ITEM_NINE, this->itemNine);
        HashMap_put(values, BasicGroupItemData_ITEM_TEN, this->itemTen);
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        HashMap_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* BasicGroupItemsRequestHelper_insert(BasicGroupItemsRequestHelper* this) {
        JAVA_TRY {
            Calendar* calendar = Calendar_getInstance();
            const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
            BasicArrayList* values = BasicArrayListD_new();
            HashMap_add(values, this->id);
            HashMap_add(values, this->itemOne);
            HashMap_add(values, this->itemTwo);
            HashMap_add(values, this->itemThree);
            HashMap_add(values, this->itemFour);
            HashMap_add(values, this->itemFive);
            HashMap_add(values, this->itemSix);
            HashMap_add(values, this->itemSeven);
            HashMap_add(values, this->itemEight);
            HashMap_add(values, this->itemNine);
            HashMap_add(values, this->itemTen);
            HashMap_add(values, time);
            HashMap_add(values, time);
            JAVA_CALL(BasicGroupItemsEntityFactory_getBasicGroupItemsEntityInstance(BasicGroupItemsEntityFactory_getInstance()), insert, values);
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


const char* BasicGroupItemsRequestHelper_delete(BasicGroupItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(BasicGroupItemsEntityFactory_getBasicGroupItemsEntityInstance(BasicGroupItemsEntityFactory_getInstance()), delete, this->id);
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


const char* BasicGroupItemsRequestHelper_update(BasicGroupItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Pricing Successful";
            HashMap* values = BasicGroupItemsRequestHelper_getHashMap(this);
            JAVA_CALL(BasicGroupItemsEntityFactory_getBasicGroupItemsEntityInstance(BasicGroupItemsEntityFactory_getInstance()), update, values);
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

