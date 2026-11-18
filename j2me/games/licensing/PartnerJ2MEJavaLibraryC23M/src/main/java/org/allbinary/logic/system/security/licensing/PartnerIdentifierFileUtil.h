#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H
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
typedef struct ResourceUtil ResourceUtil;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct PartnerIdentifierFileUtil PartnerIdentifierFileUtil;
struct PartnerIdentifierFileUtil {
    LogUtil* logUtil;
    const char* FILE_NAME;
};


PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_new(void);
void PartnerIdentifierFileUtil_init(PartnerIdentifierFileUtil* this);

PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_getInstance(void);

const char* PartnerIdentifierFileUtil_get(PartnerIdentifierFileUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PartnerIdentifierFileUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PartnerIdentifierFileUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_PARTNERIDENTIFIERFILEUTIL_H
