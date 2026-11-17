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
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/properties/CategoryProperties.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/data/tree/category/CategoryModifierTree.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"

typedef struct CategoryLoader CategoryLoader;
struct CategoryLoader {
    CategoryModifierTree base;
    CategoryLoaderInterface CategoryLoaderInterface_interface;
    LogUtil* logUtil;
};


CategoryLoader* CategoryLoader_new(CategoryFactoryInterface* categoryFactoryInterface);

void CategoryLoader_init(CategoryLoader* this, CategoryFactoryInterface* categoryFactoryInterface);
Document* CategoryLoader_getDoc(CategoryLoader* this, CategoryInterface* categoryInterface);
CategoryInterface* CategoryLoader_get(CategoryLoader* this, CategoryInterface* categoryInterface);
CategoryInterface* CategoryLoader_get(CategoryLoader* this, Document* document);
CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, CategoryInterface* categoryInterface);
static CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, Document* document);
static CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, CategoryInterface* parentCategoryInterface, NodeList* categoryNodeList);
static CategoryInterface* CategoryLoader_addProperties(CategoryLoader* this, CategoryInterface* loadedCategoryInterface, NodeList* categoryNodeList);

static void CategoryLoader_initFields(CategoryLoader* this) {
    this->logUtil = LogUtil_getInstance();
}


void CategoryLoader_init(CategoryLoader* this, CategoryFactoryInterface* categoryFactoryInterface) {
        CategoryModifierTree_init(&this->base, categoryFactoryInterface);
        CategoryLoader_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->CATEGORY)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "CategoryLoader(CategoryFactoryInterface categoryFactoryInterface)");
        }
}

CategoryLoader* CategoryLoader_new(CategoryFactoryInterface* categoryFactoryInterface) {
    CategoryLoader* this = calloc(1, sizeof(CategoryLoader));
    CategoryLoader_init(this, categoryFactoryInterface);
    return this;
}


// synchronized
Document* CategoryLoader_getDoc(CategoryLoader* this, CategoryInterface* categoryInterface) {
        JAVA_TRY {
            if (JAVA_CALL(CategoryInterface_getProperties(categoryInterface), getPath, CategoryInterface_getHierarchy(categoryInterface)) != nullptr) {
                if (JAVA_CALL(CategoryInterface_getHierarchy(categoryInterface), getLevel) == 1) {
                    AbFile* rootAbFile = AbFile_createAbFileFromAbPath(CategoryInterface_getRootFilePath(categoryInterface));
                    if (!AbFile_isDirectory(rootAbFile)) {
                        AbFile_mkdirs(rootAbFile);
                        if (!AbFile_isDirectory(rootAbFile)) {
                            java_throw(java_exception_new("Exception", "Could Not Create Directory"));
                        }
                        CategoryLoader_save(this, categoryInterface);
                    }
                }
                AbPath* fileAbPath = CategoryInterface_getFilePath(categoryInterface);
                CryptFileReader* cryptFileReader = CryptFileReader_new(CategoryData_getInstance()->UNCRYPTED_EXTENSION, CategoryData_getInstance()->ENCRYPTED_EXTENSION);
                Document* document = DomDocumentHelper_create(CryptFileReader_get(cryptFileReader, fileAbPath));
                return document;
            } else {
                java_throw(java_exception_new("Exception", "Null Category"));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                JAVA_TRY {
                    CategoryInterface_log(categoryInterface);
                } JAVA_CATCH(Exception, e2) {
                    LogUtil_put(this->logUtil, "Could Not Log Category", this, "getDoc", e);
                } JAVA_END_TRY;
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getDoc", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// synchronized
CategoryInterface* CategoryLoader_get(CategoryLoader* this, CategoryInterface* categoryInterface) {
        JAVA_TRY {
            Document* document = CategoryLoader_getDoc(this, categoryInterface);
            Node* categoryNode = DomSearchHelper_getNode(CategoryData_getInstance()->NAME, Document_getChildNodes(document));
            return CategoryLoader_addProperties(this, categoryInterface, Node_getChildNodes(categoryNode));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
CategoryInterface* CategoryLoader_get(CategoryLoader* this, Document* document) {
        JAVA_TRY {
            Node* categoryNode = DomSearchHelper_getNode(CategoryData_getInstance()->NAME, Document_getChildNodes(document));
            CategoryInterface* loadedCategoryInterface = CategoryFactoryInterface_getRootInstanceFromNode(this->categoryFactoryInterface, categoryNode);
            return CategoryLoader_addProperties(this, loadedCategoryInterface, Node_getChildNodes(categoryNode));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// synchronized
CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, CategoryInterface* categoryInterface) {
        JAVA_TRY {
            Document* document = CategoryLoader_getDoc(this, categoryInterface);
            return CategoryLoader_getAll(this, document);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
static CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, Document* document) {
        JAVA_TRY {
            Node* categoryNode = DomSearchHelper_getNode(CategoryData_getInstance()->NAME, Document_getChildNodes(document));
            CategoryInterface* loadedCategoryInterface = CategoryFactoryInterface_getRootInstanceFromNode(this->categoryFactoryInterface, categoryNode);
            return CategoryLoader_addProperties(this, loadedCategoryInterface, Node_getChildNodes(categoryNode));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
// synchronized
static CategoryInterface* CategoryLoader_getAll(CategoryLoader* this, CategoryInterface* parentCategoryInterface, NodeList* categoryNodeList) {
        JAVA_TRY {
            if (categoryNodeList != nullptr) {
                for (int32_t index = 0; index < NodeList_getLength(categoryNodeList); index++) {
                    Node* categoryNode = NodeList_item(categoryNodeList, index);
                    if (categoryNode != nullptr && JAVA_CALL(Node_getNodeName(categoryNode), compareTo, CategoryData_getInstance()->NAME) == 0) {
                        CategoryInterface* categoryInterface = ((CategoryInterface*) CategoryFactoryInterface_getInstance(this->categoryFactoryInterface, JAVA_CALL(CategoryInterface_getHierarchy(parentCategoryInterface), getRoot), parentCategoryInterface, categoryNode));
                        CategoryInterface_addChild(parentCategoryInterface, categoryInterface);
                    }
                }
            }
            return parentCategoryInterface;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// synchronized
static CategoryInterface* CategoryLoader_addProperties(CategoryLoader* this, CategoryInterface* loadedCategoryInterface, NodeList* categoryNodeList) {
        JAVA_TRY {
            if (categoryNodeList != nullptr) {
                for (int32_t index = 0; index < NodeList_getLength(categoryNodeList); index++) {
                    Node* categoryNode = NodeList_item(categoryNodeList, index);
                    if (categoryNode != nullptr && JAVA_CALL(Node_getNodeName(categoryNode), compareTo, CategoryData_getInstance()->NAME) == 0) {
                        CategoryPropertiesInterface* categoryPropertiesInterface = ((CategoryPropertiesInterface*) CategoryProperties_new(categoryNode));
                        CategoryInterface_addChildProperty(loadedCategoryInterface, categoryPropertiesInterface);
                    }
                }
            }
            return loadedCategoryInterface;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLLOGGING)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, this->commonStrings->GET, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

