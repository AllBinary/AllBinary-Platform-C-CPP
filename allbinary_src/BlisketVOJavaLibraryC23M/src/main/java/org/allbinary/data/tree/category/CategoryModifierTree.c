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
// package org.allbinary.data.tree.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/directory/Directory.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/data/tree/category/CategoryPrivateTree.h"
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"

typedef struct CategoryModifierTree CategoryModifierTree;
struct CategoryModifierTree {
    CategoryPrivateTree base;
    CategoryModifierTreeInterface CategoryModifierTreeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Directory* directory;
};


CategoryModifierTree* CategoryModifierTree_new(CategoryFactoryInterface* categoryFactoryInterface);

void CategoryModifierTree_init(CategoryModifierTree* this, CategoryFactoryInterface* categoryFactoryInterface);
void CategoryModifierTree_insert(CategoryModifierTree* this, CategoryInterface* parentCategoryInterface, CategoryInterface* newChildCategoryInterface);
void CategoryModifierTree_delete(CategoryModifierTree* this, CategoryInterface* parentCategoryInterface, CategoryInterface* existingChildCategoryInterface);

static void CategoryModifierTree_initFields(CategoryModifierTree* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->directory = Directory_getInstance();
}


void CategoryModifierTree_init(CategoryModifierTree* this, CategoryFactoryInterface* categoryFactoryInterface) {
        CategoryPrivateTree_init(&this->base, categoryFactoryInterface);
        CategoryModifierTree_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "CategoryModifierTree(CategoryFactoryInterface categoryFactoryInterface)");
        }
}

CategoryModifierTree* CategoryModifierTree_new(CategoryFactoryInterface* categoryFactoryInterface) {
    CategoryModifierTree* this = calloc(1, sizeof(CategoryModifierTree));
    CategoryModifierTree_init(this, categoryFactoryInterface);
    return this;
}


// synchronized
void CategoryModifierTree_insert(CategoryModifierTree* this, CategoryInterface* parentCategoryInterface, CategoryInterface* newChildCategoryInterface) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                LogUtil_putF(this->logUtil, "Inserting", this, "insert()");
            }
            if (JAVA_CALL(CategoryInterface_isValid(parentCategoryInterface), booleanValue)) {
                CategoryInterface_addChild(parentCategoryInterface, newChildCategoryInterface);
                AbPath* directoryToBeCreatedAbPath = AbPath_new(java_concat(JAVA_CALL(CategoryInterface_getRootFilePath(newChildCategoryInterface), toString), JAVA_CALL(CategoryInterface_getPath(newChildCategoryInterface), toString)), StringUtil_getInstance()->EMPTY_STRING);
                Directory_create(this->directory, directoryToBeCreatedAbPath);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
                    LogUtil_putF(this->logUtil, "Saving", this, "insert()");
                }
                CategoryModifierTree_save(this, parentCategoryInterface);
                CategoryModifierTree_save(this, newChildCategoryInterface);
            } else {
                java_throw(java_exception_new("Exception", "Will Not Add Null Category"));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "insert", e);
            }
        } JAVA_END_TRY;
}


// synchronized
void CategoryModifierTree_delete(CategoryModifierTree* this, CategoryInterface* parentCategoryInterface, CategoryInterface* existingChildCategoryInterface) {
        JAVA_TRY {
            if (JAVA_CALL(CategoryInterface_isValid(parentCategoryInterface), booleanValue)) {
                CategoryInterface_addChild(parentCategoryInterface, existingChildCategoryInterface);
                AbPath* directoryToBeDeletedAbPath = AbPath_new(java_concat(JAVA_CALL(CategoryInterface_getRootFilePath(existingChildCategoryInterface), toString), JAVA_CALL(CategoryInterface_getPath(existingChildCategoryInterface), toString)), StringUtil_getInstance()->EMPTY_STRING);
                CategoryModifierTree_delete(this, existingChildCategoryInterface);
                CategoryInterface_removeChild(parentCategoryInterface, existingChildCategoryInterface);
                CategoryModifierTree_save(this, parentCategoryInterface);
                Directory_remove(this->directory, directoryToBeDeletedAbPath);
            } else {
                java_throw(java_exception_new("Exception", "Will Not Add Null Category"));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->delete, e);
            }
        } JAVA_END_TRY;
}

