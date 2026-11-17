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
// package org.allbinary.business.category.properties.root.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"

typedef struct RootStoreCategoryPropertiesFactory RootStoreCategoryPropertiesFactory;
struct RootStoreCategoryPropertiesFactory {
    CategoryPropertiesFactoryInterface CategoryPropertiesFactoryInterface_interface;
    LogUtil* logUtil;
    CategoryPropertiesInterface* categoryPropertiesInterface;
};


RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new(TransformInfoInterface* transformInfoInterface);

void RootStoreCategoryPropertiesFactory_init(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface);

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath);
void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath);

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, Node* node);
void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, Node* node);

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
CategoryPropertiesInterface* RootStoreCategoryPropertiesFactory_getInstance(RootStoreCategoryPropertiesFactory* this);

static void RootStoreCategoryPropertiesFactory_initFields(RootStoreCategoryPropertiesFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void RootStoreCategoryPropertiesFactory_init(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface) {
    RootStoreCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreCategoryProperties_new(transformInfoInterface));
}

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new(TransformInfoInterface* transformInfoInterface) {
    RootStoreCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreCategoryPropertiesFactory));
    RootStoreCategoryPropertiesFactory_init(this, transformInfoInterface);
    return this;
}


void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
    RootStoreCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreCategoryProperties_new(transformInfoInterface, abPath));
}

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
    RootStoreCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreCategoryPropertiesFactory));
    RootStoreCategoryPropertiesFactory_init2(this, transformInfoInterface, abPath);
    return this;
}


void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreCategoryProperties_new(transformInfoInterface, node));
}

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreCategoryPropertiesFactory));
    RootStoreCategoryPropertiesFactory_init2(this, transformInfoInterface, node);
    return this;
}


void RootStoreCategoryPropertiesFactory_init2(RootStoreCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreCategoryProperties_new(transformInfoInterface, categoryPropertiesHashMap));
}

RootStoreCategoryPropertiesFactory* RootStoreCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreCategoryPropertiesFactory));
    RootStoreCategoryPropertiesFactory_init2(this, transformInfoInterface, categoryPropertiesHashMap);
    return this;
}


CategoryPropertiesInterface* RootStoreCategoryPropertiesFactory_getInstance(RootStoreCategoryPropertiesFactory* this) {
        JAVA_TRY {
            return ((CategoryPropertiesInterface*) this->categoryPropertiesInterface);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

