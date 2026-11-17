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
// package workflows.template.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct Properties Properties;
struct Properties {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* propertiesHashMap;
};


Properties* Properties_new(void);

void Properties_init(Properties* this);
HashMap* Properties_getPropertiesHashMap(Properties* this);
int32_t Properties_doEndTag(Properties* this);

static void Properties_initFields(Properties* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void Properties_init(Properties* this) {
    Properties_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, "Start/Tag", this, this->commonStrings->CONSTRUCTOR);
        }
        this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
}

Properties* Properties_new(void) {
    Properties* this = calloc(1, sizeof(Properties));
    Properties_init(this);
    return this;
}


HashMap* Properties_getPropertiesHashMap(Properties* this) {
        return this->propertiesHashMap;
}


int32_t Properties_doEndTag(Properties* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, "Tag Ended", this, "doEndTag");
        }
        this->propertiesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return TagSupport_EVAL_PAGE;
}

