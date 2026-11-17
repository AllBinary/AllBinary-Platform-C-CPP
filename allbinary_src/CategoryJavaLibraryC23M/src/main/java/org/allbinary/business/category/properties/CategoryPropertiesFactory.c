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
// package org.allbinary.business.category.properties

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"

typedef struct CategoryPropertiesFactory CategoryPropertiesFactory;
struct CategoryPropertiesFactory {
    CategoryPropertiesFactoryInterface CategoryPropertiesFactoryInterface_interface;
    LogUtil* logUtil;
    CategoryPropertiesInterface* categoryPropertiesInterface;
};


CategoryPropertiesFactory* CategoryPropertiesFactory_new(const char* name);

void CategoryPropertiesFactory_init(CategoryPropertiesFactory* this, const char* name);

CategoryPropertiesFactory* CategoryPropertiesFactory_new1(Node* node);
void CategoryPropertiesFactory_init1(CategoryPropertiesFactory* this, Node* node);

CategoryPropertiesFactory* CategoryPropertiesFactory_new1(HashMap* categoryPropertiesHashMap);
void CategoryPropertiesFactory_init1(CategoryPropertiesFactory* this, HashMap* categoryPropertiesHashMap);
CategoryPropertiesInterface* CategoryPropertiesFactory_getInstance(CategoryPropertiesFactory* this);

static void CategoryPropertiesFactory_initFields(CategoryPropertiesFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CategoryPropertiesFactory_init(CategoryPropertiesFactory* this, const char* name) {
    CategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) CategoryProperties_new(name));
}

CategoryPropertiesFactory* CategoryPropertiesFactory_new(const char* name) {
    CategoryPropertiesFactory* this = calloc(1, sizeof(CategoryPropertiesFactory));
    CategoryPropertiesFactory_init(this, name);
    return this;
}


void CategoryPropertiesFactory_init1(CategoryPropertiesFactory* this, Node* node) {
    CategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) CategoryProperties_new(node));
}

CategoryPropertiesFactory* CategoryPropertiesFactory_new1(Node* node) {
    CategoryPropertiesFactory* this = calloc(1, sizeof(CategoryPropertiesFactory));
    CategoryPropertiesFactory_init1(this, node);
    return this;
}


void CategoryPropertiesFactory_init1(CategoryPropertiesFactory* this, HashMap* categoryPropertiesHashMap) {
    CategoryPropertiesFactory_initFields(this);
        this->categoryPropertiesInterface = ((CategoryPropertiesInterface*) CategoryProperties_new(categoryPropertiesHashMap));
}

CategoryPropertiesFactory* CategoryPropertiesFactory_new1(HashMap* categoryPropertiesHashMap) {
    CategoryPropertiesFactory* this = calloc(1, sizeof(CategoryPropertiesFactory));
    CategoryPropertiesFactory_init1(this, categoryPropertiesHashMap);
    return this;
}


CategoryPropertiesInterface* CategoryPropertiesFactory_getInstance(CategoryPropertiesFactory* this) {
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

