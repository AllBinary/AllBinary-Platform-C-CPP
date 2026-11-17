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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesView.h"

typedef struct CategoryPropertiesValidationView CategoryPropertiesValidationView;
struct CategoryPropertiesValidationView {
    CategoryPropertiesView base;
    ValidationInterface ValidationInterface_interface;
    LogUtil* logUtil;
};


CategoryPropertiesValidationView* CategoryPropertiesValidationView_new(CategoryPropertiesInterface* categoryPropertiesInterface);

void CategoryPropertiesValidationView_init(CategoryPropertiesValidationView* this, CategoryPropertiesInterface* categoryPropertiesInterface);
bool CategoryPropertiesValidationView_isValid(CategoryPropertiesValidationView* this);
const char* CategoryPropertiesValidationView_validationInfo(CategoryPropertiesValidationView* this);
Document* CategoryPropertiesValidationView_toValidationInfoDoc(CategoryPropertiesValidationView* this);
Node* CategoryPropertiesValidationView_toValidationInfoNode(CategoryPropertiesValidationView* this, Document* document);

static void CategoryPropertiesValidationView_initFields(CategoryPropertiesValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void CategoryPropertiesValidationView_init(CategoryPropertiesValidationView* this, CategoryPropertiesInterface* categoryPropertiesInterface) {
        CategoryPropertiesView_init(&this->base, categoryPropertiesInterface);
        CategoryPropertiesValidationView_initFields(this);
}

CategoryPropertiesValidationView* CategoryPropertiesValidationView_new(CategoryPropertiesInterface* categoryPropertiesInterface) {
    CategoryPropertiesValidationView* this = calloc(1, sizeof(CategoryPropertiesValidationView));
    CategoryPropertiesValidationView_init(this, categoryPropertiesInterface);
    return this;
}


// throws Exception
bool CategoryPropertiesValidationView_isValid(CategoryPropertiesValidationView* this) {
        return CategoryPropertiesInterface_isValid(this->categoryPropertiesInterface);
}


// throws Exception
const char* CategoryPropertiesValidationView_validationInfo(CategoryPropertiesValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CategoryPropertiesInterface_validationInfo(this->categoryPropertiesInterface));
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation info error", this, "validationInfo()", e);
            }
            return "Error Validating Data";
        } JAVA_END_TRY;
}


// throws Exception
Document* CategoryPropertiesValidationView_toValidationInfoDoc(CategoryPropertiesValidationView* this) {
        return nullptr;
}


// throws Exception
Node* CategoryPropertiesValidationView_toValidationInfoNode(CategoryPropertiesValidationView* this, Document* document) {
        return nullptr;
}

