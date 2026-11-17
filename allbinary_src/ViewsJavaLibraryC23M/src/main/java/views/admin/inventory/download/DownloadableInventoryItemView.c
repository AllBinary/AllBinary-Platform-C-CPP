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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemView.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/MultipartRequestParams.h"
#include "org/allbinary/logic/communication/http/request/RequestMapInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/file/zip/ZipFileUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct DownloadableInventoryItemView DownloadableInventoryItemView;
struct DownloadableInventoryItemView {
    HttpStoreComponentView base;
    RequestMapInterface RequestMapInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
    HttpServletRequest* request;
    const char* id;
    ItemInterface* itemInterface;
    DownloadableItem* downloadableItem;
    HashMap* requestHashMap;
};

int32_t DownloadableInventoryItemView_TYPE_ID = 11;

DownloadableInventoryItemView* DownloadableInventoryItemView_new(TransformInfoInterface* transformInfoInterface);

void DownloadableInventoryItemView_init(DownloadableInventoryItemView* this, TransformInfoInterface* transformInfoInterface);

DownloadableInventoryItemView* DownloadableInventoryItemView_new2(TransformInfoInterface* transformInfoInterface, const char* empty);
void DownloadableInventoryItemView_init2(DownloadableInventoryItemView* this, TransformInfoInterface* transformInfoInterface, const char* empty);
int32_t DownloadableInventoryItemView_getTypeId(DownloadableInventoryItemView* this);
static void DownloadableInventoryItemView_getFormData(DownloadableInventoryItemView* this);
void DownloadableInventoryItemView_addDomNodeInterfaces(DownloadableInventoryItemView* this);
const char* DownloadableInventoryItemView_view(DownloadableInventoryItemView* this);
void DownloadableInventoryItemView_processFile(DownloadableInventoryItemView* this, FileItem* fileItem);
void DownloadableInventoryItemView_unzip(DownloadableInventoryItemView* this, FileItem* fileItem);
static const char* DownloadableInventoryItemView_getItemFilePath(DownloadableInventoryItemView* this);
static void DownloadableInventoryItemView_setRequestHashMap(DownloadableInventoryItemView* this, HashMap* requestHashMap);
HashMap* DownloadableInventoryItemView_getRequestHashMap(DownloadableInventoryItemView* this);
DownloadableItem* DownloadableInventoryItemView_getDownloadableItem(DownloadableInventoryItemView* this);

static void DownloadableInventoryItemView_initFields(DownloadableInventoryItemView* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    this->id = nullptr;
    this->itemInterface = nullptr;
    this->downloadableItem = nullptr;
    this->requestHashMap = nullptr;
}


void DownloadableInventoryItemView_init(DownloadableInventoryItemView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        DownloadableInventoryItemView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(DownloadableInventoryItemView_getPageContext(this), getRequest));
        DownloadableInventoryItemView_getFormData(this);
}

DownloadableInventoryItemView* DownloadableInventoryItemView_new(TransformInfoInterface* transformInfoInterface) {
    DownloadableInventoryItemView* this = calloc(1, sizeof(DownloadableInventoryItemView));
    DownloadableInventoryItemView_init(this, transformInfoInterface);
    return this;
}


void DownloadableInventoryItemView_init2(DownloadableInventoryItemView* this, TransformInfoInterface* transformInfoInterface, const char* empty) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        DownloadableInventoryItemView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(DownloadableInventoryItemView_getPageContext(this), getRequest));
}

DownloadableInventoryItemView* DownloadableInventoryItemView_new2(TransformInfoInterface* transformInfoInterface, const char* empty) {
    DownloadableInventoryItemView* this = calloc(1, sizeof(DownloadableInventoryItemView));
    DownloadableInventoryItemView_init2(this, transformInfoInterface, empty);
    return this;
}


int32_t DownloadableInventoryItemView_getTypeId(DownloadableInventoryItemView* this) {
        return DownloadableInventoryItemView_TYPE_ID;
}


// throws Exception
static void DownloadableInventoryItemView_getFormData(DownloadableInventoryItemView* this) {
        DownloadableInventoryItemView_setRequestHashMap(this, MultipartRequestParams_toHashMap(MultipartRequestParams_new(this->request)));
        this->id = ((const char*) JAVA_CALL(DownloadableInventoryItemView_getRequestHashMap(this), get, this->basicItemData->ID));
}


void DownloadableInventoryItemView_addDomNodeInterfaces(DownloadableInventoryItemView* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        if (this->downloadableItem != nullptr) {
            BasicArrayList_add(vector, DownloadableItemView_new(this->downloadableItem));
        }
        DownloadableInventoryItemView_addDomNodeInterface(this, BasicItemView_new(this->itemInterface, vector));
}


// throws Exception
const char* DownloadableInventoryItemView_view(DownloadableInventoryItemView* this) {
        JAVA_TRY {
            DownloadableInventoryItemView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void DownloadableInventoryItemView_processFile(DownloadableInventoryItemView* this, FileItem* fileItem) {
        const char* fileName = FileItem_getName(fileItem);
        const char* fullPath = DownloadableInventoryItemView_getItemFilePath(this);
        AbFile* itemResourceFile = AbFile_createAbFile(fullPath);
        AbFile_mkdir(itemResourceFile);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, fullPath);
        StringMaker_append(stringBuffer, fileName);
        LogUtil_putF(this->logUtil, java_concat("FileName: ", fileName), this, "processFile()");
        AbFile* file = AbFile_createAbFile(StringMaker_toString(stringBuffer));
        LogUtil_putF(this->logUtil, AbFile_getPath(file), this, "processFiles()");
        AbFile_createNewFile(file);
        int8_t* byteArray = FileItem_get(fileItem);
        FileUtil_write(FileUtil_getInstance(), ByteArrayInputStream_new(byteArray), file);
}


// throws Exception
void DownloadableInventoryItemView_unzip(DownloadableInventoryItemView* this, FileItem* fileItem) {
        const char* fileName = FileItem_getName(fileItem);
        const char* fullPath = DownloadableInventoryItemView_getItemFilePath(this);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, fullPath);
        StringMaker_append(stringBuffer, fileName);
        LogUtil_putF(this->logUtil, java_concat("FileName: ", fileName), this, "unzip()");
        AbFile* file = AbFile_createAbFile(StringMaker_toString(stringBuffer));
        LogUtil_putF(this->logUtil, AbFile_getPath(file), this, "unzip()");
        ZipFileUtil_unzip(ZipFileUtil_getInstance(), fullPath, file, fileName);
}


static const char* DownloadableInventoryItemView_getItemFilePath(DownloadableInventoryItemView* this) {
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(DownloadableInventoryItemView_getWeblisketSession(this), getStoreName));
        FilePathData* filePathData = FilePathData_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(HttpStoreComponentView_URLGLOBALS, getWebappPath));
        StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface));
        StringMaker_append(stringBuffer, ItemInterface_getCategory(this->itemInterface));
        StringMaker_appendchar(stringBuffer, filePathData->SEPARATORCHAR);
        StringMaker_append(stringBuffer, ItemInterface_getId(this->itemInterface));
        StringMaker_appendchar(stringBuffer, filePathData->SEPARATORCHAR);
        StringMaker_append(stringBuffer, DownloadableItem_getId(this->downloadableItem));
        StringMaker_appendchar(stringBuffer, filePathData->SEPARATORCHAR);
        return StringMaker_toString(stringBuffer);
}


static void DownloadableInventoryItemView_setRequestHashMap(DownloadableInventoryItemView* this, HashMap* requestHashMap) {
        this->requestHashMap = requestHashMap;
}


HashMap* DownloadableInventoryItemView_getRequestHashMap(DownloadableInventoryItemView* this) {
        return this->requestHashMap;
}


DownloadableItem* DownloadableInventoryItemView_getDownloadableItem(DownloadableInventoryItemView* this) {
        return this->downloadableItem;
}

