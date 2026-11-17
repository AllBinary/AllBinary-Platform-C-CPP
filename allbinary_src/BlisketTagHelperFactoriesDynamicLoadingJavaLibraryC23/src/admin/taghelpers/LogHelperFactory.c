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

typedef struct LogHelperFactory LogHelperFactory;
struct LogHelperFactory {
    TagHelperFactoryInterface TagHelperFactoryInterface_interface;
};

static const char* LogHelperFactory_CLASSNAME = "admin.taghelpers.LogHelper";
static const char* LogHelperFactory_FACTORYNAME = "LogelperFactory";

LogHelperFactory* LogHelperFactory_new(void);

void LogHelperFactory_init(LogHelperFactory* this);
Any* LogHelperFactory_getInstance(LogHelperFactory* this, HashMap* hashMap, PageContext* pageContext);


void LogHelperFactory_init(LogHelperFactory* this) {
}

LogHelperFactory* LogHelperFactory_new(void) {
    LogHelperFactory* this = calloc(1, sizeof(LogHelperFactory));
    LogHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* LogHelperFactory_getInstance(LogHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        return HelperFactory_getInstance(LogHelperFactory_FACTORYNAME, LogHelperFactory_CLASSNAME, hashMap, pageContext);
}

