#ifndef ORG_ALLBINARY_DATA_CAMELCASEUTIL_H
#define ORG_ALLBINARY_DATA_CAMELCASEUTIL_H
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
// package org.allbinary.data

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct Tokenizer Tokenizer;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
// #include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#include "java/lang/Character.h"

typedef struct CamelCaseUtil CamelCaseUtil;
struct CamelCaseUtil {
    CommonSeps* commonSeps;
};


CamelCaseUtil* CamelCaseUtil_new(void);
void CamelCaseUtil_init(CamelCaseUtil* this);

CamelCaseUtil* CamelCaseUtil_getInstance(void);

const char* CamelCaseUtil_getAsCamelCase(CamelCaseUtil* this, const char* string, StringMaker* stringBuilder);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CamelCaseUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CamelCaseUtil_register(void);


#endif // ORG_ALLBINARY_DATA_CAMELCASEUTIL_H
