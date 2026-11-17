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
// package views.admin.inventory.download

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
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/downloads/DownloadItemsEntityFactory.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/inventory/download/DownloadableInventoryItemView.h"

typedef struct DeleteFileValidationView DeleteFileValidationView;
struct DeleteFileValidationView {
    DownloadableInventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    const char* downloadItemId;
};


DeleteFileValidationView* DeleteFileValidationView_new(TransformInfoInterface* transformInfoInterface);

void DeleteFileValidationView_init(DeleteFileValidationView* this, TransformInfoInterface* transformInfoInterface);
void DeleteFileValidationView_getFormData(DeleteFileValidationView* this);
bool DeleteFileValidationView_isValid(DeleteFileValidationView* this);
Document* DeleteFileValidationView_toValidationInfoDoc(DeleteFileValidationView* this);
Node* DeleteFileValidationView_toValidationInfoNode(DeleteFileValidationView* this, Document* document);
const char* DeleteFileValidationView_validationInfo(DeleteFileValidationView* this);
TransformInfoInterface* DeleteFileValidationView_getTransformInfoInterface(DeleteFileValidationView* this);

static void DeleteFileValidationView_initFields(DeleteFileValidationView* this) {
    this->downloadItemId = nullptr;
}


void DeleteFileValidationView_init(DeleteFileValidationView* this, TransformInfoInterface* transformInfoInterface) {
        DownloadableInventoryItemView_init(&this->base, transformInfoInterface, StringUtil_getInstance()->EMPTY_STRING);
        DeleteFileValidationView_initFields(this);
        DeleteFileValidationView_getFormData(this);
}

DeleteFileValidationView* DeleteFileValidationView_new(TransformInfoInterface* transformInfoInterface) {
    DeleteFileValidationView* this = calloc(1, sizeof(DeleteFileValidationView));
    DeleteFileValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void DeleteFileValidationView_getFormData(DeleteFileValidationView* this) {
        HashMap* hashMap = RequestParams_toHashMap(RequestParams_new(this->base.request));
        if (hashMap == nullptr) {
            java_throw(java_exception_new("Exception", "No Request Params Found"));
        }
        this->id = ((const char*) HashMap_get(hashMap, this->base.basicItemData->ID));
        this->downloadItemId = ((const char*) HashMap_get(hashMap, DownloadItemData_ID));
}


bool DeleteFileValidationView_isValid(DeleteFileValidationView* this) {
        JAVA_TRY {
            if (this->base.id == nullptr || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), this->id)) {
                return false;
            }
            InventoryEntity* inventoryEntity = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            this->itemInterface = InventoryEntity_getItem(inventoryEntity, this->id);
            if (this->itemInterface == nullptr) {
                return false;
            }
            DownloadItemsEntity* downloadItemsEntity = DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance());
            BasicArrayList* vector = DownloadItemsEntity_getForItem(downloadItemsEntity, this->id, this->downloadItemId);
            if (BasicArrayList_size(vector) != 1) {
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            return false;
        } JAVA_END_TRY;
}


Document* DeleteFileValidationView_toValidationInfoDoc(DeleteFileValidationView* this) {
        return nullptr;
}


Node* DeleteFileValidationView_toValidationInfoNode(DeleteFileValidationView* this, Document* document) {
        return nullptr;
}


const char* DeleteFileValidationView_validationInfo(DeleteFileValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (this->id == nullptr || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), this->id)) {
                StringMaker_append(stringBuffer, "Id is not valid.<br />");
            }
            if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, this->id) == nullptr) {
                StringMaker_append(stringBuffer, "Item does not exist.<br />");
            }
            DownloadItemsEntity* downloadItemsEntity = DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance());
            BasicArrayList* vector = DownloadItemsEntity_getForItem(downloadItemsEntity, this->id, this->downloadItemId);
            if (BasicArrayList_size(vector) == 0) {
                StringMaker_append(stringBuffer, "DownloadItem does not exist.<br />");
            }
            if (BasicArrayList_size(vector) > 1) {
                StringMaker_append(stringBuffer, "To Many DownloadItems exist.<br />");
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            return "Unkown Validation Error.<br />";
        } JAVA_END_TRY;
}


// throws Exception
TransformInfoInterface* DeleteFileValidationView_getTransformInfoInterface(DeleteFileValidationView* this) {
        return DownloadableInventoryItemView_getTransformInfoInterface((&this->base));
}

