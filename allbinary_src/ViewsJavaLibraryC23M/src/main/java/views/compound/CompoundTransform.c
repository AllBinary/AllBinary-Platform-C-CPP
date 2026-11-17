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
// package views.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "javax/xml/transform/URIResolver.h"
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"
#include "org/allbinary/data/tree/dom/StoreUriResolver.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/visual/transform/AbTransformer.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/compound/objectConfig/CompoundContextTransformInfoObjectConfig.h"

typedef struct CompoundTransform CompoundTransform;
struct CompoundTransform {
    AbTransformer base;
    LogUtil* logUtil;
    AbeClientInformationInterface* abeClientInformation;
};


CompoundTransform* CompoundTransform_new(TransformInfoInterface* transformInfoInterface);

void CompoundTransform_init(CompoundTransform* this, TransformInfoInterface* transformInfoInterface);

static void CompoundTransform_initFields(CompoundTransform* this) {
    this->logUtil = LogUtil_getInstance();
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
}


void CompoundTransform_init(CompoundTransform* this, TransformInfoInterface* transformInfoInterface) {
        AbTransformer_init(&this->base, transformInfoInterface);
        CompoundTransform_initFields(this);
        CompoundTransform_setURIResolver(this, ((URIResolver*) StoreUriResolver_new(CompoundTransform_getTransformInfoInterface(this), ((BasicUriResolver*) CompoundTransform_getURIResolver(this)))));
        CompoundContextTransformInfoObjectConfig* objectConfig = CompoundContextTransformInfoObjectConfig_new(this->abeClientInformation, CompoundTransform_getTransformInfoInterface(this), JAVA_CALL(JAVA_CALL(CompoundTransform_getTransformInfoInterface(this), getObjectConfigInterface), toXmlDoc));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("\nObjectConfig: \n", CompoundContextTransformInfoObjectConfig_toString(objectConfig)), this, this->commonStrings->CONSTRUCTOR);
        }
        InputStream* templateInputStream = CompoundContextTransformInfoObjectConfig_createInputStream(objectConfig);
        CompoundTransform_setInputStream(this, templateInputStream);
}

CompoundTransform* CompoundTransform_new(TransformInfoInterface* transformInfoInterface) {
    CompoundTransform* this = calloc(1, sizeof(CompoundTransform));
    CompoundTransform_init(this, transformInfoInterface);
    return this;
}

