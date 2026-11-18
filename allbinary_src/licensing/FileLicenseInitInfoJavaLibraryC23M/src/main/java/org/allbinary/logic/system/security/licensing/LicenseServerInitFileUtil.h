#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_H
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
typedef struct LicenseInitInfoUtil LicenseInitInfoUtil;
typedef struct ResourceUtil ResourceUtil;
typedef struct LogUtil LogUtil;
typedef struct FileStreamFactory FileStreamFactory;
typedef struct StreamUtil StreamUtil;
typedef struct FileFactory FileFactory;
typedef struct SimpleFileUtil SimpleFileUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif

typedef struct LicenseServerInitFileUtil LicenseServerInitFileUtil;
struct LicenseServerInitFileUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    OutputStream* NULL_OUTPUT_STREAM;
};


LicenseServerInitFileUtil* LicenseServerInitFileUtil_new(void);
void LicenseServerInitFileUtil_init(LicenseServerInitFileUtil* this);

void LicenseServerInitFileUtil_initMethod(LicenseServerInitFileUtil* this);

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseServerInitFileUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseServerInitFileUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_LICENSESERVERINITFILEUTIL_H
