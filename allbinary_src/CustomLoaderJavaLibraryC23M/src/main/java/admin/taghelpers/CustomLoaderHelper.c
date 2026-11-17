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
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CustomLoaderHelper CustomLoaderHelper;
struct CustomLoaderHelper {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


CustomLoaderHelper* CustomLoaderHelper_new(HashMap* hashMap, PageContext* pageContext);

void CustomLoaderHelper_init(CustomLoaderHelper* this, HashMap* hashMap, PageContext* pageContext);

CustomLoaderHelper* CustomLoaderHelper_new0();
void CustomLoaderHelper_init0(CustomLoaderHelper* this);
const char* CustomLoaderHelper_getWebappPath(CustomLoaderHelper* this);
void CustomLoaderHelper_setWebappPath(CustomLoaderHelper* this, const char* path);

static void CustomLoaderHelper_initFields(CustomLoaderHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void CustomLoaderHelper_init(CustomLoaderHelper* this, HashMap* hashMap, PageContext* pageContext) {
    CustomLoaderHelper_initFields(this);
}

CustomLoaderHelper* CustomLoaderHelper_new(HashMap* hashMap, PageContext* pageContext) {
    CustomLoaderHelper* this = calloc(1, sizeof(CustomLoaderHelper));
    CustomLoaderHelper_init(this, hashMap, pageContext);
    return this;
}


void CustomLoaderHelper_init0(CustomLoaderHelper* this) {
    CustomLoaderHelper_initFields(this);
}

CustomLoaderHelper* CustomLoaderHelper_new0(void) {
    CustomLoaderHelper* this = calloc(1, sizeof(CustomLoaderHelper));
    CustomLoaderHelper_init0(this);
    return this;
}


// throws Exception
const char* CustomLoaderHelper_getWebappPath(CustomLoaderHelper* this) {
        JAVA_TRY {
            return JAVA_CALL(org_allbinary->globals->URLGLOBALS, getWebappPath);
        } JAVA_CATCH(Exception, e) {
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
void CustomLoaderHelper_setWebappPath(CustomLoaderHelper* this, const char* path) {
        JAVA_TRY {
            AppUrlGlobals* urlGlobals = AppUrlGlobals_new();
            AppUrlGlobals_setWebappPath(urlGlobals, path);
            JAVA_CALL(_URLGLOBALS, init, urlGlobals);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setWebappPath()", e);
            }
        } JAVA_END_TRY;
}

