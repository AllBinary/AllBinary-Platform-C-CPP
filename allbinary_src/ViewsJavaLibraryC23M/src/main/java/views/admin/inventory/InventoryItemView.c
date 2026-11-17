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
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#include "org/allbinary/logic/communication/http/request/HttpRequestUtil.h"
#include "org/allbinary/logic/communication/http/request/MultipartRequestParams.h"
#include "org/allbinary/logic/communication/http/request/RequestMapInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/media/MediaData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct InventoryItemView InventoryItemView;
struct InventoryItemView {
    HttpStoreComponentView base;
    RequestMapInterface RequestMapInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* imageFileName;
    MediaData* mediaData;
    ItemInterface* itemInterface;
    BasicArrayList* downloadableItemVector;
    HashMap* requestHashMap;
};

int32_t InventoryItemView_TYPE_ID = 10;

InventoryItemView* InventoryItemView_new(TransformInfoInterface* transformInfoInterface);

void InventoryItemView_init(InventoryItemView* this, TransformInfoInterface* transformInfoInterface);

InventoryItemView* InventoryItemView_new2(TransformInfoInterface* transformInfoInterface, const char* empty);
void InventoryItemView_init2(InventoryItemView* this, TransformInfoInterface* transformInfoInterface, const char* empty);
int32_t InventoryItemView_getTypeId(InventoryItemView* this);
static void InventoryItemView_getFormData(InventoryItemView* this);
void InventoryItemView_addDomNodeInterfaces(InventoryItemView* this);
ItemInterface* InventoryItemView_getItemInterface(InventoryItemView* this);
const char* InventoryItemView_view(InventoryItemView* this);
void InventoryItemView_processImageFiles(InventoryItemView* this);
static void InventoryItemView_setRequestHashMap(InventoryItemView* this, HashMap* requestHashMap);
HashMap* InventoryItemView_getRequestHashMap(InventoryItemView* this);

static void InventoryItemView_initFields(InventoryItemView* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->imageFileName = nullptr;
    this->mediaData = nullptr;
    this->itemInterface = nullptr;
    this->downloadableItemVector = nullptr;
    this->requestHashMap = nullptr;
}


void InventoryItemView_init(InventoryItemView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        InventoryItemView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(InventoryItemView_getPageContext(this), getRequest));
        InventoryItemView_getFormData(this);
}

InventoryItemView* InventoryItemView_new(TransformInfoInterface* transformInfoInterface) {
    InventoryItemView* this = calloc(1, sizeof(InventoryItemView));
    InventoryItemView_init(this, transformInfoInterface);
    return this;
}


void InventoryItemView_init2(InventoryItemView* this, TransformInfoInterface* transformInfoInterface, const char* empty) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        InventoryItemView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(InventoryItemView_getPageContext(this), getRequest));
}

InventoryItemView* InventoryItemView_new2(TransformInfoInterface* transformInfoInterface, const char* empty) {
    InventoryItemView* this = calloc(1, sizeof(InventoryItemView));
    InventoryItemView_init2(this, transformInfoInterface, empty);
    return this;
}


int32_t InventoryItemView_getTypeId(InventoryItemView* this) {
        return InventoryItemView_TYPE_ID;
}


// throws Exception
static void InventoryItemView_getFormData(InventoryItemView* this) {
        InventoryItemView_setRequestHashMap(this, MultipartRequestParams_toHashMap(MultipartRequestParams_new(this->request)));
        Any* imageFileItemObject = JAVA_CALL(InventoryItemView_getRequestHashMap(this), get, this->basicItemData->IMAGE);
        if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), imageFileItemObject)) {
            FileItem* fileItem = ((FileItem*) imageFileItemObject);
            if (fileItem != nullptr && FileItem_getSize(fileItem) > 1) {
                this->imageFileName = HttpRequestUtil_generateFileName(HttpRequestUtil_getInstance(), FileItem_getName(fileItem));
                AbPathData* pathData = AbPathData_getInstance();
                PathUtil* pathUtil = PathUtil_getInstance();
                this->mediaData = MediaData_get(AbPathData_getExtension(pathData, this->imageFileName));
                this->imageFileName = PathUtil_getWithoutExtension(pathUtil, this->imageFileName);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Uploaded File Data: ");
                    StringMaker_append(stringBuffer, this->imageFileName);
                    StringMaker_append(stringBuffer, " Extension: ");
                    StringMaker_append(stringBuffer, MediaData_getName(this->mediaData));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getFormData()");
                }
            }
        }
        this->itemInterface = ((ItemInterface*) BasicItem_new(InventoryItemView_getRequestHashMap(this)));
}


void InventoryItemView_addDomNodeInterfaces(InventoryItemView* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        DownloadableItem* downloadableItem = nullptr;
        int32_t size = BasicArrayList_size(this->downloadableItemVector);
        for (int32_t index = 0; index < size; index++) {
            downloadableItem = ((DownloadableItem*) BasicArrayList_get(this->downloadableItemVector, index));
            BasicArrayList_add(vector, DownloadableItemView_new(downloadableItem));
        }
        InventoryItemView_addDomNodeInterface(this, BasicItemView_new(this->itemInterface, vector));
}


ItemInterface* InventoryItemView_getItemInterface(InventoryItemView* this) {
        return this->itemInterface;
}


// throws Exception
const char* InventoryItemView_view(InventoryItemView* this) {
        JAVA_TRY {
            InventoryItemView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void InventoryItemView_processImageFiles(InventoryItemView* this) {
        Set* set = JAVA_CALL(InventoryItemView_getRequestHashMap(this), keySet);
        Any** fieldNameArray = Set_toArray(set);
        int32_t size = java_array_length(fieldNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* fieldName = ((const char*) fieldNameArray[index]);
            if (strcmp(fieldName, this->basicItemData->IMAGE) == 0) {
                StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(InventoryItemView_getWeblisketSession(this), getStoreName));
                InventoryUploadMediaUtil* inventoryUploadMediaUtil = InventoryUploadMediaUtil_new(storeFrontInterface, this->itemInterface);
                FileItem* fileItem = ((FileItem*) JAVA_CALL(InventoryItemView_getRequestHashMap(this), get, this->basicItemData->IMAGE));
                this->itemInterface = InventoryUploadMediaUtil_saveFiles(inventoryUploadMediaUtil, FileItem_get(fileItem), this->imageFileName, this->mediaData);
            }
        }
}


static void InventoryItemView_setRequestHashMap(InventoryItemView* this, HashMap* requestHashMap) {
        this->requestHashMap = requestHashMap;
}


HashMap* InventoryItemView_getRequestHashMap(InventoryItemView* this) {
        return this->requestHashMap;
}

