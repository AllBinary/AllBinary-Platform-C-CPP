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
// package org.allbinary.data.tables.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CategoryEntityFactory CategoryEntityFactory;
struct CategoryEntityFactory {
    LogUtil* logUtil;
};

static CategoryEntityFactory* CategoryEntityFactory_instance;

CategoryEntityFactory* CategoryEntityFactory_new(void);
CategoryEntityFactory* CategoryEntityFactory_getInstance(void);

void CategoryEntityFactory_init(CategoryEntityFactory* this);
CategoryEntity* CategoryEntityFactory_getCategoryEntityInstance(CategoryEntityFactory* this);

// Static fields with runtime initializers: call this once at startup
void CategoryEntityFactory_staticInit(void) {
    CategoryEntityFactory_instance = CategoryEntityFactory_new();
}

static void CategoryEntityFactory_initFields(CategoryEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


CategoryEntityFactory* CategoryEntityFactory_getInstance(void) {
        return CategoryEntityFactory_instance;
}


void CategoryEntityFactory_init(CategoryEntityFactory* this) {
    CategoryEntityFactory_initFields(this);
}

CategoryEntityFactory* CategoryEntityFactory_new(void) {
    CategoryEntityFactory* this = calloc(1, sizeof(CategoryEntityFactory));
    CategoryEntityFactory_init(this);
    return this;
}


CategoryEntity* CategoryEntityFactory_getCategoryEntityInstance(CategoryEntityFactory* this) {
        JAVA_TRY {
            return CategoryEntity_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getCategoryEntityInstance()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

