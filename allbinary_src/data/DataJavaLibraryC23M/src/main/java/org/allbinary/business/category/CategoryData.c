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
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"

typedef struct CategoryData CategoryData;
struct CategoryData {
    const char* PARENT;
    const char* NAME;
    const char* PATH;
    const char* LABEL;
    const char* VIEW;
    const char* LEVEL;
    const char* REQUEST;
    const char* ROOTCATEGORY;
    const char* UNCRYPTED_EXTENSION;
    const char* ENCRYPTED_EXTENSION;
};

static CategoryData* CategoryData_instance;

CategoryData* CategoryData_new(void);
CategoryData* CategoryData_getInstance(void);

void CategoryData_init(CategoryData* this);

// Static fields with runtime initializers: call this once at startup
void CategoryData_staticInit(void) {
    CategoryData_instance = CategoryData_new();
}

static void CategoryData_initFields(CategoryData* this) {
    this->PARENT = "CATEGORY_PARENT";
    this->NAME = "CATEGORY_NAME";
    this->PATH = "CATEGORY_PATH";
    this->LABEL = "CATEGORY_LABEL";
    this->VIEW = "CATEGORY_VIEW_CATEGORY";
    this->LEVEL = "CATEGORY_LEVEL";
    this->REQUEST = "request";
    this->ROOTCATEGORY = "Category";
    this->UNCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->UNCRYPTED_EXTENSION;
    this->ENCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->ENCRYPTED_EXTENSION;
}


CategoryData* CategoryData_getInstance(void) {
        return CategoryData_instance;
}


void CategoryData_init(CategoryData* this) {
    CategoryData_initFields(this);
}

CategoryData* CategoryData_new(void) {
    CategoryData* this = calloc(1, sizeof(CategoryData));
    CategoryData_init(this);
    return this;
}

