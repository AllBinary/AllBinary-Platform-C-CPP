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
// package org.allbinary.business.category.store.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/CategoryUtil.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactory.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h"
#include "org/allbinary/business/category/properties/root/store/theme/RootStoreThemeCategoryPropertiesFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreThemeCategoryFactory StoreThemeCategoryFactory;
struct StoreThemeCategoryFactory {
    CategoryFactoryInterface CategoryFactoryInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TransformInfoInterface* transformInfoInterface;
};


StoreThemeCategoryFactory* StoreThemeCategoryFactory_new(TransformInfoInterface* transformInfoInterface);

void StoreThemeCategoryFactory_init(StoreThemeCategoryFactory* this, TransformInfoInterface* transformInfoInterface);
CategoryInterface* StoreThemeCategoryFactory_getRootInstance(StoreThemeCategoryFactory* this);
CategoryInterface* StoreThemeCategoryFactory_getRootInstance(StoreThemeCategoryFactory* this, AbPath* categoryAbPath);
CategoryInterface* StoreThemeCategoryFactory_getRootInstanceFromNode(StoreThemeCategoryFactory* this, Node* node);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, const char* categoryPath, int32_t level);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, const char* categoryPath);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, Node* node, int32_t level);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, HashMap* categoryPropertiesHashMap, int32_t level);
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap);

static void StoreThemeCategoryFactory_initFields(StoreThemeCategoryFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void StoreThemeCategoryFactory_init(StoreThemeCategoryFactory* this, TransformInfoInterface* transformInfoInterface) {
    StoreThemeCategoryFactory_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
        }
        this->transformInfoInterface = transformInfoInterface;
}

StoreThemeCategoryFactory* StoreThemeCategoryFactory_new(TransformInfoInterface* transformInfoInterface) {
    StoreThemeCategoryFactory* this = calloc(1, sizeof(StoreThemeCategoryFactory));
    StoreThemeCategoryFactory_init(this, transformInfoInterface);
    return this;
}


CategoryInterface* StoreThemeCategoryFactory_getRootInstance(StoreThemeCategoryFactory* this) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreThemeCategoryPropertiesFactory_new(this->transformInfoInterface));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, categoryPropertiesFactoryInterface, 0));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getRootInstance()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getRootInstance(StoreThemeCategoryFactory* this, AbPath* categoryAbPath) {
        JAVA_TRY {
            int32_t level = CategoryUtil_getPathLevel(categoryAbPath);
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreThemeCategoryPropertiesFactory_new(this->transformInfoInterface, categoryAbPath));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getRootInstance(String)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


CategoryInterface* StoreThemeCategoryFactory_getRootInstanceFromNode(StoreThemeCategoryFactory* this, Node* node) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) RootStoreThemeCategoryPropertiesFactory_new(this->transformInfoInterface, node));
            AbPath* categoryPath = AbPath_new(CategoryUtil_getNameFromNode(node), StringUtil_getInstance()->EMPTY_STRING);
            int32_t level = CategoryUtil_getPathLevel(categoryPath);
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, node, categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getRootInstance(node)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, const char* categoryPath, int32_t level) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryPath));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, const char* categoryPath) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryPath));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, Node* node, int32_t level) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(node));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(Node, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(node));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, Node, int)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, HashMap* categoryPropertiesHashMap, int32_t level) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryPropertiesHashMap));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(HashMap)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
CategoryInterface* StoreThemeCategoryFactory_getInstance(StoreThemeCategoryFactory* this, CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap* categoryPropertiesHashMap) {
        JAVA_TRY {
            CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = ((CategoryPropertiesFactoryInterface*) CategoryPropertiesFactory_new(categoryPropertiesHashMap));
            return ((CategoryInterface*) StoreThemeCategory_new(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

