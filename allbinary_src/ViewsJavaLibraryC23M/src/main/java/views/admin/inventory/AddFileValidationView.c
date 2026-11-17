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
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/http/file/upload/HttpFileUploadUtil.h"
#include "org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileData.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/admin/inventory/InventoryItemView.h"

typedef struct AddFileValidationView AddFileValidationView;
struct AddFileValidationView {
    InventoryItemView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
    BasicItemData* basicItemData;
};

static const char* AddFileValidationView_ADDPRODUCT = "Add Product";
static const char* AddFileValidationView_NEXTSTEP;

AddFileValidationView* AddFileValidationView_new(TransformInfoInterface* transformInfoInterface);

void AddFileValidationView_init(AddFileValidationView* this, TransformInfoInterface* transformInfoInterface);
bool AddFileValidationView_isValid(AddFileValidationView* this);
Document* AddFileValidationView_toValidationInfoDoc(AddFileValidationView* this);
Node* AddFileValidationView_toValidationInfoNode(AddFileValidationView* this, Document* document);
const char* AddFileValidationView_validationInfo(AddFileValidationView* this);
static bool AddFileValidationView_isValid(AddFileValidationView* this, const char* fileName, int64_t size);
static void AddFileValidationView_validationInfo(AddFileValidationView* this, StringMaker* stringBuffer, const char* fileName, const char* fileItemFieldName, int64_t size);
TransformInfoInterface* AddFileValidationView_getTransformInfoInterface(AddFileValidationView* this);

// Static fields with runtime initializers: call this once at startup
void AddFileValidationView_staticInit(void) {
    AddFileValidationView_NEXTSTEP = java_concat(java_string_of(CommonLabels_getInstance()->NEXT), " Step");
}

static void AddFileValidationView_initFields(AddFileValidationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
}


void AddFileValidationView_init(AddFileValidationView* this, TransformInfoInterface* transformInfoInterface) {
        InventoryItemView_init(&this->base, transformInfoInterface);
        AddFileValidationView_initFields(this);
}

AddFileValidationView* AddFileValidationView_new(TransformInfoInterface* transformInfoInterface) {
    AddFileValidationView* this = calloc(1, sizeof(AddFileValidationView));
    AddFileValidationView_init(this, transformInfoInterface);
    return this;
}


bool AddFileValidationView_isValid(AddFileValidationView* this) {
        JAVA_TRY {
            const char* command = ((const char*) JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, InventoryItemView_GLOBALS2->ADMINCOMMAND));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), command) || (strcmp(command, AddFileValidationView_ADDPRODUCT) != 0 && strcmp(command, AddFileValidationView_NEXTSTEP) != 0)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, "Invalid AdminCommand: ");
                    StringMaker_append(stringBuffer, command);
                    StringMaker_append(stringBuffer, " must be: ");
                    StringMaker_append(stringBuffer, AddFileValidationView_ADDPRODUCT);
                    StringMaker_append(stringBuffer, " or ");
                    StringMaker_append(stringBuffer, AddFileValidationView_NEXTSTEP);
                    LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            BasicItemValidation* basicItemValidation = BasicItemValidation_new(this->itemInterface);
            if (BasicItemValidation_isValid(basicItemValidation) == false) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, BasicItemValidation_validationInfo(basicItemValidation), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddFileValidationView_getWeblisketSession(this), getStoreName));
            JAVA_CALL(this->itemInterface, setCategory, StoreFrontInterface_getCategoryPath(storeFrontInterface) + JAVA_CALL(this->itemInterface, getCategory));
            const char* fullCategory = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), JAVA_CALL(InventoryItemView_URLGLOBALS, getWebappPath)), append, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface)), append, JAVA_CALL(this->itemInterface, getCategory)), toString);
            AbFile* categoryFile = AbFile_createAbFile(fullCategory);
            if (!AbFile_isDirectory(categoryFile)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("Category Does Not Exist: ", fullCategory), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, JAVA_CALL(this->itemInterface, getId)) != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Item Already Exists", this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            Any* imageFileItemObject = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, this->basicItemData->IMAGE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), imageFileItemObject)) {
                FileItem* fileItem = ((FileItem*) imageFileItemObject);
                const char* fileName = FileItem_getName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                HttpFileUploadUtil_log(fileItem);
                if (AddFileValidationView_isValid(this, fileName, size) == false) {
                    return false;
                }
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
            const char* command = ((const char*) JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, InventoryItemView_GLOBALS2->ADMINCOMMAND));
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), command) || (strcmp(command, AddFileValidationView_ADDPRODUCT) != 0 && strcmp(command, AddFileValidationView_NEXTSTEP) != 0)) {
                return StringUtil_getInstance()->EMPTY_STRING;
            }
            BasicItemValidation* basicItemValidation = BasicItemValidation_new(this->itemInterface);
            if (BasicItemValidation_isValid(basicItemValidation) == false) {
                StringMaker_append(stringBuffer, BasicItemValidation_validationInfo(basicItemValidation));
                StringMaker_append(stringBuffer, "<br/>");
            }
            StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(JAVA_CALL(AddFileValidationView_getWeblisketSession(this), getStoreName));
            const char* fullCategory = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), JAVA_CALL(InventoryItemView_URLGLOBALS, getWebappPath)), append, StoreFrontInterface_getCurrentHostNamePath(storeFrontInterface)), append, JAVA_CALL(this->itemInterface, getCategory)), toString);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Category: ", fullCategory), this, "validationInfo()");
            }
            AbFile* categoryFile = AbFile_createAbFile(fullCategory);
            if (!AbFile_isDirectory(categoryFile)) {
                StringMaker_append(stringBuffer, "Category ");
                StringMaker_append(stringBuffer, JAVA_CALL(this->itemInterface, getCategory));
                StringMaker_append(stringBuffer, " does not exist.<br />");
            }
            JAVA_TRY {
                if (JAVA_CALL(InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance()), getItem, JAVA_CALL(this->itemInterface, getId)) != nullptr) {
                    StringMaker_append(stringBuffer, "Id is already in use. Refresh the page for a valid id.<br/>");
                }
            } JAVA_CATCH(MoneyException, e) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, "Existing Item With MoneyException", this, "validationInfo()");
                }
            } JAVA_END_TRY;
            Any* anyType = JAVA_CALL(AddFileValidationView_getRequestHashMap(this), get, this->basicItemData->IMAGE);
            if (HttpFileUploadUtil_isValid(HttpFileUploadUtil_getInstance(), anyType)) {
                FileItem* fileItem = ((FileItem*) anyType);
                const char* fileName = FileItem_getName(fileItem);
                const char* fileItemFieldName = FileItem_getFieldName(fileItem);
                int64_t size = FileItem_getSize(fileItem);
                AddFileValidationView_validationInfo(this, stringBuffer, fileName, fileItemFieldName, size);
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
        if (size > fileData->MINIMAGEFILESIZE) {
            if (size < fileData->MAXIMAGEFILESIZE) {
                if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                    return false;
                } else {
                    AbPathData* pathData = AbPathData_getInstance();
                    const char* extension = AbPathData_getExtension(pathData, fileName);
                    UploadMediaSingleton* uploadMedia = UploadMediaSingleton_getInstance();
                    if (!UploadMediaSingleton_isWriterSupported(uploadMedia, extension) && !UploadMediaSingleton_isReaderSupported(uploadMedia, extension)) {
                        return false;
                    }
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
            AddFileValidationView_processImageFiles(this);
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "File Size To Small: ");
                StringMaker_appendlong(stringBuffer, size);
                StringMaker_append(stringBuffer, ">");
                StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINIMAGEFILESIZE));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->IS_VALID);
            }
            return false;
        }
        return true;
}


// Java overloaded method: C needs a different name
static void AddFileValidationView_validationInfo(AddFileValidationView* this, StringMaker* stringBuffer, const char* fileName, const char* fileItemFieldName, int64_t size) {
        FileData* fileData = FileData_getInstance();
        if (size > fileData->MINIMAGEFILESIZE) {
            if (strcmp(fileItemFieldName, this->basicItemData->IMAGE) == 0) {
                if (size < fileData->MAXIMAGEFILESIZE) {
                    if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), fileName, fileData->MINLEN, fileData->MAXLEN)) {
                        StringMaker_append(stringBuffer, "FileName must be >");
                        StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINLEN));
                        StringMaker_append(stringBuffer, " and <");
                        StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXLEN));
                        StringMaker_append(stringBuffer, "<br/>");
                    } else {
                        AbPathData* pathData = AbPathData_getInstance();
                        const char* extension = AbPathData_getExtension(pathData, fileName);
                        UploadMediaSingleton* uploadMedia = UploadMediaSingleton_getInstance();
                        if (!UploadMediaSingleton_isWriterSupported(uploadMedia, extension) && !UploadMediaSingleton_isReaderSupported(uploadMedia, extension)) {
                            StringMaker_append(stringBuffer, "Image type: ");
                            StringMaker_append(stringBuffer, extension);
                            StringMaker_append(stringBuffer, " not supported.<br />");
                        }
                    }
                } else {
                    StringMaker_append(stringBuffer, "Image File Is To Large. ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINIMAGEFILESIZE));
                    StringMaker_append(stringBuffer, " < > ");
                    StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXIMAGEFILESIZE));
                    StringMaker_append(stringBuffer, "<br/>");
                }
            }
        } else {
            StringMaker_append(stringBuffer, "Image File Is To Small. ");
            StringMaker_appendint(stringBuffer, ((int32_t) fileData->MINIMAGEFILESIZE));
            StringMaker_append(stringBuffer, " < > ");
            StringMaker_appendint(stringBuffer, ((int32_t) fileData->MAXIMAGEFILESIZE));
            StringMaker_append(stringBuffer, "<br/>");
        }
}


// throws Exception
TransformInfoInterface* AddFileValidationView_getTransformInfoInterface(AddFileValidationView* this) {
        return InventoryItemView_getTransformInfoInterface((&this->base));
}

