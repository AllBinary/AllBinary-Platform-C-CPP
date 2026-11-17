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
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct CustomLoaderHelperFactory CustomLoaderHelperFactory;
struct CustomLoaderHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* CustomLoaderHelperFactory_CLASSNAME = "admin.taghelpers.CustomLoaderHelper";
static const char* CustomLoaderHelperFactory_FACTORYNAME = "CustomLoaderHelperFactory";

CustomLoaderHelperFactory* CustomLoaderHelperFactory_new(void);

void CustomLoaderHelperFactory_init(CustomLoaderHelperFactory* this);
Any* CustomLoaderHelperFactory_getInstance(CustomLoaderHelperFactory* this, HashMap* hashMap, PageContext* pageContext);
Any* CustomLoaderHelperFactory_getInstance(CustomLoaderHelperFactory* this, AbeClientInformationInterface* abeClientInformation);


void CustomLoaderHelperFactory_init(CustomLoaderHelperFactory* this) {
}

CustomLoaderHelperFactory* CustomLoaderHelperFactory_new(void) {
    CustomLoaderHelperFactory* this = calloc(1, sizeof(CustomLoaderHelperFactory));
    CustomLoaderHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* CustomLoaderHelperFactory_getInstance(CustomLoaderHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
        return HelperFactory_getInstance(abeClientInformation, CustomLoaderHelperFactory_FACTORYNAME, CustomLoaderHelperFactory_CLASSNAME, hashMap, pageContext);
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* CustomLoaderHelperFactory_getInstance(CustomLoaderHelperFactory* this, AbeClientInformationInterface* abeClientInformation) {
        return HelperFactory_getInstance(abeClientInformation, CustomLoaderHelperFactory_FACTORYNAME, CustomLoaderHelperFactory_CLASSNAME);
}

