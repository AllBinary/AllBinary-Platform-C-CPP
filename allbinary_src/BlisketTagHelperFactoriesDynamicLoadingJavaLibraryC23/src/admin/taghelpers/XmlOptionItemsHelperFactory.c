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

typedef struct XmlOptionItemsHelperFactory XmlOptionItemsHelperFactory;
struct XmlOptionItemsHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* XmlOptionItemsHelperFactory_CLASSNAME = "admin.taghelpers.XmlOptionItemsHelper";
static const char* XmlOptionItemsHelperFactory_FACTORYNAME = "XmlOptionHelperFactory";

XmlOptionItemsHelperFactory* XmlOptionItemsHelperFactory_new(void);

void XmlOptionItemsHelperFactory_init(XmlOptionItemsHelperFactory* this);
Any* XmlOptionItemsHelperFactory_getInstance(XmlOptionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void XmlOptionItemsHelperFactory_init(XmlOptionItemsHelperFactory* this) {
}

XmlOptionItemsHelperFactory* XmlOptionItemsHelperFactory_new(void) {
    XmlOptionItemsHelperFactory* this = calloc(1, sizeof(XmlOptionItemsHelperFactory));
    XmlOptionItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* XmlOptionItemsHelperFactory_getInstance(XmlOptionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(XmlOptionItemsHelperFactory_FACTORYNAME, XmlOptionItemsHelperFactory_CLASSNAME, hashMap, pageContext);
}

