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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/PropertiesTag.h"

typedef struct HelperTag HelperTag;
struct HelperTag {
    PropertiesTag base;
    LogUtil* logUtil;
    TagHelperFactoryInterface* tagHelperFactoryInterface;
    Any* anyType;
};


HelperTag* HelperTag_new(TagHelperFactoryInterface* tagHelperFactoryInterface);

void HelperTag_init(HelperTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
void HelperTag_setHelper(HelperTag* this);
Any* HelperTag_getHelper(HelperTag* this);
int32_t HelperTag_doEndTag(HelperTag* this);

static void HelperTag_initFields(HelperTag* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->anyType = nullptr;
}


void HelperTag_init(HelperTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
    PropertiesTag_init(&this->base);
    HelperTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
        this->tagHelperFactoryInterface = tagHelperFactoryInterface;
}

HelperTag* HelperTag_new(TagHelperFactoryInterface* tagHelperFactoryInterface) {
    HelperTag* this = calloc(1, sizeof(HelperTag));
    HelperTag_init(this, tagHelperFactoryInterface);
    return this;
}


// throws Exception
void HelperTag_setHelper(HelperTag* this) {
        if (this->anyType == nullptr) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, java_concat("Creating TagHelper with: \n", JAVA_CALL(HelperTag_getPropertiesHashMap(this), toString)), this, "doStartTag");
            }
            this->anyType = TagHelperFactoryInterface_getInstance(this->tagHelperFactoryInterface, HelperTag_getPropertiesHashMap(this), this->pageContext);
        }
}


Any* HelperTag_getHelper(HelperTag* this) {
        return this->anyType;
}


int32_t HelperTag_doEndTag(HelperTag* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, "Tag Ended", this, "doEndTag");
        }
        this->anyType = nullptr;
        return PropertiesTag_doEndTag((&this->base));
}

