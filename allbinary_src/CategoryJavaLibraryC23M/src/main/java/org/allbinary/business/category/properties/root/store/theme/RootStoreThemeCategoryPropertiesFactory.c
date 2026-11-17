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
// package org.allbinary.business.category.properties.root.store.theme

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

typedef struct RootStoreThemeCategoryPropertiesFactory RootStoreThemeCategoryPropertiesFactory;
struct RootStoreThemeCategoryPropertiesFactory {
    CategoryPropertiesFactoryInterface CategoryPropertiesFactoryInterface_interface;
    LogUtil* logUtil;
    CategoryPropertiesInterface* categoryPropertiesInterface;
};


RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new(TransformInfoInterface* transformInfoInterface);

void RootStoreThemeCategoryPropertiesFactory_init(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface);

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath);
void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath);

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, Node* node);
void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, Node* node);

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
CategoryPropertiesInterface* RootStoreThemeCategoryPropertiesFactory_getInstance(RootStoreThemeCategoryPropertiesFactory* this);

static void RootStoreThemeCategoryPropertiesFactory_initFields(RootStoreThemeCategoryPropertiesFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void RootStoreThemeCategoryPropertiesFactory_init(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface) {
    RootStoreThemeCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreThemeCategoryProperties_new(transformInfoInterface));
}

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new(TransformInfoInterface* transformInfoInterface) {
    RootStoreThemeCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreThemeCategoryPropertiesFactory));
    RootStoreThemeCategoryPropertiesFactory_init(this, transformInfoInterface);
    return this;
}


void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
    RootStoreThemeCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreThemeCategoryProperties_new(transformInfoInterface, abPath));
}

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
    RootStoreThemeCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreThemeCategoryPropertiesFactory));
    RootStoreThemeCategoryPropertiesFactory_init2(this, transformInfoInterface, abPath);
    return this;
}


void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreThemeCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreThemeCategoryProperties_new(transformInfoInterface, node));
}

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreThemeCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreThemeCategoryPropertiesFactory));
    RootStoreThemeCategoryPropertiesFactory_init2(this, transformInfoInterface, node);
    return this;
}


void RootStoreThemeCategoryPropertiesFactory_init2(RootStoreThemeCategoryPropertiesFactory* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreThemeCategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) RootStoreThemeCategoryProperties_new(transformInfoInterface, categoryPropertiesHashMap));
}

RootStoreThemeCategoryPropertiesFactory* RootStoreThemeCategoryPropertiesFactory_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreThemeCategoryPropertiesFactory* this = calloc(1, sizeof(RootStoreThemeCategoryPropertiesFactory));
    RootStoreThemeCategoryPropertiesFactory_init2(this, transformInfoInterface, categoryPropertiesHashMap);
    return this;
}


CategoryPropertiesInterface* RootStoreThemeCategoryPropertiesFactory_getInstance(RootStoreThemeCategoryPropertiesFactory* this) {
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

