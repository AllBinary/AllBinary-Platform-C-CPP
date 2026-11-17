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
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/category/properties/root/store/RootStoreCategoryProperties.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Node.h"

typedef struct RootStoreThemeCategoryProperties RootStoreThemeCategoryProperties;
struct RootStoreThemeCategoryProperties {
    RootStoreCategoryProperties base;
};


RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new(TransformInfoInterface* transformInfoInterface);

void RootStoreThemeCategoryProperties_init(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface);

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath);
void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath);

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, Node* node);
void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, Node* node);

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap);
void RootStoreThemeCategoryProperties_initPath(RootStoreThemeCategoryProperties* this);


void RootStoreThemeCategoryProperties_init(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface) {
        RootStoreCategoryProperties_init(&this->base, transformInfoInterface);
}

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new(TransformInfoInterface* transformInfoInterface) {
    RootStoreThemeCategoryProperties* this = calloc(1, sizeof(RootStoreThemeCategoryProperties));
    RootStoreThemeCategoryProperties_init(this, transformInfoInterface);
    return this;
}


void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
        RootStoreCategoryProperties_init(&this->base, transformInfoInterface, abPath);
}

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, AbPath* abPath) {
    RootStoreThemeCategoryProperties* this = calloc(1, sizeof(RootStoreThemeCategoryProperties));
    RootStoreThemeCategoryProperties_init2(this, transformInfoInterface, abPath);
    return this;
}


void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, Node* node) {
        RootStoreCategoryProperties_init(&this->base, transformInfoInterface, node);
}

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, Node* node) {
    RootStoreThemeCategoryProperties* this = calloc(1, sizeof(RootStoreThemeCategoryProperties));
    RootStoreThemeCategoryProperties_init2(this, transformInfoInterface, node);
    return this;
}


void RootStoreThemeCategoryProperties_init2(RootStoreThemeCategoryProperties* this, TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
        RootStoreCategoryProperties_init(&this->base, transformInfoInterface, categoryPropertiesHashMap);
}

RootStoreThemeCategoryProperties* RootStoreThemeCategoryProperties_new2(TransformInfoInterface* transformInfoInterface, HashMap* categoryPropertiesHashMap) {
    RootStoreThemeCategoryProperties* this = calloc(1, sizeof(RootStoreThemeCategoryProperties));
    RootStoreThemeCategoryProperties_init2(this, transformInfoInterface, categoryPropertiesHashMap);
    return this;
}


// throws Exception
void RootStoreThemeCategoryProperties_initPath(RootStoreThemeCategoryProperties* this) {
        TransformInfoHttpStoreInterface* transformInfoHttpStoreInterface = ((TransformInfoHttpStoreInterface*) this->transformInfoInterface);
        StoreFrontInterface* storeFrontInterface = StoreFrontFactory_getInstance(TransformInfoHttpStoreInterface_getStoreName(transformInfoHttpStoreInterface));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, JAVA_CALL(RootStoreCategoryProperties_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, StoreFrontInterface_getName(storeFrontInterface));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        StringMaker_append(stringBuffer, JAVA_CALL(RootStoreCategoryProperties_FREEBLISKET_PATH_GLOBALS, getInstance)->THEMEPATH);
        AbPath* abPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        HttpServletRequest* httpServletRequest = ((HttpServletRequest*) JAVA_CALL(TransformInfoHttpStoreInterface_getPageContext(transformInfoHttpStoreInterface), getRequest));
        this->webAppAbPath = AbPath_new(java_concat(java_string_of(HttpServletRequest_getContextPath(httpServletRequest)), AbPath_toString(abPath)), StringUtil_getInstance()->EMPTY_STRING);
        RootStoreThemeCategoryProperties_setRootFilePath(this, AbPath_new(java_concat(java_string_of(JAVA_CALL(RootStoreCategoryProperties_URLGLOBALS, getMainPath)), AbPath_toString(abPath)), StringUtil_getInstance()->EMPTY_STRING));
}

