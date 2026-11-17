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
// package org.allbinary.business.user.commerce.inventory.item

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

typedef struct BasicItemValidation BasicItemValidation;
struct BasicItemValidation {
    Validation base;
    LogUtil* logUtil;
    int32_t MAXWEIGHT;
    int32_t MAXPRICE;
    ItemInterface* itemInterface;
};


BasicItemValidation* BasicItemValidation_new(ItemInterface* itemInterface);

void BasicItemValidation_init(BasicItemValidation* this, ItemInterface* itemInterface);
bool BasicItemValidation_isValid(BasicItemValidation* this);
const char* BasicItemValidation_validationInfo(BasicItemValidation* this);
Document* BasicItemValidation_toValidationInfoDoc(BasicItemValidation* this);
Node* BasicItemValidation_toValidationInfoNode(BasicItemValidation* this, Document* document);

static void BasicItemValidation_initFields(BasicItemValidation* this) {
    this->logUtil = LogUtil_getInstance();
    this->MAXWEIGHT = 14;
    this->MAXPRICE = 14;
    
}


void BasicItemValidation_init(BasicItemValidation* this, ItemInterface* itemInterface) {
    Validation_init(&this->base);
    BasicItemValidation_initFields(this);
        this->itemInterface = itemInterface;
}

BasicItemValidation* BasicItemValidation_new(ItemInterface* itemInterface) {
    BasicItemValidation* this = calloc(1, sizeof(BasicItemValidation));
    BasicItemValidation_init(this, itemInterface);
    return this;
}


bool BasicItemValidation_isValid(BasicItemValidation* this) {
        JAVA_TRY {
            if (ItemInterface_getId(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getId(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getId(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (ItemInterface_getId(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getId(this->itemInterface))) {
                return false;
            }
            if (ItemInterface_getNumber(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getNumber(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getNumber(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getNumber(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getNumber(this->itemInterface))) {
                return false;
            }
            if (ItemInterface_getInBaskets(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getInBaskets(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getInBaskets(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getInBaskets(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getInBaskets(this->itemInterface))) {
                return false;
            }
            if (ItemInterface_getWeight(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getWeight(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getWeight(this->itemInterface), length) > this->MAXWEIGHT) {
                return false;
            }
            if (ItemInterface_getWeight(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getWeight(this->itemInterface))) {
                return false;
            }
            if (ItemInterface_getEnabled(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getEnabled(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getEnabled(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getNewOrUsed(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getNewOrUsed(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getNewOrUsed(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getSummary(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getSummary(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getSummary(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getDescription(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getDescription(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getDescription(this->itemInterface), length) > AbSqlData_MAXBLOB) {
                return false;
            }
            if (ItemInterface_getKeywords(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getKeywords(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getKeywords(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getCategory(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getCategory(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getCategory(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getType(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getType(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getType(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                return false;
            }
            if (ItemInterface_getPrice(this->itemInterface) == nullptr || !JAVA_CALL(ItemInterface_getPrice(this->itemInterface), isValid)) {
                return false;
            }
            if (ItemInterface_getCustoms(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getCustoms(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getCustoms(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getDownloads(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getDownloads(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getDownloads(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getGroups(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getGroups(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getGroups(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getOptions(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getOptions(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getOptions(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getPermissions(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getPermissions(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getPermissions(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            if (ItemInterface_getSpecials(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getSpecials(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getSpecials(this->itemInterface), length) > AbSqlData_MAXNUM) {
                return false;
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* BasicItemValidation_validationInfo(BasicItemValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (ItemInterface_getId(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getId(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getId(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Id is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (ItemInterface_getId(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getId(this->itemInterface))) {
                StringMaker_append(stringBuffer, "Id is invalid. Must be > 0.<br />");
            }
            if (ItemInterface_getNumber(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getNumber(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getNumber(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Number of items is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getNumber(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getNumber(this->itemInterface))) {
                StringMaker_append(stringBuffer, "Number of items value is not a valid number.<br />");
            }
            if (ItemInterface_getInBaskets(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getInBaskets(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getInBaskets(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Number in baskets is invalid. Must be < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getInBaskets(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getInBaskets(this->itemInterface))) {
                StringMaker_append(stringBuffer, "In Baskets value is not a valid number.<br />");
            }
            if (ItemInterface_getWeight(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getWeight(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getWeight(this->itemInterface), length) > this->MAXWEIGHT) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Weight value is invalid. Must be < ", java_string_of(this->MAXWEIGHT)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getWeight(this->itemInterface) != nullptr && !StringValidationUtil_isNumber(stringValidationUtil, ItemInterface_getWeight(this->itemInterface))) {
                StringMaker_append(stringBuffer, "Weight value is not a valid number.<br />");
            }
            if (ItemInterface_getEnabled(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getEnabled(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getEnabled(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("For Sale value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getNewOrUsed(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getNewOrUsed(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getNewOrUsed(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("New Or Used value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getSummary(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getSummary(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getSummary(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Summary value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getDescription(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getDescription(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getDescription(this->itemInterface), length) > AbSqlData_MAXBLOB) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Description value is invalid. Must be < ", java_string_of(AbSqlData_MAXBLOB)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getKeywords(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getKeywords(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getKeywords(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Keywords value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getCategory(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getCategory(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getCategory(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Category value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getType(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getType(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getType(this->itemInterface), length) > AbSqlData_MAXSTRING) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Type value is invalid. Must be < ", java_string_of(AbSqlData_MAXSTRING)), " and > 0 characters long.<br />"));
            }
            if (ItemInterface_getPrice(this->itemInterface) == nullptr || !JAVA_CALL(ItemInterface_getPrice(this->itemInterface), isValid)) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Price value is invalid. Must be < ", java_string_of(this->MAXPRICE)), " and > 0 in length.<br />"));
            }
            if (ItemInterface_getCustoms(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getCustoms(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getCustoms(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Custom items value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getDownloads(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getDownloads(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getDownloads(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Downloadable item value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getGroups(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getGroups(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getGroups(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Group item value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getOptions(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getOptions(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getOptions(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Option item value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getPermissions(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getPermissions(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getPermissions(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Permission item value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            if (ItemInterface_getSpecials(this->itemInterface) == nullptr || JAVA_CALL(ItemInterface_getSpecials(this->itemInterface), length) < 1 || JAVA_CALL(ItemInterface_getSpecials(this->itemInterface), length) > AbSqlData_MAXNUM) {
                StringMaker_append(stringBuffer, java_concat(java_concat("Special item value is invalid. Must be number < ", java_string_of(AbSqlData_MAXNUM)), " and > 0 digits.<br />"));
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* BasicItemValidation_toValidationInfoDoc(BasicItemValidation* this) {
        return nullptr;
}


Node* BasicItemValidation_toValidationInfoNode(BasicItemValidation* this, Document* document) {
        return nullptr;
}

