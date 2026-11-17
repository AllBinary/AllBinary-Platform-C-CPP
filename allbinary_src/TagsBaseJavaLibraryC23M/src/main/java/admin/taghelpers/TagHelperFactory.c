/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/string/CommonStrings.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"

typedef struct TagHelperFactory TagHelperFactory;
struct TagHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
    CommonStrings* commonStrings;
};


TagHelperFactory* TagHelperFactory_new(void);
Any* TagHelperFactory_getInstance(TagHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void TagHelperFactory_initFields(TagHelperFactory* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void TagHelperFactory_init(TagHelperFactory* this) {
    TagHelperFactory_initFields(this);
}

TagHelperFactory* TagHelperFactory_new(void) {
    TagHelperFactory* this = calloc(1, sizeof(TagHelperFactory));
    TagHelperFactory_init(this);
    return this;
}


// throws Exception, LicensingException
Any* TagHelperFactory_getInstance(TagHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        java_throw(java_exception_new("RuntimeException", ""));
}

