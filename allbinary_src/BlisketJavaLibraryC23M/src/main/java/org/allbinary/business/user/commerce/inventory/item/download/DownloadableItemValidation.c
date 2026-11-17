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
// package org.allbinary.business.user.commerce.inventory.item.download

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct DownloadableItemValidation DownloadableItemValidation;
struct DownloadableItemValidation {
    Validation base;
    LogUtil* logUtil;
    DownloadableItem* downloadableItem;
};


DownloadableItemValidation* DownloadableItemValidation_new(DownloadableItem* downloadableItem);

void DownloadableItemValidation_init(DownloadableItemValidation* this, DownloadableItem* downloadableItem);
bool DownloadableItemValidation_isValid(DownloadableItemValidation* this);
const char* DownloadableItemValidation_validationInfo(DownloadableItemValidation* this);
Document* DownloadableItemValidation_toValidationInfoDoc(DownloadableItemValidation* this);
Node* DownloadableItemValidation_toValidationInfoNode(DownloadableItemValidation* this, Document* document);

static void DownloadableItemValidation_initFields(DownloadableItemValidation* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void DownloadableItemValidation_init(DownloadableItemValidation* this, DownloadableItem* downloadableItem) {
    Validation_init(&this->base);
    DownloadableItemValidation_initFields(this);
        this->downloadableItem = downloadableItem;
}

DownloadableItemValidation* DownloadableItemValidation_new(DownloadableItem* downloadableItem) {
    DownloadableItemValidation* this = calloc(1, sizeof(DownloadableItemValidation));
    DownloadableItemValidation_init(this, downloadableItem);
    return this;
}


bool DownloadableItemValidation_isValid(DownloadableItemValidation* this) {
        JAVA_TRY {
            if (DownloadableItem_getId(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getId(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getId(this->downloadableItem), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (DownloadableItem_getId(this->downloadableItem) != nullptr && !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), DownloadableItem_getId(this->downloadableItem))) {
                return false;
            }
            if (DownloadableItem_getSystem(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getSystem(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getSystem(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (DownloadableItem_getPlatform(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getPlatform(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getPlatform(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (DownloadableItem_getSpecialName(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getSpecialName(this->downloadableItem), length) < 0 || JAVA_CALL(DownloadableItem_getSpecialName(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (DownloadableItem_getVersion(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getVersion(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getVersion(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (DownloadableItem_getChanges(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getChanges(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getChanges(this->downloadableItem), length) > AbSqlData_MAXBLOB) {
                return false;
            }
            if (DownloadableItem_getSize(this->downloadableItem) == nullptr) {
                return false;
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getSize(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    return false;
                }
            }
            if (DownloadableItem_getValidTime(this->downloadableItem) == nullptr) {
                return false;
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getValidTime(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    return false;
                }
            }
            if (DownloadableItem_getRetries(this->downloadableItem) == nullptr) {
                return false;
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getRetries(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    return false;
                }
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* DownloadableItemValidation_validationInfo(DownloadableItemValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (DownloadableItem_getId(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getId(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getId(this->downloadableItem), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, "Id is invalid. Must be number < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXNUM));
                StringMaker_append(stringBuffer, " and > 0 digits.<br/>");
            }
            if (DownloadableItem_getId(this->downloadableItem) != nullptr && !StringValidationUtil_isNumber(StringValidationUtil_getInstance(), DownloadableItem_getId(this->downloadableItem))) {
                StringMaker_append(stringBuffer, "Id is invalid. Must be > 0.<br/>");
            }
            if (DownloadableItem_getSystem(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getSystem(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getSystem(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, "System value is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXSTRING));
                StringMaker_append(stringBuffer, " and > 0 characters long.<br/>");
            }
            if (DownloadableItem_getPlatform(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getPlatform(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getPlatform(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, "Platform value is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXSTRING));
                StringMaker_append(stringBuffer, " and > 0 characters long.<br/>");
            }
            if (DownloadableItem_getSpecialName(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getSpecialName(this->downloadableItem), length) < 0 || JAVA_CALL(DownloadableItem_getSpecialName(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, "Special Name value is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXSTRING));
                StringMaker_append(stringBuffer, " and > 0 characters long.<br/>");
            }
            if (DownloadableItem_getVersion(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getVersion(this->downloadableItem), length) < 1 || JAVA_CALL(DownloadableItem_getVersion(this->downloadableItem), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, "Version value is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXSTRING));
                StringMaker_append(stringBuffer, " and > 0 characters long.<br/>");
            }
            if (DownloadableItem_getChanges(this->downloadableItem) == nullptr || JAVA_CALL(DownloadableItem_getChanges(this->downloadableItem), length) < 0 || JAVA_CALL(DownloadableItem_getChanges(this->downloadableItem), length) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, "Changes value is invalid. Must be < ");
                StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXBLOB));
                StringMaker_append(stringBuffer, " and >= 0 characters long.<br/>");
            }
            if (DownloadableItem_getSize(this->downloadableItem) == nullptr) {
                StringMaker_append(stringBuffer, "File Size is null");
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getSize(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    StringMaker_append(stringBuffer, "File Size is invalid. Must be number < ");
                    StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXNUM));
                    StringMaker_append(stringBuffer, " and > 0 digits.<br/>");
                }
            }
            if (DownloadableItem_getValidTime(this->downloadableItem) == nullptr) {
                StringMaker_append(stringBuffer, "Valid Time is null");
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getValidTime(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    StringMaker_append(stringBuffer, "Valid Time is invalid. Must be number < ");
                    StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXNUM));
                    StringMaker_append(stringBuffer, " and > 0 digits.<br/>");
                }
            }
            if (DownloadableItem_getRetries(this->downloadableItem) == nullptr) {
                StringMaker_append(stringBuffer, "Retries is null");
            } else {
                const char* size = JAVA_CALL(DownloadableItem_getRetries(this->downloadableItem), toString);
                if (((int32_t) strlen(size)) < 1 || ((int32_t) strlen(size)) > AbSqlData_MAXNUM) {
                    StringMaker_append(stringBuffer, "Retries is invalid. Must be number < ");
                    StringMaker_appendint(stringBuffer, ((int32_t) AbSqlData_MAXNUM));
                    StringMaker_append(stringBuffer, " and > 0 digits.<br/>");
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* DownloadableItemValidation_toValidationInfoDoc(DownloadableItemValidation* this) {
        return nullptr;
}


Node* DownloadableItemValidation_toValidationInfoNode(DownloadableItemValidation* this, Document* document) {
        return nullptr;
}

