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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "admin/taghelpers/TagHelperFactory.h"

typedef struct XmlOptionItemsHelperFactory XmlOptionItemsHelperFactory;
struct XmlOptionItemsHelperFactory {
    TagHelperFactory base;
    LogUtil* logUtil;
};


XmlOptionItemsHelperFactory* XmlOptionItemsHelperFactory_new(void);

void XmlOptionItemsHelperFactory_init(XmlOptionItemsHelperFactory* this);
Any* XmlOptionItemsHelperFactory_getInstance(XmlOptionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext);

static void XmlOptionItemsHelperFactory_initFields(XmlOptionItemsHelperFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void XmlOptionItemsHelperFactory_init(XmlOptionItemsHelperFactory* this) {
    TagHelperFactory_init(&this->base);
    XmlOptionItemsHelperFactory_initFields(this);
}

XmlOptionItemsHelperFactory* XmlOptionItemsHelperFactory_new(void) {
    XmlOptionItemsHelperFactory* this = calloc(1, sizeof(XmlOptionItemsHelperFactory));
    XmlOptionItemsHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* XmlOptionItemsHelperFactory_getInstance(XmlOptionItemsHelperFactory* this, HashMap* hashMap, PageContext* pageContext) {
        JAVA_TRY {
            return XmlOptionItemsHelper_new(hashMap, pageContext);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

