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
#include "admin/tags/AbTagData.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "tags/HelperTag.h"
#include "views/admin/inventory/download/DownloadableInventoryItemView.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct DownloadItemsRequestHelper DownloadItemsRequestHelper;
struct DownloadItemsRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    DownloadableItem* downloadableItem;
};


DownloadItemsRequestHelper* DownloadItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void DownloadItemsRequestHelper_init(DownloadItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
const char* DownloadItemsRequestHelper_insert(DownloadItemsRequestHelper* this);
const char* DownloadItemsRequestHelper_delete(DownloadItemsRequestHelper* this);
const char* DownloadItemsRequestHelper_update(DownloadItemsRequestHelper* this);

static void DownloadItemsRequestHelper_initFields(DownloadItemsRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DownloadItemsRequestHelper_init(DownloadItemsRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    DownloadItemsRequestHelper_initFields(this);
        HelperTag* inventoryTag = ((HelperTag*) HashMap_get(hashMap, AbTagData_PARENT));
        InventoryItemViewParentTagHelper* inventoryItemViewParentTagHelper = InventoryItemViewParentTagHelper_getInstance();
        DownloadableInventoryItemView* downloadableInventoryItemView = InventoryItemViewParentTagHelper_getDownloadableInventoryItemView(inventoryItemViewParentTagHelper, inventoryTag);
        this->downloadableItem = DownloadableInventoryItemView_getDownloadableItem(downloadableInventoryItemView);
}

DownloadItemsRequestHelper* DownloadItemsRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    DownloadItemsRequestHelper* this = calloc(1, sizeof(DownloadItemsRequestHelper));
    DownloadItemsRequestHelper_init(this, hashMap, pageContext);
    return this;
}


const char* DownloadItemsRequestHelper_insert(DownloadItemsRequestHelper* this) {
        JAVA_TRY {
            BasicArrayList* vector = DownloadableItem_toVector(this->downloadableItem);
            JAVA_CALL(DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance()), insert, vector);
            const char* success = java_concat(java_concat("Successfully inserted ", java_string_of(DownloadableItem_getId(this->downloadableItem))), " into downloaditems table");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat(java_concat("Failed to insert ", java_string_of(DownloadableItem_getId(this->downloadableItem))), " into downloaditems table");
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "inserts()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* DownloadItemsRequestHelper_delete(DownloadItemsRequestHelper* this) {
        JAVA_TRY {
            JAVA_CALL(DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance()), delete, DownloadableItem_getId(this->downloadableItem));
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


const char* DownloadItemsRequestHelper_update(DownloadItemsRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Update Successful";
            HashMap* values = DownloadableItem_toHashMap(this->downloadableItem);
            JAVA_CALL(DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance()), update, values);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, java_concat(java_string_of(DownloadableItem_getId(this->downloadableItem) + CommonSeps_getInstance()->SPACE), success), this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = java_concat("Failed to update: ", java_string_of(DownloadableItem_getId(this->downloadableItem)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

