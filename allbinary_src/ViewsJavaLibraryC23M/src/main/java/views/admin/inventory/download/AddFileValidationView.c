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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
#include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItemValidation.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/inventory/download/DownloadableInventoryItemView.h"

typedef struct AddFileValidationView AddFileValidationView;
struct AddFileValidationView {
    DownloadableInventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
};

static const char* AddFileValidationView_ADDPRODUCT = "Finish";
static const char* AddFileValidationView_ADDANOTHERDOWNLOADABLE = "Add Another";

AddFileValidationView* AddFileValidationView_new(TransformInfoInterface* transformInfoInterface);

void AddFileValidationView_init(AddFileValidationView* this, TransformInfoInterface* transformInfoInterface);
bool AddFileValidationView_isValid(AddFileValidationView* this);
Document* AddFileValidationView_toValidationInfoDoc(AddFileValidationView* this);
Node* AddFileValidationView_toValidationInfoNode(AddFileValidationView* this, Document* document);
const char* AddFileValidationView_validationInfo(AddFileValidationView* this);
static bool AddFileValidationView_isValid(AddFileValidationView* this, const char* fileName, int64_t size);
static void AddFileValidationView_validationInfo(AddFileValidationView* this, StringMaker* stringBuffer, const char* fileName, int64_t size);
TransformInfoInterface* AddFileValidationView_getTransformInfoInterface(AddFileValidationView* this);

static void AddFileValidationView_initFields(AddFileValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
}


void AddFileValidationView_init(AddFileValidationView* this, TransformInfoInterface* transformInfoInterface) {
        DownloadableInventoryItemView_init(&this->base, transformInfoInterface);
        AddFileValidationView_initFields(this);
}

AddFileValidationView* AddFileValidationView_new(TransformInfoInterface* transformInfoInterface) {
    AddFileValidationView* this = calloc(1, sizeof(AddFileValidationView));
    AddFileValidationView_init(this, transformInfoInterface);
    return this;
}


bool AddFileValidationView_isValid(AddFileValidationView* this) {
        JAVA_TRY {
            const char* command = ((const char*) JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadableInventoryItemView_GLOBALS2->ADMINCOMMAND));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), command) || (strcmp(command, AddFileValidationView_ADDPRODUCT) != 0 && strcmp(command, AddFileValidationView_ADDANOTHERDOWNLOADABLE) != 0)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Invalid AdminCommand=", command), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            JAVA_TRY {
                InventoryEntity* inventoryEntity = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
                this->itemInterface = InventoryEntity_getItem(inventoryEntity, this->id);
            } JAVA_CATCH(MoneyException, e) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_put(this->logUtil, "Existing Item With MoneyException", this, this->commonStrings->IS_VALID, e);
                }
            } JAVA_END_TRY;
            if (this->itemInterface == nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Item Does Not Exist", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (BasicItemValidation_isValid(BasicItemValidation_new(this->itemInterface)) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "BasicItem is not valid", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddFileValidationView_getWeblisketSession(this), getStoreName));
            const char* fullCategory = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), JAVA_CALL(DownloadableInventoryItemView_URLGLOBALS, getWebappPath)), append, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface)), append, JAVA_CALL(this->itemInterface, getCategory)), toString);
            AbFile* categoryFile = AbFile_createAbFile(fullCategory);
            if (!AbFile_isDirectory(categoryFile)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Category Does Not Exist: ", fullCategory), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            Any* downloadableFileObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_FILE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), downloadableFileObject)) {
                FileItem* fileItem = ((FileItem*) downloadableFileObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                HttpFileUploadUtil_log(fileItem);
                if (AddFileValidationView_isValid(this, fileName, size) == false) {
                    return false;
                } else {
                    AddFileValidationView_processFile(this, fileItem);
                    JAVA_CALL(AddFileValidationView_getRequestHashMap(this), put, DownloadItemData_SIZE, java_string_of(size));
                }
            } else {
                JAVA_CALL(AddFileValidationView_getRequestHashMap(this), remove, DownloadItemData_FILE);
            }
            Any* licenseFileObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_LICENSE_FILE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), licenseFileObject)) {
                FileItem* fileItem = ((FileItem*) licenseFileObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                HttpFileUploadUtil_log(fileItem);
                if (AddFileValidationView_isValid(this, fileName, size) == false) {
                } else {
                    AddFileValidationView_processFile(this, fileItem);
                }
            } else {
                JAVA_CALL(AddFileValidationView_getRequestHashMap(this), remove, DownloadItemData_LICENSE_FILE);
            }
            Any* extraFilesObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_EXTRA_FILES);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), extraFilesObject)) {
                FileItem* fileItem = ((FileItem*) extraFilesObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                HttpFileUploadUtil_log(fileItem);
                if (AddFileValidationView_isValid(this, fileName, size) == false) {
                } else {
                    AddFileValidationView_processFile(this, fileItem);
                    AddFileValidationView_unzip(this, fileItem);
                }
            } else {
                JAVA_CALL(AddFileValidationView_getRequestHashMap(this), remove, DownloadItemData_EXTRA_FILES);
            }
            HashMap* hashMap = AddFileValidationView_getRequestHashMap(this);
            HashMap_put(hashMap, this->basicItemData->ID, JAVA_CALL(this->itemInterface, getId));
            Any* licenseObject = HashMap_get(hashMap, DownloadItemData_LICENSE_FILE);
            if (licenseObject != nullptr) {
                HashMap_put(hashMap, DownloadItemData_LICENSE_FILE, FileItem_getName((((FileItem*) licenseObject))));
            } else {
                HashMap_put(hashMap, DownloadItemData_LICENSE_FILE, StringUtil_getInstance()->EMPTY_STRING);
            }
            Any* fileObject = HashMap_get(hashMap, DownloadItemData_FILE);
            if (fileObject != nullptr) {
                HashMap_put(hashMap, DownloadItemData_FILE, FileItem_getName((((FileItem*) fileObject))));
            } else {
                HashMap_put(hashMap, DownloadItemData_FILE, StringUtil_getInstance()->EMPTY_STRING);
            }
            this->downloadableItem = DownloadableItem_new(hashMap);
            DownloadableItemValidation* downloadableItemValidation = DownloadableItemValidation_new(this->downloadableItem);
            if (DownloadableItemValidation_isValid(downloadableItemValidation) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "DownloadableItem is not valid", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Exception in validation", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


Document* AddFileValidationView_toValidationInfoDoc(AddFileValidationView* this) {
        return nullptr;
}


Node* AddFileValidationView_toValidationInfoNode(AddFileValidationView* this, Document* document) {
        return nullptr;
}


const char* AddFileValidationView_validationInfo(AddFileValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            const char* command = ((const char*) JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadableInventoryItemView_GLOBALS2->ADMINCOMMAND));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), command) || (strcmp(command, AddFileValidationView_ADDPRODUCT) != 0 && strcmp(command, AddFileValidationView_ADDANOTHERDOWNLOADABLE) != 0)) {
                return StringUtil_getInstance()->EMPTY_STRING;
            }
            if (this->itemInterface == nullptr) {
                const char* ITEM_NOT_FOUND = "Item Does Not Exist";
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, ITEM_NOT_FOUND, this, "validationInfo()");
                }
                return ITEM_NOT_FOUND;
            }
            BasicItemValidation* basicItemValidation = BasicItemValidation_new(this->itemInterface);
            if (BasicItemValidation_isValid(basicItemValidation) == false) {
                StringMaker_append(stringBuffer, BasicItemValidation_validationInfo(basicItemValidation));
                StringMaker_append(stringBuffer, "<br/>");
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddFileValidationView_getWeblisketSession(this), getStoreName));
            const char* fullCategory = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), JAVA_CALL(DownloadableInventoryItemView_URLGLOBALS, getWebappPath)), append, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface)), append, JAVA_CALL(this->itemInterface, getCategory)), toString);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Category: ", fullCategory), this, "validationInfo()");
            }
            AbFile* categoryFile = AbFile_createAbFile(fullCategory);
            if (!AbFile_isDirectory(categoryFile)) {
                StringMaker_append(stringBuffer, "Category ");
                StringMaker_append(stringBuffer, JAVA_CALL(this->itemInterface, getCategory));
                StringMaker_append(stringBuffer, " does not exist.");
                StringMaker_append(stringBuffer, "<br />");
            }
            Any* downloadableFileObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_FILE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), downloadableFileObject)) {
                FileItem* fileItem = ((FileItem*) downloadableFileObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                AddFileValidationView_validationInfo(this, stringBuffer, fileName, size);
            } else {
                StringMaker_append(stringBuffer, "Download File Missing");
                StringMaker_append(stringBuffer, "<br/>");
            }
            Any* licenseFileObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_LICENSE_FILE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), licenseFileObject)) {
                FileItem* fileItem = ((FileItem*) licenseFileObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                AddFileValidationView_validationInfo(this, stringBuffer, fileName, size);
            } else {
            }
            Any* extraFilesObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, DownloadItemData_EXTRA_FILES);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), extraFilesObject)) {
                FileItem* fileItem = ((FileItem*) extraFilesObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                AddFileValidationView_validationInfo(this, stringBuffer, fileName, size);
            } else {
            }
            if (this->downloadableItem != nullptr) {
                DownloadableItemValidation* downloadableItemValidation = DownloadableItemValidation_new(this->downloadableItem);
                if (DownloadableItemValidation_isValid(downloadableItemValidation) == false) {
                    const char* log = DownloadableItemValidation_validationInfo(downloadableItemValidation);
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        LogUtil_putF(this->logUtil, log, this, this->commonStrings->IS_VALID);
                    }
                    StringMaker_append(stringBuffer, log);
                    StringMaker_append(stringBuffer, "<br/>");
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Getting Validation Info";
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
static bool AddFileValidationView_isValid(AddFileValidationView* this, const char* fileName, int64_t size) {
        FileData* fileData = FileData_getInstance();
        if (size > fileData->MINDOWNLOADABLEFILESIZE) {
            if (size < fileData->MAXDOWNLOADABLEFILESIZE) {
                if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        StringMaker* stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "File name is not valid: ");
                        StringMaker_append(stringBuffer, fileName);
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                    }
                    return false;
                } else {
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "File Size To Large: ");
                    StringMaker_appendlong(stringBuffer, size);
                    StringMaker_append(stringBuffer, ">");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXDOWNLOADABLEFILESIZE));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "File Size To Small: ");
                StringMaker_appendlong(stringBuffer, size);
                StringMaker_append(stringBuffer, ">");
                StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINDOWNLOADABLEFILESIZE));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            }
            return false;
        }
        return true;
}


// Java overloaded method: C needs a different name
static void AddFileValidationView_validationInfo(AddFileValidationView* this, StringMaker* stringBuffer, const char* fileName, int64_t size) {
        FileData* fileData = FileData_getInstance();
        if (size > fileData->MINDOWNLOADABLEFILESIZE) {
            if (size < fileData->MAXDOWNLOADABLEFILESIZE) {
                if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                    StringMaker_append(stringBuffer, "File Name must be more than ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINLEN));
                    StringMaker_append(stringBuffer, " and less than ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXLEN));
                    StringMaker_append(stringBuffer, " characters in length: ");
                    StringMaker_append(stringBuffer, fileName);
                    StringMaker_append(stringBuffer, "<br/>");
                } else {
                }
            } else {
                StringMaker_append(stringBuffer, "File Is Not The Right Size. ");
                StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINDOWNLOADABLEFILESIZE));
                StringMaker_append(stringBuffer, "< >");
                StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXDOWNLOADABLEFILESIZE));
                StringMaker_append(stringBuffer, "<br/>");
            }
        }
}


// throws Exception
TransformInfoInterface* AddFileValidationView_getTransformInfoInterface(AddFileValidationView* this) {
        return DownloadableInventoryItemView_getTransformInfoInterface((&this->base));
}

