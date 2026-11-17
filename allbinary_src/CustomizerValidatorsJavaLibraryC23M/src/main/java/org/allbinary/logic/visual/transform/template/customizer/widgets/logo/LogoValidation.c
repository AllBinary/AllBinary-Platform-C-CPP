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
// package org.allbinary.logic.visual.transform.template.customizer.widgets.logo

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/HttpRequestUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/Validation.h"
#include "org/allbinary/logic/io/file/FileData.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/apache/commons/fileupload/FileItem.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct LogoValidation LogoValidation;
struct LogoValidation {
    Validation base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    FileItem* logoFileItem;
    AbPath* logoAbPath;
    const char* logoFile;
    bool isFile;
};


LogoValidation* LogoValidation_new(void);

void LogoValidation_init(LogoValidation* this);

LogoValidation* LogoValidation_new1(Node* node);
void LogoValidation_init1(LogoValidation* this, Node* node);

LogoValidation* LogoValidation_new1(HashMap* hashMap);
void LogoValidation_init1(LogoValidation* this, HashMap* hashMap);
void LogoValidation_getFormData(LogoValidation* this, HashMap* hashMap);
bool LogoValidation_isValid(LogoValidation* this);
const char* LogoValidation_validationInfo(LogoValidation* this);
Document* LogoValidation_toValidationInfoDoc(LogoValidation* this);
Node* LogoValidation_toValidationInfoNode(LogoValidation* this, Document* document);
HashMap* LogoValidation_toHashMap(LogoValidation* this);
Node* LogoValidation_toXmlNode(LogoValidation* this, Document* document);
void LogoValidation_processLogoFile(LogoValidation* this);

static void LogoValidation_initFields(LogoValidation* this) {
    this->logUtil = LogUtil_getInstance();
    this->logoFileItem = nullptr;
    
    
    
}


void LogoValidation_init(LogoValidation* this) {
    Validation_init(&this->base);
    LogoValidation_initFields(this);
        this->isFile = false;
        this->logoAbPath = nullptr;
        this->logoFile = nullptr;
}

LogoValidation* LogoValidation_new(void) {
    LogoValidation* this = calloc(1, sizeof(LogoValidation));
    LogoValidation_init(this);
    return this;
}


void LogoValidation_init1(LogoValidation* this, Node* node) {
    Validation_init(&this->base);
    LogoValidation_initFields(this);
        this->isFile = false;
        this->logoAbPath = AbPath_new(JAVA_CALL(DomSearchHelper_getNode(LogoData_getInstance()->IMAGEPATH, Node_getChildNodes(node)), getNodeValue), StringUtil_getInstance()->EMPTY_STRING);
        this->logoFile = JAVA_CALL(DomSearchHelper_getNode(LogoData_getInstance()->IMAGEFILENAME, Node_getChildNodes(node)), getNodeValue);
}

LogoValidation* LogoValidation_new1(Node* node) {
    LogoValidation* this = calloc(1, sizeof(LogoValidation));
    LogoValidation_init1(this, node);
    return this;
}


void LogoValidation_init1(LogoValidation* this, HashMap* hashMap) {
    Validation_init(&this->base);
    LogoValidation_initFields(this);
        this->isFile = true;
        LogoValidation_getFormData(this, hashMap);
}

LogoValidation* LogoValidation_new1(HashMap* hashMap) {
    LogoValidation* this = calloc(1, sizeof(LogoValidation));
    LogoValidation_init1(this, hashMap);
    return this;
}


// throws Exception
void LogoValidation_getFormData(LogoValidation* this, HashMap* hashMap) {
        this->logoFileItem = ((FileItem*) HashMap_get(hashMap, LogoData_getInstance()->IMAGE));
        this->logoAbPath = AbPath_new(((const char*) HashMap_get(hashMap, LogoData_getInstance()->IMAGEPATH)), StringUtil_getInstance()->EMPTY_STRING);
        if (this->logoFileItem != nullptr) {
            this->logoFile = HttpRequestUtil_generateFileName(HttpRequestUtil_getInstance(), FileItem_getName(this->logoFileItem));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "HashMap: ");
            StringMaker_append(stringBuffer, HashMap_toString(hashMap));
            StringMaker_append(stringBuffer, "\nLogoFileName: ");
            StringMaker_append(stringBuffer, this->logoFile);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "getFormData()");
        }
}


bool LogoValidation_isValid(LogoValidation* this) {
        JAVA_TRY {
            bool valid = true;
            FileData* fileData = FileData_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "LogoValidation", this, this->commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), AbPath_toString(this->logoAbPath), 0, 512)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("logoPath is invalid: ", AbPath_toString(this->logoAbPath)), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->logoFile, fileData->MINLEN, fileData->MAXLEN)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                    LogUtil_putF(this->logUtil, java_concat("logoFile is invalid: ", this->logoFile), this, this->commonStrings->IS_VALID);
                }
                return false;
            }
            if (this->isFile) {
                if (this->logoFileItem == nullptr) {
                    return false;
                }
                if (FileItem_getSize(this->logoFileItem) > fileData->MAXIMAGEFILESIZE || FileItem_getSize(this->logoFileItem) < fileData->MINIMAGEFILESIZE) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Image File Is Not The Right Size. ", java_string_of(fileData->MINIMAGEFILESIZE)), "< > "), java_string_of(fileData->MAXIMAGEFILESIZE)), this, this->commonStrings->IS_VALID);
                    }
                    return false;
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Logo Validation: ", java_string_of(valid)), this, this->commonStrings->IS_VALID);
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* LogoValidation_validationInfo(LogoValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Logo is not valid.");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* LogoValidation_toValidationInfoDoc(LogoValidation* this) {
        return nullptr;
}


Node* LogoValidation_toValidationInfoNode(LogoValidation* this, Document* document) {
        return nullptr;
}


HashMap* LogoValidation_toHashMap(LogoValidation* this) {
        StringUtil* stringUtil = StringUtil_getInstance();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, LogoData_getInstance()->IMAGE, stringUtil->EMPTY_STRING);
        if (this->logoFile != nullptr) {
            HashMap_put(hashMap, LogoData_getInstance()->IMAGEPATH, AbPath_toString(this->logoAbPath));
            HashMap_put(hashMap, LogoData_getInstance()->IMAGEFILENAME, this->logoFile);
        } else {
            HashMap_put(hashMap, LogoData_getInstance()->IMAGEPATH, nullptr);
            HashMap_put(hashMap, LogoData_getInstance()->IMAGEFILENAME, this->logoFile);
        }
        return hashMap;
}


// throws Exception
Node* LogoValidation_toXmlNode(LogoValidation* this, Document* document) {
        HashMap* hashMap = LogoValidation_toHashMap(this);
        return ModDomHelper_createNameValueNodes(document, LogoData_getInstance()->NAME, hashMap);
}


// throws Exception
void LogoValidation_processLogoFile(LogoValidation* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Processing logoFile: ");
            StringMaker_append(stringBuffer, AbPath_toString(this->logoAbPath));
            StringMaker_append(stringBuffer, this->logoFile);
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "processLogoFile()");
        }
        LogoImageFileUtil_saveFiles(LogoImageFileUtil_new(this->logoAbPath, this->logoFile), this->logoFileItem);
}

