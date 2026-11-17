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
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemValidation.h"
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
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/inventory/InventoryItemView.h"

typedef struct UpdateFileValidationView UpdateFileValidationView;
struct UpdateFileValidationView {
    InventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};

static const char* UpdateFileValidationView_UPDATEPRODUCT;

UpdateFileValidationView* UpdateFileValidationView_new(TransformInfoInterface* transformInfoInterface);

void UpdateFileValidationView_init(UpdateFileValidationView* this, TransformInfoInterface* transformInfoInterface);
bool UpdateFileValidationView_isValid(UpdateFileValidationView* this);
Document* UpdateFileValidationView_toValidationInfoDoc(UpdateFileValidationView* this);
Node* UpdateFileValidationView_toValidationInfoNode(UpdateFileValidationView* this, Document* document);
const char* UpdateFileValidationView_validationInfo(UpdateFileValidationView* this);
static bool UpdateFileValidationView_isValid(UpdateFileValidationView* this, const char* fileName, int64_t size);
static void UpdateFileValidationView_validationInfo(UpdateFileValidationView* this, StringMaker* stringBuffer, const char* fileName, const char* fileItemFieldName, int64_t size);
TransformInfoInterface* UpdateFileValidationView_getTransformInfoInterface(UpdateFileValidationView* this);

// Static fields with runtime initializers: call this once at startup
void UpdateFileValidationView_staticInit(void) {
    UpdateFileValidationView_UPDATEPRODUCT = CommonStrings_getInstance()->UPDATE;
}

static void UpdateFileValidationView_initFields(UpdateFileValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void UpdateFileValidationView_init(UpdateFileValidationView* this, TransformInfoInterface* transformInfoInterface) {
        InventoryItemView_init(&this->base, transformInfoInterface);
        UpdateFileValidationView_initFields(this);
}

UpdateFileValidationView* UpdateFileValidationView_new(TransformInfoInterface* transformInfoInterface) {
    UpdateFileValidationView* this = calloc(1, sizeof(UpdateFileValidationView));
    UpdateFileValidationView_init(this, transformInfoInterface);
    return this;
}


bool UpdateFileValidationView_isValid(UpdateFileValidationView* this) {
        JAVA_TRY {
            const char* command = ((const char*) JAVA_CALL(UpdateFileValidationView_getRequestHashMap(this), get, InventoryItemView_GLOBALS2->ADMINCOMMAND));
            if (command == nullptr || strcmp(command, UpdateFileValidationView_UPDATEPRODUCT) != 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Invalid AdminCommand=", command), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (BasicItemValidation_isValid(BasicItemValidation_new(this->itemInterface)) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "BasicItem is not valid", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(UpdateFileValidationView_getWeblisketSession(this), getStoreName));
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(InventoryItemView_URLGLOBALS, getWebappPath));
            StringMaker_append(stringBuffer, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface));
            StringMaker_append(stringBuffer, JAVA_CALL(this->itemInterface, getCategory));
            const char* fullCategory = StringMaker_toString(stringBuffer);
            AbFile* categoryFile = AbFile_createAbFile(fullCategory);
            if (!AbFile_isDirectory(categoryFile)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Category Does Not Exist: ", fullCategory), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            InventoryEntity* inventoryEntity = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            if (InventoryEntity_getItem(inventoryEntity, JAVA_CALL(this->itemInterface, getId)) == nullptr) {
                return false;
            }
            Any* anyType = JAVA_CALL(UpdateFileValidationView_getRequestHashMap(this), get, this->base.basicItemData->IMAGE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), anyType)) {
                FileItem* fileItem = ((FileItem*) anyType);
                int64_t size = FileItem_getSize(fileItem);
                const char* fileName = FileItem_getName(fileItem);
                HttpFileUploadUtil_log(fileItem);
                if (UpdateFileValidationView_isValid(this, fileName, size) == false) {
                    return false;
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_put(this->logUtil, "Exception in validation", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


Document* UpdateFileValidationView_toValidationInfoDoc(UpdateFileValidationView* this) {
        return nullptr;
}


Node* UpdateFileValidationView_toValidationInfoNode(UpdateFileValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
const char* UpdateFileValidationView_validationInfo(UpdateFileValidationView* this) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* command = ((const char*) JAVA_CALL(UpdateFileValidationView_getRequestHashMap(this), get, InventoryItemView_GLOBALS2->ADMINCOMMAND));
        if (command == nullptr || strcmp(command, UpdateFileValidationView_UPDATEPRODUCT) != 0) {
            return CommonSeps_getInstance()->SPACE;
        }
        StringMaker_append(stringBuffer, BasicItemValidation_validationInfo(BasicItemValidation_new(this->itemInterface)));
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(UpdateFileValidationView_getWeblisketSession(this), getStoreName));
        const char* fullCategory = ((const char*) JAVA_CALL(InventoryItemView_URLGLOBALS, getWebappPath)) + StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface) + JAVA_CALL(this->itemInterface, getCategory);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Category: ", fullCategory), this, "validationInfo()");
        }
        JAVA_TRY {
            if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, JAVA_CALL(this->itemInterface, getId)) == nullptr) {
                StringMaker_append(stringBuffer, "Item does not exist.<br>");
            }
        } JAVA_CATCH(MoneyException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Existing Item With MoneyException", this, "validationInfo()");
            }
        } JAVA_END_TRY;
        Any* anyType = JAVA_CALL(UpdateFileValidationView_getRequestHashMap(this), get, this->base.basicItemData->IMAGE);
        if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), anyType)) {
            FileItem* fileItem = ((FileItem*) anyType);
            int64_t size = FileItem_getSize(fileItem);
            const char* fileName = FileItem_getName(fileItem);
            const char* fileItemFieldName = FileItem_getFieldName(fileItem);
            UpdateFileValidationView_validationInfo(this, stringBuffer, fileName, fileItemFieldName, size);
        }
        return StringMaker_toString(stringBuffer);
}


// throws Exception
// Java overloaded method: C needs a different name
static bool UpdateFileValidationView_isValid(UpdateFileValidationView* this, const char* fileName, int64_t size) {
        FileData* fileData = FileData_getInstance();
        if (size > fileData->MINIMAGEFILESIZE) {
            if (size < fileData->MAXIMAGEFILESIZE) {
                if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                    return false;
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "File Size To Large: ");
                    StringMaker_appendlong(stringBuffer, size);
                    StringMaker_append(stringBuffer, ">");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXIMAGEFILESIZE));
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            UpdateFileValidationView_processImageFiles(this);
        }
        return true;
}


// Java overloaded method: C needs a different name
static void UpdateFileValidationView_validationInfo(UpdateFileValidationView* this, StringMaker* stringBuffer, const char* fileName, const char* fileItemFieldName, int64_t size) {
        FileData* fileData = FileData_getInstance();
        if (size > fileData->MINIMAGEFILESIZE) {
            if (strcmp(fileItemFieldName, this->base.basicItemData->IMAGE) == 0) {
                if (size < fileData->MAXIMAGEFILESIZE) {
                    if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                        StringMaker_append(stringBuffer, "FileName must be >");
                        StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINLEN));
                        StringMaker_append(stringBuffer, "and <");
                        StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXLEN));
                        StringMaker_append(stringBuffer, "<br />");
                    }
                } else {
                    StringMaker_append(stringBuffer, "Image File Is Not The Right Size. ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINIMAGEFILESIZE));
                    StringMaker_append(stringBuffer, "< > ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXIMAGEFILESIZE));
                    StringMaker_append(stringBuffer, "<br />");
                }
            }
        }
}


// throws Exception
TransformInfoInterface* UpdateFileValidationView_getTransformInfoInterface(UpdateFileValidationView* this) {
        return InventoryItemView_getTransformInfoInterface((&this->base));
}

