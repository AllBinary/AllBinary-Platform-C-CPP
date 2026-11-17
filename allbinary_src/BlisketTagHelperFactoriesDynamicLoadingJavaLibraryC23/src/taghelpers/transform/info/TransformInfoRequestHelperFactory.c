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
// package taghelpers.transform.info

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
#include "admin/taghelpers/HelperFactory.h"

typedef struct TransformInfoRequestHelperFactory TransformInfoRequestHelperFactory;
struct TransformInfoRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* TransformInfoRequestHelperFactory_CLASSNAME = "taghelpers.transform.info.TransformInfoRequestHelper";
static const char* TransformInfoRequestHelperFactory_FACTORYNAME = "TransformInfoRequestHelperFactory";

TransformInfoRequestHelperFactory* TransformInfoRequestHelperFactory_new(void);

void TransformInfoRequestHelperFactory_init(TransformInfoRequestHelperFactory* this);
Any* TransformInfoRequestHelperFactory_getInstance(TransformInfoRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void TransformInfoRequestHelperFactory_init(TransformInfoRequestHelperFactory* this) {
}

TransformInfoRequestHelperFactory* TransformInfoRequestHelperFactory_new(void) {
    TransformInfoRequestHelperFactory* this = calloc(1, sizeof(TransformInfoRequestHelperFactory));
    TransformInfoRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* TransformInfoRequestHelperFactory_getInstance(TransformInfoRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(TransformInfoRequestHelperFactory_FACTORYNAME, TransformInfoRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

