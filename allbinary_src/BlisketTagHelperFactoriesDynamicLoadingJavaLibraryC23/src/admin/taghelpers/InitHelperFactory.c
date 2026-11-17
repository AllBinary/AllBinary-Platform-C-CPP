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

typedef struct InitHelperFactory InitHelperFactory;
struct InitHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* InitHelperFactory_CLASSNAME = "admin.taghelpers.InitHelper";
static const char* InitHelperFactory_FACTORYNAME = "InitHelperFactory";

InitHelperFactory* InitHelperFactory_new(void);

void InitHelperFactory_init(InitHelperFactory* this);
Any* InitHelperFactory_getInstance(InitHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void InitHelperFactory_init(InitHelperFactory* this) {
}

InitHelperFactory* InitHelperFactory_new(void) {
    InitHelperFactory* this = calloc(1, sizeof(InitHelperFactory));
    InitHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* InitHelperFactory_getInstance(InitHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(InitHelperFactory_FACTORYNAME, InitHelperFactory_CLASSNAME, hashMap, pageContext);
}

