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
// #include "javax/servlet/jsp/PageContext.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct CategoryRequestHelperFactory CategoryRequestHelperFactory;
struct CategoryRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* CategoryRequestHelperFactory_CLASSNAME = "admin.taghelpers.CategoryRequestHelper";
static const char* CategoryRequestHelperFactory_FACTORYNAME = "CategoryRequestHelperFactory";

CategoryRequestHelperFactory* CategoryRequestHelperFactory_new(void);

void CategoryRequestHelperFactory_init(CategoryRequestHelperFactory* this);
Any* CategoryRequestHelperFactory_getInstance(CategoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void CategoryRequestHelperFactory_init(CategoryRequestHelperFactory* this) {
}

CategoryRequestHelperFactory* CategoryRequestHelperFactory_new(void) {
    CategoryRequestHelperFactory* this = calloc(1, sizeof(CategoryRequestHelperFactory));
    CategoryRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* CategoryRequestHelperFactory_getInstance(CategoryRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(CategoryRequestHelperFactory_FACTORYNAME, CategoryRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

