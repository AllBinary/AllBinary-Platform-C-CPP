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
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct StaticPagesRequestHelperFactory StaticPagesRequestHelperFactory;
struct StaticPagesRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* StaticPagesRequestHelperFactory_CLASSNAME = "admin.taghelpers.StaticPagesRequestHelper";
static const char* StaticPagesRequestHelperFactory_FACTORYNAME = "StaticPagesRequestHelperFactory";

StaticPagesRequestHelperFactory* StaticPagesRequestHelperFactory_new(void);

void StaticPagesRequestHelperFactory_init(StaticPagesRequestHelperFactory* this);
Any* StaticPagesRequestHelperFactory_getInstance(StaticPagesRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void StaticPagesRequestHelperFactory_init(StaticPagesRequestHelperFactory* this) {
}

StaticPagesRequestHelperFactory* StaticPagesRequestHelperFactory_new(void) {
    StaticPagesRequestHelperFactory* this = calloc(1, sizeof(StaticPagesRequestHelperFactory));
    StaticPagesRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* StaticPagesRequestHelperFactory_getInstance(StaticPagesRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(StaticPagesRequestHelperFactory_FACTORYNAME, StaticPagesRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

