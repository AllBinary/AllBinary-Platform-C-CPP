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
// package org.allbinary.business.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactory.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"

typedef struct CategoryAbstractFactory CategoryAbstractFactory;
struct CategoryAbstractFactory {
    CategoryFactoryInterface CategoryFactoryInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


CategoryAbstractFactory* CategoryAbstractFactory_new(void);

void CategoryAbstractFactory_init(CategoryAbstractFactory* this);
CategoryInterface* CategoryAbstractFactory_getRootInstance(CategoryAbstractFactory* this);
CategoryInterface* CategoryAbstractFactory_getRootInstance(CategoryAbstractFactory* this, AbPath* categoryAbPath);
CategoryInterface* CategoryAbstractFactory_getRootInstanceFromNode(CategoryAbstractFactory* this, Node* node);
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, const char* categoryName);
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, const char* categoryName);
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, Node* node);
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node);
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap);

static void CategoryAbstractFactory_initFields(CategoryAbstractFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void CategoryAbstractFactory_init(CategoryAbstractFactory* this) {
    CategoryAbstractFactory_initFields(this);
}

CategoryAbstractFactory* CategoryAbstractFactory_new(void) {
    CategoryAbstractFactory* this = calloc(1, sizeof(CategoryAbstractFactory));
    CategoryAbstractFactory_init(this);
    return this;
}


CategoryInterface* CategoryAbstractFactory_getRootInstance(CategoryAbstractFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// Java overloaded method: C needs a different name
CategoryInterface* CategoryAbstractFactory_getRootInstance(CategoryAbstractFactory* this, AbPath* categoryAbPath) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CategoryInterface* CategoryAbstractFactory_getRootInstanceFromNode(CategoryAbstractFactory* this, Node* node) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, const char* categoryName) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstance(String)");
            }
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryName));
            return ((CategoryInterface*) Category_new(categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, const char* categoryName) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, String)");
            }
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryName));
            return ((CategoryInterface*) Category_new(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, Node* node) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstance(Node)");
            }
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(node));
            return ((CategoryInterface*) Category_new(categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(Node, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, Node)");
            }
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(node));
            return ((CategoryInterface*) Category_new(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, Node, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* CategoryAbstractFactory_getInstance(CategoryAbstractFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)");
            }
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryPropertiesHashMap));
            return ((CategoryInterface*) Category_new(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

