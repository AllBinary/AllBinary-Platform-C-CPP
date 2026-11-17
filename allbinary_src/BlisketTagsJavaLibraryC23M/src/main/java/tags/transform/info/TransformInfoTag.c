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
// package tags.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/OutputTypeData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "taghelpers/transform/info/TransformInfoRequestHelperFactory.h"
#include "tags/ModifyTag.h"

typedef struct TransformInfoTag TransformInfoTag;
struct TransformInfoTag {
    ModifyTag base;
    LogUtil* logUtil;
    const char* name;
    const char* storeName;
    const char* objectFile;
    const char* anyType;
    const char* objectConfigFile;
    const char* objectConfig;
    const char* templateFile;
    const char* template;
    const char* dataFile;
    const char* data;
    const char* type;
};


TransformInfoTag* TransformInfoTag_new(void);

void TransformInfoTag_init(TransformInfoTag* this);

TransformInfoTag* TransformInfoTag_new1(TagHelperFactoryInterface* tagHelperFactoryInterface);
void TransformInfoTag_init1(TransformInfoTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
void TransformInfoTag_setName(TransformInfoTag* this, const char* value);
void TransformInfoTag_setStoreName(TransformInfoTag* this, const char* value);
void TransformInfoTag_setObjectFile(TransformInfoTag* this, const char* value);
void TransformInfoTag_setObject(TransformInfoTag* this, const char* value);
void TransformInfoTag_setTemplateFile(TransformInfoTag* this, const char* value);
void TransformInfoTag_setTemplate(TransformInfoTag* this, const char* value);
void TransformInfoTag_setDataFile(TransformInfoTag* this, const char* value);
void TransformInfoTag_setData(TransformInfoTag* this, const char* value);
void TransformInfoTag_setObjectConfigFile(TransformInfoTag* this, const char* value);
void TransformInfoTag_setObjectConfig(TransformInfoTag* this, const char* value);
void TransformInfoTag_setType(TransformInfoTag* this, const char* value);
const char* TransformInfoTag_getName(TransformInfoTag* this);
const char* TransformInfoTag_getObjectFile(TransformInfoTag* this);
int32_t TransformInfoTag_doStartTag(TransformInfoTag* this);

static void TransformInfoTag_initFields(TransformInfoTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->name = nullptr;
    this->storeName = nullptr;
    this->objectFile = nullptr;
    this->anyType = nullptr;
    this->objectConfigFile = nullptr;
    this->objectConfig = nullptr;
    this->templateFile = nullptr;
    this->template = nullptr;
    this->dataFile = nullptr;
    this->data = nullptr;
    this->type = nullptr;
}


void TransformInfoTag_init(TransformInfoTag* this) {
        ModifyTag_init(&this->base, TransformInfoRequestHelperFactory_new());
        TransformInfoTag_initFields(this);
}

TransformInfoTag* TransformInfoTag_new(void) {
    TransformInfoTag* this = calloc(1, sizeof(TransformInfoTag));
    TransformInfoTag_init(this);
    return this;
}


void TransformInfoTag_init1(TransformInfoTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
        ModifyTag_init(&this->base, tagHelperFactoryInterface);
        TransformInfoTag_initFields(this);
}

TransformInfoTag* TransformInfoTag_new1(TagHelperFactoryInterface* tagHelperFactoryInterface) {
    TransformInfoTag* this = calloc(1, sizeof(TransformInfoTag));
    TransformInfoTag_init1(this, tagHelperFactoryInterface);
    return this;
}


void TransformInfoTag_setName(TransformInfoTag* this, const char* value) {
        this->name = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->NAME, this->name);
}


void TransformInfoTag_setStoreName(TransformInfoTag* this, const char* value) {
        this->storeName = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, StoreFrontData_getInstance()->NAME, this->storeName);
}


void TransformInfoTag_setObjectFile(TransformInfoTag* this, const char* value) {
        this->objectFile = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->OBJECTFILENAME, this->objectFile);
}


void TransformInfoTag_setObject(TransformInfoTag* this, const char* value) {
        this->anyType = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->OBJECT, this->anyType);
}


void TransformInfoTag_setTemplateFile(TransformInfoTag* this, const char* value) {
        this->templateFile = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->TEMPLATEFILENAME, this->templateFile);
}


void TransformInfoTag_setTemplate(TransformInfoTag* this, const char* value) {
        this->template = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->TEMPLATE, this->template);
}


void TransformInfoTag_setDataFile(TransformInfoTag* this, const char* value) {
        this->dataFile = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->DATAFILENAME, this->dataFile);
}


void TransformInfoTag_setData(TransformInfoTag* this, const char* value) {
        this->data = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->DATA, this->data);
}


void TransformInfoTag_setObjectConfigFile(TransformInfoTag* this, const char* value) {
        this->objectConfigFile = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->OBJECTCONFIGFILENAME, this->objectConfigFile);
}


void TransformInfoTag_setObjectConfig(TransformInfoTag* this, const char* value) {
        this->objectConfig = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->OBJECTCONFIG, this->objectConfig);
}


void TransformInfoTag_setType(TransformInfoTag* this, const char* value) {
        this->type = value;
        JAVA_CALL(TransformInfoTag_getPropertiesHashMap(this), put, OutputTypeData_getInstance()->NAME, this->type);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, java_concat("TransformInfoTag type set: ", this->type), this, "setType");
        }
}


const char* TransformInfoTag_getName(TransformInfoTag* this) {
        return this->name;
}


const char* TransformInfoTag_getObjectFile(TransformInfoTag* this) {
        return this->objectFile;
}


// throws JspTagException
int32_t TransformInfoTag_doStartTag(TransformInfoTag* this) {
        JAVA_TRY {
            return ModifyTag_doStartTag((&this->base));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return ModifyTag_SKIP_BODY;
        } JAVA_END_TRY;
}

