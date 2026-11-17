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
// package org.allbinary.logic.visual.transform.info

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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformInfoHttpComposite TransformInfoHttpComposite;
struct TransformInfoHttpComposite {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TransformInfoHttpInterface* transformInfoInterface;
};


TransformInfoHttpComposite* TransformInfoHttpComposite_new(TransformInfoInterface* transformInfoInterface);

void TransformInfoHttpComposite_init(TransformInfoHttpComposite* this, TransformInfoInterface* transformInfoInterface);
TransformInfoInterface* TransformInfoHttpComposite_getTransformInfoInterface(TransformInfoHttpComposite* this);
WeblisketSession* TransformInfoHttpComposite_getWeblisketSession(TransformInfoHttpComposite* this);
PageContext* TransformInfoHttpComposite_getPageContext(TransformInfoHttpComposite* this);
HashMap* TransformInfoHttpComposite_getPropertiesHashMap(TransformInfoHttpComposite* this);

static void TransformInfoHttpComposite_initFields(TransformInfoHttpComposite* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void TransformInfoHttpComposite_init(TransformInfoHttpComposite* this, TransformInfoInterface* transformInfoInterface) {
    TransformInfoHttpComposite_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("View Name: ", TransformInfoHttpInterface_getName(transformInfoInterface)), this, this->commonStrings->CONSTRUCTOR);
        }
        this->transformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
}

TransformInfoHttpComposite* TransformInfoHttpComposite_new(TransformInfoInterface* transformInfoInterface) {
    TransformInfoHttpComposite* this = calloc(1, sizeof(TransformInfoHttpComposite));
    TransformInfoHttpComposite_init(this, transformInfoInterface);
    return this;
}


// throws Exception
TransformInfoInterface* TransformInfoHttpComposite_getTransformInfoInterface(TransformInfoHttpComposite* this) {
        return this->transformInfoInterface;
}


WeblisketSession* TransformInfoHttpComposite_getWeblisketSession(TransformInfoHttpComposite* this) {
        return WeblisketSession_new(TransformInfoHttpComposite_getPropertiesHashMap(this), TransformInfoHttpComposite_getPageContext(this));
}


PageContext* TransformInfoHttpComposite_getPageContext(TransformInfoHttpComposite* this) {
        return TransformInfoHttpInterface_getPageContext(this->transformInfoInterface);
}


HashMap* TransformInfoHttpComposite_getPropertiesHashMap(TransformInfoHttpComposite* this) {
        return TransformInfoHttpInterface_getPropertiesHashMap(this->transformInfoInterface);
}

