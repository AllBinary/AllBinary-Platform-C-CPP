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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct UrlGlobalsViewFactory UrlGlobalsViewFactory;
struct UrlGlobalsViewFactory {
    char unused;
};


UrlGlobalsViewFactory* UrlGlobalsViewFactory_new(void);

void UrlGlobalsViewFactory_init(UrlGlobalsViewFactory* this);
DomNodeInterface* UrlGlobalsViewFactory_getInstance(void);


void UrlGlobalsViewFactory_init(UrlGlobalsViewFactory* this) {
}

UrlGlobalsViewFactory* UrlGlobalsViewFactory_new(void) {
    UrlGlobalsViewFactory* this = calloc(1, sizeof(UrlGlobalsViewFactory));
    UrlGlobalsViewFactory_init(this);
    return this;
}


DomNodeInterface* UrlGlobalsViewFactory_getInstance(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            return ((DomNodeInterface*) UrlGlobalsView_new());
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->FACTORYERROR)) {
                LogUtil_put(logUtil, commonStrings->EXCEPTION, "GlobalsViewFactory", commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

