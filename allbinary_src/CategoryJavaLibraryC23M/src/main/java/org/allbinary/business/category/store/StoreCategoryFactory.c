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
// package org.allbinary.business.category.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/category/Category.h"
#include "org/allbinary/business/category/CategoryAbstractFactory.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/CategoryUtil.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreCategoryFactory StoreCategoryFactory;
struct StoreCategoryFactory {
    CategoryAbstractFactory base;
    CategoryFactoryInterface CategoryFactoryInterface_interface;
    LogUtil* logUtil;
    TransformInfoInterface* transformInfoInterface;
};


StoreCategoryFactory* StoreCategoryFactory_new(TransformInfoInterface* transformInfoInterface);

void StoreCategoryFactory_init(StoreCategoryFactory* this, TransformInfoInterface* transformInfoInterface);
CategoryInterface* StoreCategoryFactory_getRootInstance(StoreCategoryFactory* this);
CategoryInterface* StoreCategoryFactory_getRootInstance(StoreCategoryFactory* this, AbPath* categoryPath);
CategoryInterface* StoreCategoryFactory_getRootInstanceFromNode(StoreCategoryFactory* this, Node* node);

static void StoreCategoryFactory_initFields(StoreCategoryFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void StoreCategoryFactory_init(StoreCategoryFactory* this, TransformInfoInterface* transformInfoInterface) {
    CategoryAbstractFactory_init(&this->base);
    StoreCategoryFactory_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
        }
        this->transformInfoInterface = transformInfoInterface;
}

StoreCategoryFactory* StoreCategoryFactory_new(TransformInfoInterface* transformInfoInterface) {
    StoreCategoryFactory* this = calloc(1, sizeof(StoreCategoryFactory));
    StoreCategoryFactory_init(this, transformInfoInterface);
    return this;
}


CategoryInterface* StoreCategoryFactory_getRootInstance(StoreCategoryFactory* this) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreCategoryPropertiesFactory_new(this->transformInfoInterface));
            return ((CategoryInterface*) Category_new(categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreCategoryFactory_getRootInstance(StoreCategoryFactory* this, AbPath* categoryPath) {
        JAVA_TRY {
            int32_t level = CategoryUtil_getPathLevel(categoryPath);
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreCategoryPropertiesFactory_new(this->transformInfoInterface, categoryPath));
            return ((CategoryInterface*) Category_new(categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "getInstance(String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


CategoryInterface* StoreCategoryFactory_getRootInstanceFromNode(StoreCategoryFactory* this, Node* node) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreCategoryPropertiesFactory_new(this->transformInfoInterface, node));
            AbPath* categoryPath = AbPath_new(CategoryUtil_getNameFromNode(node), StringUtil_getInstance()->EMPTY_STRING);
            int32_t level = CategoryUtil_getPathLevel(categoryPath);
            return ((CategoryInterface*) Category_new(categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

