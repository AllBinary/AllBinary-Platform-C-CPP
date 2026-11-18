#ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H
#define ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H
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
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringUtil StringUtil;
typedef struct TsUtil TsUtil;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif

typedef struct StringValidationUtil StringValidationUtil;
struct StringValidationUtil {
    StringUtil* stringUtil;
    TsUtil* tsUtil;
};


StringValidationUtil* StringValidationUtil_new(void);

StringValidationUtil* StringValidationUtil_getInstance(void);

void StringValidationUtil_init(StringValidationUtil* this);

bool StringValidationUtil_containsSpaces(StringValidationUtil* this, const char* value);

bool StringValidationUtil_isNumber(StringValidationUtil* this, const char* value);

bool StringValidationUtil_isNumberFromChar(StringValidationUtil* this, uint16_t digit);

bool StringValidationUtil_isValidRequired(StringValidationUtil* this, const char* value, int32_t min, int32_t max);

bool StringValidationUtil_isValidRequiredNumber(StringValidationUtil* this, const char* value, int32_t min, int32_t max);

bool StringValidationUtil_isValidNotRequired(StringValidationUtil* this, const char* value, int32_t min, int32_t max);

bool StringValidationUtil_isValidNotRequiredNumber(StringValidationUtil* this, const char* value, int32_t min, int32_t max);

bool StringValidationUtil_isEmpty(StringValidationUtil* this, const char* string);
#define StringValidationUtil_new0 StringValidationUtil_new
#define StringValidationUtil_init0 StringValidationUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StringValidationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StringValidationUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_STRING_STRINGVALIDATIONUTIL_H
