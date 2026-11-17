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
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "tags/HelperTag.h"
#include "views/admin/inventory/InventoryItemView.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct InventoryRequestHelper InventoryRequestHelper;
struct InventoryRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    ItemInterface* itemInterface;
};


InventoryRequestHelper* InventoryRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void InventoryRequestHelper_init(InventoryRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
const char* InventoryRequestHelper_insert(InventoryRequestHelper* this);
const char* InventoryRequestHelper_delete(InventoryRequestHelper* this);
const char* InventoryRequestHelper_update(InventoryRequestHelper* this);
ItemInterface* InventoryRequestHelper_getItemInterface(InventoryRequestHelper* this);

static void InventoryRequestHelper_initFields(InventoryRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
}


void InventoryRequestHelper_init(InventoryRequestHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    InventoryRequestHelper_initFields(this);
        HelperTag* inventoryTag = ((HelperTag*) HashMap_get(propertiesHashMap, AbTagData_PARENT));
        InventoryItemView* itemView = InventoryItemViewParentTagHelper_getInventoryItemView(InventoryItemViewParentTagHelper_getInstance(), inventoryTag);
        this->itemInterface = InventoryItemView_getItemInterface(itemView);
}

InventoryRequestHelper* InventoryRequestHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    InventoryRequestHelper* this = calloc(1, sizeof(InventoryRequestHelper));
    InventoryRequestHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
const char* InventoryRequestHelper_insert(InventoryRequestHelper* this) {
        JAVA_TRY {
            TableMappingInterface* dataMappingInterface = ((TableMappingInterface*) InventoryRequestHelper_getItemInterface(this));
            BasicArrayList* values = TableMappingInterface_toVector(dataMappingInterface);
            JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), insert, values);
            const char* success = "Successfully Added Product";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add item to Inventory";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InventoryRequestHelper_delete(InventoryRequestHelper* this) {
        JAVA_TRY {
            TableMappingInterface* dataMappingInterface = ((TableMappingInterface*) InventoryRequestHelper_getItemInterface(this));
            const char* id = ((const char*) TableMappingInterface_getKey(dataMappingInterface));
            JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), deleteWhere, this->basicItemData->ID, id);
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Successfully Removed the item with ");
            StringMaker_append(stringBuffer, this->basicItemData->ID);
            StringMaker_append(stringBuffer, "=");
            StringMaker_append(stringBuffer, id);
            StringMaker_append(stringBuffer, " from to the Inventory table");
            const char* success = StringMaker_toString(stringBuffer);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, this->base.tagStrings->DO_START_TAG);
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to remove item with from Inventory";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->base.tagStrings->DO_START_TAG, e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* InventoryRequestHelper_update(InventoryRequestHelper* this) {
        JAVA_TRY {
            InventoryRequestHelper_delete(this);
            InventoryRequestHelper_insert(this);
            const char* success = "Item Successfully Updated";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed To Update Item";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


ItemInterface* InventoryRequestHelper_getItemInterface(InventoryRequestHelper* this) {
        return this->itemInterface;
}

