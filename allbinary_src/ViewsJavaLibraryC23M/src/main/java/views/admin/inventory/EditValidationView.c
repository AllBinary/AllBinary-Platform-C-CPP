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
// package views.admin.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
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
#include "views/admin/inventory/InventoryItemView.h"

typedef struct EditValidationView EditValidationView;
struct EditValidationView {
    InventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    const char* id;
};


EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface);

void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface);
void EditValidationView_getFormData(EditValidationView* this);
bool EditValidationView_isValid(EditValidationView* this);
Document* EditValidationView_toValidationInfoDoc(EditValidationView* this);
Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document);
const char* EditValidationView_validationInfo(EditValidationView* this);
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this);

static void EditValidationView_initFields(EditValidationView* this) {
    this->id = nullptr;
}


void EditValidationView_init(EditValidationView* this, TransformInfoInterface* transformInfoInterface) {
        InventoryItemView_init(&this->base, transformInfoInterface, StringUtil_getInstance()->EMPTY_STRING);
        EditValidationView_initFields(this);
        EditValidationView_getFormData(this);
}

EditValidationView* EditValidationView_new(TransformInfoInterface* transformInfoInterface) {
    EditValidationView* this = calloc(1, sizeof(EditValidationView));
    EditValidationView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
void EditValidationView_getFormData(EditValidationView* this) {
        HashMap* hashMap = RequestParams_toHashMap(RequestParams_new(this->base.request));
        if (hashMap == nullptr) {
            java_throw(java_exception_new("Exception", "No Request Params Found"));
        }
        this->id = ((const char*) HashMap_get(hashMap, this->base.basicItemData->ID));
}


// throws Exception
bool EditValidationView_isValid(EditValidationView* this) {
        if (this->id == nullptr || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), this->id)) {
            return false;
        }
        this->itemInterface = JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, this->id);
        if (this->itemInterface == nullptr) {
            return false;
        }
        int32_t downloadable = ((int32_t) strtol(JAVA_CALL(this->itemInterface, getDownloads), nullptr, 10));
        if (downloadable != 0) {
            DownloadItemsEntity* downloadItemsEntity = DownloadItemsEntityFactory_getDownloadItemsEntityInstance(DownloadItemsEntityFactory_getInstance());
            this->downloadableItemVector = DownloadItemsEntity_getForItem(downloadItemsEntity, JAVA_CALL(this->itemInterface, getId));
        }
        return true;
}


Document* EditValidationView_toValidationInfoDoc(EditValidationView* this) {
        return nullptr;
}


Node* EditValidationView_toValidationInfoNode(EditValidationView* this, Document* document) {
        return nullptr;
}


// throws MoneyException
const char* EditValidationView_validationInfo(EditValidationView* this) {
        StringMaker* stringBuffer = StringMaker_new();
        if (this->id == nullptr || !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), this->id)) {
            StringMaker_append(stringBuffer, "Id is not valid.<br />");
        }
        if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, this->id) == nullptr) {
            StringMaker_append(stringBuffer, "Item does not exist.<br />");
        }
        return StringMaker_toString(stringBuffer);
}


// throws Exception
TransformInfoInterface* EditValidationView_getTransformInfoInterface(EditValidationView* this) {
        return InventoryItemView_getTransformInfoInterface((&this->base));
}

