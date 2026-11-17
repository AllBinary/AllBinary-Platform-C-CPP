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
// package org.allbinary.logic.visual.theme

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h"
#include "org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h"
#include "org/allbinary/data/tree/category/CategoryLoaderFactory.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"
#include "org/allbinary/data/tree/dom/DomData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/AbSqlData.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/visual/theme/ThemeInterface.h"

typedef struct ThemeValidation ThemeValidation;
struct ThemeValidation {
    ThemeInterface ThemeInterface_interface;
    ValidationInterface ValidationInterface_interface;
    DomNodeInterface DomNodeInterface_interface;
    CompositeTransformInfoInterface CompositeTransformInfoInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TransformInfoInterface* transformInfoInterface;
    ValidationInterface* styleValidationInterface;
    const char* themeName;
    const char* themePreviewImageName;
    AbPath* webAppAbPath;
    AbPath* categoryAbPath;
    AbPath* fileAbPath;
};


ThemeValidation* ThemeValidation_new(TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, const char* categoryThemePath);

void ThemeValidation_init(ThemeValidation* this, TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, const char* categoryThemePath);

ThemeValidation* ThemeValidation_new2(TransformInfoInterface* transformInfoInterface, HashMap* hashMap);
void ThemeValidation_init2(ThemeValidation* this, TransformInfoInterface* transformInfoInterface, HashMap* hashMap);

ThemeValidation* ThemeValidation_new2(StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node);
void ThemeValidation_init2(ThemeValidation* this, StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node);
static void ThemeValidation_init(ThemeValidation* this);
static void ThemeValidation_init(ThemeValidation* this, StoreThemeCategoryInterface* storeThemeCategoryInterface);
TransformInfoInterface* ThemeValidation_getTransformInfoInterface(ThemeValidation* this);
const char* ThemeValidation_getName(ThemeValidation* this);
const char* ThemeValidation_getPreviewImageName(ThemeValidation* this);
const char* ThemeValidation_getPreviewImagePath(ThemeValidation* this);
const char* ThemeValidation_getPath(ThemeValidation* this);
CssStyleValidation* ThemeValidation_getCssStyleValidation(ThemeValidation* this);
bool ThemeValidation_isValid(ThemeValidation* this);
const char* ThemeValidation_validationInfo(ThemeValidation* this);
Document* ThemeValidation_toValidationInfoDoc(ThemeValidation* this);
Node* ThemeValidation_toValidationInfoNode(ThemeValidation* this, Document* document);
Any* ThemeValidation_getKey(ThemeValidation* this);
BasicArrayList* ThemeValidation_toVector(ThemeValidation* this);
HashMap* ThemeValidation_toHashMap(ThemeValidation* this);
Node* ThemeValidation_toXmlNode(ThemeValidation* this, Document* document);

static void ThemeValidation_initFields(ThemeValidation* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    
    
    this->fileAbPath = nullptr;
}


void ThemeValidation_init(ThemeValidation* this, TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, const char* categoryThemePath) {
    ThemeValidation_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        AbPathData* pathData = AbPathData_getInstance();
        PathUtil* pathUtil = PathUtil_getInstance();
        this->categoryAbPath = PathUtil_removeNameFromPath(pathUtil, categoryThemePath);
        this->themeName = AbPathData_getNameFromPath(pathData, categoryThemePath);
        this->styleValidationInterface = cssStyleValidation;
        ThemeValidation_init(this);
}

ThemeValidation* ThemeValidation_new(TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, const char* categoryThemePath) {
    ThemeValidation* this = calloc(1, sizeof(ThemeValidation));
    ThemeValidation_init(this, transformInfoInterface, cssStyleValidation, categoryThemePath);
    return this;
}


void ThemeValidation_init2(ThemeValidation* this, TransformInfoInterface* transformInfoInterface, HashMap* hashMap) {
    ThemeValidation_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
        AbPath* categoryThemeAbPath = AbPath_new(((const char*) HashMap_get(hashMap, ThemeData_getInstance()->PATH)), StringUtil_getInstance()->EMPTY_STRING);
        AbPathData* pathData = AbPathData_getInstance();
        PathUtil* pathUtil = PathUtil_getInstance();
        this->categoryAbPath = PathUtil_removeNameFromPath(pathUtil, AbPath_toString(categoryThemeAbPath));
        this->themeName = AbPathData_getNameFromPath(pathData, AbPath_toString(categoryThemeAbPath));
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "CategoryThemePath: ");
            StringMaker_append(stringBuffer, AbPath_toString(categoryThemeAbPath));
            StringMaker_append(stringBuffer, " & CategoryPath: ");
            StringMaker_append(stringBuffer, AbPath_toString(this->categoryAbPath));
            StringMaker_append(stringBuffer, " & ThemeName: ");
            StringMaker_append(stringBuffer, this->themeName);
            LogUtil_putF(this->logUtil, "Http Request Constructor", this, StringMaker_toString(stringBuffer));
        }
        ThemeValidation_init(this);
}

ThemeValidation* ThemeValidation_new2(TransformInfoInterface* transformInfoInterface, HashMap* hashMap) {
    ThemeValidation* this = calloc(1, sizeof(ThemeValidation));
    ThemeValidation_init2(this, transformInfoInterface, hashMap);
    return this;
}


void ThemeValidation_init2(ThemeValidation* this, StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node) {
    ThemeValidation_initFields(this);
        this->transformInfoInterface = StoreThemeCategoryInterface_getTransformInfoInterface(storeThemeCategoryInterface);
        this->categoryAbPath = StoreThemeCategoryInterface_getPath(storeThemeCategoryInterface);
        Node* themeNameNode = DomSearchHelper_getNode(ThemeData_getInstance()->NAME, Node_getChildNodes(node));
        Node* valueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(themeNameNode));
        this->themeName = DomNodeHelper_getTextNodeValue(valueNode);
        Node* previewImageNameNode = DomSearchHelper_getNode(ThemeData_getInstance()->PREVIEW_IMAGE_NAME, Node_getChildNodes(node));
        Node* previewImageNameValueNode = DomSearchHelper_getNode(DomData_VALUE, Node_getChildNodes(previewImageNameNode));
        this->themePreviewImageName = DomNodeHelper_getTextNodeValue(previewImageNameValueNode);
        this->webAppAbPath = StoreThemeCategoryInterface_getWebAppPath(storeThemeCategoryInterface);
        ThemeValidation_init(this, storeThemeCategoryInterface);
}

ThemeValidation* ThemeValidation_new2(StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node) {
    ThemeValidation* this = calloc(1, sizeof(ThemeValidation));
    ThemeValidation_init2(this, storeThemeCategoryInterface, node);
    return this;
}


// throws Exception
static void ThemeValidation_init(ThemeValidation* this) {
        CategoryFactoryInterface* categoryFactoryInterface = StoreThemeCategoryFactory_new(ThemeValidation_getTransformInfoInterface(this));
        CategoryLoaderInterface* categoryLoaderInterface = CategoryLoaderFactory_getInstance(categoryFactoryInterface);
        StoreThemeCategoryInterface* rootStoreThemeCategoryInterface = ((StoreThemeCategoryInterface*) CategoryFactoryInterface_getRootInstance(categoryFactoryInterface));
        ThemeValidation_init(this, rootStoreThemeCategoryInterface);
}


// throws Exception
// Java overloaded method: C needs a different name
static void ThemeValidation_init(ThemeValidation* this, StoreThemeCategoryInterface* storeThemeCategoryInterface) {
        this->fileAbPath = AbPath_new(java_concat(JAVA_CALL(StoreThemeCategoryInterface_getRootFilePath(storeThemeCategoryInterface), toString), AbPath_toString(this->categoryAbPath)), StringUtil_getInstance()->EMPTY_STRING);
        this->webAppAbPath = StoreThemeCategoryInterface_getWebAppPath(storeThemeCategoryInterface);
}


// throws Exception
TransformInfoInterface* ThemeValidation_getTransformInfoInterface(ThemeValidation* this) {
        return this->transformInfoInterface;
}


const char* ThemeValidation_getName(ThemeValidation* this) {
        return this->themeName;
}


const char* ThemeValidation_getPreviewImageName(ThemeValidation* this) {
        return this->themePreviewImageName;
}


const char* ThemeValidation_getPreviewImagePath(ThemeValidation* this) {
        return java_concat(AbPath_toString(this->webAppAbPath), AbPath_toString(this->categoryAbPath));
}


const char* ThemeValidation_getPath(ThemeValidation* this) {
        return AbPath_toString(this->categoryAbPath);
}


// throws Exception
CssStyleValidation* ThemeValidation_getCssStyleValidation(ThemeValidation* this) {
        if (this->styleValidationInterface == nullptr) {
            AbPath* cssStyleFileAbPath = AbPath_new(AbPath_toString(this->fileAbPath), java_concat(java_concat(this->themeName, java_string_of(AbPathData_getInstance()->EXTENSION_SEP)), java_string_of(CategoryData_getInstance()->UNCRYPTED_EXTENSION)));
            CryptFileReader* cryptFileReader = CryptFileReader_new(CategoryData_getInstance()->UNCRYPTED_EXTENSION, CategoryData_getInstance()->ENCRYPTED_EXTENSION);
            Document* document = DomDocumentHelper_create(CryptFileReader_get(cryptFileReader, cssStyleFileAbPath));
            this->styleValidationInterface = CssStyleValidation_new(document);
        }
        return ((CssStyleValidation*) this->styleValidationInterface);
}


bool ThemeValidation_isValid(ThemeValidation* this) {
        JAVA_TRY {
            bool isValid = true;
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->IS_VALID);
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), AbPath_toString(this->categoryAbPath), AbSqlData_MINSTRING, AbSqlData_MAXSTRING)) {
                isValid = false;
            }
            if (!StringValidationUtil_isValidRequired(StringValidationUtil_getInstance(), this->themeName, AbSqlData_MINSTRING, AbSqlData_MAXSTRING)) {
                isValid = false;
            }
            if (!JAVA_CALL(JAVA_CALL(ThemeValidation_getCssStyleValidation(this), isValid), booleanValue)) {
                isValid = false;
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("End: ", java_string_of(isValid)), this, this->commonStrings->IS_VALID);
            }
            return isValid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* ThemeValidation_validationInfo(ThemeValidation* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Theme Validation Error");
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* ThemeValidation_toValidationInfoDoc(ThemeValidation* this) {
        return nullptr;
}


Node* ThemeValidation_toValidationInfoNode(ThemeValidation* this, Document* document) {
        return nullptr;
}


Any* ThemeValidation_getKey(ThemeValidation* this) {
        return ((Any*) ThemeValidation_getName(this));
}


BasicArrayList* ThemeValidation_toVector(ThemeValidation* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, ThemeValidation_getName(this));
        BasicArrayList_add(vector, ThemeValidation_getPath(this));
        BasicArrayList_add(vector, ThemeValidation_getPreviewImageName(this));
        BasicArrayList_add(vector, ThemeValidation_getPreviewImagePath(this));
        return vector;
}


HashMap* ThemeValidation_toHashMap(ThemeValidation* this) {
        ThemeData* themeData = ThemeData_getInstance();
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, themeData->NAME, ThemeValidation_getName(this));
        HashMap_put(hashMap, themeData->PATH, ThemeValidation_getPath(this));
        HashMap_put(hashMap, themeData->PREVIEW_IMAGE_NAME, ThemeValidation_getPreviewImageName(this));
        HashMap_put(hashMap, themeData->PREVIEW_IMAGE_PATH, ThemeValidation_getPreviewImagePath(this));
        return hashMap;
}


// throws Exception
Node* ThemeValidation_toXmlNode(ThemeValidation* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, ThemeData_getInstance()->NAME, ThemeValidation_toHashMap(this));
        DomNodeInterface* domNodeInterface = ((DomNodeInterface*) ThemeValidation_getCssStyleValidation(this));
        Node_appendChild(node, DomNodeInterface_toXmlNode(domNodeInterface, document));
        return node;
}

