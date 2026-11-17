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
// package views

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//Replace when validation node is added
typedef struct ValidationOnlyTempUtil ValidationOnlyTempUtil;
struct ValidationOnlyTempUtil {
    LogUtil* logUtil;
};

static ValidationOnlyTempUtil* ValidationOnlyTempUtil_instance;

ValidationOnlyTempUtil* ValidationOnlyTempUtil_new(void);
ValidationOnlyTempUtil* ValidationOnlyTempUtil_getInstance(void);

void ValidationOnlyTempUtil_init(ValidationOnlyTempUtil* this);
const char* ValidationOnlyTempUtil_view(ValidationOnlyTempUtil* this, ValidationComponentInterface* validationComponentInterface);

// Static fields with runtime initializers: call this once at startup
void ValidationOnlyTempUtil_staticInit(void) {
    ValidationOnlyTempUtil_instance = ValidationOnlyTempUtil_new();
}

static void ValidationOnlyTempUtil_initFields(ValidationOnlyTempUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


ValidationOnlyTempUtil* ValidationOnlyTempUtil_getInstance(void) {
        return ValidationOnlyTempUtil_instance;
}


void ValidationOnlyTempUtil_init(ValidationOnlyTempUtil* this) {
    ValidationOnlyTempUtil_initFields(this);
}

ValidationOnlyTempUtil* ValidationOnlyTempUtil_new(void) {
    ValidationOnlyTempUtil* this = calloc(1, sizeof(ValidationOnlyTempUtil));
    ValidationOnlyTempUtil_init(this);
    return this;
}


// throws Exception
const char* ValidationOnlyTempUtil_view(ValidationOnlyTempUtil* this, ValidationComponentInterface* validationComponentInterface) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("View Name: ", JAVA_CALL(ValidationComponentInterface_getTransformInfoInterface(validationComponentInterface), getName)), this, "view()");
            }
            return StringUtil_getInstance()->EMPTY_STRING;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

