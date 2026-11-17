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
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "tags/CommandTag.h"

typedef struct PropertiesTag PropertiesTag;
struct PropertiesTag {
    CommandTag base;
    LogUtil* logUtil;
    HashMap* propertiesHashMap;
};


PropertiesTag* PropertiesTag_new(void);

void PropertiesTag_init(PropertiesTag* this);
HashMap* PropertiesTag_getPropertiesHashMap(PropertiesTag* this);
int32_t PropertiesTag_doEndTag(PropertiesTag* this);

static void PropertiesTag_initFields(PropertiesTag* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void PropertiesTag_init(PropertiesTag* this) {
    CommandTag_init(&this->base);
    PropertiesTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
        this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
}

PropertiesTag* PropertiesTag_new(void) {
    PropertiesTag* this = calloc(1, sizeof(PropertiesTag));
    PropertiesTag_init(this);
    return this;
}


HashMap* PropertiesTag_getPropertiesHashMap(PropertiesTag* this) {
        return this->propertiesHashMap;
}


int32_t PropertiesTag_doEndTag(PropertiesTag* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, "Tag Ended", this, "doEndTag");
        }
        this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return CommandTag_EVAL_PAGE;
}

