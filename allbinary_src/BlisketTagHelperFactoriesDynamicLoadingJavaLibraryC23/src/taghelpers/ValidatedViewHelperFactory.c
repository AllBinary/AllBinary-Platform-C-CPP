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
// package taghelpers

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
#include "admin/taghelpers/HelperFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct ValidatedViewHelperFactory ValidatedViewHelperFactory;
struct ValidatedViewHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* ValidatedViewHelperFactory_CLASSNAME = "taghelpers.ValidationViewHelper";
static const char* ValidatedViewHelperFactory_FACTORYNAME = "taghelpers.ValidationViewHelperFactory";

ValidatedViewHelperFactory* ValidatedViewHelperFactory_new(void);

void ValidatedViewHelperFactory_init(ValidatedViewHelperFactory* this);
Any* ValidatedViewHelperFactory_getInstance(ValidatedViewHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void ValidatedViewHelperFactory_init(ValidatedViewHelperFactory* this) {
}

ValidatedViewHelperFactory* ValidatedViewHelperFactory_new(void) {
    ValidatedViewHelperFactory* this = calloc(1, sizeof(ValidatedViewHelperFactory));
    ValidatedViewHelperFactory_init(this);
    return this;
}


// throws Exception, LicensingException
Any* ValidatedViewHelperFactory_getInstance(ValidatedViewHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(ValidatedViewHelperFactory_FACTORYNAME, ValidatedViewHelperFactory_CLASSNAME, hashMap, pageContext);
}

