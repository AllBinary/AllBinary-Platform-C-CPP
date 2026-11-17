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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CategoryLoaderFactory CategoryLoaderFactory;
struct CategoryLoaderFactory {
    char unused;
};


CategoryLoaderFactory* CategoryLoaderFactory_new(void);

void CategoryLoaderFactory_init(CategoryLoaderFactory* this);
CategoryLoaderInterface* CategoryLoaderFactory_getInstance(CategoryFactoryInterface* categoryFactoryInterface);


void CategoryLoaderFactory_init(CategoryLoaderFactory* this) {
}

CategoryLoaderFactory* CategoryLoaderFactory_new(void) {
    CategoryLoaderFactory* this = calloc(1, sizeof(CategoryLoaderFactory));
    CategoryLoaderFactory_init(this);
    return this;
}


CategoryLoaderInterface* CategoryLoaderFactory_getInstance(CategoryFactoryInterface* categoryFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return CategoryLoader_new(categoryFactoryInterface);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "CategoryNodeFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

