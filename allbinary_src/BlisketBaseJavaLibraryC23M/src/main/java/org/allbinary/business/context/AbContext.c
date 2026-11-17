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
// package org.allbinary.business.context

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AbContext AbContext;
struct AbContext {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* propertiesHashMap;
    PageContext* pageContext;
};


AbContext* AbContext_new(HashMap* propertiesHashMap, PageContext* pageContext);

void AbContext_init(AbContext* this, HashMap* propertiesHashMap, PageContext* pageContext);
WeblisketSessionInterface* AbContext_getWeblisketSession(AbContext* this);
PageContext* AbContext_getPageContext(AbContext* this);
HashMap* AbContext_getPropertiesHashMap(AbContext* this);

static void AbContext_initFields(AbContext* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void AbContext_init(AbContext* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    AbContext_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Properties HashMap: ", HashMap_toString(propertiesHashMap)), this, this->commonStrings->CONSTRUCTOR);
        }
        this->propertiesHashMap = propertiesHashMap;
        this->pageContext = pageContext;
}

AbContext* AbContext_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    AbContext* this = calloc(1, sizeof(AbContext));
    AbContext_init(this, propertiesHashMap, pageContext);
    return this;
}


WeblisketSessionInterface* AbContext_getWeblisketSession(AbContext* this) {
        return WeblisketSession_new(this->propertiesHashMap, this->pageContext);
}


PageContext* AbContext_getPageContext(AbContext* this) {
        return this->pageContext;
}


HashMap* AbContext_getPropertiesHashMap(AbContext* this) {
        return this->propertiesHashMap;
}

