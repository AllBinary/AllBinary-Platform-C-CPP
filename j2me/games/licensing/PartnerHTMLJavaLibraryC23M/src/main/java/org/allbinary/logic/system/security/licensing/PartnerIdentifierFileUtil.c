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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PartnerIdentifierFileUtil PartnerIdentifierFileUtil;
struct PartnerIdentifierFileUtil {
    LogUtil* logUtil;
    const char* FILE_NAME;
};

static PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_instance;

PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_new(void);
PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_getInstance(void);
const char* PartnerIdentifierFileUtil_get(PartnerIdentifierFileUtil* this);

// Static fields with runtime initializers: call this once at startup
void PartnerIdentifierFileUtil_staticInit(void) {
    PartnerIdentifierFileUtil_instance = PartnerIdentifierFileUtil_new();
}

static void PartnerIdentifierFileUtil_initFields(PartnerIdentifierFileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->FILE_NAME = "partner.txt";
}

void PartnerIdentifierFileUtil_init(PartnerIdentifierFileUtil* this) {
    PartnerIdentifierFileUtil_initFields(this);
}

PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_new(void) {
    PartnerIdentifierFileUtil* this = calloc(1, sizeof(PartnerIdentifierFileUtil));
    PartnerIdentifierFileUtil_init(this);
    return this;
}


PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_getInstance(void) {
        return PartnerIdentifierFileUtil_instance;
}


const char* PartnerIdentifierFileUtil_get(PartnerIdentifierFileUtil* this) {
        JAVA_TRY {
            ResourceUtil* resourceUtil = ResourceUtil_getInstance();
            const char* partnerString = StringUtil_getInstance()->EMPTY_STRING;
            return partnerString;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET, e);
            return StringUtil_getInstance()->NULL_STRING;
        } JAVA_END_TRY;
}

