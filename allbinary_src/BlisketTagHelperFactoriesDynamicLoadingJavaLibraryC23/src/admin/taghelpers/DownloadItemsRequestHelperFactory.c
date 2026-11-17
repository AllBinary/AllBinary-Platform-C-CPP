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

typedef struct DownloadItemsRequestHelperFactory DownloadItemsRequestHelperFactory;
struct DownloadItemsRequestHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* DownloadItemsRequestHelperFactory_CLASSNAME = "admin.taghelpers.DownloadItemsRequestHelper";
static const char* DownloadItemsRequestHelperFactory_FACTORYNAME = "DownloadItemsRequestHelperFactory";

DownloadItemsRequestHelperFactory* DownloadItemsRequestHelperFactory_new(void);

void DownloadItemsRequestHelperFactory_init(DownloadItemsRequestHelperFactory* this);
Any* DownloadItemsRequestHelperFactory_getInstance(DownloadItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void DownloadItemsRequestHelperFactory_init(DownloadItemsRequestHelperFactory* this) {
}

DownloadItemsRequestHelperFactory* DownloadItemsRequestHelperFactory_new(void) {
    DownloadItemsRequestHelperFactory* this = calloc(1, sizeof(DownloadItemsRequestHelperFactory));
    DownloadItemsRequestHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* DownloadItemsRequestHelperFactory_getInstance(DownloadItemsRequestHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(DownloadItemsRequestHelperFactory_FACTORYNAME, DownloadItemsRequestHelperFactory_CLASSNAME, hashMap, pageContext);
}

