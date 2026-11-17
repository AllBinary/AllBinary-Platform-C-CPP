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

typedef struct TransformInfoHelperFactory TransformInfoHelperFactory;
struct TransformInfoHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* TransformInfoHelperFactory_CLASSNAME = "taghelpers.transform.info.TransformInfoHelper";
static const char* TransformInfoHelperFactory_FACTORYNAME = "TransformInfoHelperFactory";

TransformInfoHelperFactory* TransformInfoHelperFactory_new(void);

void TransformInfoHelperFactory_init(TransformInfoHelperFactory* this);
Any* TransformInfoHelperFactory_getInstance(TransformInfoHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void TransformInfoHelperFactory_init(TransformInfoHelperFactory* this) {
}

TransformInfoHelperFactory* TransformInfoHelperFactory_new(void) {
    TransformInfoHelperFactory* this = calloc(1, sizeof(TransformInfoHelperFactory));
    TransformInfoHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* TransformInfoHelperFactory_getInstance(TransformInfoHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(TransformInfoHelperFactory_FACTORYNAME, TransformInfoHelperFactory_CLASSNAME, hashMap, pageContext);
}

