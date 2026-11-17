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
// package views.business.context.modules.storefront.customizer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct StoreCustomizerComponentUtil StoreCustomizerComponentUtil;
struct StoreCustomizerComponentUtil {
    LogUtil* logUtil;
};

static StoreCustomizerComponentUtil* StoreCustomizerComponentUtil_instance;

StoreCustomizerComponentUtil* StoreCustomizerComponentUtil_new(void);
StoreCustomizerComponentUtil* StoreCustomizerComponentUtil_getInstance(void);

void StoreCustomizerComponentUtil_init(StoreCustomizerComponentUtil* this);
const char* StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);
static void StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, BasicArrayList* allViewsToBeModifiedVector);

// Static fields with runtime initializers: call this once at startup
void StoreCustomizerComponentUtil_staticInit(void) {
    StoreCustomizerComponentUtil_instance = StoreCustomizerComponentUtil_new();
}

static void StoreCustomizerComponentUtil_initFields(StoreCustomizerComponentUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


StoreCustomizerComponentUtil* StoreCustomizerComponentUtil_getInstance(void) {
        return StoreCustomizerComponentUtil_instance;
}


void StoreCustomizerComponentUtil_init(StoreCustomizerComponentUtil* this) {
    StoreCustomizerComponentUtil_initFields(this);
}

StoreCustomizerComponentUtil* StoreCustomizerComponentUtil_new(void) {
    StoreCustomizerComponentUtil* this = calloc(1, sizeof(StoreCustomizerComponentUtil));
    StoreCustomizerComponentUtil_init(this);
    return this;
}


// throws Exception
const char* StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("Generating Modified Views For: ", TransformInfoInterface_getName(transformInfoInterface)), this, "generateModifiedViews()");
        }
        CustomizerUtil* customizerUtil = CustomizerUtil_getInstance();
        BasicArrayList* allCustomizedViews = CustomizerUtil_getTransformInfoObjectConfigGroupComponentNodes(customizerUtil, transformInfoInterface);
        int32_t size = BasicArrayList_size(allCustomizedViews);
        for (int32_t index = 0; index < size; index++) {
            TransformInfo* nextTransformInfoInterface = ((TransformInfo*) BasicArrayList_get(allCustomizedViews, index));
            BasicArrayList* allViewsToBeModified = CustomizerUtil_getTransformInfoObjectConfigComponentNodesToCustomize(customizerUtil, transformInfoInterface, nextTransformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("View or component that was modified by a Customizer: ", TransformInfo_getName(nextTransformInfoInterface)), this, "generateModifiedViews()");
            }
            StoreCustomizerComponentUtil_generate(this, abeClientInformation, transformInfoInterface, allViewsToBeModified);
        }
        return StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
// Java overloaded method: C needs a different name
static void StoreCustomizerComponentUtil_generate(StoreCustomizerComponentUtil* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, BasicArrayList* allViewsToBeModifiedVector) {
        CustomizerUtil* customizerUtil = CustomizerUtil_getInstance();
        int32_t size = BasicArrayList_size(allViewsToBeModifiedVector);
        for (int32_t index = 0; index < size; index++) {
            TransformInfo* nextTransformInfoInterface = ((TransformInfo*) BasicArrayList_get(allViewsToBeModifiedVector, index));
            TransformInfoInterface* specifiedTransformInfoInterface = CustomizerUtil_getTransformInfoInterfaceToCustomize(customizerUtil, transformInfoInterface, nextTransformInfoInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Retrieved: ", TransformInfoInterface_getName(specifiedTransformInfoInterface)), this, "generateModifiedViews()");
            }
            TransformGeneratorUtil_generate(TransformGeneratorUtil_getInstance(), abeClientInformation, nextTransformInfoInterface, specifiedTransformInfoInterface);
        }
}

