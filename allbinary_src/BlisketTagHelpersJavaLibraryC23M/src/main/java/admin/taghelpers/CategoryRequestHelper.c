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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/business/category/CategoryComponent.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/store/StoreCategoryFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/data/tree/category/CategoryLoaderFactory.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoBasic.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "admin/taghelpers/ModifyTable.h"

typedef struct CategoryRequestHelper CategoryRequestHelper;
struct CategoryRequestHelper {
    ModifyTable base;
    LogUtil* logUtil;
    PageContext* pageContext;
    HashMap* hashMap;
    HttpServletRequest* request;
    CategoryLoaderInterface* categoryLoaderInterface;
    CategoryInterface* categoryInterface;
    CategoryInterface* childCategoryInterface;
    TransformInfoInterface* transformInfoInterface;
};

static const char* CategoryRequestHelper_categoryRequest;

CategoryRequestHelper* CategoryRequestHelper_new(HashMap* hashMap, PageContext* pageContext);

void CategoryRequestHelper_init(CategoryRequestHelper* this, HashMap* hashMap, PageContext* pageContext);
void CategoryRequestHelper_getXmlData(CategoryRequestHelper* this);
static void CategoryRequestHelper_setCategoryLoader(CategoryRequestHelper* this, Node* requestNode);
const char* CategoryRequestHelper_insert(CategoryRequestHelper* this);
const char* CategoryRequestHelper_delete(CategoryRequestHelper* this);
const char* CategoryRequestHelper_viewCategory(CategoryRequestHelper* this);
const char* CategoryRequestHelper_viewCategories(CategoryRequestHelper* this);
const char* CategoryRequestHelper_update(CategoryRequestHelper* this);

// Static fields with runtime initializers: call this once at startup
void CategoryRequestHelper_staticInit(void) {
    CategoryRequestHelper_categoryRequest = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "<"), append, CategoryData_getInstance()->REQUEST), append, ">"), toString);
}

static void CategoryRequestHelper_initFields(CategoryRequestHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->pageContext = nullptr;
    this->hashMap = nullptr;
    this->request = nullptr;
    this->categoryLoaderInterface = nullptr;
    this->categoryInterface = nullptr;
    this->childCategoryInterface = nullptr;
    this->transformInfoInterface = nullptr;
}


void CategoryRequestHelper_init(CategoryRequestHelper* this, HashMap* hashMap, PageContext* pageContext) {
    ModifyTable_init(&this->base);
    CategoryRequestHelper_initFields(this);
        JAVA_TRY {
            this->request = ((HttpServletRequest*) PageContext_getRequest(pageContext));
            this->pageContext = pageContext;
            this->hashMap = hashMap;
            CategoryRequestHelper_getXmlData(this);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "CategoryRequestHelper()", e);
            }
        } JAVA_END_TRY;
}

CategoryRequestHelper* CategoryRequestHelper_new(HashMap* hashMap, PageContext* pageContext) {
    CategoryRequestHelper* this = calloc(1, sizeof(CategoryRequestHelper));
    CategoryRequestHelper_init(this, hashMap, pageContext);
    return this;
}


void CategoryRequestHelper_getXmlData(CategoryRequestHelper* this) {
        JAVA_TRY {
            Map* map = HttpServletRequest_getParameterMap(this->request);
            CategoryData* categoryData = CategoryData_getInstance();
            Set* keys = Map_keySet(map);
            Any** keyArray = Set_toArray(keys);
            int32_t size = java_array_length(keyArray);
            if (size > 0) {
                const char* xmlRequest = ((const char*) keyArray[0]);
                int32_t index = 1;
                while (index < size && !(strncmp(xmlRequest, CategoryRequestHelper_categoryRequest, strlen(CategoryRequestHelper_categoryRequest)) == 0)) {
                    xmlRequest = ((const char*) keyArray[index]);
                    if ((strncmp(xmlRequest, CategoryRequestHelper_categoryRequest, strlen(CategoryRequestHelper_categoryRequest)) == 0)) {
                        break;
                    }
                }
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, xmlRequest, this, "getXmlData()");
                }
                Document* document = DomDocumentHelper_create(xmlRequest);
                Node* requestNode = DomSearchHelper_getNode(categoryData->REQUEST, Document_getChildNodes(document));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    LogUtil_putF(this->logUtil, XmlDocumentHelper_toString(document), this, "getXmlData()");
                }
                CategoryRequestHelper_setCategoryLoader(this, requestNode);
                Node* parentCategoryNode = DomSearchHelper_getNode(categoryData->PARENT, Node_getChildNodes(requestNode));
                Node* categoryNode = DomSearchHelper_getNode(categoryData->NAME, Node_getChildNodes(parentCategoryNode));
                this->categoryInterface = ((CategoryInterface*) StoreCategoryFactory_getRootInstanceFromNode(StoreCategoryFactory_new(this->transformInfoInterface), categoryNode));
                this->categoryInterface = CategoryLoaderInterface_get(this->categoryLoaderInterface, this->categoryInterface);
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                    CategoryInterface_log(this->categoryInterface);
                    LogUtil_putF(this->logUtil, "Loaded Parent Category", this, "getXmlData()");
                }
                Node* childCategoryNode = DomSearchHelper_getNodeNoThrow(categoryData->NAME, Node_getChildNodes(requestNode));
                if (childCategoryNode != nullptr) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                        LogUtil_putF(this->logUtil, "Loading Child Category", this, "getXmlData()");
                    }
                    this->childCategoryInterface = ((CategoryInterface*) StoreCategoryFactory_getInstance(StoreCategoryFactory_new(this->transformInfoInterface), childCategoryNode));
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPER)) {
                        CategoryInterface_log(this->childCategoryInterface);
                        LogUtil_putF(this->logUtil, "Loaded Child Category", this, "getXmlData()");
                    }
                } else {
                    this->childCategoryInterface = this->categoryInterface;
                }
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, "getXmlData()", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
static void CategoryRequestHelper_setCategoryLoader(CategoryRequestHelper* this, Node* requestNode) {
        Node* storeNameNode = DomSearchHelper_getNode(StoreFrontData_getInstance()->NAME, Node_getChildNodes(requestNode));
        if (storeNameNode != nullptr) {
            const char* storeName = DomNodeHelper_getTextNodeValue(storeNameNode);
            if (storeName != nullptr) {
                StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(storeName);
                this->transformInfoInterface = ((TransformInfoInterface*) TransformInfoBasic_new(storeFrontInterface, this->hashMap, this->pageContext));
                if (this->transformInfoInterface == nullptr) {
                    java_throw(java_exception_new("Exception", "TransformInfo null"));
                }
                StoreCategoryFactory* storeCategoryFactory = StoreCategoryFactory_new(this->transformInfoInterface);
                this->categoryLoaderInterface = CategoryLoaderFactory_getInstance(storeCategoryFactory);
            } else {
                java_throw(java_exception_new("Exception", java_concat("Store Name Error: ", storeName)));
            }
        }
}


const char* CategoryRequestHelper_insert(CategoryRequestHelper* this) {
        JAVA_TRY {
            const char* success = "Successfully Added the following to the Category table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "inserting", this, "insert()");
            }
            CategoryLoaderInterface_insert(this->categoryLoaderInterface, this->categoryInterface, this->childCategoryInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "insert()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add item to Category";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* CategoryRequestHelper_delete(CategoryRequestHelper* this) {
        JAVA_TRY {
            const char* success = java_concat(java_concat(java_concat("Successfully Removed ", java_string_of(CategoryData_getInstance()->NAME)), "="), java_string_of(CategoryInterface_getPath(this->childCategoryInterface)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, "Deleting", this, "delete()");
            }
            CategoryLoaderInterface_delete(this->categoryLoaderInterface, this->categoryInterface, this->childCategoryInterface);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "delete()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            JAVA_TRY {
                const char* error = java_concat("Failed to remove category: ", java_string_of(CategoryInterface_getPath(this->childCategoryInterface)));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                    LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
                }
                return error;
            } JAVA_CATCH(Exception, e2) {
                const char* error = "Failed to remove category and show the path of the failed category";
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                    LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e2);
                }
                return error;
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


const char* CategoryRequestHelper_viewCategory(CategoryRequestHelper* this) {
        JAVA_TRY {
            Document* document = CategoryComponent_toXmlDoc(CategoryComponent_new(this->childCategoryInterface));
            const char* xmlString = XmlDocumentHelper_toString(document);
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, xmlString, this, "viewCategory()");
            }
            return xmlString;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to get Category";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewCategory()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* CategoryRequestHelper_viewCategories(CategoryRequestHelper* this) {
        JAVA_TRY {
            const char* success = StringUtil_getInstance()->EMPTY_STRING;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "viewCategories()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Categories table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewCategories()", e);
            }
            return error;
        } JAVA_END_TRY;
}


const char* CategoryRequestHelper_update(CategoryRequestHelper* this) {
        JAVA_TRY {
            const char* success = "New Item Successfully added";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGS)) {
                LogUtil_putF(this->logUtil, success, this, "update()");
            }
            return success;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to add Item";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}

