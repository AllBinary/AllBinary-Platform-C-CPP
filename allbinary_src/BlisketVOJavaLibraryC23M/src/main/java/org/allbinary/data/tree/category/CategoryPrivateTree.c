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
#include "org/allbinary/business/category/CategoryComponent.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileWriter.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"

typedef struct CategoryPrivateTree CategoryPrivateTree;
struct CategoryPrivateTree {
    LogUtil* logUtil;
    CategoryFactoryInterface* categoryFactoryInterface;
};


CategoryPrivateTree* CategoryPrivateTree_new(CategoryFactoryInterface* categoryFactoryInterface);

void CategoryPrivateTree_init(CategoryPrivateTree* this, CategoryFactoryInterface* categoryFactoryInterface);
void CategoryPrivateTree_save(CategoryPrivateTree* this, CategoryInterface* categoryInterface);
void CategoryPrivateTree_delete(CategoryPrivateTree* this, CategoryInterface* categoryInterface);

static void CategoryPrivateTree_initFields(CategoryPrivateTree* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void CategoryPrivateTree_init(CategoryPrivateTree* this, CategoryFactoryInterface* categoryFactoryInterface) {
    CategoryPrivateTree_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, "CategoryPrivateTree(CategoryFactoryInterface categoryFactoryInterface)");
        }
        this->categoryFactoryInterface = categoryFactoryInterface;
}

CategoryPrivateTree* CategoryPrivateTree_new(CategoryFactoryInterface* categoryFactoryInterface) {
    CategoryPrivateTree* this = calloc(1, sizeof(CategoryPrivateTree));
    CategoryPrivateTree_init(this, categoryFactoryInterface);
    return this;
}


// throws Exception
// synchronized
void CategoryPrivateTree_save(CategoryPrivateTree* this, CategoryInterface* categoryInterface) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Saving Category File: ", java_string_of(CategoryInterface_getFilePath(categoryInterface))), this, "save()");
        }
        Document* document = CategoryComponent_toXmlDoc(CategoryComponent_new(categoryInterface));
        CryptFileWriter* cryptFileWriter = CryptFileWriter_new(CategoryData_getInstance()->UNCRYPTED_EXTENSION, CategoryData_getInstance()->ENCRYPTED_EXTENSION);
        CryptFileWriter_write(cryptFileWriter, CategoryInterface_getFilePath(categoryInterface), document);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
            LogUtil_putF(this->logUtil, "end", this, "save()");
        }
}


// throws Exception
// synchronized
void CategoryPrivateTree_delete(CategoryPrivateTree* this, CategoryInterface* categoryInterface) {
        if (CategoryInterface_isLeaf(categoryInterface)) {
            AbFile* categoryFile = AbFile_createAbFileFromAbPath(CategoryInterface_getFilePath(categoryInterface));
            if (AbFile_delete(categoryFile)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                    LogUtil_putF(this->logUtil, java_concat("Removed: ", java_string_of(CategoryInterface_getFilePath(categoryInterface))), this, "delete(CategoryInterface)");
                }
            }
        } else {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_putF(this->logUtil, "Not a leaf unable to remove", this, "delete(CategoryInterface)");
            }
        }
}

