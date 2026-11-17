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

typedef struct ViewHelperFactory ViewHelperFactory;
struct ViewHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* ViewHelperFactory_CLASSNAME = "taghelpers.ViewHelper";
static const char* ViewHelperFactory_FACTORYNAME = "taghelpers.ViewHelperFactory";

ViewHelperFactory* ViewHelperFactory_new(void);

void ViewHelperFactory_init(ViewHelperFactory* this);
Any* ViewHelperFactory_getInstance(ViewHelperFactory* this, HashMap* propertiesHashMap, PageContext* pageContext);


void ViewHelperFactory_init(ViewHelperFactory* this) {
}

ViewHelperFactory* ViewHelperFactory_new(void) {
    ViewHelperFactory* this = calloc(1, sizeof(ViewHelperFactory));
    ViewHelperFactory_init(this);
    return this;
}


// throws Exception, LicensingException
Any* ViewHelperFactory_getInstance(ViewHelperFactory* this, HashMap* propertiesHashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(ViewHelperFactory_FACTORYNAME, ViewHelperFactory_CLASSNAME, propertiesHashMap, pageContext);
}

