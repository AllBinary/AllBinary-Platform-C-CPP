#ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
#define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LicenseInitInfo LicenseInitInfo;
typedef struct TsUtil TsUtil;
typedef struct PATH_GLOBALS PATH_GLOBALS;
typedef struct URLGLOBALS URLGLOBALS;
typedef struct LogUtil LogUtil;
typedef struct AbDataInputStream AbDataInputStream;
typedef struct AbDataOutputStream AbDataOutputStream;
typedef struct AbFileInputStream AbFileInputStream;
typedef struct DataOutputStreamFactory DataOutputStreamFactory;
typedef struct FileStreamFactory FileStreamFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct DatabaseEncoder DatabaseEncoder;
typedef struct WeakCrypt WeakCrypt;
typedef struct CommonLabels CommonLabels;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif

typedef struct LicenseInitInfoUtil LicenseInitInfoUtil;
struct LicenseInitInfoUtil {
    LogUtil* logUtil;
    StringUtil* stringUtil;
    const char* INITFILENAME;
    const char* ABOUT;
    const char* PRIVACY_POLICY;
    const char* filePath;
};


LicenseInitInfoUtil* LicenseInitInfoUtil_new(void);
void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this);

LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void);

void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath);

void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData);

LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this);

LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter);

const char* LicenseInitInfoUtil_getFilePath(LicenseInitInfoUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseInitInfoUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseInitInfoUtil_register(void);


#endif // ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
